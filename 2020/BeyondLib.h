#include "TXLib.h"
 //{
 /*!
 //=============================================================================================
 @file BeyondLib.h

 @brief Библиотека BeyondLib
         $Version: 0.1
         $Date: 2020-12-01 12:57:00
         Beyond Library -- это небольшое дополнение к библиотеке TXLib от школьника Постникова Артёма,
         ученика 8 "В" класса 192 школы.

 @warning Это моё первое дополнение, оно содержит не только кривое и непонятное объяснение,
            но и очень кривой код функций.
//-----------------------------------------------------------------------------------------------

 @defgroup Drawing   Рисование
*/
//}


// Функции

//{        Drawing
//! @name Рисование персонажей
//===================================================================================================
 //! @{
 //---------------------------------------------------------------------------------------------------------------------
 //! @ingroup Drawing
//! @brief   Рисует смайлик Анкапа.
//!
//! @param   X    X-координата на холсте.
//! @param   Y    Y-координата на холсте.
//! @param   Scale    Размер персонажа на холсте.
//! @param   Color    Частичный цвет персонажа.
//! @param   A    Отвечает за наличие очков на анкапе, если a>=0, то очки надеты, в любом другом случае их нет.
//!
//! @return  Если операция была успешна -- true, иначе -- false.
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
//! @brief   Рисует Машину.
//!
//! @param   X    X-координата на холсте.
//! @param   Y    Y-координата на холсте. (Из-за кривого кода, нужно от y-100, чтобы получить нужную позицию)
//! @param   Scale    Размер персонажа на холсте.
//! @param   Color    Частичный цвет персонажа.
//! @param   A    Отвечает за фары машины, если a>=0, то фары включены, в любом другом случае, они выключены.
//!
//! @return  Если операция была успешна -- true, иначе -- false.
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
    txPolygon (Car,9); // основа машины
    txSetFillColor(RGB(255,255,255));
    txSetColor(TX_BLACK,10);
    txCircle (x+150*scale,y+565*scale,40*scale); // переднее колесо
    txCircle (x+450*scale,y+565*scale,40*scale); // заднее колесо
    txSetFillColor(RGB(0,0,255));
    txSetColor(TX_BLACK,2);
    txRectangle (x+200*scale, y+400*scale, x+310*scale, y+500*scale);//  окно
    if (a>=0)// фары включены
    {
        txSetFillColor(RGB(255,255,128));
        txSetColor(TX_RED,1);
        txRectangle (x+100*scale,y+500*scale,x+150*scale,y+525*scale); // включённая фара
        POINT Light [4] = {{x+100*scale, y+500*scale},{x+50*scale,y+450*scale},{x+50*scale,y+570*scale},{x+100*scale,y+525*scale}} ;
        txPolygon (Light,4); // свет фары
    }
    else// фары выключены
    {
        txSetFillColor(RGB(0,0,0));
        txSetColor(TX_RED,1);
        txRectangle (x+100*scale,y+500*scale,x+150*scale,y+525*scale);  //выключенная фара
    }
}



