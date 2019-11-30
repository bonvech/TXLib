#include "TXLib.h"
/**
\file "SenyaLib.h"
\author Ashurkov Arseniy
*/

/**
\param  x- ��������� ��������� �� �������������� ���
\param  y- ��������� ��������� �� ������������ ���
\param size- ������ ���������
\param color- ���� ���������
\param rleg- �������� ������ ���� (�� ������ 100)
\param rarm- �������� ������ ���� (�� ������ 100)
*/
void draw_chelik(int x, int y, double size, COLORREF color, int rleg, int rarm);

/**
\param  x- ��������� ��������� �� �������������� ���
\param  y- ��������� ��������� �� ������������ ���
\param size- ������ ���������
\param color- ���� ���������
\param high1- ������ ������� ���� (������ ����� �������)
\param high2- ������ ������� ���� ( ������� ���)
\param high3- ������ �������� ���� (����� ������)
*/
void draw_snowman(int x, int y, double size, COLORREF color,int high1, int high2, int high3);

/**
\param  x- ��������� ��������� �� �������������� ���
\param  y- ��������� ��������� �� ������������ ���
\param size- ������ ���������
\param color- ���� ���������
\param luchok- ������ �������� ���� (�� ������ 175)

*/
//---------------------------------------------------------------------------------------------------------------------------------------
void draw_plane(int x, int y, double size, COLORREF color, int luchok);

void draw_snowman(int x, int y, double size, COLORREF color,int high3, int high2, int high1)      // high1 high2 high3 ������ �������, �������, � �������� ���� ��������������
{
txSetFillColor (color);
txSetColor(color, 2);
txCircle(200*size+x,(70+high1)*size+y,15*size);     //��� 1
txCircle(200*size+x,(120+high2)*size+y,35*size);    //��� 2
txCircle(200*size+x,(200+high3)*size+y,45*size);    //��� 3
}

void draw_plane(int x, int y, double size, COLORREF color, int luchok)     // ����� �� ������ ��� 175 �� ����
{
txSetFillColor(color);
txSetColor(color, 2);
txLine(0*size+x,0*size+y,150*size+x,0+y);
txLine(150*size+x,0*size+y,(150+luchok)*size+x,150*size+y);      // �����
txLine(150*size+x,150*size+y,-50*size+x,150*size+y);
txLine(-50*size+x,150*size+y,-50*size+x,350*size+y);
txLine(-50*size+x,350*size+y,-150*size+x,150*size+y);
txLine(-150*size+x,150*size+y,-300*size+x,150*size+y);
txLine(-300*size+x,150*size+y,-275*size+x,100*size+y);
txLine(-275*size+x,100*size+y,0*size+x,100*size+y);
txLine(0*size+x,100*size+y,0*size+x,0*size+y);
}


void draw_chelik(int x, int y, double size, COLORREF color, int rleg, int rarm)        //rleg- �������� ������ ���� �� ������ 100
{                                                                                      //rarm- �������� ������ ���� �� ������ 100
txSetFillColor(color);
txSetColor(color, 2);
txLine  (300*size+x,250*size+y,200*size+x,450*size+y);                // ����� ����
txLine  (300*size+x,250*size+y,400*size+x,(450+rleg)*size+y);         // ������ ����
txLine  (300*size+x,250*size+y,300*size+x,150*size+y);
txLine  (300*size+x,180*size+y,200*size+x,230*size+y);                // ����� ����
txLine  (300*size+x,180*size+y,400*size+x,(230+rarm)*size+y);         // ������ ����
txCircle(300*size+x,150*size+y,25*size);
}
