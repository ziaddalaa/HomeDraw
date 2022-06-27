#include <Windows.h>
#include "glut.h"  // to call opengl
#include <iostream>

using namespace std;

void grass() {
	glColor3f(0, 1, 0);
	glBegin(GL_POLYGON);
	glVertex3f(-2, -0.8, 0);
	glVertex3f(-2, -2, 0);
	glVertex3f(2, -0.8, 0);
	glVertex3f(2, -2, 0);
	glEnd();
}

void Mill(){
	glColor3f(0,0,0);
	glBegin(GL_LINES);
	glVertex3f(0.26, 0.14, 0);
	glVertex3f(-0.26, 0.66, 0);
	
	glEnd();

	//fan1
	glColor3f(0, 1, 0);
	glBegin(GL_POLYGON);
	glVertex3f(0.26, 0.14, 0);
	glVertex3f(0.4, 0.31, 0);
	glVertex3f(0.25, 0.44, 0);
	glVertex3f(0.13, 0.27, 0);
	glEnd();
	//border
	glColor3f(0, 0, 0);
	glLineWidth(4.0);
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.26, 0.14, 0);
	glVertex3f(0.4, 0.31, 0);
	glVertex3f(0.25, 0.44, 0);
	glVertex3f(0.13, 0.27, 0);
	glEnd();

	//fan2
	glColor3f(0, 1, 0);
	glBegin(GL_POLYGON);
	glVertex3f(-0.26, 0.66, 0);
	glVertex3f(-0.4, 0.48, 0);
	glVertex3f(-0.25, 0.34, 0);
	glVertex3f(-0.12, 0.52, 0);
	glEnd();
	//border
	glColor3f(0, 0, 0);
	glLineWidth(4.0);
	glBegin(GL_LINE_LOOP);
	glVertex3f(-0.26, 0.66, 0);
	glVertex3f(-0.4, 0.48, 0);
	glVertex3f(-0.25, 0.34, 0);
	glVertex3f(-0.12, 0.52, 0);
	glEnd();

	




}

void sky() {
	glColor3f(0.52, 0.8, 0.93);
	glBegin(GL_POLYGON);
	glVertex3f(-2,1,0);
	glVertex3f(2, 1, 0);
	glVertex3f(2, 0.6, 0);
	glVertex3f(-2, 0.6, 0);
	glEnd();

}

void house() {
	// triangle
	glColor3f(1, 0, 0);
	glBegin(GL_TRIANGLES);
	glVertex3f(0, 0.4, 0);
	glVertex3f(0.4, 0, 0);
	glVertex3f(-0.4, 0, 0);
	glEnd();
	//border
	glColor3f(0, 0, 0);
	glLineWidth(4.0);
	glBegin(GL_LINE_LOOP);
	glVertex3f(0, 0.4, 0);
	glVertex3f(0.4, 0, 0);
	glVertex3f(-0.4, 0, 0);
	glEnd();


	//body
	glColor3f(1, 0.4, 0);
	glBegin(GL_POLYGON);
	glVertex3f(-0.4, 0, 0);
	glVertex3f(0.4, 0, 0);
	glVertex3f(0.4, -0.8, 0);
	glVertex3f(-0.4, -0.8, 0);
	glEnd();
	//border
	glColor3f(0, 0, 0);
	glLineWidth(4.0);
	glBegin(GL_LINE_LOOP);
	glVertex3f(-0.4, 0, 0);
	glVertex3f(0.4, 0, 0);
	glVertex3f(0.4, -0.8, 0);
	glVertex3f(-0.4, -0.8, 0);
	glEnd();

	//window1
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex3f(0.1, -0.1, 0);
	glVertex3f(0.3, -0.1, 0);
	glVertex3f(0.3, -0.3, 0);
	glVertex3f(0.1, -0.3, 0);
	glEnd();
	//border
	glColor3f(0, 0, 0);
	glLineWidth(4.0);
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.1, -0.1, 0);
	glVertex3f(0.3, -0.1, 0);
	glVertex3f(0.3, -0.3, 0);
	glVertex3f(0.1, -0.3, 0);
	glEnd();

	//window2
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex3f(-0.1, -0.1, 0);
	glVertex3f(-0.3, -0.1, 0);
	glVertex3f(-0.3, -0.3, 0);
	glVertex3f(-0.1, -0.3, 0);
	glEnd();
	//border
	glColor3f(0, 0, 0);
	glLineWidth(4.0);
	glBegin(GL_LINE_LOOP);
	glVertex3f(-0.1, -0.1, 0);
	glVertex3f(-0.3, -0.1, 0);
	glVertex3f(-0.3, -0.3, 0);
	glVertex3f(-0.1, -0.3, 0);
	glEnd();

	//door
	//window1
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex3f(-0.1, -0.4, 0);
	glVertex3f(0.1, -0.4, 0);
	glVertex3f(0.1, -0.8, 0);
	glVertex3f(-0.1, -0.8, 0);
	glEnd();
	//border
	glColor3f(0, 0, 0);
	glLineWidth(4.0);
	glBegin(GL_LINE_LOOP);
	glVertex3f(-0.1, -0.4, 0);
	glVertex3f(0.1, -0.4, 0);
	glVertex3f(0.1, -0.8, 0);
	glVertex3f(-0.1, -0.8, 0);
	glEnd();

}

void chimeny() {
	glColor3f(0.4, 0.4, 0.4);
	glBegin(GL_POLYGON);
	glVertex3f(0.2, 0.2, 0);
	glVertex3f(0.2, 0.5, 0);
	glVertex3f(0.35, 0.5, 0);
	glVertex3f(0.35, 0.05, 0);
	glEnd();
	//border
	glColor3f(0, 0, 0);
	glLineWidth(4.0);
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.2, 0.2, 0);
	glVertex3f(0.2, 0.5, 0);
	glVertex3f(0.35, 0.5, 0);
	glVertex3f(0.35, 0.05, 0);
	glEnd();
}



void myDisplay()
{
	glClearColor(1, 1, 1, 1);
	glClear(GL_COLOR_BUFFER_BIT); // to clean the buffer
	glLoadIdentity();

	grass();
	glFlush();

	sky();
	glFlush();

	house();
	glFlush();

	chimeny();
	glFlush();

	Mill();
	glFlush();

	glEnable(GL_POINT_SMOOTH); //3shan akhly elnu2t msh murb3, akhleha dwayer
	glPointSize(10.0);
	glBegin(GL_POINTS);
}

void main(int ag, char** argv)
{

	glutInit(&ag, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("my window");
	gluOrtho2D(0, 200, 0, 200);
	glutDisplayFunc(myDisplay);
	glutMainLoop();
}