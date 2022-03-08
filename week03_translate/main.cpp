#include <GL/glut.h>
float mouseX=0 , mouseY=0;
void Teapot(float x , float y)
{
    glPushMatrix();
        glTranslatef(x , y , 0);
        glColor3f(1 , 1 , 0);
        glutSolidTeapot(0.3);
    glPopMatrix();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    Teapot((mouseX-150)/150.0 , -(mouseY-150)/150.0);
    glutSwapBuffers();
}

void mouse(int button , int state , int x , int y)
{
    mouseX=x; mouseY=y;
}

int main(int argc , char**argv)
{
    glutInit(&argc , argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week_03");

    glutDisplayFunc(display);
    glutMouseFunc(mouse);

    glutMainLoop();
}
