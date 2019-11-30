#include "TXLib.h"
/**
\file "SenyaLib.h"
\author Ashurkov Arseniy
*/

/**
\param  x- положение персонажа по горизонтальной оси
\param  y- положение персонажа по вертикальной оси
\param size- размер персонажа
\param color- цвет персонажа
\param rleg- поднятие правой ноги (не больше 100)
\param rarm- поднятие правой ноги (не больше 100)
*/
void draw_chelik(int x, int y, double size, COLORREF color, int rleg, int rarm);

/**
\param  x- положение персонажа по горизонтальной оси
\param  y- положение персонажа по вертикальной оси
\param size- размер персонажа
\param color- цвет персонажа
\param high1- высота первого шара (первый самый верхний)
\param high2- высота второго шара ( средний шар)
\param high3- высота третьего шара (самый нижний)
*/
void draw_snowman(int x, int y, double size, COLORREF color,int high1, int high2, int high3);

/**
\param  x- положение персонажа по горизонтальной оси
\param  y- положение персонажа по вертикальной оси
\param size- размер персонажа
\param color- цвет персонажа
\param luchok- высота поднятия люка (не больше 175)

*/
//---------------------------------------------------------------------------------------------------------------------------------------
void draw_plane(int x, int y, double size, COLORREF color, int luchok);

void draw_snowman(int x, int y, double size, COLORREF color,int high3, int high2, int high1)      // high1 high2 high3 высота первого, второго, и третьего шара соответственно
{
txSetFillColor (color);
txSetColor(color, 2);
txCircle(200*size+x,(70+high1)*size+y,15*size);     //шар 1
txCircle(200*size+x,(120+high2)*size+y,35*size);    //шар 2
txCircle(200*size+x,(200+high3)*size+y,45*size);    //шар 3
}

void draw_plane(int x, int y, double size, COLORREF color, int luchok)     // лючок не больше чем 175 по иксу
{
txSetFillColor(color);
txSetColor(color, 2);
txLine(0*size+x,0*size+y,150*size+x,0+y);
txLine(150*size+x,0*size+y,(150+luchok)*size+x,150*size+y);      // лючок
txLine(150*size+x,150*size+y,-50*size+x,150*size+y);
txLine(-50*size+x,150*size+y,-50*size+x,350*size+y);
txLine(-50*size+x,350*size+y,-150*size+x,150*size+y);
txLine(-150*size+x,150*size+y,-300*size+x,150*size+y);
txLine(-300*size+x,150*size+y,-275*size+x,100*size+y);
txLine(-275*size+x,100*size+y,0*size+x,100*size+y);
txLine(0*size+x,100*size+y,0*size+x,0*size+y);
}


void draw_chelik(int x, int y, double size, COLORREF color, int rleg, int rarm)        //rleg- поднятие правой ноги не больше 100
{                                                                                      //rarm- поднятие правой руки не больше 100
txSetFillColor(color);
txSetColor(color, 2);
txLine  (300*size+x,250*size+y,200*size+x,450*size+y);                // левая нога
txLine  (300*size+x,250*size+y,400*size+x,(450+rleg)*size+y);         // правая нога
txLine  (300*size+x,250*size+y,300*size+x,150*size+y);
txLine  (300*size+x,180*size+y,200*size+x,230*size+y);                // левая рука
txLine  (300*size+x,180*size+y,400*size+x,(230+rarm)*size+y);         // правая рука
txCircle(300*size+x,150*size+y,25*size);
}
