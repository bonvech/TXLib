#include "TXLib.h"
 //{
 /*!
 //=============================================================================================
 @file BeyondLib.h

 @brief ���������� BeyondLib
         $Version: 0.1
         $Date: 2020-12-01 12:57:00
         Beyond Library -- ��� ��������� ���������� � ���������� TXLib �� ��������� ���������� �����,
         ������� 8 "�" ������ 192 �����.

 @warning ��� �� ������ ����������, ��� �������� �� ������ ������ � ���������� ����������,
            �� � ����� ������ ��� �������.
//-----------------------------------------------------------------------------------------------

 @defgroup Drawing   ���������
*/
//}


// �������

//{        Drawing
//! @name ��������� ����������
//===================================================================================================
 //! @{
 //---------------------------------------------------------------------------------------------------------------------
 //! @ingroup Drawing
//! @brief   ������ ������� ������.
//!
//! @param   X    X-���������� �� ������.
//! @param   Y    Y-���������� �� ������.
//! @param   Scale    ������ ��������� �� ������.
//! @param   Color    ��������� ���� ���������.
//! @param   A    �������� �� ������� ����� �� ������, ���� a>=0, �� ���� ������, � ����� ������ ������ �� ���.
//!
//! @return  ���� �������� ���� ������� -- true, ����� -- false.
//!
//!
//! @code
//!            DrawAncap (100,200,1.3,TX_BLACK,1);
//!
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void DrawAncap ( int x, int y,double scale, COLORREF color,double a);

//{---------------------------------------------------------------------------------------------------------------------
 //! @ingroup Drawing
//! @brief   ������ ������.
//!
//! @param   X    X-���������� �� ������.
//! @param   Y    Y-���������� �� ������. (��-�� ������� ����, ����� �� y-100, ����� �������� ������ �������)
//! @param   Scale    ������ ��������� �� ������.
//! @param   Color    ��������� ���� ���������.
//! @param   A    �������� �� ���� ������, ���� a>=0, �� ���� ��������, � ����� ������ ������, ��� ���������.
//!
//! @return  ���� �������� ���� ������� -- true, ����� -- false.
//!
//!
//! @code
//!            DrawCar (1,-100,1.3,TX_GREY,1);
//!
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void DrawCar (int x, int y,double scale, COLORREF color,double a);


void DrawAncap (int x,int y,double scale, COLORREF color,double a)
{
    txSetColor(TX_BLACK,5);
    txSetFillColor(color);
    txPie (x+10*scale, y+10*scale, 100+100*scale+x, 100+100*scale+y, 30, 180);
    txSetFillColor(RGB(0,0,0));
    txPie (x+10*scale, y+10*scale, 100+100*scale+x, 100+100*scale+y, 210, 180);
    txSetFillColor(RGB(225,255,255));
    txSetColor(RGB(255,255,255));
    txPie (x+30+40*scale, y+50+50*scale, x+70+80*scale, y+75+75*scale, 180, 180);
    txSetColor(TX_BLACK,2);
    if (a>0)
    {
        txSetFillColor(RGB(0,0,128));
        txCircle (x+30+40*scale,y+50+40*scale,20*scale);
        txCircle (x+60+80*scale,y+50+40*scale,20*scale);
        txRectangle (x+7+7*scale,y+45+40*scale,x+33+20*scale,y+55+45*scale);
        txRectangle (x+30+60*scale,y+45+40*scale,x+55+65*scale,y+55+45*scale);
        txRectangle (x+60+100*scale,y+45+40*scale,x+100+96*scale,y+55+45*scale);
    }
    else
    {
        txSetFillColor(RGB(255,255,255));
        txCircle (x+30+40*scale,y+50+40*scale,20*scale);
        txCircle (x+60+80*scale,y+50+40*scale,20*scale);
    }
}

void DrawCar (int x, int y,double scale, COLORREF color,double a)
{
    txSetFillColor(color);
    POINT Car[9] = {{x+100*scale, y+500*scale}, {x+200*scale, y+500*scale}, {x+200*scale, y+400*scale}, {x+400*scale, y+400*scale}, {x+400*scale, y+500*scale},{x+500*scale,y+500*scale},{x+500*scale,y+500*scale},{x+500*scale,y+600*scale},{x+100*scale,y+600*scale}};
    txPolygon (Car,9); // ������ ������
    txSetFillColor(RGB(255,255,255));
    txSetColor(TX_BLACK,10);
    txCircle (x+150*scale,y+565*scale,40*scale); // �������� ������
    txCircle (x+450*scale,y+565*scale,40*scale); // ������ ������
    txSetFillColor(RGB(0,0,255));
    txSetColor(TX_BLACK,2);
    txRectangle (x+200*scale, y+400*scale, x+310*scale, y+500*scale);//  ����
    if (a>=0)// ���� ��������
    {
        txSetFillColor(RGB(255,255,128));
        txSetColor(TX_RED,1);
        txRectangle (x+100*scale,y+500*scale,x+150*scale,y+525*scale); // ���������� ����
        POINT Light [4] = {{x+100*scale, y+500*scale},{x+50*scale,y+450*scale},{x+50*scale,y+570*scale},{x+100*scale,y+525*scale}} ;
        txPolygon (Light,4); // ���� ����
    }
    else// ���� ���������
    {
        txSetFillColor(RGB(0,0,0));
        txSetColor(TX_RED,1);
        txRectangle (x+100*scale,y+500*scale,x+150*scale,y+525*scale);  //����������� ����
    }
}



