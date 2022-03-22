#include <GL/glut.h>
#include <stdio.h>
float x=150 , y=150 , z=0 , scale=1.0;
int lastX=0 , lastY=0;
void display()
{
    glClearColor(0.5 , 0.5 , 0.5 , 1);
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glTranslatef((x-150)/150.0 , -(y-150)/150.0 , z);
        glScalef(scale , scale , scale);
        glColor3f(1 , 1 , 0);
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();
}
void keyboard(unsigned char key , int mouseX , int mouseY)
{
}
void mouse(int button , int state , int mouseX , int mouseY)
{
    lastX=mouseX;   lastY=mouseY;
}
void motion(int mouseX , int mouseY)
{
    if(mouseX-lastX>0) scale*=1.01;
    if(mouseX-lastX<0) scale*=0.99;
    lastX=mouseX;   lastY=mouseY;
    display();
}
int main(int argc , char**argv)
{
    glutInit(&argc , argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week05-2");

    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutMainLoop();
}
