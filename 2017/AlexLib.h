/// @file AlexLib.h
///@warning АХТУНГ!!! Работает только с TXLib.h
/*!
@brief рисует логотип
@param x         центр
@param y         центр
@param s         общий размер
@param r         размер маленьких кругов
@param color     цвет контура
@param сcolor1   1 или 0.Цвет круга
@param var1      0 или 1. варианты исполнения
*/

void drawLogo(int x,int y,double s,double r,COLORREF color,int color1, int var1);
/*!
@brief рисует солнышко
@param x         центр
@param y         центр
@param s         общий размер
@param l         длина лучей
@param color     цвет контура
@param color     цвет круга
@param var1      лучи
*/
void drawSun(int x,int y,double s,double l,COLORREF color,COLORREF color1,int sun_on);
/*!
@brief рисует дом
@param x         центр
@param y         центр
@param s         общий размер
@param color     цвет рамы окна
@param color2    цвет контура
@param color3    цвет стен
@param light_off 0 или 1. свет
*/
void drawHouse(int x,int y,double s,COLORREF color,COLORREF color2,COLORREF color3,int light_off);
/*!
@brief рисует смайлик
@param x         центр
@param y         центр
@param s         общий размер
@param c         размер глаз
@param color     цвет глаз рта и контура
@param norm      1 или 0. цвет смайла: если int green=1, то зелёный, если = 0, то жёлтый, или красный
*/
void drawSmiley(int x,int y,double s,double c,COLORREF color,int norm,int green);
/*!
@brief не доделана
*/
void drawCar(int x,int y,double s,COLORREF color,COLORREF color1,COLORREF color2,int light_on);
void drawTrawa(int x,int y);
void drawOblaco(int x,int y);

void drawLogo(int x,int y,double s,double r,COLORREF color,int color1,int var1)
{
    txSetColor(color);

    if(color1)
        txSetFillColor(TX_BLUE);
    else
        txSetFillColor(TX_RED);

    txCircle(x,y,200*s);
    txSetColor(color,5*s);

    if(var1)
    {
        txCircle(x, y-100*s,100*s*r);
        txCircle(x,y+100*s,100*s*r);
        txCircle(x-100*s,y,100*s*r);
        txCircle(x+100*s,y,100*s*r);
    }
    else
    {
        txCircle(x-100*s,y,100*s*r);
        txCircle(x+100*s,y,100*s*r);
        txCircle(x,y,100*s*r);
    }
}

void drawSun(int x,int y,double s,double l,COLORREF color,COLORREF color1,int sun_on)
{
    txSetColor(color,5*s);
    txSetFillColor(color1);
    txCircle(x,y,50*s);
    txSetColor(color1,5*s);

    if(sun_on)
    {
        txLine(x,y, x-150*s*l,y        );
        txLine(x,y, x-125*s*l,y+ 50*s*l);
        txLine(x,y, x-150*s*l,y+ 60*s*l);
        txLine(x,y, x-100*s*l,y+ 75*s*l);
        txLine(x,y, x- 50*s*l,y+100*s*l);
        txLine(x,y, x        ,y+150*s*l);
    }

}

void drawHouse(int x,int y,double s,COLORREF color,COLORREF color2,COLORREF color3,int light_off)
{
    txSetColor(color2,5*s);
    txSetFillColor(color3);
    POINT house[7] = {{x+50*s,y-50*s},{x+50*s,y+50*s},{x-50*s,y+50*s},{x-50*s,y-50*s},{x+50*s,y-50*s},{x,y-100*s},{x-50*s,y-50*s}};
    txPolygon (house, 7);
    txSetColor(color,3*s);

    if(light_off)
        txSetFillColor(TX_BLUE);
    else
        txSetFillColor(TX_YELLOW);

    txCircle(x,y,20*s);
    txLine(x,y-20*s,x,y+20*s);
    txLine(x-20*s,y,x+20*s,y);
}

void drawSmiley(int x,int y,double s,double c,COLORREF color,int norm,int green)
{
    txSetColor(color,5*s);

    if(norm)
    {
        if(green)
            txSetFillColor(TX_GREEN);
        else
            txSetFillColor(TX_YELLOW);
    }
    else
        txSetFillColor(TX_RED);

    txCircle(x,y,100*s);
    txSetFillColor(color);
    txSetColor(color,10*s);
    txCircle(x+40*s,y-50*s,20*s*c);
    txCircle(x-40*s,y-50*s,20*s*c);
    txLine(x-40*s,y+50*s,x+40*s,y+50*s);
}

void drawCar(int x,int y,double s,COLORREF color,COLORREF color1,COLORREF color2,int light_on)
{
    txSetColor(color,5*s);
    txSetFillColor(color1);
    POINT car[6] = {{x,y},{x,y-100*s},{x+200*s,y-100*s},{x+200*s,y-50*s},{x+300*s,y-50*s},{x+300*s,y}};
    txPolygon (car,6);
    txSetColor(color,15*s);
    txSetFillColor(color2);
    txCircle(x+25*s,y,40*s);
    txCircle(x+250*s,y,40*s);

    if(light_on)
        txSetFillColor(TX_BLUE);
    else
        txSetFillColor(TX_YELLOW);

    txSetColor(color,3*s);
    txCircle(x+175*s,y-75*s,20*s);
}

void drawTrawa(int x,int y)
{
    txSetColor(RGB(173,255,47));
    txSetFillColor(RGB(173,255,47));
    POINT trawa[4] = {{x,y},{x,y-300},{x-1500,y-300},{x-1500,y}};
    txPolygon (trawa,4);
}

void drawOblaco(int x,int y)
{
    txSetFillColor(TX_WHITE);
    txSetColor(TX_WHITE);
    txCircle(x,y,100);
    txCircle(x+100,y,50);
    txCircle(x-100,y,50);
}
