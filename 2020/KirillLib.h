#include "TXLib.h"
 //{
 /*!
 //=============================================================================================
 @file KirillLib.h

 @brief ���������� KirillLib
         $Version: alfa 0.1
         $Date: 2020-12-06 14:10:00
         Kirill Library ��� ���������� � ���������� TXLib �� ������ �������,
         ������� 8 "�" ������ 192 �����.

 @warning   ������� �� ����, ���������� �� ������, ��� ���� ����� ��������������
//-----------------------------------------------------------------------------------------------

 @defgroup Drawing   ���������
*/
//}

// �������

//{       Drawing
//! @name ��������� �������
//===================================================================================================
 //! @{
 //*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
 //! @ingroup Drawing
//! @brief   ������ ��������.
//!
//! @param   x - ���������� �� ������.
//! @param   y - ���������� �� ������.
//! @param   scale - ������ ��������� �� ������.
//! @param   color - ��������� ���� ���������.
//!
//! @code
//!            DrawSun(40, 90, 0.3, RGB(  0,228,  0));
//!
//! @endcode
//}*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
void DrawSun(int x, int y, double scale, COLORREF color);

//! @{
 //*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
 //! @ingroup Drawing
//! @brief   ������ ���������.
//!
//! @param   x - ���������� �� ������.
//! @param   y - ���������� �� ������.
//! @param   scale - ������ ��������� �� ������.
//! @param   color - ��������� ���� ���������.
//!
//! @code
//!             DrawTurtle(300,180, 0.3, RGB(  0,228,  0));
//!
//! @endcode
//}*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
void DrawTurtle(int x, int y, double scale, COLORREF color);

//! @{
 //*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
 //! @ingroup Drawing
//! @brief   ������ ������.
//!
//! @param   x - ���������� �� ������.
//! @param   y - ���������� �� ������.
//! @param   scale - ������ ��������� �� ������.
//! @param   color - ��������� ���� ���������.
//!
//! @code
//!             DrawBird(200,300, 0.3, RGB(  0,228,  0));
//!
//! @endcode
//}*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
void DrawBird(int x, int y, double scale, COLORREF color);

//! @{
 //*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
 //! @ingroup Drawing
//! @brief   ������ �����.
//!
//! @param   x - ���������� �� ������.
//! @param   y - ���������� �� ������.
//! @param   scale - ������ ��������� �� ������.
//! @param   color - ��������� ���� ���������.
//!
//! @code
//!             DrawFish(400,400, 0.3, RGB(  0,228,  0));
//!
//! @endcode
//}*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
void DrawFish(int x, int y, double scale, COLORREF color);

//! @{
 //*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
 //! @ingroup Drawing
//! @brief   ������ �������.
//!
//! @param   x - ���������� �� ������.
//! @param   y - ���������� �� ������.
//! @param   scale - ������ ��������� �� ������.
//! @param   color - ��������� ���� ���������.
//!
//! @code
//!             DrawCucumber(650,320, 0.3, RGB(  0,228,  0));
//!
//! @endcode
//}*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
void DrawCucumber(int x, int y, double scale, COLORREF color);

void DrawSun(int x, int y, double scale, COLORREF color)

{
    //������

    txSetFillColor (color);
    txSetColor (color);
    txCircle (x, y, 50*scale);
    txLine (x, y+50*scale, x, y+150*scale);
    txLine (x-50*scale, y+45*scale, x-100*scale, y+95*scale);
    txLine (x-50*scale, y        , x-200*scale, y);
    txLine (x+30*scale, y+25*scale, x+70*scale, y+95*scale);
    txLine (x+40*scale, y+20*scale, x+90*scale, y+30*scale);
    txLine (x+40*scale, y-10*scale, x+80*scale, y-20*scale);
    txLine (x-20*scale, y-50*scale, x-50*scale, y-100*scale);
    txLine (x+20*scale, y-50*scale, x+50*scale, y-100*scale);

}

void DrawTurtle(int x, int y, double scale, COLORREF color)

{
    //������� ���������

    txSetFillColor (color);
    txSetColor (color);
    txLine (  x         ,y          ,x+50*scale   ,y-25*scale  );
    txLine (  x+50*scale ,y-25*scale  ,x+60*scale   ,y-25*scale  );
    txLine (  x+60*scale ,y-25*scale  ,x+110*scale  ,y  );
    txLine (  x         ,y          ,x+110*scale  ,y  );
    txCircle (x+55*scale ,y,10*scale);

}

void DrawBird(int x, int y, double scale, COLORREF color)

{

    //������

    txSetColor (color);
    txSetFillColor (color);
    txCircle (x, y, 20*scale);
    txCircle (x-30*scale, y, 10*scale);
    txLine (x-40*scale, y-5*scale, x-45*scale, y-5*scale);
    txLine (x-45*scale, y-5*scale, x-40*scale, y);
    txLine (x+10*scale, y, x+40*scale, y-5*scale);
    txLine (x+40*scale, y-5*scale, x+40*scale, y);
    txLine (x+40*scale, y, x+10*scale, y);
    txLine (x, y-20*scale, x+5*scale, y-40*scale);
    txLine (x, y+20*scale, x+5*scale, y+40*scale);
    txLine (x+5*scale, y-40*scale, x-10*scale, y-15*scale);
    txLine (x+5*scale, y+40*scale, x-10*scale, y+15*scale);
    txSetColor (TX_BLACK);
    txSetFillColor (TX_WHITE);
    txCircle (x-32*scale, y-2*scale, 3*scale);

}

void DrawFish(int x, int y, double scale, COLORREF color)

{

    //��������

    txSetColor (color);
    txLine (x ,y ,x ,y-30*scale );
    txLine (x ,y-30*scale ,x+20*scale,y-20*scale );
    txLine (x+20*scale ,y-20*scale ,x+50*scale ,y-30*scale );
    txLine (x+50*scale ,y-30*scale ,x+80*scale ,y-40*scale );
    txLine (x+80*scale ,y-40*scale ,x+70*scale ,y-70*scale );
    txLine (x+70*scale ,y-70*scale ,x+110*scale ,y-40*scale );
    txLine (x+110*scale ,y-40*scale ,x+140*scale ,y-30*scale );
    txLine (x+140*scale ,y-30*scale ,x+160*scale ,y-10*scale );
    txLine (x+160*scale ,y-10*scale ,x+140*scale ,y+10*scale );
    txLine (x+140*scale ,y+10*scale ,x+110*scale ,y+20*scale );
    txLine (x+110*scale ,y+20*scale ,x+80*scale ,y+20*scale );
    txLine (x+80*scale ,y+20*scale ,x+20*scale ,y-20*scale );
    txLine (x+20*scale ,y-20*scale ,x ,y );

}

void DrawCucumber(int x, int y, double scale, COLORREF color)

{

    //�������

    txSetColor (color, 20*scale);
    txLine (x ,y  ,x+10*scale  ,y+20*scale );
    txLine (x+10*scale ,y+20*scale  ,x+20*scale  ,y+30*scale );
    txLine (x+20*scale ,y+30*scale  ,x+40*scale  ,y+30*scale );
    txLine (x+40*scale ,y+30*scale  ,x+50*scale  ,y+20*scale );
    txLine (x+50*scale ,y+20*scale  ,x+60*scale  ,y );

}
