/// \author Polina Alexeeva
/// \file PacmanLib.h
//{-------------------------------------------------------------------------------
//! @brief Рисует PacMan
//!
//! @param  x   x-координата отрисовки по оси x
//! @param  y   y-координата отрисовки по оси y
//! @param  start   start-предельный угол открытия рта
//!
//! @code
//!         PacMan (100, 100, 45);
//! @endcode
//}-------------------------------------------------------------------------------

void PacMan (double x, double y,double start);

//{-------------------------------------------------------------------------------
//! @brief Рисует Призрака
//!
//! @param  x   x-координата отрисовки по оси x
//! @param  y   y-координата отрисовки по оси y
//!
//! @code
//!         Ghost (100, 100);
//! @endcode
//}-------------------------------------------------------------------------------

void Ghost (double x, double y);

void PacMan (double x, double y,double start)
{
    txBegin();
    txSetColor(TX_BLUE);
    txSetFillColor(TX_BLUE);
    txEllipse(x-5, y-5, x+105, y+105);
    txSetColor(TX_YELLOW);
    txSetFillColor(TX_YELLOW);
    txPie (x, y, x+100, y+100, start, 360-start*2);
    txSetColor(TX_BLACK);
    txSetFillColor(TX_BLACK);
    txCircle(x+50, y+25, 7);
    txEnd();
}

void Ghost (double x, double y)
{
    txBegin();
    txSetColor(TX_BLUE);
    txSetFillColor(TX_BLUE);
    txRectangle (x-1, y-1, x+111, y+121);
    txSetColor(TX_ORANGE);
    txSetFillColor(TX_ORANGE);
    txPie (x, y, x+110, y+100, 0, 180);
    txRectangle (x, y+50, x+110, y+110);
    POINT legs[7] = {{x, y+110}, {x+109, y+110}, {x+92, y+120}, {x+74, y+110}, {x+56, y+120}, {x+38, y+110}, {x+18, y+120}};
    txPolygon (legs, 7);
    txSetFillColor(TX_WHITE);
    txEllipse (x+10, y+40, x+45, y+80);
    txEllipse (x+65, y+40, x+100, y+80);
    txSetColor(TX_BLACK);
    txSetFillColor(TX_BLACK);
    txEllipse (x+15, y+45, x+30, y+65);
    txEllipse (x+70, y+45, x+85, y+65);
    txEnd();

}
