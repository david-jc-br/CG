#include <stdlib.h>
#include <GL/glut.h>

void myDraw()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);


    glColor3f(1.0, 1.0, 0.0);

    glBegin(GL_POLYGON); // cabeça
    glVertex2f(-0.8, 0.8);
    glVertex2f(0.8, 0.8);
    glVertex2f(0.8, -0.8);
    glVertex2f(-0.8, -0.8);
    glEnd();

    glBegin(GL_POLYGON); // pescoço
    glVertex2f(-0.4, -0.8);
    glVertex2f(0.4, -0.8);
    glVertex2f(0.4, -1.0);
    glVertex2f(-0.4, -1.0);
    glEnd();


    glColor3f(0.0, 0.0, 1.0);

    glBegin(GL_TRIANGLES); // olho esquerdo 
    glVertex2f(-0.4, 0.6);
    glVertex2f(-0.6, 0.2);
    glVertex2f(-0.2, 0.2);
    glEnd();

    glColor3f(0.0, 0.0, 1.0);

    glBegin(GL_TRIANGLES); // olho direito
    glVertex2f(0.2, 0.2);
    glVertex2f(0.4, 0.6);
    glVertex2f(0.6, 0.2);
    glEnd();


    glColor3f(1.0, 0.0, 0.0);

    glBegin(GL_QUADS); // boca
    glVertex2f(-0.6, -0.4);
    glVertex2f(-0.2, -0.6);
    glVertex2f(0.2, -0.6);
    glVertex2f(0.6, -0.4);
    glEnd();


    glColor3f(0.0, 1.0, 0.0);

    glBegin(GL_TRIANGLES); // nariz
    glVertex2f(-0.2, 0.0);
    glVertex2f(0.0, -0.2);
    glVertex2f(0.2, 0.0);
    glEnd();

    glFlush();
}

void teclado(unsigned char key, int x, int y)
{
    if (key == 27)
        exit(0);
}

void inicializa()
{
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
    glMatrixMode(GL_MODELVIEW);
}


int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutCreateWindow("Meu primeiro desenho OpenGL");
    glutDisplayFunc(myDraw);
    glutKeyboardFunc(teclado);
    inicializa();
    glutMainLoop();

    return 0;
}