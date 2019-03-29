#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include<windows.h>
#include<mmsystem.h>
#ifdef _APPLE_

#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

#include <gl/glut.h>
#include <gl/gl.h>
#include <math.h>
#include <time.h>
#include <sys/timeb.h>
#include<bits/stdc++.h>
using namespace std;



float transFactor = 0.0f;
float _cloud1 = 0.0f;//cloud1
float _cloud2 = 0.0f;//cloud2
int flag =1;//day-night(flag)
int rainstatus = 1;
int cloudStatus = 1;
int sunstatus = 0;
int moonstatus = 0;

float getX(int val)
{
    int width = glutGet(GLUT_WINDOW_WIDTH);
    float frac = (float)val/((float)width/2);
    return frac;
}
float getY(int val)
{
    int height = glutGet(GLUT_WINDOW_HEIGHT);
    float frac = (float)val/((float)height/2);
    return frac;
}
sky()
{

 if(flag == 1 )
   {
        glColor3ub(30,144,255);
        /////sky///////

     glBegin(GL_POLYGON);
    glVertex2f(getX(-700), getY(100));
    glVertex2f(getX(-700), getY(500));
    glVertex2f(getX(0), getY(500));
    glVertex2f(getX(0), getY(83));
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(getX(0), getY(83));
    glVertex2f(getX(0), getY(500));
    glVertex2f(getX(700), getY(500));
    glVertex2f(getX(700), getY(100));
    glEnd();
   }
 if(flag == 0)
    {
        glColor3ub(46,68,130);
        ////sky///
    glBegin(GL_POLYGON);
    glVertex2f(getX(-700), getY(100));
    glVertex2f(getX(-700), getY(500));
    glVertex2f(getX(0), getY(500));
    glVertex2f(getX(0), getY(83));
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(getX(0), getY(83));
    glVertex2f(getX(0), getY(500));
    glVertex2f(getX(700), getY(500));
    glVertex2f(getX(700), getY(100));
    glEnd();

    ////star1///
    glPushMatrix();
    glTranslatef(0.34, 0.8, 0.0);
    glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.005;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

      ////star2///
    glPushMatrix();
    glTranslatef(0.03, 0.86, 0.0);
    glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.005;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    ////star3///
    glPushMatrix();
    glTranslatef(0.65, 0.35, 0.0);
    glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.005;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

        ////star4///
    glPushMatrix();
    glTranslatef(0.41, 0.53, 0.0);
    glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.005;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    ////star5///
    glPushMatrix();
    glTranslatef(0.15, 0.67, 0.0);
    glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.005;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    ////star6///
    glPushMatrix();
    glTranslatef(0.63, 0.98, 0.0);
    glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.005;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    ////star7///
    glPushMatrix();
    glTranslatef(.98, 0.89, 0.0);
    glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.005;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    ////star8///
    glPushMatrix();
    glTranslatef(-0.41, 0.93, 0.0);
    glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.005;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    ////star9///
    glPushMatrix();
    glTranslatef(-0.19, 0.63, 0.0);
    glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.005;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    ////star10///
    glPushMatrix();
    glTranslatef(-0.49, 0.73, 0.0);
    glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.005;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    ////star11///
    glPushMatrix();
    glTranslatef(-0.57, 0.41, 0.0);
    glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.005;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    ////star12///
    glPushMatrix();
    glTranslatef(-0.98, 0.96, 0.0);
    glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.005;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    ////star13///
    glPushMatrix();
    glTranslatef(-0.88, 0.37, 0.0);
    glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.005;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    }

}

moon()
{

if(moonstatus == 1 )
    {
          //Moon//
     glPushMatrix();
    glTranslatef(0.6, 0.8, 0.0);
    glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.1;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();
    glTranslatef(0.55, 0.83, 0.0);
    glColor3ub(46,68,130);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.1;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();
    }
if(moonstatus == 0)
    {

    }

}
sun()
{

if(sunstatus == 1 )
    {

        glColor3ub(135,206,250);
        /////sky///////

     glBegin(GL_POLYGON);
    glVertex2f(getX(-700), getY(100));
    glVertex2f(getX(-700), getY(500));
    glVertex2f(getX(0), getY(500));
    glVertex2f(getX(0), getY(83));
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(getX(0), getY(83));
    glVertex2f(getX(0), getY(500));
    glVertex2f(getX(700), getY(500));
    glVertex2f(getX(700), getY(100));
    glEnd();

          //Sun//
     glPushMatrix();
    glTranslatef(0.6, 0.8, 0.0);
    glColor3f(1.0,1.0,0.0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.1;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();



	////Sunrays////
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex3f(0.6,0.8,0.0);
	glVertex3f(0.6,0.6,0.0);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex3f(0.6,0.8,0.0);
	glVertex3f(0.5,0.6,0.0);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex3f(0.6,0.8,0.0);
	glVertex3f(0.7,0.6,0.0);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex3f(0.6,0.8,0.0);
	glVertex3f(0.6,1.0,0.0);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex3f(0.6,0.8,0.0);
	glVertex3f(0.7,1.0,0.0);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex3f(0.6,0.8,0.0);
	glVertex3f(0.5,1.0,0.0);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex3f(0.6,0.8,0.0);
	glVertex3f(0.9,1.0,0.0);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex3f(0.6,0.8,0.0);
	glVertex3f(0.8,0.8,0.0);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex3f(0.6,0.8,0.0);
	glVertex3f(0.8,0.6,0.0);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex3f(0.6,0.8,0.0);
	glVertex3f(0.3,0.7,0.0);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex3f(0.6,0.8,0.0);
	glVertex3f(0.3,0.5,0.0);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex3f(0.6,0.8,0.0);
	glVertex3f(0.3,0.9,0.0);
	glEnd();




}
if(sunstatus == 0)
    {

    }

}

rain()
{

if(rainstatus == 1 )
    {
          glPushMatrix();
    glTranslatef(-1,-1,0);
    glColor3ub(227,227,227);
    for(int i=1;i<=1400;i++)
    {
        int x=rand(),y=rand();
        x%=1400; y%=1000;
        if(x>=-300&&x<=300&&y<=-500)continue;
        glBegin(GL_LINES);

        glVertex2f(getX(x),getY(y));
        glVertex2f(getX(x+7),getY(y+7));
        glEnd();
       // cout<<"rain"<<endl;
    }

    glPopMatrix();
    }
if(flag == 0)
    {

    }

}
cloud()
{

   if(cloudStatus == 1 )
    {
        ////cloud1///
        glPushMatrix();
   glTranslatef(_cloud1+0.2, 0.8, 0.0);
   glColor3ub(227,227,227);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

    glPushMatrix();
   glTranslatef(_cloud1+0.28, 0.8, 0.0);
   glColor3ub(227,227,227);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

    glPushMatrix();
   glTranslatef(_cloud1+0.35, 0.8, 0.0);
   glColor3ub(227,227,227);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

    glPushMatrix();
   glTranslatef(_cloud1+0.2, 0.75, 0.0);
   glColor3ub(227,227,227);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

    glPushMatrix();
   glTranslatef(_cloud1+0.28, 0.75, 0.0);
   glColor3ub(227,227,227);
   glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

    glPushMatrix();
   glTranslatef(_cloud1+0.35, 0.75, 0.0);
   glColor3ub(227,227,227);
   glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

    glPushMatrix();
   glTranslatef(_cloud1+0.15, 0.77, 0.0);
   glColor3ub(227,227,227);
   glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

	////cloud2////
   glPushMatrix();
   glTranslatef(_cloud2+0.6, 0.6, 0.0);
   glColor3ub(227,227,227);
   glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

    glPushMatrix();
   glTranslatef(_cloud2+0.68, 0.6, 0.0);
   glColor3ub(227,227,227);
   glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

    glPushMatrix();
   glTranslatef(_cloud2+0.75, 0.6, 0.0);
   glColor3ub(227,227,227);
   glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

    glPushMatrix();
   glTranslatef(_cloud2+0.6, 0.65, 0.0);
   glColor3ub(227,227,227);
   glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

    glPushMatrix();
   glTranslatef(_cloud2+0.68, 0.65, 0.0);
   glColor3ub(227,227,227);
   glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

    glPushMatrix();
   glTranslatef(_cloud2+0.75, 0.65, 0.0);
   glColor3ub(227,227,227);
   glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

    glPushMatrix();
   glTranslatef(_cloud2+0.55, 0.62, 0.0);
   glColor3ub(227,227,227);
   glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

    glPushMatrix();
   glTranslatef(_cloud2+0.79, 0.62, 0.0);
   glColor3ub(227,227,227);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();


}
    if(cloudStatus == 0)
    {


    }



}

void drawScene()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glLoadIdentity();
    glMatrixMode(GL_PROJECTION);


    sndPlaySound("labbaik.wav",SND_ASYNC|SND_LOOP);//Play background music
    sky();
    moon();
    sun();
    ////clouds///
	cloud();

    ////minar1//////
    glMatrixMode(GL_MODELVIEW);
    glColor3ub(255,255,240);
    glPushMatrix();
/////part1//////
    glBegin(GL_POLYGON);
    glVertex2f(getX(-600), getY(73));
    glVertex2f(getX(-500), getY(77));
    glVertex2f(getX(-500), getY(200));
    glVertex2f(getX(-600), getY(200));
    glEnd();

    /////part2//////
    glBegin(GL_POLYGON);
    glVertex2f(getX(-600), getY(200));
    glVertex2f(getX(-640), getY(230));
    glVertex2f(getX(-640), getY(290));
    glVertex2f(getX(-600), getY(320));
    glVertex2f(getX(-500), getY(320));
    glVertex2f(getX(-460), getY(290));
    glVertex2f(getX(-460), getY(230));
    glVertex2f(getX(-500), getY(200));
    glEnd();
    /////part3//////
    glBegin(GL_POLYGON);
    glVertex2f(getX(-600), getY(320));
    glVertex2f(getX(-600), getY(350));
    glVertex2f(getX(-500), getY(350));
    glVertex2f(getX(-500), getY(320));
    glEnd();
    /////part4//////
    glBegin(GL_POLYGON);
    glVertex2f(getX(-590), getY(350));
    glVertex2f(getX(-590), getY(370));
    glVertex2f(getX(-510), getY(370));
    glVertex2f(getX(-510), getY(350));
    glEnd();
     /////part5//////
    glBegin(GL_POLYGON);
    glVertex2f(getX(-560), getY(370));
    glVertex2f(getX(-560), getY(400));
    glVertex2f(getX(-540), getY(400));
    glVertex2f(getX(-540), getY(370));
    glEnd();
      /////part6//////
    glBegin(GL_POLYGON);
    glVertex2f(getX(-555), getY(400));
    glVertex2f(getX(-555), getY(430));
    glVertex2f(getX(-545), getY(430));
    glVertex2f(getX(-545), getY(400));
    glEnd();

        ////windows1(left minar)////
    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(getX(-590), getY(170));
    glVertex2f(getX(-570), getY(170));
    glVertex2f(getX(-570), getY(190));
    glVertex2f(getX(-590), getY(190));
    glEnd();

       glBegin(GL_POLYGON);
    glVertex2f(getX(-560), getY(170));
    glVertex2f(getX(-540), getY(170));
    glVertex2f(getX(-540), getY(190));
    glVertex2f(getX(-560), getY(190));
    glEnd();

       glBegin(GL_POLYGON);
    glVertex2f(getX(-530), getY(170));
    glVertex2f(getX(-510), getY(170));
    glVertex2f(getX(-510), getY(190));
    glVertex2f(getX(-530), getY(190));
    glEnd();

          ////windows2(left minar)////
    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(getX(-630), getY(235));
    glVertex2f(getX(-605), getY(252));
    glVertex2f(getX(-605), getY(302));
    glVertex2f(getX(-630), getY(285));
    glEnd();

        glBegin(GL_POLYGON);
    glVertex2f(getX(-600), getY(252));
    glVertex2f(getX(-500), getY(252));
    glVertex2f(getX(-500), getY(302));
    glVertex2f(getX(-600), getY(302));
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2f(getX(-470), getY(235));
    glVertex2f(getX(-495), getY(252));
    glVertex2f(getX(-495), getY(302));
    glVertex2f(getX(-470), getY(285));
    glEnd();


    //////minar2//////////
    /////part1//////
    glColor3ub(255,255,240);
    glBegin(GL_POLYGON);
    glVertex2f(getX(600), getY(73));
    glVertex2f(getX(500), getY(77));
    glVertex2f(getX(500), getY(200));
    glVertex2f(getX(600), getY(200));
    glEnd();
    /////part2//////
    glBegin(GL_POLYGON);
    glVertex2f(getX(600), getY(200));
    glVertex2f(getX(640), getY(230));
    glVertex2f(getX(640), getY(290));
    glVertex2f(getX(600), getY(320));
    glVertex2f(getX(500), getY(320));
    glVertex2f(getX(460), getY(290));
    glVertex2f(getX(460), getY(230));
    glVertex2f(getX(500), getY(200));
    glEnd();
    /////part3//////
    glBegin(GL_POLYGON);
    glVertex2f(getX(600), getY(320));
    glVertex2f(getX(600), getY(350));
    glVertex2f(getX(500), getY(350));
    glVertex2f(getX(500), getY(320));
    glEnd();
    /////part4//////
    glBegin(GL_POLYGON);
    glVertex2f(getX(590), getY(350));
    glVertex2f(getX(590), getY(370));
    glVertex2f(getX(510), getY(370));
    glVertex2f(getX(510), getY(350));
    glEnd();
     /////part5//////
    glBegin(GL_POLYGON);
    glVertex2f(getX(560), getY(370));
    glVertex2f(getX(560), getY(400));
    glVertex2f(getX(540), getY(400));
    glVertex2f(getX(540), getY(370));
    glEnd();
      /////part6//////
    glBegin(GL_POLYGON);
    glVertex2f(getX(555), getY(400));
    glVertex2f(getX(555), getY(430));
    glVertex2f(getX(545), getY(430));
    glVertex2f(getX(545), getY(400));
    glEnd();

    ////windows1(right minar)////
    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(getX(590), getY(170));
    glVertex2f(getX(570), getY(170));
    glVertex2f(getX(570), getY(190));
    glVertex2f(getX(590), getY(190));
    glEnd();

       glBegin(GL_POLYGON);
    glVertex2f(getX(560), getY(170));
    glVertex2f(getX(540), getY(170));
    glVertex2f(getX(540), getY(190));
    glVertex2f(getX(560), getY(190));
    glEnd();

       glBegin(GL_POLYGON);
    glVertex2f(getX(530), getY(170));
    glVertex2f(getX(510), getY(170));
    glVertex2f(getX(510), getY(190));
    glVertex2f(getX(530), getY(190));
    glEnd();

          ////windows2(right minar)////
    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(getX(630), getY(235));
    glVertex2f(getX(605), getY(252));
    glVertex2f(getX(605), getY(302));
    glVertex2f(getX(630), getY(285));
    glEnd();

        glBegin(GL_POLYGON);
    glVertex2f(getX(600), getY(252));
    glVertex2f(getX(500), getY(252));
    glVertex2f(getX(500), getY(302));
    glVertex2f(getX(600), getY(302));
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2f(getX(470), getY(235));
    glVertex2f(getX(495), getY(252));
    glVertex2f(getX(495), getY(302));
    glVertex2f(getX(470), getY(285));
    glEnd();


    glPopMatrix();

    glPushMatrix();
/////ground//////
    glColor3ub(205,175,149);
    glBegin(GL_POLYGON);
    glVertex2f(getX(-700), getY(-500));
    glVertex2f(getX(-700), getY(-165));
    glVertex2f(getX(-100), getY(-70));
    glVertex2f(getX(0), getY(-50));
    glVertex2f(getX(0), getY(-500));
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(getX(0), getY(-500));
    glVertex2f(getX(0), getY(-50));
    glVertex2f(getX(100), getY(-70));
    glVertex2f(getX(700), getY(-165));
    glVertex2f(getX(700),getY(-500));
    glEnd();

    glMatrixMode(GL_MODELVIEW);
    glColor3ub(212,175,55);
/////ground floor///////

     glBegin(GL_POLYGON);
    glVertex2f(getX(-700), getY(-165));
    glVertex2f(getX(-700), getY(-30));
    glVertex2f(getX(-100), getY(10));
    glVertex2f(getX(-100), getY(-70));
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(getX(-100), getY(-50));
    glVertex2f(getX(-100), getY(25));
    glVertex2f(getX(0), getY(25));
    glVertex2f(getX(0), getY(-50));
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2f(getX(0), getY(-50));
    glVertex2f(getX(0), getY(25));
    glVertex2f(getX(100), getY(25));
    glVertex2f(getX(100), getY(-50));
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(getX(700), getY(-165));
    glVertex2f(getX(700), getY(-30));
    glVertex2f(getX(100), getY(10));
    glVertex2f(getX(100), getY(-70));
    glEnd();

    glMatrixMode(GL_MODELVIEW);
    glColor3ub(230,230,216);
/////1st floor///////

     glBegin(GL_POLYGON);
    glVertex2f(getX(-700), getY(-30));
    glVertex2f(getX(-700), getY(100));
    glVertex2f(getX(-100), getY(86));
    glVertex2f(getX(-100), getY(10));
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(getX(-100), getY(25));
    glVertex2f(getX(-100), getY(100));
    glVertex2f(getX(0), getY(100));
    glVertex2f(getX(0), getY(25));
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(getX(-700), getY(110));
    glVertex2f(getX(-100), getY(96));
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2f(getX(0), getY(25));
    glVertex2f(getX(0), getY(100));
    glVertex2f(getX(100), getY(100));
    glVertex2f(getX(100), getY(25));
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2f(getX(700), getY(-30));
    glVertex2f(getX(700), getY(100));
    glVertex2f(getX(100), getY(86));
    glVertex2f(getX(100), getY(10));
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(getX(700), getY(110));
    glVertex2f(getX(100), getY(96));
    glEnd();

    glMatrixMode(GL_MODELVIEW);
    glColor3ub(0,0,0);
/////Kaba Sharif Main Structure///////

     glBegin(GL_POLYGON);
    glVertex2f(getX(-300), getY(-200));
    glVertex2f(getX(-300), getY(200));
    glVertex2f(getX(0), getY(250));
    glVertex2f(getX(0), getY(-250));
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(getX(0), getY(-250));
    glVertex2f(getX(0), getY(250));
    glVertex2f(getX(300), getY(200));
    glVertex2f(getX(300), getY(-200));
    glEnd();

    glMatrixMode(GL_MODELVIEW);
    glColor3ub(255,255,255);
/////brick1(layer1-left side)///////

     glBegin(GL_LINE_LOOP);
    glVertex2f(getX(-300), getY(-180));
    glVertex2f(getX(0), getY(-230));
    glVertex2f(getX(0), getY(-250));
    glVertex2f(getX(-300), getY(-200));
    glEnd();
//line1(right)////
    glBegin(GL_LINES);
    glVertex2f(getX(0), getY(-230));
    glVertex2f(getX(300), getY(-180));
    glEnd();
////brick1 (lineleft)//////
      glBegin(GL_LINES);
    glVertex2f(getX(-250), getY(-190));
    glVertex2f(getX(-250), getY(-208.33));
    glEnd();

      glBegin(GL_LINES);
    glVertex2f(getX(-200), getY(-197));
    glVertex2f(getX(-200), getY(-216.66));
    glEnd();

     glBegin(GL_LINES);
    glVertex2f(getX(-150), getY(-204));
    glVertex2f(getX(-150), getY(-224.99));
    glEnd();

       glBegin(GL_LINES);
    glVertex2f(getX(-100), getY(-212));
    glVertex2f(getX(-100), getY(-233));
    glEnd();

       glBegin(GL_LINES);
    glVertex2f(getX(-50), getY(-220));
    glVertex2f(getX(-50), getY(-242));
    glEnd();

////brick1 (line right)//////
      glBegin(GL_LINES);
    glVertex2f(getX(250), getY(-190));
    glVertex2f(getX(250), getY(-208.33));
    glEnd();

      glBegin(GL_LINES);
    glVertex2f(getX(200), getY(-197));
    glVertex2f(getX(200), getY(-216.66));
    glEnd();

     glBegin(GL_LINES);
    glVertex2f(getX(150), getY(-204));
    glVertex2f(getX(150), getY(-224.99));
    glEnd();

       glBegin(GL_LINES);
    glVertex2f(getX(100), getY(-212));
    glVertex2f(getX(100), getY(-233));
    glEnd();

       glBegin(GL_LINES);
    glVertex2f(getX(50), getY(-220));
    glVertex2f(getX(50), getY(-242));
    glEnd();

/////brick2(layer2-left side)///////

     glBegin(GL_LINES);
    glVertex2f(getX(-300), getY(-160));
    glVertex2f(getX(0), getY(-210));

    glEnd();
//brick2(line2(right))////
    glBegin(GL_LINES);
    glVertex2f(getX(0), getY(-210));
    glVertex2f(getX(300), getY(-160));
    glEnd();
////brick2 (line2 left)//////
      glBegin(GL_LINES);
    glVertex2f(getX(-275), getY(-164));
    glVertex2f(getX(-275), getY(-184));
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(getX(-225), getY(-174));
    glVertex2f(getX(-225), getY(-194));
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(getX(-175), getY(-182));
    glVertex2f(getX(-175), getY(-202));
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(getX(-125), getY(-190));
    glVertex2f(getX(-125), getY(-210));
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(getX(-75), getY(-198));
    glVertex2f(getX(-75), getY(-218));
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(getX(-25), getY(-206));
    glVertex2f(getX(-25), getY(-226));
    glEnd();

    ////brick2 (line2 right)//////
      glBegin(GL_LINES);
    glVertex2f(getX(275), getY(-164));
    glVertex2f(getX(275), getY(-184));
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(getX(225), getY(-174));
    glVertex2f(getX(225), getY(-194));
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(getX(175), getY(-182));
    glVertex2f(getX(175), getY(-202));
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(getX(125), getY(-190));
    glVertex2f(getX(125), getY(-210));
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(getX(75), getY(-198));
    glVertex2f(getX(75), getY(-218));
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(getX(25), getY(-206));
    glVertex2f(getX(25), getY(-226));
    glEnd();

/////brick3(layer3-left side)///////

     glBegin(GL_LINE_LOOP);
    glVertex2f(getX(-300), getY(-140));
    glVertex2f(getX(0), getY(-190));
    glVertex2f(getX(0), getY(-210));
    glVertex2f(getX(-300), getY(-160));
    glEnd();

//line3(right)////

    glBegin(GL_LINES);
    glVertex2f(getX(0), getY(-190));
    glVertex2f(getX(300), getY(-140));
    glEnd();

////brick3 (line3 left)//////
      glBegin(GL_LINES);
    glVertex2f(getX(-250), getY(-148));
    glVertex2f(getX(-250), getY(-168));
    glEnd();

      glBegin(GL_LINES);
    glVertex2f(getX(-200), getY(-156));
    glVertex2f(getX(-200), getY(-176));
    glEnd();

     glBegin(GL_LINES);
    glVertex2f(getX(-150), getY(-164));
    glVertex2f(getX(-150), getY(-184));
    glEnd();

       glBegin(GL_LINES);
    glVertex2f(getX(-100), getY(-172));
    glVertex2f(getX(-100), getY(-192));
    glEnd();

       glBegin(GL_LINES);
    glVertex2f(getX(-50), getY(-180));
    glVertex2f(getX(-50), getY(-200));
    glEnd();

    ////brick3 (line3 right)//////
      glBegin(GL_LINES);
    glVertex2f(getX(250), getY(-148));
    glVertex2f(getX(250), getY(-168));
    glEnd();

      glBegin(GL_LINES);
    glVertex2f(getX(200), getY(-156));
    glVertex2f(getX(200), getY(-176));
    glEnd();

     glBegin(GL_LINES);
    glVertex2f(getX(150), getY(-164));
    glVertex2f(getX(150), getY(-184));
    glEnd();

       glBegin(GL_LINES);
    glVertex2f(getX(100), getY(-172));
    glVertex2f(getX(100), getY(-192));
    glEnd();

       glBegin(GL_LINES);
    glVertex2f(getX(50), getY(-180));
    glVertex2f(getX(50), getY(-200));
    glEnd();

/////brick4(layer4-left side)///////

    glBegin(GL_LINES);
    glVertex2f(getX(-300), getY(-120));
    glVertex2f(getX(0), getY(-170));
    glEnd();

//brick4(line4(right))////
    glBegin(GL_LINES);
    glVertex2f(getX(0), getY(-170));
    glVertex2f(getX(300), getY(-120));
    glEnd();

////brick4 (line4 left)//////
      glBegin(GL_LINES);
    glVertex2f(getX(-275), getY(-124));
    glVertex2f(getX(-275), getY(-144));
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(getX(-225), getY(-132));
    glVertex2f(getX(-225), getY(-152));
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(getX(-175), getY(-140));
    glVertex2f(getX(-175), getY(-160));
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(getX(-125), getY(-148));
    glVertex2f(getX(-125), getY(-168));
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(getX(-75), getY(-156));
    glVertex2f(getX(-75), getY(-176));
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(getX(-25), getY(-164));
    glVertex2f(getX(-25), getY(-184));
    glEnd();

    ////brick4 (line4 right)//////
      glBegin(GL_LINES);
    glVertex2f(getX(275), getY(-124));
    glVertex2f(getX(275), getY(-144));
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(getX(225), getY(-132));
    glVertex2f(getX(225), getY(-152));
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(getX(175), getY(-140));
    glVertex2f(getX(175), getY(-160));
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(getX(125), getY(-148));
    glVertex2f(getX(125), getY(-168));
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(getX(75), getY(-156));
    glVertex2f(getX(75), getY(-176));
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(getX(25), getY(-164));
    glVertex2f(getX(25), getY(-184));
    glEnd();

/////brick5(layer5-left side)///////

     glBegin(GL_LINE_LOOP);
    glVertex2f(getX(-300), getY(-100));
    glVertex2f(getX(0), getY(-150));
    glVertex2f(getX(0), getY(-170));
    glVertex2f(getX(-300), getY(-120));
    glEnd();

//line5(right)////

    glBegin(GL_LINES);
    glVertex2f(getX(0), getY(-150));
    glVertex2f(getX(300), getY(-100));
    glEnd();

////brick5 (line5 left)//////
      glBegin(GL_LINES);
    glVertex2f(getX(-250), getY(-108));
    glVertex2f(getX(-250), getY(-128));
    glEnd();

     glBegin(GL_LINES);
    glVertex2f(getX(-200), getY(-116));
    glVertex2f(getX(-200), getY(-136));
    glEnd();

     glBegin(GL_LINES);
    glVertex2f(getX(-150), getY(-124));
    glVertex2f(getX(-150), getY(-144));
    glEnd();

       glBegin(GL_LINES);
    glVertex2f(getX(-100), getY(-132));
    glVertex2f(getX(-100), getY(-152));
    glEnd();

       glBegin(GL_LINES);
    glVertex2f(getX(-50), getY(-140));
    glVertex2f(getX(-50), getY(-160));
    glEnd();

    ////brick5 (line5 right)//////
      glBegin(GL_LINES);
    glVertex2f(getX(250), getY(-108));
    glVertex2f(getX(250), getY(-128));
    glEnd();

     glBegin(GL_LINES);
    glVertex2f(getX(200), getY(-116));
    glVertex2f(getX(200), getY(-136));
    glEnd();

     glBegin(GL_LINES);
    glVertex2f(getX(150), getY(-124));
    glVertex2f(getX(150), getY(-144));
    glEnd();

       glBegin(GL_LINES);
    glVertex2f(getX(100), getY(-132));
    glVertex2f(getX(100), getY(-152));
    glEnd();

       glBegin(GL_LINES);
    glVertex2f(getX(50), getY(-140));
    glVertex2f(getX(50), getY(-160));
    glEnd();

////calligraph(left)////////////

    glMatrixMode(GL_MODELVIEW);
    glColor3ub(218,165,32);

    glBegin(GL_POLYGON);
    glVertex2f(getX(-300), getY(80));
    glVertex2f(getX(0), getY(110));
    glVertex2f(getX(0), getY(80));
    glVertex2f(getX(-300), getY(50));
    glEnd();
////calligraph(right)////////////

      glBegin(GL_POLYGON);
    glVertex2f(getX(300), getY(80));
    glVertex2f(getX(0), getY(110));
    glVertex2f(getX(0), getY(80));
    glVertex2f(getX(300), getY(50));
    glEnd();
////calligraph layer2(left)////////////
    /*glBegin(GL_LINE_LOOP);
    glVertex2f(getX(-300), getY(40));
    glVertex2f(getX(0), getY(70));
    glVertex2f(getX(0), getY(40));
    glVertex2f(getX(-300), getY(10));
    glEnd();*/

    glBegin(GL_POLYGON);
    glVertex2f(getX(-300), getY(40));
    glVertex2f(getX(-290), getY(41));
    glVertex2f(getX(-290), getY(11));
    glVertex2f(getX(-300), getY(10));
    glEnd();
//////star1(left)///////
    glBegin(GL_POLYGON);
    glVertex2f(getX(-280), getY(28));
    glVertex2f(getX(-270), getY(45));
    glVertex2f(getX(-260), getY(31));
    glVertex2f(getX(-270), getY(13));
    glEnd();
//////brick1(left)///////
        glBegin(GL_POLYGON);
    glVertex2f(getX(-250), getY(45));
    glVertex2f(getX(-170), getY(53));
    glVertex2f(getX(-170), getY(22));
    glVertex2f(getX(-250), getY(16));
    glEnd();
//////star2(left)///////
    glBegin(GL_POLYGON);
    glVertex2f(getX(-160), getY(38));
    glVertex2f(getX(-150), getY(56));
    glVertex2f(getX(-140), getY(40));
    glVertex2f(getX(-150), getY(22));
    glEnd();
//////brick2(left)///////
        glBegin(GL_POLYGON);
    glVertex2f(getX(-130), getY(57));
    glVertex2f(getX(-50), getY(65));
    glVertex2f(getX(-50), getY(34));
    glVertex2f(getX(-130), getY(26));
    glEnd();

    //////star3(left)///////
    glBegin(GL_POLYGON);
    glVertex2f(getX(-40), getY(50));
    glVertex2f(getX(-30), getY(68));
    glVertex2f(getX(-20), getY(52));
    glVertex2f(getX(-30), getY(34));
    glEnd();

    //////brick3(left center)///////
        glBegin(GL_POLYGON);
    glVertex2f(getX(-10), getY(68));
    glVertex2f(getX(-0), getY(70));
    glVertex2f(getX(-0), getY(40));
    glVertex2f(getX(-10), getY(38));
    glEnd();

    ////calligraph layer2(right)////////////
    /*glBegin(GL_LINE_LOOP);
    glVertex2f(getX(300), getY(40));
    glVertex2f(getX(0), getY(70));
    glVertex2f(getX(0), getY(40));
    glVertex2f(getX(300), getY(10));
    glEnd();*/

    glBegin(GL_POLYGON);
    glVertex2f(getX(300), getY(40));
    glVertex2f(getX(290), getY(41));
    glVertex2f(getX(290), getY(11));
    glVertex2f(getX(300), getY(10));
    glEnd();
//////star1(right)///////
    glBegin(GL_POLYGON);
    glVertex2f(getX(280), getY(28));
    glVertex2f(getX(270), getY(45));
    glVertex2f(getX(260), getY(31));
    glVertex2f(getX(270), getY(13));
    glEnd();
//////brick1(right)///////
        glBegin(GL_POLYGON);
    glVertex2f(getX(250), getY(45));
    glVertex2f(getX(170), getY(53));
    glVertex2f(getX(170), getY(22));
    glVertex2f(getX(250), getY(16));
    glEnd();
//////star2(right)///////
    glBegin(GL_POLYGON);
    glVertex2f(getX(160), getY(38));
    glVertex2f(getX(150), getY(56));
    glVertex2f(getX(140), getY(40));
    glVertex2f(getX(150), getY(22));
    glEnd();
//////brick2(right)///////
        glBegin(GL_POLYGON);
    glVertex2f(getX(130), getY(57));
    glVertex2f(getX(50), getY(65));
    glVertex2f(getX(50), getY(34));
    glVertex2f(getX(130), getY(26));
    glEnd();

    //////star3(right)///////
    glBegin(GL_POLYGON);
    glVertex2f(getX(40), getY(50));
    glVertex2f(getX(30), getY(68));
    glVertex2f(getX(20), getY(52));
    glVertex2f(getX(30), getY(34));
    glEnd();

    //////brick3(right center)///////
        glBegin(GL_POLYGON);
    glVertex2f(getX(10), getY(68));
    glVertex2f(getX(0), getY(70));
    glVertex2f(getX(0), getY(40));
    glVertex2f(getX(10), getY(38));
    glEnd();

      glPopMatrix();


    //////Mosque right side(ground floor)///////////////
        ////part1//////
    glPushMatrix();
    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(getX(700), getY(-165));
    glVertex2f(getX(600), getY(-150));
    glVertex2f(getX(600), getY(-90));
    glVertex2f(getX(700), getY(-90));
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2f(getX(690), getY(-90));
    glVertex2f(getX(610), getY(-90));
    glVertex2f(getX(610), getY(-80));
    glVertex2f(getX(690), getY(-80));
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2f(getX(680), getY(-80));
    glVertex2f(getX(620), getY(-80));
    glVertex2f(getX(620), getY(-55));
    glVertex2f(getX(680), getY(-55));
    glEnd();
    glPopMatrix();

    glPushMatrix();
      glTranslatef(0.927, -0.14, 0.0);
   glColor3ub(0,0,0);
   glBegin(GL_POLYGON);

	for(int i=0;i<150;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/70;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    ////part2(ground floor-right)/////
    glColor3ub(0,0,0);
    glPushMatrix();

     glBegin(GL_POLYGON);
    glVertex2f(getX(590), getY(-148));
    glVertex2f(getX(490), getY(-133));
    glVertex2f(getX(490), getY(-90));
    glVertex2f(getX(590), getY(-90));
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2f(getX(580), getY(-90));
    glVertex2f(getX(500), getY(-90));
    glVertex2f(getX(500), getY(-80));
    glVertex2f(getX(580), getY(-80));
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2f(getX(570), getY(-80));
    glVertex2f(getX(510), getY(-80));
    glVertex2f(getX(510), getY(-55));
    glVertex2f(getX(570), getY(-55));
    glEnd();
    glPopMatrix();

   glPushMatrix();
   glTranslatef(0.77, -0.14, 0.0);
   glColor3ub(0,0,0);
   glBegin(GL_POLYGON);

	for(int i=0;i<150;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/70;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

     /////part3(ground floor-right)//////
    glColor3ub(0,0,0);
    glPushMatrix();

     glBegin(GL_POLYGON);
    glVertex2f(getX(480), getY(-130));
    glVertex2f(getX(390), getY(-115));
    glVertex2f(getX(390), getY(-90));
    glVertex2f(getX(480), getY(-90));
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2f(getX(470), getY(-90));
    glVertex2f(getX(400), getY(-90));
    glVertex2f(getX(400), getY(-80));
    glVertex2f(getX(470), getY(-80));
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2f(getX(460), getY(-80));
    glVertex2f(getX(410), getY(-80));
    glVertex2f(getX(410), getY(-55));
    glVertex2f(getX(460), getY(-55));
    glEnd();
    glPopMatrix();

   glPushMatrix();
   glTranslatef(0.62, -0.14, 0.0);
   glColor3ub(0,0,0);
   glBegin(GL_POLYGON);

	for(int i=0;i<150;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/70;
		float r=0.047;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

   /////part4(ground floor-right)//////
    glColor3ub(0,0,0);
    glPushMatrix();

    glBegin(GL_POLYGON);
    glVertex2f(getX(380), getY(-114));
    glVertex2f(getX(310), getY(-101));
    glVertex2f(getX(310), getY(-90));
    glVertex2f(getX(380), getY(-90));
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2f(getX(370), getY(-90));
    glVertex2f(getX(320), getY(-90));
    glVertex2f(getX(320), getY(-80));
    glVertex2f(getX(370), getY(-80));
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2f(getX(360), getY(-80));
    glVertex2f(getX(330), getY(-80));
    glVertex2f(getX(330), getY(-55));
    glVertex2f(getX(360), getY(-55));
    glEnd();
    glPopMatrix();

        glPushMatrix();
      glTranslatef(0.494, -0.14, 0.0);
   glColor3ub(0,0,0);
   glBegin(GL_POLYGON);

	for(int i=0;i<150;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/70;
		float r=0.036;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    //////Mosque left side(ground floor)///////////////
        ////part1//////
    glPushMatrix();
    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(getX(-700), getY(-165));
    glVertex2f(getX(-600), getY(-150));
    glVertex2f(getX(-600), getY(-90));
    glVertex2f(getX(-700), getY(-90));
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2f(getX(-690), getY(-90));
    glVertex2f(getX(-610), getY(-90));
    glVertex2f(getX(-610), getY(-80));
    glVertex2f(getX(-690), getY(-80));
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2f(getX(-680), getY(-80));
    glVertex2f(getX(-620), getY(-80));
    glVertex2f(getX(-620), getY(-55));
    glVertex2f(getX(-680), getY(-55));
    glEnd();
    glPopMatrix();

    glPushMatrix();
      glTranslatef(-0.927, -0.14, 0.0);
   glColor3ub(0,0,0);
   glBegin(GL_POLYGON);

	for(int i=0;i<150;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/70;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    ////part2(ground floor-left)/////
    glColor3ub(0,0,0);
    glPushMatrix();

     glBegin(GL_POLYGON);
    glVertex2f(getX(-590), getY(-148));
    glVertex2f(getX(-490), getY(-133));
    glVertex2f(getX(-490), getY(-90));
    glVertex2f(getX(-590), getY(-90));
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2f(getX(-580), getY(-90));
    glVertex2f(getX(-500), getY(-90));
    glVertex2f(getX(-500), getY(-80));
    glVertex2f(getX(-580), getY(-80));
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2f(getX(-570), getY(-80));
    glVertex2f(getX(-510), getY(-80));
    glVertex2f(getX(-510), getY(-55));
    glVertex2f(getX(-570), getY(-55));
    glEnd();
    glPopMatrix();

   glPushMatrix();
   glTranslatef(-0.77, -0.14, 0.0);
   glColor3ub(0,0,0);
   glBegin(GL_POLYGON);

	for(int i=0;i<150;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/70;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

     /////part3(ground floor-left)//////
    glColor3ub(0,0,0);
    glPushMatrix();

     glBegin(GL_POLYGON);
    glVertex2f(getX(-480), getY(-130));
    glVertex2f(getX(-390), getY(-115));
    glVertex2f(getX(-390), getY(-90));
    glVertex2f(getX(-480), getY(-90));
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2f(getX(-470), getY(-90));
    glVertex2f(getX(-400), getY(-90));
    glVertex2f(getX(-400), getY(-80));
    glVertex2f(getX(-470), getY(-80));
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2f(getX(-460), getY(-80));
    glVertex2f(getX(-410), getY(-80));
    glVertex2f(getX(-410), getY(-55));
    glVertex2f(getX(-460), getY(-55));
    glEnd();
    glPopMatrix();

   glPushMatrix();
   glTranslatef(-0.62, -0.14, 0.0);
   glColor3ub(0,0,0);
   glBegin(GL_POLYGON);

	for(int i=0;i<150;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/70;
		float r=0.047;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

   /////part4(ground floor-left)//////
    glColor3ub(0,0,0);
    glPushMatrix();

    glBegin(GL_POLYGON);
    glVertex2f(getX(-380), getY(-114));
    glVertex2f(getX(-310), getY(-101));
    glVertex2f(getX(-310), getY(-90));
    glVertex2f(getX(-380), getY(-90));
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2f(getX(-370), getY(-90));
    glVertex2f(getX(-320), getY(-90));
    glVertex2f(getX(-320), getY(-80));
    glVertex2f(getX(-370), getY(-80));
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2f(getX(-360), getY(-80));
    glVertex2f(getX(-330), getY(-80));
    glVertex2f(getX(-330), getY(-55));
    glVertex2f(getX(-360), getY(-55));
    glEnd();
    glPopMatrix();

        glPushMatrix();
      glTranslatef(-0.494, -0.14, 0.0);
   glColor3ub(0,0,0);
   glBegin(GL_POLYGON);

	for(int i=0;i<150;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/70;
		float r=0.036;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();


   //////Mosque right side(1st floor)///////////////
        ////part1//////
        glColor3ub(0,0,0);
        glPushMatrix();
     glBegin(GL_POLYGON);
    glVertex2f(getX(700), getY(-30));
    glVertex2f(getX(600), getY(-25));
    glVertex2f(getX(600), getY(30));
    glVertex2f(getX(700), getY(30));
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2f(getX(690), getY(30));
    glVertex2f(getX(610), getY(30));
    glVertex2f(getX(610), getY(40));
    glVertex2f(getX(690), getY(40));
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2f(getX(680), getY(40));
    glVertex2f(getX(620), getY(40));
    glVertex2f(getX(620), getY(65));
    glVertex2f(getX(680), getY(65));
    glEnd();
    glPopMatrix();

    glPushMatrix();
      glTranslatef(0.927, 0.12, 0.0);
   glColor3ub(0,0,0);
   glBegin(GL_POLYGON);

	for(int i=0;i<150;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/70;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();


    //right part2//
    glColor3ub(0,0,0);
    glPushMatrix();

     glBegin(GL_POLYGON);
    glVertex2f(getX(590), getY(-25));
    glVertex2f(getX(490), getY(-18));
    glVertex2f(getX(490), getY(30));
    glVertex2f(getX(590), getY(30));
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2f(getX(580), getY(0));
    glVertex2f(getX(500), getY(0));
    glVertex2f(getX(500), getY(40));
    glVertex2f(getX(580), getY(40));
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2f(getX(570), getY(40));
    glVertex2f(getX(510), getY(40));
    glVertex2f(getX(510), getY(65));
    glVertex2f(getX(570), getY(65));
    glEnd();
    glPopMatrix();

   glPushMatrix();
   glTranslatef(0.77, 0.12, 0.0);
   glColor3ub(0,0,0);
   glBegin(GL_POLYGON);

	for(int i=0;i<150;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/70;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    /////right part3//////
    glColor3ub(0,0,0);
    glPushMatrix();

     glBegin(GL_POLYGON);
    glVertex2f(getX(480), getY(-16));
    glVertex2f(getX(390), getY(-10));
    glVertex2f(getX(390), getY(30));
    glVertex2f(getX(480), getY(30));
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2f(getX(470), getY(0));
    glVertex2f(getX(400), getY(0));
    glVertex2f(getX(400), getY(40));
    glVertex2f(getX(470), getY(40));
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2f(getX(460), getY(40));
    glVertex2f(getX(410), getY(40));
    glVertex2f(getX(410), getY(65));
    glVertex2f(getX(460), getY(65));
    glEnd();
    glPopMatrix();

   glPushMatrix();
   glTranslatef(0.62, 0.12, 0.0);
   glColor3ub(0,0,0);
   glBegin(GL_POLYGON);

	for(int i=0;i<150;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/70;
		float r=0.047;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    //////right part 4//////
    glColor3ub(0,0,0);
    glPushMatrix();

    glBegin(GL_POLYGON);
    glVertex2f(getX(380), getY(-9));
    glVertex2f(getX(310), getY(-4));
    glVertex2f(getX(310), getY(30));
    glVertex2f(getX(380), getY(30));
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2f(getX(370), getY(-8));
    glVertex2f(getX(320), getY(0));
    glVertex2f(getX(320), getY(40));
    glVertex2f(getX(370), getY(40));
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2f(getX(360), getY(-8));
    glVertex2f(getX(330), getY(40));
    glVertex2f(getX(330), getY(70));
    glVertex2f(getX(360), getY(70));
    glEnd();
    glPopMatrix();

        glPushMatrix();
      glTranslatef(0.494, 0.12, 0.0);
   glColor3ub(0,0,0);
   glBegin(GL_POLYGON);

	for(int i=0;i<150;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/70;
		float r=0.036;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();


     //////Mosque left side(1st floor)//////
     ////left part1////
     glPushMatrix();
       glColor3ub(0,0,0);
     glBegin(GL_POLYGON);
    glVertex2f(getX(-700), getY(-30));
    glVertex2f(getX(-600), getY(-25));
    glVertex2f(getX(-600), getY(30));
    glVertex2f(getX(-700), getY(30));
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2f(getX(-690), getY(30));
    glVertex2f(getX(-610), getY(30));
    glVertex2f(getX(-610), getY(40));
    glVertex2f(getX(-690), getY(40));
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2f(getX(-680), getY(40));
    glVertex2f(getX(-620), getY(40));
    glVertex2f(getX(-620), getY(65));
    glVertex2f(getX(-680), getY(65));
    glEnd();
    glPopMatrix();

    glPushMatrix();
      glTranslatef(-0.93, 0.12, 0.0);
   glColor3ub(0,0,0);
   glBegin(GL_POLYGON);

	for(int i=0;i<150;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/70;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    ////left part2////
    glColor3ub(0,0,0);
    glPushMatrix();

     glBegin(GL_POLYGON);
    glVertex2f(getX(-590), getY(-25));
    glVertex2f(getX(-490), getY(-18));
    glVertex2f(getX(-490), getY(30));
    glVertex2f(getX(-590), getY(30));
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2f(getX(-580), getY(0));
    glVertex2f(getX(-500), getY(0));
    glVertex2f(getX(-500), getY(40));
    glVertex2f(getX(-580), getY(40));
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2f(getX(-570), getY(40));
    glVertex2f(getX(-510), getY(40));
    glVertex2f(getX(-510), getY(65));
    glVertex2f(getX(-570), getY(65));
    glEnd();
    glPopMatrix();

   glPushMatrix();
   glTranslatef(-0.77, 0.12, 0.0);
   glColor3ub(0,0,0);
   glBegin(GL_POLYGON);

	for(int i=0;i<150;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/70;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();


    ////left part3////
    glColor3ub(0,0,0);
    glPushMatrix();
   glBegin(GL_POLYGON);
    glVertex2f(getX(-480), getY(-16));
    glVertex2f(getX(-390), getY(-10));
    glVertex2f(getX(-390), getY(30));
    glVertex2f(getX(-480), getY(30));
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2f(getX(-470), getY(0));
    glVertex2f(getX(-400), getY(0));
    glVertex2f(getX(-400), getY(40));
    glVertex2f(getX(-470), getY(40));
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2f(getX(-460), getY(40));
    glVertex2f(getX(-410), getY(40));
    glVertex2f(getX(-410), getY(70));
    glVertex2f(getX(-460), getY(70));
    glEnd();
    glPopMatrix();

   glPushMatrix();
   glTranslatef(-0.62, 0.12, 0.0);
   glColor3ub(0,0,0);
   glBegin(GL_POLYGON);

	for(int i=0;i<150;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/70;
		float r=0.047;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    /////left part4////
    glBegin(GL_POLYGON);
    glVertex2f(getX(-380), getY(-9));
    glVertex2f(getX(-310), getY(-4));
    glVertex2f(getX(-310), getY(30));
    glVertex2f(getX(-380), getY(30));
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2f(getX(-370), getY(-8));
    glVertex2f(getX(-320), getY(0));
    glVertex2f(getX(-320), getY(42));
    glVertex2f(getX(-370), getY(42));
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2f(getX(-360), getY(-8));
    glVertex2f(getX(-330), getY(40));
    glVertex2f(getX(-330), getY(70));
    glVertex2f(getX(-360), getY(70));
    glEnd();
    glPopMatrix();

    glPushMatrix();
   glTranslatef(-0.494, 0.12, 0.0);
   glColor3ub(0,0,0);
   glBegin(GL_POLYGON);

	for(int i=0;i<150;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/70;
		float r=0.036;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();


////rain////////
   rain();



glutSwapBuffers();

}


void update(int value)
{
    transFactor+=0.01f;
    if(transFactor>getX(700*2))
       transFactor = -1 * getX(700 * 2);

    _cloud1 += .0005;
    if(_cloud1-0.39 > 1.0)
    {
        _cloud1 = -1.4;
    }
    _cloud2 += .0006;
    if(_cloud2-0.79 > 1.0)
    {
        _cloud2 = -1.4;
    }
    glutPostRedisplay();
    glutTimerFunc(70,update,0);
}

void keyboard(unsigned char key, int x, int y) {
//find key codes: https://www.cambiaresearch.com/articles/15/javascript-char-codes-key-codes
if(key=='d')
{
        cloudStatus = 1;
        flag = 1;
        moonstatus=0;

        drawScene();
}
if(key=='n')
{
            cloudStatus = 0;
            flag = 0;
            moonstatus = 1;
            sunstatus = 0;

            drawScene();
}
if(key=='r')
{
            rainstatus = 1;
            sunstatus = 0;
            moonstatus = 0;

            drawScene();
}
if(key=='s')
{
            rainstatus = 0;

            drawScene();
}
if(key=='h')
{
            rainstatus = 0;
            moonstatus = 0;
    if(flag==1)
    {
            sunstatus = 1;
            drawScene();
    }
}
if(key=='e')
{
            exit(0);
}

}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(1400, 1000);
	glutCreateWindow("Kaba Sharif");
	glutKeyboardFunc(keyboard);
	glutDisplayFunc(drawScene);
	glutTimerFunc(70,update,0);
	//Beep(600,300);
	//sndPlaySound("labbaik.wav",SND_SYNC|SND_LOOP);//Play background music
	glutMainLoop();
	return 0;
}

