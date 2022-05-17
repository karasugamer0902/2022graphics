#include <GL/glut.h>
float angle=45 , lastX=0;
void mouse(int button , int state , int x , int y)
{
    lastX=x;
}
void motion(int x , int y)
{
    angle += (x-lastX);
    lastX = x;
    glutPostRedisplay();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1 , 1 , 1);
    glRectf(0.3 , 0.5 , -0.3 , -0.5);
    glPushMatrix();///������u
        glTranslatef(0.3 , 0.4 , 0);///(3)���u������
        glRotatef(angle , 0 , 0 , 1);///(2)��Z�b����
        glTranslatef(-0.3 , -0.4 , 0);///(1)����u���त���I��b��������
        glColor3f(1 , 0 , 0);
        glRectf(0.3 , 0.5 , 0.7 , 0.3);
    glPopMatrix();
    glutSwapBuffers();
}

int main(int argc , char**argv)
{
    glutInit(&argc , argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    ///glutInitWindowSize(600 , 600);
    glutCreateWindow("week13_rect_TRT");

    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutDisplayFunc(display);

    glutMainLoop();
}
