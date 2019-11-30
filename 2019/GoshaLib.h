#include "TXLib.h"

/**
*\file "GoshaLib.h"
*\author Gosch
*\date 2019-11-26
*/


/**
\param x x- координата опорной точки x
\param y y-координата опорной точки y
\param COLORREF color-цвет линий
\param double scale  double scale-размер
\param lag lag отвечает за изменение размера ноги
\param
*/

void draw_sticmen1(int x,int y,COLORREF color,double scale);
void draw_scp173(int x,int y,COLORREF color,double scale);
void draw_blackstikmen(int x,int y,COLORREF color,double scale);
void draw_scp999(int x,int y,COLORREF color,double scale,int lag);
void draw_frog(int x,int y,COLORREF color,double scale);

void draw_sticmen1(int x,int y,COLORREF color,double scale)

{


    txSetColor(TX_RED,22);      //стикмен с желтой голвой
    txSetColor(RGB(143,27,4));
    txLine(x-50*scale,y+50*scale,x,y);
    txLine(x,y,x+50*scale,y+50*scale);
    txSetColor(TX_BLUE,20);
    txSetColor(RGB(4,127,143));
    txLine(x,y,x-25*scale,y-100*scale);
    txLine(x,y,x+50*scale,y-100*scale);
    txLine(x-25*scale,y-100*scale,x-75*scale,y-50*scale);
    txLine(x-25*scale,y-100*scale,x+50*scale,y-100*scale);
    txLine(x+50*scale,y-100*scale,x+100*scale,y-50*scale);
    txSetColor(TX_YELLOW,19);
    txLine(x,y-100*scale,x-50*scale,y-150*scale);
    txLine(x-50*scale,y-150*scale,x,y-200*scale);
    txLine(x,y-200*scale,x+50*scale,y-150*scale);
    txLine(x+50*scale,y-150*scale,x,y-100*scale);


}

void draw_scp173(int x,int y,COLORREF color,double scale)


{
    txSetColor(color,30*scale);             //SCP-173
    txSetColor(RGB(194,160,97),19);
    txLine(x-50*scale,y+425*scale,x-50*scale,y+500*scale);
    txLine(x+25*scale,y+425*scale,x+25*scale,y+500*scale);
    txLine(x+50*scale,y+250*scale,y-50*scale,y+250*scale);
    txLine(x+50*scale,y+175*scale,y-50*scale,y+175*scale);
    txSetColor(color,30*scale);
    txSetColor(RGB(194,160,97),5*scale);
    txLine(x-50*scale,y+425*scale,x+25*scale,y+425*scale);
    txLine(x+25*scale,y+425*scale,x+50*scale,y+375*scale);
    txLine(x+50*scale,y+375*scale,x+50*scale,y+100*scale);
    txLine(x+50*scale,y+100*scale,x+25*scale,y+75*scale);
    txCircle(x,y,75*scale); //голова
    txSetColor(color);
    txSetColor(RGB(99, 140, 58),10);
    txCircle(x-25*scale,y-25*scale,10*scale);
    txLine(x-25*scale,y-25*scale,x-25*scale,y-25*scale);
    txLine(x+25*scale,y-25*scale,x+25*scale,y-25*scale);
    txLine(x+25*scale,y-25*scale,x+25*scale,y-25*scale);
    txLine(x-25*scale,y-25*scale,x-25*scale,y-25*scale);
    txFillColor(99, 140, 58);
    txCircle(x+25*scale,y-25*scale,9*scale);
    txSetColor(color);
    txSetColor(RGB(194,33,46),9*scale);
    txLine(x,y,x-25*scale,y+50*scale);
    txLine(x,y,x+25*scale,y+50*scale);
    txLine(x,y,x,y-50*scale);
    txSetColor(TX_BLACK,13*scale);
    txLine(x-25*scale,y+50*scale,x-25*scale,y+50*scale);
    txLine(x+25*scale,y+50*scale,x+25*scale,y+50*scale);
    txSetColor(color);
    txSetColor(RGB(194,160,97),5*scale);
    txLine(x+25*scale,y+75*scale,x-25*scale,y+75*scale);
    txLine(x-25*scale,y+75*scale,x-75*scale,y+375*scale);
    txLine(x-75*scale,y+375*scale,x-50*scale,y+425*scale);
}

void draw_blackstikmen(int x,int y,COLORREF color,double scale)


{

    txSetColor(TX_GREEN);
    txSetColor(RGB(17,79,87),14);   ///стикмен черный
    txCircle(x,y,25);
    txLine(x,y+25*scale,x,y+125*scale);
    txLine(x,y+50*scale,x-50*scale,y+100*scale);
    txLine(x,y+50*scale,x+50*scale,y+100*scale);
    txLine(x,y+125*scale,x-50*scale,y+175*scale);
    txLine(x,y+125*scale,x+50*scale,y+175*scale);
}

void draw_scp999(int x,int y,COLORREF color,double scale,int lag)


{
    txSetColor(TX_GREEN);               //∆≈Ћ≈… ј
    txSetColor(RGB(250,158,10),15);
    txLine(x-50*scale,y+25*scale+lag,x-50*scale,y+100*scale);
    txLine(x,y+25*scale,x,y+100*scale);
    txLine(x+50*scale,y+25*scale,x+50*scale,y+100*scale);
    txCircle(x,y,55*scale);
    txSetColor(TX_GREEN);
    txSetColor(RGB(0,0,0),14);
    txCircle(x-25*scale,y-25*scale,13*scale);
    txSetColor(TX_WHITE,10);
    txLine(x-25*scale,y-25*scale,x-25*scale,y-25*scale);
    txSetColor(TX_BLACK,14);
    txCircle(x+25*scale,y-25*scale,13*scale);
    txSetColor(TX_WHITE,10);
    txLine(x+25*scale,y-25*scale,x+25*scale,y-25*scale);
}

void draw_frog(int x,int y,COLORREF color,double scale)


{
   txSetColor(TX_GREEN); //л€гух
    txCircle(x-25*scale,y-50*scale,25*scale);
    txCircle(x+50*scale,y-50*scale,25*scale);
    txSetColor(TX_BLACK,12);
    txSetColor(TX_GREEN,12);
    txLine(x-25*scale,y-50*scale,x-25*scale,y-50*scale);
    txLine(x+50*scale,y-50*scale,x+50*scale,y-50*scale);
    txLine(x-75*scale,y-25*scale,x+50*scale,y-25*scale);
    txLine(x-75*scale,y-25*scale,x,y);
    txLine(x,y,x+50*scale,y-25*scale);
    txLine(x-75*scale,y-25*scale,x-125*scale,y+25*scale);
    txLine(x+50*scale,y-25*scale,x+125*scale,y+25*scale);
    txLine(x,y,x-75*scale,y+50*scale);
    txLine(x,y,x+50*scale,y+50*scale);
}
