#include "TXLib.h"
/**
\file "AndreyLib.h"
\author Berendeev Andrey
*/

/**
 \param x положение персонажа по горизонтальной оси
 \param y положение персонажа по вертикальной оси
 \param scale масштаб персонажа
 \param color цвет какой-то части персонажа
 \param dir направление персонажа
 \param length длина луча
 \param center наличие квадрата или круга в персонаже
*/

void draw_GUN(int x,int y,double scale,COLORREF color,int dir,int length,int center);

/**
 \param x положение персонажа по горизонтальной оси
 \param y положение персонажа по вертикальной оси
 \param scale масштаб персонажа
 \param color цвет какой-то части персонажа
 \param left высота левой руки робота
 \param right высота правой руки робота
 \param dir направление персонажа
 \warning параметры left и right лучше делать одинаковыми
 */

void draw_ROBOT(int x,int y,double scale,COLORREF color,int left,int right,int dir);

/**
\param x положение персонажа по горизонтальной оси
\param y положение персонажа по вертикальной оси
\param scale масштаб персонажа
\param color цвет какой-то части персонажа
\param circle высота кружка
\param dir направление персонажа
\param xg наличие крыши у машинки
*/
 
void draw_CAR(int x,int y,double scale,COLORREF color,int circle,int dir,int xg);

/**
\param x положение персонажа по горизонтальной оси
\param y положение персонажа по вертикальной оси
\param scale масштаб персонажа
\param color цвет какой-то части персонажа
\param up цвет верхнего кружка части персонажа
\param down цвет нижнего кружка части персонажа
\param arms цвет крыльев кружка части персонажа
\param yes наличие крыльев у персонажа
*/

void draw_EYE(int x,int y,double scale,COLORREF color,COLORREF up,COLORREF down,COLORREF arms,int yes);


/**
\param x положение персонажа по горизонтальной оси
\param y положение персонажа по вертикальной оси
\param scale масштаб персонажа
\param color цвет какой-то части персонажа
\param dir направление персонажа
\param tail не очень используемая переменная
\param hp наличие квадрата либо треугольника у персонажа 
*/
 
 
void draw_JUMPER(int x,int y,double scale,COLORREF color,int dir,int tail,int hp);

void draw_ROBOT(int x,int y,double scale,COLORREF color,int left,int right,int dir)
{

	//Первый персонаж(левый верхний угол)

	txSetColour(color,10*scale);
	txLine(x+200+200*scale,y+400,x+200+200*scale,y+400+100*scale*dir);
	txLine(x+200,y+400,x+200,y+400+100*scale*dir);
	txSetColour(TX_BLUE,10*scale);
	txLine(x+200,y+400+100*scale*dir,x+200+200*scale,y+400+100*scale*dir);
	txLine(x+200,y+400,x+200+200*scale,y+400);
	txCircle(x+200+200*scale,y+400,50*scale);
	txCircle(x+200+200*scale,y+400,25*scale);
	txCircle(x+200,y+400,50*scale);
	txCircle(x+200,y+400,25*scale);
	txLine(x+200+200*scale,y+400+100*scale*dir,x+200+300*scale,y+400+100*scale*dir+right*scale*dir);
	txLine(x+200,y+400+100*scale*dir,x+200-100*scale,y+400+100*scale*dir+left*scale*dir);
	txSetColour(color,25*scale);
	txCircle(x+200,y+400,12.5*scale);
	txCircle(x+200+200*scale,y+400,12.5*scale);


}

void draw_GUN(int x, int y,double scale,COLORREF color,int dir,int length,int center)
{
	if (center == -1)
	{
		txSetColor(TX_LIGHTBLUE,2.5*scale);
		txCircle(x,y,65*scale);
	}
	else
	{
		txSetColour(TX_MAGENTA,2.5*scale);
		txRectangle(x,y,x+50*scale,y-30*scale);
	}
	//что-то отдаленно похожее на лазерный пистолет
	txSetColour(TX_YELLOW,10*scale);
	txLine(x,y,x+200*scale*dir*length,y-80*scale*length);
	txSetColour(TX_BLUE,5*scale);
	txLine(x+100*scale*dir,y-40*scale,x+110*scale*dir,y-90*scale);
	txSetColour(TX_LIGHTGREEN,5*scale);
	txLine(x+100*scale*dir,y-40*scale,x+130*scale*dir,y-80*scale);
	txSetColour(TX_LIGHTRED,5);
	txLine(x+100*scale*dir,y-40*scale,x+140*scale*dir,y-60*scale);
	txSetColour(TX_MAGENTA,5*scale);
	txLine(x+100*scale*dir,y-40*scale,x+145*scale*dir,y-40*scale);
	txSetColour(TX_LIGHTBLUE,5*scale);
	txLine(x+100*scale*dir,y-40*scale,x+140*scale*dir,y-20*scale);
	txLine(x,y,x-50*scale*dir,y-40*scale);
	txSetColour(TX_ORANGE,5*scale);
	txLine(x,y,x-50*scale*dir,y+40*scale);
	txSetColour(TX_GRAY,5*scale);
	txLine(x-50*scale*dir,y+40*scale,x-10*scale*dir,y+70*scale);
	txSetColour(TX_BLUE,5*scale);
	txLine(x-50*scale*dir,y-40*scale,x+145*scale*dir,y-20*scale);
	txSetColour(color,10*scale);
	txLine(x-10*scale*dir,y+70*scale,x+110*scale*dir,y-90*scale);
}

void draw_CAR(int x,int y,double scale,COLORREF color,int circle,int dir,int xg)
{
	//Второй персонаж(левый нижний угол)
	txSetColour(color,10*scale);
	txLine(x,y+200,x+200*scale,y+200);
	txLine(x,y+200+100*scale*dir,x+200*scale,y+200+100*scale*dir);
	txLine(x,y+200,x,y+200+100*scale*dir);
	txLine(x+200*scale,y+200,x+200*scale,y+200+100*scale*dir);
	txLine(x,y+200,x+200*scale,y+200+100*scale*dir);
	txLine(x+200*scale,y+200,x,y+200+100*scale*dir);
	txLine(x,y+200,x-100*scale,y+200+100*scale*dir);
	txLine(x-50*scale,y+200+50*scale*dir,x,y+200+100*scale*dir);
	txLine(x+200*scale,y+200,x+200*scale+100*scale,y+200+100*scale*dir);
	txLine(x+200*scale+50*scale,y+200+50*scale*dir,x+200*scale,y+200+100*scale*dir);
	txLine(x+100*scale,y+200+100*scale*dir,x+100*scale,y+200+50*scale*dir);
	txLine(x+100*scale,y+200+100*scale*dir,x+100*scale,y+200+150*scale*dir-circle*scale*dir);
	txSetColour(TX_BLACK,10*scale);
	txSetFillColour(TX_LIGHTRED);
	txCircle(x-100*scale,y+200+100*scale*dir,50*scale);
	txCircle(x+200*scale+100*scale,y+200+100*scale*dir,50*scale);
	txSetFillColour(TX_YELLOW);
	txCircle(x+100*scale,y+200+150*scale*dir-circle*scale*dir,25*scale);								//Первый и второй персонаж не собираются в третьего,им лень.

	if(xg == 1)
	{
		txSetColor(TX_BLUE,5);
		txLine(x,y+200,x+100*scale,y+200-50*dir);
		txLine(x+100*scale,y+200-50*dir,x+200*scale,y+200);
	}
}

void draw_EYE(int x,int y,double scale,COLORREF color,COLORREF up,COLORREF down,COLORREF arms,int yes)
{
	if(yes == 1)
	{
		txSetColor(arms,5);
		txLine(x+100*scale,y+50*scale,x+100+100*scale,y);
		txLine(x-100*scale,y+50*scale,x+100+100*scale,y);
		txLine(x+100*scale,y+50*scale,x-100-100*scale,y);
		txLine(x-100*scale,y+50*scale,x-100-100*scale,y);
	}
	//третий персонаж(сверху посередине)
	txSetFillColour(TX_BLACK);
	txCircle(x,y+50*scale,100*scale);
	txSetFillColor(up);
	txCircle(x,y-50*scale,50*scale);
	txSetFillColour(color);
	txCircle(x+100*scale,y+50*scale,50*scale);
	txSetFillColor(down);
	txCircle(x,y+150*scale,50*scale);
	txSetFillColor(color);
	txCircle(x-100*scale,y+50*scale,50*scale);
	txSetColour(TX_YELLOW,10*scale);
	txLine(x,y,x+50*scale,y+50*scale);
	txLine(x,y,x-50*scale,y+50*scale);
	txLine(x+50*scale,y+50*scale,x,y+100*scale);
	txLine(x-50*scale,y+50*scale,x,y+100*scale);
	txSetFillColour(TX_LIGHTBLUE);
	txCircle(x,y+50*scale,25*scale);
	txSetColour(TX_LIGHTGREEN,20*scale);
	txLine(x,y+50*scale,x,y+50*scale);
}

void draw_JUMPER(int x,int y,double scale,COLORREF color,int dir,int tail,int hp)
{

    //Перcонаж,которого можно было создать через Polygon,но что-то пошло не так.(сверху справа).
	txSetFillColour(color);
	txSetColour(TX_LIGHTGREEN,10*scale);
	txCircle(x,y,150*scale);
	txSetColour(TX_BLUE,10*scale);
	txLine(x,y-150*scale*dir,x,y+150*scale*dir);
	txLine(x-150*scale,y,x+150*scale,y);
	txSetFillColour(TX_YELLOW);
	txCircle(x,y,10*scale+50*tail);
	txSetColour(TX_LIGHTRED,5*scale);
	//шипы(правые)
	txLine(x,y-150*scale*dir,x+25*scale,y-190*scale*dir);
	txLine(x+25*scale,y-190*scale*dir,x+50*scale,y-140*scale*dir);
	txLine(x+50*scale,y-140*scale*dir,x+75*scale,y-175*scale*dir);
	txLine(x+75*scale,y-175*scale*dir,x+90*scale,y-120*scale*dir);
	txLine(x+90*scale,y-120*scale*dir,x+125*scale,y-135*scale*dir);
	txLine(x+125*scale,y-135*scale*dir,x+120*scale,y-90*scale*dir);
	txLine(x+120*scale,y-90*scale*dir,x+150*scale,y-70*scale*dir);
	txLine(x+150*scale,y-70*scale*dir,x+145*scale,y-30*scale*dir);
	//шипы(левые)
	txLine(x,y-150*scale*dir,x-25*scale,y-190*scale*dir);
	txLine(x-25*scale,y-190*scale*dir,x-50*scale,y-140*scale*dir);
	txLine(x-50*scale,y-140*scale*dir,x-75*scale,y-175*scale*dir);
	txLine(x-75*scale,y-175*scale*dir,x-90*scale,y-120*scale*dir);
	txLine(x-90*scale,y-120*scale*dir,x-125*scale,y-135*scale*dir);
	txLine(x-125*scale,y-135*scale*dir,x-120*scale,y-90*scale*dir);
	txLine(x-120*scale,y-90*scale*dir,x-150*scale,y-70*scale*dir);
	txLine(x-150*scale,y-70*scale*dir,x-145*scale,y-30*scale*dir);

	txLine(x-20*scale,y+150*scale*dir,x,y+250*scale*dir);
	txLine(x+20*scale,y+150*scale*dir,x,y+250*scale*dir);
	txCircle(x,y+250*scale*dir,50*scale);
	if(hp == 1)
	{
		txSetColor(TX_RED,5);
		txLine(x,y-110,x+110,y);
		txLine(x,y-110,x-110,y);
		txLine(x,y+110,x+110,y);
		txLine(x,y+110,x-110,y);
	}
	else
	{
		txSetColor(TX_YELLOW,5*scale);
		txLine(x,y-110*scale,x+82.5*scale,y+82.5*scale);
		txLine(x,y-110*scale,x-82.5*scale,y+82.5*scale);
		txLine(x-82.5*scale,y+82.5*scale,x+82.5*scale,y+82.5*scale);
	}
}
