#include<windows.h>
#include <stdlib.h>
#include<GL/glut.h>

void init(void);
void tampil(void);
void mouse (int button, int state, int x,int y);
void keyboard(unsigned char,int,int);
void ukuran(int,int);
void mouseMotion(int x, int y);

float xrot = 0.0f;
float yrot = 0.0f;
float xdiff = 0.0f;
float ydiff = 0.0f;
bool mouseDown = false;

int is_depth;

int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(250, 150);
    glutCreateWindow("Testing");
    init();
    glutDisplayFunc(tampil);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutMotionFunc(mouseMotion);
    glutReshapeFunc(ukuran);
    glutMainLoop();
    return 0;
}

void init(void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);
    is_depth =1;
    glMatrixMode(GL_MODELVIEW);
    glPointSize(9.0);
    glLineWidth(6.0f);
}

void tampil(void)
{
      glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
         glPushMatrix();
        glRotatef(xrot, 1.0f,0.0f,0.0f);
        glRotatef(yrot, 0.0f, 1.0f,0.0f);


    float i;
    for(i=0.0;i<=236.0;i+=10.0){
    //jendela
    glPushMatrix();
    glTranslatef(0.0,0.0-i,0.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-22.0, 230.0, 18.1);
    glVertex3f(-22.0, 236.0, 18.1);
    glVertex3f(-16.0, 236.0, 18.1);
    glVertex3f(-16.0, 230.0, 18.1);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(9.0,0.0-i,0.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-22.0, 230.0, 18.1);
    glVertex3f(-22.0, 236.0, 18.1);
    glVertex3f(-16.0, 236.0, 18.1);
    glVertex3f(-16.0, 230.0, 18.1);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(18.0,0.0-i,0.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-22.0, 230.0, 18.1);
    glVertex3f(-22.0, 236.0, 18.1);
    glVertex3f(-16.0, 236.0, 18.1);
    glVertex3f(-16.0, 230.0, 18.1);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(27.0,0.0-i,0.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-22.0, 230.0, 18.1);
    glVertex3f(-22.0, 236.0, 18.1);
    glVertex3f(-16.0, 236.0, 18.1);
    glVertex3f(-16.0, 230.0, 18.1);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(36.0,0.0-i,0.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-22.0, 230.0, 18.1);
    glVertex3f(-22.0, 236.0, 18.1);
    glVertex3f(-16.0, 236.0, 18.1);
    glVertex3f(-16.0, 230.0, 18.1);
    glEnd();
    glPopMatrix();

    //jendela
    glPushMatrix();
    glTranslatef(0.0,0.0-i,0.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-22.0, 230.0, -18.1);
    glVertex3f(-22.0, 236.0, -18.1);
    glVertex3f(-16.0, 236.0, -18.1);
    glVertex3f(-16.0, 230.0, -18.1);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(9.0,0.0-i,0.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-22.0, 230.0, -18.1);
    glVertex3f(-22.0, 236.0, -18.1);
    glVertex3f(-16.0, 236.0, -18.1);
    glVertex3f(-16.0, 230.0, -18.1);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(18.0,0.0-i,0.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-22.0, 230.0, -18.1);
    glVertex3f(-22.0, 236.0, -18.1);
    glVertex3f(-16.0, 236.0, -18.1);
    glVertex3f(-16.0, 230.0, -18.1);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(27.0,0.0-i,0.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-22.0, 230.0, -18.1);
    glVertex3f(-22.0, 236.0, -18.1);
    glVertex3f(-16.0, 236.0, -18.1);
    glVertex3f(-16.0, 230.0, -18.1);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(36.0,0.0-i,0.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-22.0, 230.0, -18.1);
    glVertex3f(-22.0, 236.0, -18.1);
    glVertex3f(-16.0, 236.0, -18.1);
    glVertex3f(-16.0, 230.0, -18.1);
    glEnd();
    glPopMatrix();

    //Balkon depan kiri
    glPushMatrix();
    glTranslatef(0.0,0.0-i,0.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-47.0, 230.0, 2.1);
    glVertex3f(-47.0, 236.0, 2.1);
    glVertex3f(-28.0, 236.0, 16.4);
    glVertex3f(-28.0, 230.0, 16.4);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0,0.0-i,2.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,1.0);
    glVertex3f(-47.0, 230.0, 2.1);
    glVertex3f(-47.0, 233.0, 2.1);
    glVertex3f(-28.0, 233.0, 16.4);
    glVertex3f(-28.0, 230.0, 16.4);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0,0.0-i,0.0);
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(-47.0, 230.0, 2.1);
    glVertex3f(-47.0, 230.0, 4.1);
    glVertex3f(-28.0, 230.0, 18.4);
    glVertex3f(-28.0, 230.0, 16.4);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0,0.0-i,0.0);
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,1.0);
    glVertex3f(-28.0, 233.0, 16.4);
    glVertex3f(-28.0, 233.0, 18.4);
    glVertex3f(-28.0, 230.0, 18.4);
    glVertex3f(-28.0, 230.0, 16.4);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0,0.0-i,0.0);
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,1.0);
    glVertex3f(-47.0, 233.0, 2.1);
    glVertex3f(-47.0, 233.0, 4.1);
    glVertex3f(-47.0, 230.0, 4.1);
    glVertex3f(-47.0, 230.0, 2.1);
    glEnd();
    glPopMatrix();

    //Balkon depan kanan
    glPushMatrix();
    glTranslatef(0.0,0.0-i,0.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(47.0, 230.0, 2.1);
    glVertex3f(47.0, 236.0, 2.1);
    glVertex3f(28.0, 236.0, 16.4);
    glVertex3f(28.0, 230.0, 16.4);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0,0.0-i,2.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,1.0);
    glVertex3f(47.0, 230.0, 2.1);
    glVertex3f(47.0, 233.0, 2.1);
    glVertex3f(28.0, 233.0, 16.4);
    glVertex3f(28.0, 230.0, 16.4);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0,0.0-i,0.0);
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(47.0, 230.0, 2.1);
    glVertex3f(47.0, 230.0, 4.1);
    glVertex3f(28.0, 230.0, 18.4);
    glVertex3f(28.0, 230.0, 16.4);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0,0.0-i,0.0);
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,1.0);
    glVertex3f(28.0, 233.0, 16.4);
    glVertex3f(28.0, 233.0, 18.4);
    glVertex3f(28.0, 230.0, 18.4);
    glVertex3f(28.0, 230.0, 16.4);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0,0.0-i,0.0);
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,1.0);
    glVertex3f(47.0, 233.0, 2.1);
    glVertex3f(47.0, 233.0, 4.1);
    glVertex3f(47.0, 230.0, 4.1);
    glVertex3f(47.0, 230.0, 2.1);
    glEnd();
    glPopMatrix();

    //Balkon belakang kiri
    glPushMatrix();
    glTranslatef(0.0,0.0-i,0.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-47.0, 230.0, -2.1);
    glVertex3f(-47.0, 236.0, -2.1);
    glVertex3f(-28.0, 236.0, -16.4);
    glVertex3f(-28.0, 230.0, -16.4);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0,0.0-i,-2.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,1.0);
    glVertex3f(-47.0, 230.0, -2.1);
    glVertex3f(-47.0, 233.0, -2.1);
    glVertex3f(-28.0, 233.0, -16.4);
    glVertex3f(-28.0, 230.0, -16.4);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0,0.0-i,0.0);
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(-47.0, 230.0, -2.1);
    glVertex3f(-47.0, 230.0, -4.1);
    glVertex3f(-28.0, 230.0, -18.4);
    glVertex3f(-28.0, 230.0, -16.4);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0,0.0-i,0.0);
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,1.0);
    glVertex3f(-28.0, 233.0, -16.4);
    glVertex3f(-28.0, 233.0, -18.4);
    glVertex3f(-28.0, 230.0, -18.4);
    glVertex3f(-28.0, 230.0, -16.4);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0,0.0-i,0.0);
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,1.0);
    glVertex3f(-47.0, 233.0, -2.1);
    glVertex3f(-47.0, 233.0, -4.1);
    glVertex3f(-47.0, 230.0, -4.1);
    glVertex3f(-47.0, 230.0, -2.1);
    glEnd();
    glPopMatrix();

    //Balkon belakang kanan
    glPushMatrix();
    glTranslatef(0.0,0.0-i,0.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(47.0, 230.0, -2.1);
    glVertex3f(47.0, 236.0, -2.1);
    glVertex3f(28.0, 236.0, -16.4);
    glVertex3f(28.0, 230.0, -16.4);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0,0.0-i,-2.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,1.0);
    glVertex3f(47.0, 230.0, -2.1);
    glVertex3f(47.0, 233.0, -2.1);
    glVertex3f(28.0, 233.0, -16.4);
    glVertex3f(28.0, 230.0, -16.4);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0,0.0-i,0.0);
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(47.0, 230.0, -2.1);
    glVertex3f(47.0, 230.0, -4.1);
    glVertex3f(28.0, 230.0, -18.4);
    glVertex3f(28.0, 230.0, -16.4);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0,0.0-i,0.0);
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,1.0);
    glVertex3f(28.0, 233.0, -16.4);
    glVertex3f(28.0, 233.0, -18.4);
    glVertex3f(28.0, 230.0, -18.4);
    glVertex3f(28.0, 230.0, -16.4);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0,0.0-i,0.0);
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,1.0);
    glVertex3f(47.0, 233.0, -2.1);
    glVertex3f(47.0, 233.0, -4.1);
    glVertex3f(47.0, 230.0, -4.1);
    glVertex3f(47.0, 230.0, -2.1);
    glEnd();
    glPopMatrix();

    }

    //depan
    glBegin(GL_QUADS);
    glColor3f(12/255.0f,190/255.0f,187/255.0f);
    glVertex3f(-25.0, -40.0, 18.0);
    glVertex3f(-25.0, 240.0, 18.0);
    glVertex3f(25.0, 240.0, 18.0);
    glVertex3f(25.0, -40.0, 18.0);
    glEnd();

    //depan samping kiri
    glBegin(GL_QUADS);
    glColor3f(192/255.0f,190/255.0f,187/255.0f);
    glVertex3f(-50.0, -40.0, 0.0);
    glVertex3f(-50.0, 240.0, 0.0);
    glVertex3f(-25.0, 240.0, 18.0);
    glVertex3f(-25.0, -40.0, 18.0);
    glEnd();

    //depan samping kanan
    glBegin(GL_QUADS);
    glColor3f(221/255.0f,190/255.0f,187/255.0f);
    glVertex3f(25.0, -40.0, 18.0);
    glVertex3f(25.0, 240.0, 18.0);
    glVertex3f(50.0, 240.0, 0.0);
    glVertex3f(50.0, -40.0, 0.0);
    glEnd();

     //belakang
    glBegin(GL_QUADS);
    glColor3f(132/255.0f,190/255.0f,117/255.0f);
    glVertex3f(-25.0, -40.0, -18.0);
    glVertex3f(-25.0, 240.0, -18.0);
    glVertex3f(25.0, 240.0, -18.0);
    glVertex3f(25.0, -40.0, -18.0);
    glEnd();

    //belakang samping kiri
    glBegin(GL_QUADS);
    glColor3f(189/255.0f,190/255.0f,127/255.0f);
    glVertex3f(-50.0, -40.0, 0.0);
    glVertex3f(-50.0, 240.0, 0.0);
    glVertex3f(-25.0, 240.0, -18.0);
    glVertex3f(-25.0, -40.0, -18.0);
    glEnd();

    //belakang samping kanan
    glBegin(GL_QUADS);
    glColor3f(116/255.0f,190/255.0f,187/255.0f);
    glVertex3f(25.0, -40.0, -18.0);
    glVertex3f(25.0, 240.0, -18.0);
    glVertex3f(50.0, 240.0, 0.0);
    glVertex3f(50.0, -40.0, 0.0);
    glEnd();

    //atap 1
    glBegin(GL_POLYGON);
    glColor3f(116/255.0f,110/255.0f,187/255.0f);
    glVertex3f(25.0, 240.1, -18.0);
    glVertex3f(50.0, 240.1, 0.0);
    glVertex3f(25.0, 240.1, 18.0);
    glVertex3f(-25.0, 240.1, 18.0);
    glVertex3f(-50.0, 240.1, 0.0);
    glVertex3f(-25.0, 240.1, -18.0);
    glEnd();

    //depan
    glBegin(GL_QUADS);
    glColor3f(12/255.0f,190/255.0f,187/255.0f);
    glVertex3f(-17.0, 240.1, 10.0);
    glVertex3f(-17.0, 260.0, 10.0);
    glVertex3f(17.0, 260.0, 10.0);
    glVertex3f(17.0, 240.1, 10.0);
    glEnd();

    //depan samping kiri
    glBegin(GL_QUADS);
    glColor3f(192/255.0f,190/255.0f,187/255.0f);
    glVertex3f(-42.0, 240.1, 0.0);
    glVertex3f(-42.0, 260.0, 0.0);
    glVertex3f(-17.0, 260.0, 10.0);
    glVertex3f(-17.0, 240.1, 10.0);
    glEnd();

    //depan samping kanan
    glBegin(GL_QUADS);
    glColor3f(221/255.0f,190/255.0f,187/255.0f);
    glVertex3f(17.0, 240.1, 10.0);
    glVertex3f(17.0, 260.0, 10.0);
    glVertex3f(42.0, 260.0, 0.0);
    glVertex3f(42.0, 240.1, 0.0);
    glEnd();

     //belakang
    glBegin(GL_QUADS);
    glColor3f(132/255.0f,190/255.0f,117/255.0f);
    glVertex3f(-17.0, 240.1, -10.0);
    glVertex3f(-17.0, 260.0, -10.0);
    glVertex3f(17.0, 260.0, -10.0);
    glVertex3f(17.0, 240.1, -10.0);
    glEnd();

    //belakang samping kiri
    glBegin(GL_QUADS);
    glColor3f(189/255.0f,190/255.0f,127/255.0f);
    glVertex3f(-42.0, 240.1, 0.0);
    glVertex3f(-42.0, 260.0, 0.0);
    glVertex3f(-17.0, 260.0, -10.0);
    glVertex3f(-17.0, 240.1, -10.0);
    glEnd();

    //belakang samping kanan
    glBegin(GL_QUADS);
    glColor3f(116/255.0f,190/255.0f,187/255.0f);
    glVertex3f(17.0, 240.1, -10.0);
    glVertex3f(17.0, 260.0, -10.0);
    glVertex3f(42.0, 260.0, 0.0);
    glVertex3f(42.0, 240.1, 0.0);
    glEnd();

    //atap 1
    glBegin(GL_POLYGON);
    glColor3f(116/255.0f,110/255.0f,187/255.0f);
    glVertex3f(17.0, 260.1, -10.0);
    glVertex3f(42.0, 260.1, 0.0);
    glVertex3f(17.0, 260.1, 10.0);
    glVertex3f(-17.0, 260.1, 10.0);
    glVertex3f(-42.0, 260.1, 0.0);
    glVertex3f(-17.0, 260.1, -10.0);
    glEnd();

    //depan
    glBegin(GL_QUADS);
    glColor3f(12/255.0f,190/255.0f,187/255.0f);
    glVertex3f(-9.0, 260.1, 8.0);
    glVertex3f(-9.0, 270.0, 8.0);
    glVertex3f(9.0, 270.0, 8.0);
    glVertex3f(9.0, 260.1, 8.0);
    glEnd();

    //depan samping kiri
    glBegin(GL_QUADS);
    glColor3f(192/255.0f,190/255.0f,187/255.0f);
    glVertex3f(-34.0, 260.1, 2.0);
    glVertex3f(-34.0, 270.0, 2.0);
    glVertex3f(-9.0, 270.0, 8.0);
    glVertex3f(-9.0, 260.1, 8.0);
    glEnd();

    //depan samping kanan
    glBegin(GL_QUADS);
    glColor3f(221/255.0f,190/255.0f,187/255.0f);
    glVertex3f(9.0, 260.1, 8.0);
    glVertex3f(9.0, 270.0, 8.0);
    glVertex3f(34.0, 270.0, 2.0);
    glVertex3f(34.0, 260.1, 2.0);
    glEnd();

     //belakang
    glBegin(GL_QUADS);
    glColor3f(132/255.0f,190/255.0f,117/255.0f);
    glVertex3f(-9.0, 260.1, -8.0);
    glVertex3f(-9.0, 270.0, -8.0);
    glVertex3f(9.0, 270.0, -8.0);
    glVertex3f(9.0, 260.1, -8.0);
    glEnd();

    //belakang samping kiri
    glBegin(GL_QUADS);
    glColor3f(189/255.0f,190/255.0f,127/255.0f);
    glVertex3f(-34.0, 260.1, 2.0);
    glVertex3f(-34.0, 270.0, 2.0);
    glVertex3f(-9.0, 270.0, -8.0);
    glVertex3f(-9.0, 260.1, -8.0);
    glEnd();

    //belakang samping kanan
    glBegin(GL_QUADS);
    glColor3f(116/255.0f,190/255.0f,187/255.0f);
    glVertex3f(9.0, 260.1, -8.0);
    glVertex3f(9.0, 270.0, -8.0);
    glVertex3f(34.0, 270.0, 2.0);
    glVertex3f(34.0, 260.1, 2.0);
    glEnd();

    //atap 1
    glBegin(GL_POLYGON);
    glColor3f(116/255.0f,110/255.0f,187/255.0f);
    glVertex3f(9.0, 270.1, -8.0);
    glVertex3f(34.0, 270.1, 2.0);
    glVertex3f(9.0, 270.1, 8.0);
    glVertex3f(-9.0, 270.1, 8.0);
    glVertex3f(-34.0, 270.1, 2.0);
    glVertex3f(-9.0, 270.1, -8.0);
    glEnd();

    //depan
    glBegin(GL_QUADS);
    glColor3f(12/255.0f,190/255.0f,187/255.0f);
    glVertex3f(-1.0, 270.1, 8.0);
    glVertex3f(-1.0, 280.0, 8.0);
    glVertex3f(1.0, 280.0, 8.0);
    glVertex3f(1.0, 270.1, 8.0);
    glEnd();

    //depan samping kiri
    glBegin(GL_QUADS);
    glColor3f(192/255.0f,190/255.0f,187/255.0f);
    glVertex3f(-21.0, 270.1, 2.0);
    glVertex3f(-21.0, 280.0, 2.0);
    glVertex3f(-1.0, 280.0, 8.0);
    glVertex3f(-1.0, 270.1, 8.0);
    glEnd();

    //depan samping kanan
    glBegin(GL_QUADS);
    glColor3f(221/255.0f,190/255.0f,187/255.0f);
    glVertex3f(1.0, 270.1, 8.0);
    glVertex3f(1.0, 280.0, 8.0);
    glVertex3f(21.0, 280.0, 2.0);
    glVertex3f(21.0, 270.1, 2.0);
    glEnd();

     //belakang
    glBegin(GL_QUADS);
    glColor3f(132/255.0f,190/255.0f,117/255.0f);
    glVertex3f(-1.0, 270.1, -8.0);
    glVertex3f(-1.0, 280.0, -8.0);
    glVertex3f(1.0, 280.0, -8.0);
    glVertex3f(1.0, 270.1, -8.0);
    glEnd();

    //belakang samping kiri
    glBegin(GL_QUADS);
    glColor3f(189/255.0f,190/255.0f,127/255.0f);
    glVertex3f(-21.0, 270.1, 2.0);
    glVertex3f(-21.0, 280.0, 2.0);
    glVertex3f(-1.0, 280.0, -8.0);
    glVertex3f(-1.0, 270.1, -8.0);
    glEnd();

    //belakang samping kanan
    glBegin(GL_QUADS);
    glColor3f(116/255.0f,190/255.0f,187/255.0f);
    glVertex3f(1.0, 270.1, -8.0);
    glVertex3f(1.0, 280.0, -8.0);
    glVertex3f(21.0, 280.0, 2.0);
    glVertex3f(21.0, 270.1, 2.0);
    glEnd();

    //atap 1
    glBegin(GL_POLYGON);
    glColor3f(116/255.0f,110/255.0f,187/255.0f);
    glVertex3f(1.0, 280.1, -8.0);
    glVertex3f(21.0, 280.1, 2.0);
    glVertex3f(1.0, 280.1, 8.0);
    glVertex3f(-1.0, 280.1, 8.0);
    glVertex3f(-21.0, 280.1, 2.0);
    glVertex3f(-1.0, 280.1, -8.0);
    glEnd();

    //lantai atas
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(-80.0, -40.0, 35.0); //kiri bawah
    glVertex3f(80.0, -40.0, 35.0); //kanan bawah
    glVertex3f(80.0, -40.0, -35.0); //kanan atas
    glVertex3f(-80.0, -40.0, -35.0); //kiri atas
    glEnd();

    //lantaibawah
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(-80.0, -45.0, 35.0); //kiri bawah
    glVertex3f(80.0, -45.0, 35.0); //kanan bawah
    glVertex3f(80.0, -45.0, -35.0); //kanan atas
    glVertex3f(-80.0, -45.0, -35.0); //kiri atas
    glEnd();

    //lantai depan
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(-80.0, -45.0, 35.0); //kiri bawah
    glVertex3f(-80.0, -40.0, 35.0); //kanan bawah
    glVertex3f(80.0, -40.0, 35.0); //kanan atas
    glVertex3f(80.0, -45.0, 35.0); //kiri atas
    glEnd();

    //lantai bagian kanan
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(-80.0, -45.0, 35.0); //kiri bawah
    glVertex3f(-80.0, -40.0, 35.0); //kanan bawah
    glVertex3f(-80.0, -40.0, -35.0); //kanan atas
    glVertex3f(-80.0, -45.0, -35.0); //kiri atas
    glEnd();

     //lantai bagian kiri
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(80.0, -45.0, 35.0); //kiri bawah
    glVertex3f(80.0, -40.0, 35.0); //kanan bawah
    glVertex3f(80.0, -40.0, -35.0); //kanan atas
    glVertex3f(80.0, -45.0, -35.0); //kiri atas
    glEnd();

    //lantai belakang
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(-80.0, -45.0, -35.0); //kiri bawah
    glVertex3f(-80.0, -40.0, -35.0); //kanan bawah
    glVertex3f(80.0, -40.0, -35.0); //kanan atas
    glVertex3f(80.0, -45.0, -35.0); //kiri atas
    glEnd();

     // Atap Atas gedung
    glBegin(GL_QUADS);
    glColor3f(0.839,0.816,0.816);
    glVertex3f(20.0,300.0,2.0);
    glVertex3f(20.0,280.0,2.0);
    glVertex3f(0.0,280.0,2.0);
    glVertex3f(0.0,300.0,2.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.839,0.816,0.816);
    glVertex3f(40.0,300.0,2.0);
    glVertex3f(40.0,280.0,2.0);
    glVertex3f(10.0,280.0,2.0);
    glVertex3f(10.0,300.0,2.0);
    glEnd();

    glPushMatrix();
    glTranslatef(0.0,-10.0,0.0);
    glBegin(GL_QUADS);
    glColor3f(0.839,0.816,0.816);
    glVertex3f(40.0,300.0,2.0);
    glVertex3f(40.0,280.0,2.0);
    glVertex3f(10.0,280.0,2.0);
    glVertex3f(10.0,300.0,2.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0,-30.0,0.0);
    glBegin(GL_QUADS);
    glColor3f(0.839,0.816,0.816);
    glVertex3f(40.0,300.0,2.0);
    glVertex3f(40.0,280.0,2.0);
    glVertex3f(10.0,280.0,2.0);
    glVertex3f(10.0,300.0,2.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(20.0,-40.0,0.0);
    glBegin(GL_QUADS);
    glColor3f(0.839,0.816,0.816);
    glVertex3f(30.0,300.0,2.0);
    glVertex3f(30.0,280.0,2.0);
    glVertex3f(10.0,280.0,2.0);
    glVertex3f(10.0,300.0,2.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-20.0,0.0,0.0);
    glBegin(GL_QUADS);
    glColor3f(0.839,0.816,0.816);
    glVertex3f(60.0,250.0,2.0);
    glVertex3f(60.0,300.0,2.0);
    glVertex3f(70.0,300.0,2.0);
    glVertex3f(70.0,250.0,2.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-20.0,0.0,0.0);
    glBegin(GL_QUADS);
    glColor3f(0.839,0.816,0.816);
    glVertex3f(20.0,240.0,-3.0);
    glVertex3f(20.0,300.0,-3.0);
    glVertex3f(70.0,300.0,-3.0);
    glVertex3f(70.0,240.0,-3.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-20.0,-100,15.0);
    glBegin(GL_QUADS);
    glColor3f(0.839,0.816,0.816);
    glVertex3f(70.0,400.0,-13.0);
    glVertex3f(70.0,340.0,-13.0);
    glVertex3f(70.0,340.0,-18.0);
    glVertex3f(70.0,400.0,-18.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-70,-100,15.0);
    glBegin(GL_QUADS);
    glColor3f(0.839,0.816,0.816);
    glVertex3f(70.0,400.0,-13.0);
    glVertex3f(70.0,350.0,-13.0);
    glVertex3f(70.0,350.0,-18.0);
    glVertex3f(70.0,400.0,-18.0);
    glEnd();
    glPopMatrix();

    //jendela atas gedung
    glPushMatrix();
    glTranslatef(-27,52.0,0.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(10.0,200.0,10.5);
    glVertex3f(10.0,190.0,10.5);
    glVertex3f(44.0,190.0,10.5);
    glVertex3f(44.0,200.0,10.5);
    glEnd();
    glPopMatrix();

     glPushMatrix();
    glTranslatef(-27,64.0,0.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(10.0,196.0,10.5);
    glVertex3f(10.0,190.0,10.5);
    glVertex3f(44.0,190.0,10.5);
    glVertex3f(44.0,196.0,10.5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-27,52.0,-21.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(10.0,200.0,10.5);
    glVertex3f(10.0,190.0,10.5);
    glVertex3f(44.0,190.0,10.5);
    glVertex3f(44.0,200.0,10.5);
    glEnd();
    glPopMatrix();

     glPushMatrix();
    glTranslatef(-27,64.0,-21.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(10.0,196.0,10.5);
    glVertex3f(10.0,190.0,10.5);
    glVertex3f(44.0,190.0,10.5);
    glVertex3f(44.0,196.0,10.5);
    glEnd();
    glPopMatrix();

    glPopMatrix();
    glutSwapBuffers();
}
void idle()
{
    if(!mouseDown)
    {
        xrot += 0.3f;
        yrot += 0.4f;
    }
    glutPostRedisplay();
}

void mouse(int button, int state, int x, int y)
{
    if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        mouseDown = true;
        xdiff = x - yrot;
        ydiff = -y + xrot;
    }
    else
        mouseDown = false;
}
void mouseMotion(int x,int y)
{
    if(mouseDown)
    {
        yrot = x - xdiff;
        xrot = y + ydiff;
        glutPostRedisplay();
    }
}
void keyboard(unsigned char key,int x, int y)
{
    switch(key)
    {

    case 'w': //Zoom Out
    case 'W':
        glTranslatef(0.0, 0.0, 3.0);
        break;
    case 'd': //Geser Kiri
    case 'D':
        glTranslatef(3.0, 0.0, 0.0);
        break;
    case 's': //Zoom In
    case 'S':
        glTranslatef(0.0, 0.0, -3.0);
        break;
    case 'a': //Geser Kanan
    case 'A':
        glTranslatef(-3.0, 0.0, 0.0);
        break;
 //geser bawah
    case '7':
        glTranslatef(0.0,3.0,0.0);
        break;
    //geser atas
    case '9':
        glTranslatef(0.0,-3.0,0.0);
        break;
    //melihat bentuk rumah bagian dalam
    case '5':
        if (is_depth)
        {
            is_depth = 0;
            glDisable(GL_DEPTH_TEST);
        }
        else{
        is_depth = 1;
        glEnable(GL_DEPTH_TEST);
        }

    }
    tampil();
}

void ukuran(int lebar, int tinggi)
{
    if (tinggi == 0) tinggi = 1;

    glMatrixMode(GL_PROJECTION);
    gluPerspective(60.0, lebar / tinggi, 5.0, 700.0);
    glTranslatef(0.0, -5.0, -150.0);
    glMatrixMode(GL_MODELVIEW);
}
