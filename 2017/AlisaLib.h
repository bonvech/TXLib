#include <TXLib.h>
//=================================================================================================================
//           [These sections are for folding control  in Code::Blocks]
//{          [Best viewed with "Fold all on file open" option enabled]             [best screen width is 115 chars]
//=================================================================================================================
//!
//! @file    AlisaLib.h
//! @brief   Библиотека Тупого Художника (The Dumb Artist Library, TX Library, TXLib).
//!
void DrawMan(    int x, int y, double scale, COLORREF color, int rhand, int popa);
//{
//! @brief Рисует человечка
//!
//! @param   x      X-координата
//! @param   y      Y-координата
//! @param   scale  параметр размера
//! @param   color  параметр цвета
//! @param   rhand  параметр правой руки
//! @param   popa   параметр попы
//!
//! @usage @code
//!
//!@endcode
//}
   void DrawMan(int x, int y, double scale, COLORREF color,int rhand, int popa)
{
//drow man//x0=320, y0=290

    txSetColor(color,5*scale);
    txLine(x+popa, y,          x,     y-70*scale);
    txLine(x+popa, y,          x-40*scale, y+60*scale);
    txLine(x+popa, y,          x+40*scale, y+60*scale);
    txLine(x+popa, y-60*scale, x-50*scale, y-15*scale);
    txLine(x+popa, y-60*scale, x+80*scale, y-(70+ rhand)*scale);
    txCircle(x,y-100*scale,30*scale);
}
void DrawBus(    int x, int y, double scale, COLORREF color, int wheel, int height);
//{
//! @brief Рисует автобус
//!
//! @param   x      X-координата
//! @param   y      Y-координата
//! @param   scale  параметр размера
//! @param   color  параметр цвета
//! @usage @code
//!
//!@endcode
//}
 void DrawBus(int x, int y, double scale, COLORREF color, int wheel, int height)
{
    //drow bus//x0=165,y0=195
    txSetColor (RGB (61, 51, 12));
    txSetFillColour(color);

    txSetColor(TX_BLACK,5*scale);
    txLine( x-75*scale, y-(45+height)*scale, x+75*scale, y-(45+height)*scale);
    txLine( x+75*scale, y-(45+height)*scale, x+75*scale, y+30*scale);
    txLine( x+75*scale, y+30*scale, x-75*scale, y+30*scale);
    txLine( x-75*scale, y+30*scale, x-75*scale, y-(45+height)*scale);
    txLine( x         , y-30*scale, x+35*scale, y-30*scale);
    txLine( x+35*scale, y-30*scale, x+35*scale, y);
    txLine( x+35*scale, y         , x   , y);
    txLine(x          , y         , x,    y-30*scale);
    txCircle(x-30*scale,y+30*scale,(15+wheel)*scale);
    txCircle(x+20*scale,y+30*scale,(15+wheel)*scale);
 }
void DrawCat(    int x, int y, double scale, COLORREF color, int ears);
//{
//! @brief Рисует кошку
//!
//! @param   x      X-координата
//! @param   y      Y-координата
//! @param   scale  параметр размера
//! @param   color  параметр цвета
//! @param   popa   параметр вислоухости
//!
//! @usage @code
//!
//!@endcode
//}
void DrawCat(int x, int y, double scale, COLORREF color,int ears)
{
   //drow cat//x0=165, y0=390
    txSetColor(color,2);
    txSetFillColour(RGB (153, 153, 153));
    txLine(x-45*scale,  y-75*scale, x-30*scale, y-(105-ears)*scale);
    txLine(x-30*scale, y-(105-ears)*scale, x-15*scale,  y-75*scale);
    txLine(x-15*scale,  y-75*scale, x+15*scale,  y-75*scale);
    txLine(x+15*scale,  y-75*scale, x+35*scale, y-(105-ears)*scale);
    txLine(x+35*scale, y-(105-ears)*scale, x+45*scale,  y-75*scale);
    txLine(x+45*scale,  y-75*scale, x+45*scale,  y-30*scale);
    txLine(x+45*scale,  y-30*scale, x+15*scale, y);
    txLine(x+15*scale,     y,       x-15*scale, y);
    txLine(x-15*scale,     y,       x-45*scale, y-30*scale);
    txLine(x-45*scale,  y-30*scale, x-45*scale, y-75*scale);
    txSetFillColour(RGB (51, 0, 204));
    txCircle(x-15*scale,y-45*scale,7*scale);
    txCircle(x+15*scale,y-45*scale,7*scale);
}
void DrawBaloon( int x, int y, double scale, COLORREF color);
//{
//! @brief Рисует воздушный шар
//!
//! @param   x      X-координата
//! @param   y      Y-координата
//! @param   scale  параметр размера
//! @param   color  параметр цвета шара
//!
//! @usage @code
//!
//!@endcode
//}
 void DrawBaloon(int x, int y, double scale, COLORREF color)
{
    //drow baloon//x0= 577.5, y0=82.5
    txSetColor(TX_BLACK,2);
    txSetFillColour(color);
    txCircle(x, y,37.5*scale);
    txLine(x-37.5*scale, y+7.5*scale,   x-22.5*scale, y+67.5*scale);
    txLine(x-22.5*scale, y+67.5*scale , x-22.5*scale, y+112.5*scale);
    txLine(x-22.5*scale, y+112.5*scale, x+22.5*scale, y+112.5*scale);
    txLine(x+22.5*scale, y+112.5*scale, x+22.5*scale, y+67.5*scale);
    txLine(x-22.5*scale, y+67.5 *scale, x+22.5*scale, y+67.5*scale);
    txLine(x+22.5*scale, y+67.5 *scale, x+37.5*scale, y+7.5*scale);
    txSetFillColour(RGB (204, 255,51));
}
void DrawNutella(int x, int y, double scale, COLORREF color);
//{
//! @brief Рисует нутеллу
//!
//! @param   x      X-координата
//! @param   y      Y-координата
//! @param   scale  параметр размера
//! @param   color  параметр цвета
//!
//! @usage @code
//!
//!@endcode
//}
 void DrawNutella(int x, int y, double scale, COLORREF color)
{
    //drow nutella//x0=585, y0=345.
    txSetColor(color,2);
    txLine(x-45*scale, y-90*scale, x+45*scale, y-90*scale);
    txLine(x+45*scale, y-90*scale, x+45*scale, y-75*scale);
    txLine(x+45*scale, y-75*scale, x-45*scale, y-75*scale);
    txLine(x-45*scale, y-75*scale, x-45*scale, y-90*scale);

    txSetFillColour(RGB (102, 51, 0));

    txLine(x+30*scale, y-75*scale, x+45*scale, y-60*scale);
    txLine(x+45*scale, y-60*scale, x-45*scale, y-60*scale);
    txLine(x-45*scale, y-60*scale, x-30*scale, y-75*scale);
    txLine(x-30*scale, y-75*scale, x+30*scale, y-75*scale);


    txLine(x+45*scale, y-60*scale, x-45*scale, y-60*scale);
    txLine(x-45*scale, y-60*scale, x-45*scale, y-15*scale);
    txLine(x-45*scale, y-15*scale, x+45*scale, y-15*scale);
    txLine(x+45*scale, y-15*scale, x+45*scale, y-60*scale);

    txSetFillColour(RGB (102, 51, 0));

    txLine(x-45*scale, y-15*scale, x+45*scale, y-15*scale);
    txLine(x-45*scale, y-15*scale, x-30*scale, y);
    txLine(x-30*scale, y,          x+30*scale, y);
    txLine(x+30*scale, y,          x+45*scale, y-15*scale);

    txSetFillColor(RGB(56, 34, 4));
    txFloodFill(x-35,y-7.5) ;
    txFloodFill(x-35,y-67.5) ;

    txSetColor(TX_RED);
    txSelectFont ("Comic Sans MS", 40, 10, false,false , false, false, 0);
    txTextOut (x-33,y-60, "nutella");



}


