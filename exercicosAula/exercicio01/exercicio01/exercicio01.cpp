#include <cstdlib>
#include <GL/glut.h>

using namespace std;

typedef struct Pontos
{
    GLfloat x;
    GLfloat y;
};

Pontos P[3];

void draw()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f); 
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0, 0.0, 0.0);

    glBegin(GL_LINE_LOOP);
        glVertex2f(P[0].x, P[0].y);
        glVertex2f(P[1].x, P[1].y);
        glVertex2f(P[2].x, P[2].y);
    glEnd();

    glFlush();
}

void startObjects()
{
    P[0].x = -1.0;
    P[0].y = 0.0;
    P[1].x = 0.0;
    P[1].y = 1.5;
    P[2].x = 1.0;
    P[2].y = 0.0;
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
    glutCreateWindow("Exercícios de Aula - OpenGL 2D- Exercício 1");
    glutDisplayFunc(draw);
    glutKeyboardFunc(teclado);
    inicializa();
    startObjects();
    glutMainLoop();

    return 0;
}