#include<windows.h>
#include <gl/glut.h>

void init(void);
void tampil(void);
void keyboard(unsigned char,int,int);
void ukuran(int, int);

int is_depth;

int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(250, 150);
    glutCreateWindow("Cekkkk");
    init();
    glutDisplayFunc(tampil);
    glutKeyboardFunc(keyboard);
    glutReshapeFunc(ukuran);
    glutMainLoop();
    return 0;
}

void init(void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glEnable(GL_DEPTH_TEST);
    is_depth=1;
    glMatrixMode(GL_MODELVIEW);
    glPointSize(9.0);
    glLineWidth(6.0f);
}

void tampil(void)
{
    if (is_depth)
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    else
    glClear(GL_COLOR_BUFFER_BIT);

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
    glVertex3f(70.0,200.0,-13.0);
    glVertex3f(70.0,200.0,-18.0);
    glVertex3f(70.0,400.0,-18.0);
    glEnd();
    glPopMatrix();

    //jendela hotel
    glPushMatrix();
    glTranslatef(-8,-52,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(30,280.0,8.0);
    glVertex3f(30,290.0,8.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-14,-52,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(30,280.0,8.0);
    glVertex3f(30,290.0,8.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-20,-52,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(30,280.0,8.0);
    glVertex3f(30,290.0,8.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-35,-52,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(30,280.0,8.0);
    glVertex3f(30,290.0,8.0);
    glEnd();
    glPopMatrix();

     glPushMatrix();
    glTranslatef(-41,-52,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(30,280.0,8.0);
    glVertex3f(30,290.0,8.0);
    glEnd();
    glPopMatrix();

     glPushMatrix();
    glTranslatef(-47,-52,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(30,280.0,8.0);
    glVertex3f(30,290.0,8.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-8,-63,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(30,280.0,8.0);
    glVertex3f(30,290.0,8.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-14,-63,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(30,280.0,8.0);
    glVertex3f(30,290.0,8.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-20,-63,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(30,280.0,8.0);
    glVertex3f(30,290.0,8.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-35,-63,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(30,280.0,8.0);
    glVertex3f(30,290.0,8.0);
    glEnd();
    glPopMatrix();

     glPushMatrix();
    glTranslatef(-41,-63,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(30,280.0,8.0);
    glVertex3f(30,290.0,8.0);
    glEnd();
    glPopMatrix();

     glPushMatrix();
    glTranslatef(-47,-63,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(30,280.0,8.0);
    glVertex3f(30,290.0,8.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-8,-74,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(30,280.0,8.0);
    glVertex3f(30,290.0,8.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-14,-74,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(30,280.0,8.0);
    glVertex3f(30,290.0,8.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-20,-74,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(30,280.0,8.0);
    glVertex3f(30,290.0,8.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-35,-74,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(30,280.0,8.0);
    glVertex3f(30,290.0,8.0);
    glEnd();
    glPopMatrix();

     glPushMatrix();
    glTranslatef(-41,-74,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(30,280.0,8.0);
    glVertex3f(30,290.0,8.0);
    glEnd();
    glPopMatrix();

     glPushMatrix();
    glTranslatef(-47,-74,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(30,280.0,8.0);
    glVertex3f(30,290.0,8.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-8,-85,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(30,280.0,8.0);
    glVertex3f(30,290.0,8.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-14,-85,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(30,280.0,8.0);
    glVertex3f(30,290.0,8.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-20,-85,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(30,280.0,8.0);
    glVertex3f(30,290.0,8.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-35,-85,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(30,280.0,8.0);
    glVertex3f(30,290.0,8.0);
    glEnd();
    glPopMatrix();

     glPushMatrix();
    glTranslatef(-41,-85,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(30,280.0,8.0);
    glVertex3f(30,290.0,8.0);
    glEnd();
    glPopMatrix();

     glPushMatrix();
    glTranslatef(-47,-85,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(30,280.0,8.0);
    glVertex3f(30,290.0,8.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-8,-96,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(30,280.0,8.0);
    glVertex3f(30,290.0,8.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-14,-96,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(30,280.0,8.0);
    glVertex3f(30,290.0,8.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-20,-96,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(30,280.0,8.0);
    glVertex3f(30,290.0,8.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-35,-96,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(30,280.0,8.0);
    glVertex3f(30,290.0,8.0);
    glEnd();
    glPopMatrix();

     glPushMatrix();
    glTranslatef(-41,-96,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(30,280.0,8.0);
    glVertex3f(30,290.0,8.0);
    glEnd();
    glPopMatrix();

     glPushMatrix();
    glTranslatef(-47,-96,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(30,280.0,8.0);
    glVertex3f(30,290.0,8.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-8,-107,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(30,280.0,8.0);
    glVertex3f(30,290.0,8.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-14,-107,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(30,280.0,8.0);
    glVertex3f(30,290.0,8.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-20,-107,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(30,280.0,8.0);
    glVertex3f(30,290.0,8.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-35,-107,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(30,280.0,8.0);
    glVertex3f(30,290.0,8.0);
    glEnd();
    glPopMatrix();

     glPushMatrix();
    glTranslatef(-41,-107,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(30,280.0,8.0);
    glVertex3f(30,290.0,8.0);
    glEnd();
    glPopMatrix();

     glPushMatrix();
    glTranslatef(-47,-107,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(30,280.0,8.0);
    glVertex3f(30,290.0,8.0);
    glEnd();
    glPopMatrix();

     glPushMatrix();
    glTranslatef(-8,-118,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(30,280.0,8.0);
    glVertex3f(30,290.0,8.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-14,-118,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(30,280.0,8.0);
    glVertex3f(30,290.0,8.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-20,-118,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(30,280.0,8.0);
    glVertex3f(30,290.0,8.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-35,-118,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(30,280.0,8.0);
    glVertex3f(30,290.0,8.0);
    glEnd();
    glPopMatrix();

     glPushMatrix();
    glTranslatef(-41,-118,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(30,280.0,8.0);
    glVertex3f(30,290.0,8.0);
    glEnd();
    glPopMatrix();

     glPushMatrix();
    glTranslatef(-47,-118,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(30,280.0,8.0);
    glVertex3f(30,290.0,8.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-5,-134,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(29,280.0,8.0);
    glVertex3f(29,290.0,8.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-10,-134,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(29,280.0,8.0);
    glVertex3f(29,290.0,8.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-15,-134,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(29,280.0,8.0);
    glVertex3f(29,290.0,8.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-20,-134,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(29,280.0,8.0);
    glVertex3f(29,290.0,8.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-34,-134,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(29,280.0,8.0);
    glVertex3f(29,290.0,8.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-39,-134,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(29,280.0,8.0);
    glVertex3f(29,290.0,8.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-44,-134,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(29,280.0,8.0);
    glVertex3f(29,290.0,8.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-49,-134,11.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(25.0,290.0,8.0);
    glVertex3f(25.0,280.0,8.0);
    glVertex3f(29,280.0,8.0);
    glVertex3f(29,290.0,8.0);
    glEnd();
    glPopMatrix();


    glutSwapBuffers();
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
    case '7': //Kebawah
        glTranslatef(0.0, 3.0, 0.0);
        break;
    case '9':  //Keatas
        glTranslatef(0.0, -3.0, 0.0);
        break;
    case '2':  //rotasi ke atas
        glRotatef(2.0, 1.0, 0.0, 0.0);
        break;
    case '8':  //rotasi kebawah
        glRotatef(-2.0, 1.0, 0.0, 0.0);
        break;
    case '6':  //rotasi ke kiri dalam
        glRotatef(2.0, 0.0, 1.0, 0.0);
        break;
    case '4': //rotasi ke kanan dalam
        glRotatef(-2.0, 0.0, 1.0, 0.0);
        break;
    case '1': //rotasi ke samping kiri
        glRotatef(2.0, 0.0, 0.0, 1.0);
        break;
    case '3': //rotasi ke samping kanan
        glRotatef(-2.0, 0.0, 0.0, 1.0);
        break;
    }
    tampil();

}

void ukuran(int lebar, int tinggi)
{
    if (tinggi == 0) tinggi = 1;

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(50.0, lebar / tinggi, 5.0, 500.0);
    glTranslatef(0.0, -5.0, -150.0);
    glMatrixMode(GL_MODELVIEW);
}
