#include "TXLib.h"
//! @file LizaLibnew.h


/*!
    rocks -  функция рисует камень.
    \param int x, int y - координаты фигуры. COLORREF color - цвет. int type = 1/2/3 - тип камня, int count - количество камней, double length, double size - размер в высоту и ширину.
*/
void rocks(int x, int y,int type,COLORREF color, int count, double length, double size){
    txSetColor(color);
    txSetFillColor(color);
        for (int i=0;i<count;++i){
            if (type==1){
                POINT ROCK[4]={{int(10*size+x+i*50*size),int(60*length+y)},{int(20*size+x+i*50*size),
                int(50*length+y)},{int(40*size+x+i*50*size),int(50*length+y)},
                {int(50*size+x+i*50*size),int(60*length+y)}};
                txPolygon(ROCK,4);
            }
            if(type==2){
                POINT ROCK[5]={{int(40*size+x+i*60*size),int(40*length+y)},{int(50*size+x+i*60*size),
                int(30*length+y)},{int(60*size+x+i*60*size),int(30*length+y)},
                {int(70*size+x+i*60*size),int(20*length+y)},{int(90*size+x+i*60*size),int(40*length+y)}};
                txPolygon(ROCK,5);

            }
            if(type==3){
                POINT ROCK[7]={{int(100*size+x+i*60*size),int(50*length+y)},{int(100*size+x+i*60*size),
                int(40*length+y)},{int(110*size+x+i*60*size),int(30*length+y)},
                {int(120*size+x+i*60*size),int(30*length+y)},{int(130*size+x+i*60*size),int(40*length+y)},
                {int(140*size+x+i*60*size),int(40*length+y)},{int(150*size+x+i*60*size),int(50*length+y)}};
                txPolygon(ROCK,7);

            }
        }

}



/*!
    coral -  функция рисует многоэтажный коралл.
    \param int x, int y - координаты фигуры. COLORREF color - цвет.int n - количество этажей, int shift - смещение в сторону, double length, double width - размер в высоту и ширину.
*/

void coral(int x, int y1, int n,COLORREF color,int shift,double width,double lenght){
    txSetColor(color);
    txSetFillColor(color);
    double y = y1;
    for (int i=0;i<n;++i){
        POINT Coral[10]={{int(50*width+x),int(100*lenght+y)},{int(60*width+x),int(100*lenght+y)},{int(60*width+x),int(80*lenght+y)},
        {int(80*width+x+shift*width),int(60*lenght+y-shift*lenght)},{int(70*width+x+shift*width),int(60*lenght+y-shift*lenght)},
        {int(60*width+x),int(70*lenght+y)},{int(50*width+x),int(70*lenght+y)},{int(40*width+x-shift*width),int(60*lenght+y-shift*lenght)},
        {int(30*width+x-shift*width),int(60*lenght+y-shift*lenght)},{int(50*width+x),int(80*lenght+y)}};
        txPolygon(Coral,10);
        y=y+30*lenght;
    }
}

/*!
algae -  функция рисует водоросли.
    \param  x - координаты фигуры
    \param  y - координаты фигуры.
    \param COLORREF color - цвет. int n - количество водорослей, int direction - направление, double length, double size - размер в высоту и ширину
*/

void algae(int x, int y,int shift,COLORREF color, int count,int direction, double length, double size){
    txSetColor(color);
    txSetFillColor(color);
    for (int i=0;i<count;++i){
        if (i%2==1){
            POINT Algae[8]={{int(20*direction*size+x+i*30*size),int(60*length+y+30*length)},{int(30*direction*size+x+i*30*size),
            int(60*length+y+30*length)},{int(40*direction*size+x+shift+i*30*size),int(40*length+y+30*length)},
            {int(30*direction*size+x+shift+i*30*size),int(30*length+y+30*length)},{int(50*direction*size+x+shift+i*30*size),
            int(10*length+y+30*length)},{int(40*direction*size+x+shift+i*30*size),int(10*length+y+30*length)},
            {int(20*direction*size+x+shift+i*30*size),int(30*length+y+30*length)},{int(30*direction*size+x+shift+i*30*size),int(40*length+y+30*length)}};
            txPolygon(Algae,8);
        } else {
            POINT Algae[8]={{int(20*direction*size+x+i*30*size),int(60*length+y)},{int(30*direction*size+x+i*30*size),
            int(60*length+y)},{int(40*direction*size+x+shift+i*30*size),int(40*length+y)},
            {int(30*direction*size+x+shift+i*30*size),int(30*length+y)},{int(50*direction*size+x+shift+i*30*size),
            int(10*length+y)},{int(40*direction*size+x+shift+i*30*size),int(10*length+y)},
            {int(20*direction*size+x+shift+i*30*size),int(30*length+y)},{int(30*direction*size+x+shift+i*30*size),int(40*length+y)}};
            txPolygon(Algae,8);
        }

    }
}

/*!
fish - функия рисует рыбу.
    \param int x, int y - координаты фигуры. double n -  размер. COLORREF color - цвет. int tail - увеличение\уменьшение хвоста. int eyes (1/0) - наличие глаза. int direction - направление. int gills - количество жабр
*/

void fish(int x,int y,double n, COLORREF color,int tail,int eyes,int direction, int gills){
    txSetColor(color);
    txSetFillColor(color);
    POINT Fish[17]={{int(10*n*direction+x),int(30*n+y)},{int(10*n*direction+x),int(25*n+y)},{int(25*n*direction+x),int(10*n+y)},{int(55*n*direction+x),int(0*n+y)},
    {int(50*n*direction+x),int(15*n+y)},{int(45*n*direction+x),int(10*n+y)},{int(60*n*direction+x),int(20*n+y)},{int(65*n*direction+x),int(25*n+y)},
    {int(70*n*direction+x),int(25*n+y)},{int(80*n*direction+x+tail),int(15*n+y-tail)},{int(80*n*direction+x+tail),int(50*n+y+tail)},
    {int(70*n*direction+x),int(40*n+y)},{int(40*n*direction+x),int(55*n+y)},{int(50*n*direction+x),int(70*n+y)},{int(30*n*direction+x),int(55*n+y)},
    {int(20*n*direction+x),int(50*n+y)},{int(15*n*direction+x),int(45*n+y)}};
    txPolygon(Fish,17);
    if(eyes==1){
        txSetColor(TX_WHITE);
        txSetFillColor(TX_WHITE);
        txCircle(24*n*direction+x,25*n+y,4*n);
        txSetColor(TX_BLACK);
        txSetFillColor(TX_BLACK);
        txCircle(24*n*direction+x,25*n+y,2*n);
    }
    txSetColor(TX_BLACK);
    for(int i=0;i<gills;++i){
        txLine(30*n*direction+x+i*5*n*direction,23*n+y,30*n*direction+x+i*5*n*direction,42*n+y);
    }

}

/*!
shark - функия рисует акулу.
    \param  int x, int y - координаты фигуры. double n -  размер. COLORREF color - цвет. int eyes (1/0) - наличие глаза. int direction - направление. int gills - количество жабр
*/

void shark(int x,int y,double n, COLORREF color,int eyes,int direction, int gills){
    txSetColor(color);
    txSetFillColor(color);
    POINT Shark[25]={{int(0*n*direction+x),int(80*n+y)},{int(40*n*direction+x),int(60*n+y)},{int(80*n*direction+x),int(50*n+y)},
    {int(100*n*direction+x),int(50*n+y)},{int(140*n*direction+x),int(10*n+y)},{int(160*n*direction+x),int(0*n+y)},
    {int(150*n*direction+x),int(30*n+y)},{int(150*n*direction+x),int(50*n+y)},
    {int(200*n*direction+x),int(70*n+y)},{int(220*n*direction+x),int(50*n+y)},{int(240*n*direction+x),int(20*n+y)},
    {int(250*n*direction+x),int(10*n+y)},{int(220*n*direction+x),int(80*n+y)},{int(220*n*direction+x),int(100*n+y)},
    {int(230*n*direction+x),int(120*n+y)},
    {int(210*n*direction+x),int(110*n+y)},{int(200*n*direction+x),int(90*n+y)},{int(150*n*direction+x),int(100*n+y)},
    {int(120*n*direction+x),int(110*n+y)},
    {int(130*n*direction+x),int(130*n+y)},{int(90*n*direction+x),int(110*n+y)},{int(50*n*direction+x),int(105*n+y)},
    {int(60*n*direction+x),int(100*n+y)},
    {int(30*n*direction+x),int(100*n+y)},{int(0*n*direction+x),int(80*n+y)}};
    txPolygon(Shark,25);
    if(eyes==1){
        txSetColor(TX_WHITE);
        txSetFillColor(TX_WHITE);
        txCircle(50*n*direction+x,70*n+y,4*n);
        txSetColor(TX_BLACK);
        txSetFillColor(TX_BLACK);
        txCircle(50*n*direction+x,70*n+y,2*n);
    }
    txSetColor(TX_BLACK);
    for(int i=0;i<gills;++i){
        txLine(70*n*direction+x+10*i*n*direction,65*n+y,70*n*direction+x+10*i*n*direction,95*n+y);
    }

}



