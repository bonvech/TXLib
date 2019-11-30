
/**
 *\file "TimLib.h"
 *\author Timofey Arsenyev 8 V
 *\date 2019-11-25
 */

/**
*\brief ��������� ����.\n
*\��� �������������� ������� ������� �������, ������ ����, ������ �����.

*\param color �������� �� ���� �����
 \param scale ���� ��������, ��� ��� �� ��������
*\param color2 �������� �� ���� ����

*> ������ �������������:
 *\code
    draw_fon(RGB(57,53,40),RGB(25,24,255));
 *\endcode

*/
void draw_fon(COLORREF color,double scale,COLORREF color2);

/**
*\brief ��������� ����.\n
*\��� �������������� ������� ������� �������, ������ ����, ������ ����.

*\param x x ����������� ���� �� ��� x

*\param y y ����������� ���� �� ��� y

*\param color ���� ����

*\param scale ������ ���� � ������� �����, ������� ��� �����������

*> ������ �������������:
 *\code
    draw_gora(0,0,RGB(122,122,122),1.);
 *\endcode

*/
void draw_gora(int x, int y,COLORREF color,double scale);

/**
*\brief ��������� ������.\n
*\������������� ������� ������� �������, ������ ����, ������ ����.

*\param x x ����������� ������ �� ��� x

*\param y y ����������� ������ �� ��� y

*\param color ���� ������

*\param scale ������ ������ � ������� �����, ������� ��� �����������

*\param dir ��������� �� ���������

*> ������ �������������:
 *\code
    draw_cloud(x,-190,RGB(132,144,250),0.8,-1.);
 *\endcode

*/
void draw_cloud(int x, int y, COLORREF color,double scale,int dir);

/**
*\brief ��������� ����-���

*\param x x ����������� ����-��� �� ��� x

*\param y y ����������� ����-��� �� ��� y

*\param color ���� ����-���

*\param scale ������ ����-��� � ������� �����, ������� ��� �����������

*> ������ �������������:
 *\code
    draw_horyudzi(0,0,RGB(0,0,0),1.);
 *\endcode

*/
void draw_horyudzi(int x, int y, COLORREF color,double scale);

void draw_fon(COLORREF color,double scale,COLORREF color2)
{
    txSetFillColor(color);
    txSetColor(TX_BLACK,10*scale);
    txRectangle (0, 700, 1600, 900);
    txSetFillColor(color2);
    txRectangle (0, 0, 1600, 700);
}

void draw_gora(int x, int y,COLORREF color,double scale)
{
    txSetFillColor(color);
    txSetColor(TX_BLACK,10*scale);
    POINT gora[4]={{x+int(200*scale),y+int(700*scale)},{x+int(750*scale),y+int(333*scale)},{x+int(850*scale),y+int(333*scale)},{x+int(1400*scale),y+int(700*scale)}};
    txPolygon (gora, 4);//����
    txSetFillColor(TX_WHITE);
    POINT snow[8]={{x+int(650*scale),y+int(400*scale)},{x+int(700*scale),y+int(433*scale)},{x+int(750*scale),y+int(433*scale)},{x+int(800*scale),y+int(466*scale)},
    {x+int(900*scale),y+int(433*scale)},{x+int(950*scale),y+int(400*scale)},{x+int(850*scale),y+int(333*scale)},{x+int(750*scale),y+int(333*scale)}};
    txPolygon (snow, 8);//����
    txSetFillColor(TX_WHITE);
}

void draw_cloud(int x, int y,COLORREF color,double scale)
{
    txSetFillColor(color);
    POINT Cloud[10]={{x+int(0*scale),y+int(350*scale)},{x+int(0*scale),y+int(325*scale)},{x+int(25*scale),y+int(300*scale)},
    {x+int(50*scale),y+int(300*scale)},{x+int(75*scale),y+int(275*scale)},{x+int(100*scale),y+int(275*scale)},
    {x+int(125*scale),y+int(250*scale)},{x+int(150*scale),y+int(250*scale)},{x+int(200*scale),y+int(300*scale)},{x+int(200*scale),y+int(350*scale)}};
    txPolygon (Cloud, 10);//������
}

void draw_horyudzi(int x, int y,COLORREF color,double scale)
{
    txSetFillColor(color);
    txSetColor(TX_BLACK,10*scale);

    POINT horyudzi[50]={{x+int(125*scale),y+int(800*scale)},{x+int(425*scale),y+int(800*scale)},{x+int(425*scale),y+int(733*scale)},
    {x+int(475*scale),y+int(733*scale)},{x+int(525*scale),y+int(700*scale)},{x+int(400*scale),y+int(700*scale)},
    {x+int(400*scale),y+int(666*scale)},{x+int(450*scale),y+int(666*scale)},{x+int(475*scale),y+int(633*scale)},
    {x+int(350*scale),y+int(633*scale)},{x+int(350*scale),y+int(600*scale)},{x+int(425*scale),y+int(600*scale)},
    {x+int(475*scale),y+int(566*scale)},{x+int(325*scale),y+int(566*scale)},{x+int(325*scale),y+int(533*scale)},
    {x+int(400*scale),y+int(533*scale)},{x+int(450*scale),y+int(500*scale)},{x+int(300*scale),y+int(500*scale)},
    {x+int(300*scale),y+int(482*scale)},{x+int(282*scale),y+int(482*scale)},{x+int(282*scale),y+int(466*scale)},
    {x+int(300*scale),y+int(466*scale)},{x+int(300*scale),y+int(455*scale)},{x+int(282*scale),y+int(455*scale)},
    {x+int(282*scale),y+int(444*scale)},{x+int(300*scale),y+int(433*scale)},{x+int(250*scale),y+int(433*scale)},
    {x+int(266*scale),y+int(444*scale)},{x+int(266*scale),y+int(455*scale)},{x+int(250*scale),y+int(455*scale)},
    {x+int(250*scale),y+int(466*scale)},{x+int(266*scale),y+int(466*scale)},{x+int(266*scale),y+int(482*scale)},
    {x+int(250*scale),y+int(482*scale)},{x+int(250*scale),y+int(500*scale)},{x+int(100*scale),y+int(500*scale)},
    {x+int(150*scale),y+int(533*scale)},{x+int(225*scale),y+int(533*scale)},{x+int(225*scale),y+int(566*scale)},
    {x+int(75*scale),y+int(566*scale)},{x+int(125*scale),y+int(600*scale)},{x+int(200*scale),y+int(600*scale)},
    {x+int(200*scale),y+int(633*scale)},{x+int(50*scale),y+int(633*scale)},{x+int(100*scale),y+int(666*scale)},
    {x+int(150*scale),y+int(666*scale)},{x+int(150*scale),y+int(700*scale)},{x+int(25*scale),y+int(700*scale)},
    {x+int(75*scale),y+int(733*scale)},{x+int(125*scale),y+int(733*scale)}};
    txPolygon (horyudzi, 50);//����-���
    txSetFillColor(TX_WHITE);
}
