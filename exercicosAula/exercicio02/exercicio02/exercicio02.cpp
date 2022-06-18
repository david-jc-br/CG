#include <cstdlib>
#include <GL/glut.h>

using namespace std;

typedef struct Pontos
{
    GLfloat x;
    GLfloat y;
};

Pontos P[10];

void draw()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.0, 1.0, 0.0);

    // com LINE LOOP

    /*glBegin(GL_LINE_LOOP);
        glVertex2f(P[4].x, P[4].y);
        glVertex2f(P[2].x, P[2].y);
        glVertex2f(P[1].x, P[1].y);
        glVertex2f(P[3].x, P[3].y);
        glVertex2f(P[6].x, P[6].y);
        glVertex2f(P[8].x, P[8].y);
        glVertex2f(P[9].x, P[9].y);
        glVertex2f(P[7].x, P[7].y);
        glVertex2f(P[5].x, P[5].y);
        glVertex2f(P[3].x, P[3].y);
        glVertex2f(P[1].x, P[1].y);
        glVertex2f(P[2].x, P[2].y);
        glVertex2f(P[5].x, P[5].y);
        glVertex2f(P[8].x, P[8].y);
        glVertex2f(P[9].x, P[9].y);
        glVertex2f(P[7].x, P[7].y);
        glVertex2f(P[4].x, P[4].y);
    glEnd();*/

    // com LINE_LOOP formando quadrados

    glColor3f(0.0, 1.0, 1.0);


    glBegin(GL_LINE_LOOP); // quadrado 2 1 3 5
        glVertex2f(P[2].x, P[2].y); 
        glVertex2f(P[1].x, P[1].y);
        glVertex2f(P[3].x, P[3].y);
        glVertex2f(P[5].x, P[5].y);
    glEnd();

    glColor3f(1.0, 1.0, 0.0);

    glBegin(GL_LINE_LOOP); // quadrado 4 2 5 7
        glVertex2f(P[4].x, P[4].y);
        glVertex2f(P[2].x, P[2].y);
        glVertex2f(P[5].x, P[5].y);
        glVertex2f(P[7].x, P[7].y);
    glEnd();
    
    glColor3f(1.0, 0.0, 0.0);

    glBegin(GL_LINE_LOOP); // quadrado 5 3 6 8
        glVertex2f(P[5].x, P[5].y);
        glVertex2f(P[3].x, P[3].y);
        glVertex2f(P[6].x, P[6].y);
        glVertex2f(P[8].x, P[8].y);
    glEnd();

    glColor3f(0.0, 1.0, 0.0);

    glBegin(GL_LINE_LOOP); // quadrado 7 5 8 9
        glVertex2f(P[7].x, P[7].y);
        glVertex2f(P[5].x, P[5].y);
        glVertex2f(P[8].x, P[8].y);
        glVertex2f(P[9].x, P[9].y);
    glEnd();

    glFlush();
}

void startObjects()
{
    P[0].x = NULL; P[0].y = NULL;

    P[1].x = 0.0; P[1].y = 1.0;
    P[2].x = -0.5; P[2].y = 0.5;
    P[3].x = 0.5; P[3].y = 0.5;
    P[4].x = -1.0; P[4].y = 0.0;
    P[5].x = 0.0; P[5].y = 0.0;
    P[6].x = 1.0; P[6].y = 0.0;
    P[7].x = -0.5; P[7].y = -0.5;
    P[8].x = 0.5; P[8].y = -0.5;
    P[9].x = 0.0; P[9].y = -1.0;
}

void teclado(unsigned char key, int x, int y)
{
    if (key == 27)
        exit(0);
}

void inicializa()
{
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-2.0, 2.0, -2.0, 2.0);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(700, 700);
    glutCreateWindow("Exercícios de Aula - OpenGL 2D- Exercício 2");
    glutDisplayFunc(draw);
    glutKeyboardFunc(teclado);
    inicializa();
    startObjects();
    glutMainLoop();

    return 0;
}