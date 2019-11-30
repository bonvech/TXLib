#include "TXLib.h"

/**
 *\file "romaLib.h"
 *\author Romzan Kashkin 8B
 *\date 2019-11-25
 */

/**
 *\brief рисует челевека

 *\param x перемещение человека по оси x
 *\param y перемещение по оси y
 *\param hand опускание или поднимание левой руки
 *\param detonator опускание и поднимание ручки детонатора
 *\param leg угулирует угол между ногами
 *\param dir переворачивает персонажа
 *\param cap появление чёткой кепки
 *\param color цвет тела
 *\param coloz цвет глаз
 *\param colop цвет бомбы
 *\param scale размер

 *ПРИМЕР КОДА
 *\code
 *    drow_people(550,550,50,0,-1,1,-3,TX_BLACK,TX_PINK,TX_RED,0.9);
 *\endcode
 */
void drow_people(int x,int y,int hand,int detonator,int leg,int dir,int cap,COLORREF color,COLORREF coloz,COLORREF colop, double scale);

/**
 *\brief рисует самолёт
 *\param x перемещение самолёта по оси x
 *\param y перемещение по оси y
 *\param ramp опускание трапа
 *\param dir поворот самолёта
 *\param Fire огонь сзади самолёта
 *\param color цвет самолёта
 *\param oi размер самолёта

 *ПРИМЕР КОДА
 *\code
 *    drow_jet(1270,100,1,1,1,RGB(0,139,139),1);
 *\endcode
 */

void drow_jet(int x,int y,int ramp,int dir,int Fire,COLORREF color,double oi);

/**
 *\brief рисует каплю
 *\param x перемещение капли по оси x
 *\param y перемещение по оси y
 *\param dir поворот капли
 *\param cozof определённый цвет капли
 *\param color любой цвет капли
 *\param scale размер капли
 *\param zqj капля может исчезнуть

 *ПРИМЕР КОДА
 *\code
 *    drow_drop(325,331,-1,1,RGB(0,149,255),1,-6);
 *\endcode
 */

void drow_drop(int x,int y,int dir,int cozof,COLORREF color,double scale,int zqj);

/**
 *\brief рисует ёлку
 *\param x перемещение ёлки по оси x
 *\param y перемещение по оси y
 *\param dir поворот ёлки
 *\param garland появление герлянды
 *\param color цвет пня
 *\param coloz цвет хвои
 *\param scale размер елки

 *ПРИМЕР КОДА
 *\code
 *    drow_christmastree(1425,600,8,-1,RGB(105,24,0),RGB(34,139,34),0.6);
 *\endcode
 */
void drow_christmastree(int x,int y,int dir,int garland,COLORREF color,COLORREF coloz,double scale);

/**
 *\brief рисует взрыв
 *\param x перемещение взрыва по оси x
 *\param y перемещение по оси y
 *\param exploion перемещение самого правого луча по оми x
 *\param explosio2 еремещение самого левого луча по оси x
 *\param dir поворот взрыва
 *\param moq появление жирного оранжевого контура
 *\param color цвет контура
 *\param coloz цвет заливки
 *\param scale размер взрыва

 *ПРИМЕР КОДА
 *\code
 *    drow_explosion(925,850,1,25,-5,-5,TX_YELLOW,RGB(248,0,0),1);
 *\endcode
 */
void drow_explosion(int x,int y,int exploion,int explosio2,int dir,int moq,COLORREF color,COLORREF coloz,double scale);


void drow_people(int x,int y,int hand,int detonator,int leg,int dir,int cap,COLORREF color,COLORREF coloz,COLORREF colop,double scale)
{
    if(dir > 0)
        dir=1;
    else
        dir=-1;
    if(cap > 0)
    {
        txSetColor(color,10);
        txSetFillColor(color);
        txCircle(x,y,50*scale);
        txLine(x,y+50*scale*dir,x,y+100*scale*dir);
        txLine(x,y+100*scale*dir,x-(25+15*leg)*scale,y+200*scale*dir);
        txLine(x,y+100*scale*dir,x+(25+15*leg)*scale,y+200*scale*dir);
        txLine(x-(25+15*leg)*scale,y+200*scale*dir,x-(50+15*leg)*scale,y+200*scale*dir);
        txLine(x+(25+15*leg)*scale,y+200*scale*dir,x+(50+15*leg)*scale,y+200*scale*dir);
        txLine(x,y+75*scale*dir,x-50*scale,y+(50+hand)*scale*dir);
        txLine(x,y+75*scale*dir,x+50*scale,y+50*scale*dir);
        txSetFillColor(colop);
        POINT tnt[4] ={{x+int(50*scale),y+int(50*scale*dir)},{x+int(100*scale),y+int(50*scale*dir)},
        {x+int(100*scale),y+int(100*scale*dir)},{x+int(50*scale),y+int(100*scale*dir)}};
        txLine(x+75*scale,y+50*scale*dir,x+75*scale,y+(25+detonator)*scale*dir);
        txLine(x+50*scale,y+(25+detonator)*scale*dir,x+100*scale,y+(25+detonator)*scale*dir);
        txPolygon(tnt,4);
        txSetColor(coloz,10);
        txLine(x-40*scale,y,x-10*scale,y);
        txLine(x+40*scale,y,x+10*scale,y);
        POINT cap[4] ={{x+int(50*scale),y-int(20*scale*dir)},{x+int(50*scale),y-int(70*scale*dir)},
                       {x-int(50*scale),y-int(70*scale*dir)},{x-int(50*scale),y-int(20*scale*dir)}};
        txLine(x+50*scale,y-20*scale*dir,x+100*scale,y-20*scale*dir);
        txPolygon(cap,4);
    }
    else
    {
        txSetColor(color,10);
        txSetFillColor(color);
        txCircle(x,y,50*scale);
        txLine(x,y+50*scale*dir,x,y+100*scale*dir);
        txLine(x,y+100*scale*dir,x-(25+15*leg)*scale,y+200*scale*dir);
        txLine(x,y+100*scale*dir,x+(25+15*leg)*scale,y+200*scale*dir);
        txLine(x-(25+15*leg)*scale,y+200*scale*dir,x-(50+15*leg)*scale,y+200*scale*dir);
        txLine(x+(25+15*leg)*scale,y+200*scale*dir,x+(50+15*leg)*scale,y+200*scale*dir);
        txLine(x,y+75*scale*dir,x-50*scale,y+(50+hand)*scale*dir);
        txLine(x,y+75*scale*dir,x+50*scale,y+50*scale*dir);
        txSetFillColor(colop);
        POINT tnt[4]={{x+int(50*scale),y+int(50*scale*dir)},{x+int(100*scale),y+int(50*scale*dir)},{x+int(100*scale),y+int(100*scale*dir)},{x+int(50*scale),y+int(100*scale*dir)}};
        txLine(x+75*scale,y+50*scale*dir,x+75*scale,y+(25+detonator)*scale*dir);
        txLine(x+50*scale,y+(25+detonator)*scale*dir,x+100*scale,y+(25+detonator)*scale*dir);
        txPolygon(tnt,4);
        txSetColor(coloz,10);
        txLine(x-40*scale,y,x-10*scale,y);
        txLine(x+40*scale,y,x+10*scale,y);
    }
}

void drow_drop(int x,int y,int dir,int cozof,COLORREF color,double scale,int zqj)
{
    txSetFillColor(color);
    txSetColor(color,5);
    if(dir > 0)
        dir=1;
    else
        dir=-1;
    if(cozof > 0)
    {
        txSetFillColor(color);
        txSetColor(color,5);
    }
    else
    {
        txSetFillColor(TX_BLUE);
        txSetColor(TX_BLUE,5);
    }
    if(zqj > 0)
    {
        txSetColor(TX_WHITE);
        txSetFillColor(TX_WHITE);
    }
    txCircle(x,y,25*scale);
    POINT drop[3] ={{x+int(25*scale),y},{x-int(25*scale),y},{x,y+int(50*scale*dir)}};
    txPolygon(drop,3);
}
void drow_christmastree(int x,int y,int dir,int garland,COLORREF color,COLORREF coloz,double scale)
{
    txSetColor(color);
    txSetFillColor(color);
    if(dir > 0)
        dir=1;
    else
        dir=-1;
    if(garland > 0)
    {
        POINT stump[4] ={{x+int(25*scale),y},{x+int(25*scale),y+int(50*scale*dir)},{x-int(25*scale),y+int(50*scale*dir)},{x-int(25*scale),y}};
        txPolygon(stump,4);
        txSetFillColor(coloz);
        txSetColor(coloz);
        POINT crown[19] ={{x+int(175*scale),y},{x+int(25*scale),y-int(50*scale*dir)},{x+int(125*scale),y-int(50*scale*dir)},{x+int(25*scale),y-int(100*scale*dir)},{x+int(75*scale),y-int(100*scale*dir)},
                          {x+int(25*scale),y-int(150*scale*dir)},{x+int(75*scale),y-int(150*scale*dir)},{x+int(25*scale),y-int(200*scale*dir)},
                          {x+int(75*scale),y-int(200*scale*dir)},{x,y-int(300*scale*dir)},{x-int(75*scale),y-int(200*scale*dir)},{x-int(25*scale),y-int(200*scale*dir)},{x-int(75*scale),y-int(150*scale*dir)},
                          {x-int(25*scale),y-int(150*scale*dir)},{x-int(75*scale),y-int(100*scale*dir)},{x-int(25*scale),y-int(100*scale*dir)},{x-int(125*scale),y-int(50*scale*dir)},
                          {x-int(25*scale),y-int(50*scale*dir)},{x-int(175*scale),y}
                         };
        txPolygon(crown,19);
        txSetColor(TX_RED,10);
        POINT garlan[6] ={{x-int(175*scale),y},{x+int(25*scale),y-int(50*scale*dir)},{x-int(25*scale),y-int(100*scale*dir)},
                          {x+int(25*scale),y-int(150*scale*dir)},{x-int(25*scale),y-int(200*scale*dir)},{x+int(25*scale),y-int(250*scale*dir)}
                         };
        txPolygon(garlan,6);
    }

    else
    {
        POINT stump[4] ={{x+int(25*scale),y},{x+int(25*scale),y+int(50*scale*dir)},{x-int(25*scale),y+int(50*scale*dir)},{x-int(25*scale),y}};
        txPolygon(stump,4);
        txSetFillColor(coloz);
        txSetColor(coloz);
        POINT crown[19] ={{x+int(175*scale),y},{x+int(25*scale),y-int(50*scale*dir)},{x+int(125*scale),y-int(50*scale*dir)},{x+int(25*scale),y-int(100*scale*dir)},{x+int(75*scale),y-int(100*scale*dir)},
                          {x+int(25*scale),y-int(150*scale*dir)},{x+int(75*scale),y-int(150*scale*dir)},{x+int(25*scale),y-int(200*scale*dir)},
                          {x+int(75*scale),y-int(200*scale*dir)},{x,y-int(300*scale*dir)},{x-int(75*scale),y-int(200*scale*dir)},{x-int(25*scale),y-int(200*scale*dir)},{x-int(75*scale),y-int(150*scale*dir)},
                          {x-int(25*scale),y-int(150*scale*dir)},{x-int(75*scale),y-int(100*scale*dir)},{x-int(25*scale),y-int(100*scale*dir)},{x-int(125*scale),y-int(50*scale*dir)},
                          {x-int(25*scale),y-int(50*scale*dir)},{x-int(175*scale),y}
                         };
        txPolygon(crown,19);
    }
}
void drow_explosion(int x,int y,int exploion,int explosio2,int dir,int moq,COLORREF color,COLORREF coloz,double scale)
{
    txSetColor(color,20);
    txSetFillColor(coloz);
    if(dir > 0)
        dir=1;
    else
        dir=-1;
    if(moq > 0)
        txSetColor(TX_ORANGE,30);
    else
        txSetColor(color,20);

    POINT buum[10] ={{x,y+int(50*scale)},{x+int((50+25*exploion)*scale*dir),y+int(100*scale)},{x+int(45*scale*dir),y},{x+int((150+25*exploion)*scale*dir),y-int(50*scale)},{x+int(20*scale*dir),y-int(41*scale)},
                     {x+int((5+explosio2)*scale*dir),y-int(120*scale)},{x-int(35*scale*dir),y-int(40*scale)},{x-int((150+explosio2)*scale*dir),y-int(100*scale)},{x-int(50*scale*dir),y},
                     {x-int((100+explosio2)*scale*dir),y+int(100*scale)}};
    txPolygon(buum,10);
}
void drow_jet(int x,int y,int ramp,int dir,int Fire,COLORREF color,double oi)
{
    txSetColor(color,10);
    txSetFillColor(color);
    if(dir > 0)
        dir=1;
    else
        dir=-1;
    if(Fire > 0)
    {
        POINT et[14] ={{x-int(150*oi*dir),y-int(50*oi)},{x-int(150*oi*dir),y+int(50*oi)},{x-int(25*oi*dir),y+int(50*oi)},{x-int(50*oi*dir),y+int(100*oi)},
                       {x,y+int(100*oi)},{x+int(25*oi),y+int(50*oi)},{x+int(150*oi*dir),y+int(50*oi)},
                       {x+int(100*oi*dir),y},{x+int(75*oi*dir),y},{x+int(100*oi*dir),y-int(75*oi)},{x+int(50*oi*dir),y-int(75*oi)},
                       {x+int(25*oi*dir),y},{x-int(100*oi*dir),y},{x-int(100*oi*dir),y-int(50*oi)}
                      };
        txPolygon(et,14);
        txLine(x-75*oi,y+50*oi,x-125*oi,y+(100-50*ramp)*oi);
        txSetColor(TX_ORANGE,10);
        txLine(x-150*oi*dir,y+25*oi,x-200*oi*dir,y);
        txLine(x-150*oi*dir,y+25*oi,x-200*oi*dir,y+25*oi);
        txLine(x-150*oi*dir,y+25*oi,x-200*oi*dir,y+50*oi);
    }
    else
    {
        POINT et[14] ={{x-int(150*oi*dir),y-int(50*oi)},{x-int(150*oi*dir),y+int(50*oi)},{x-int(25*oi*dir),y+int(50*oi)},{x-int(50*oi*dir),y+int(100*oi)},
                       {x,y+int(100*oi)},{x+int(25*oi*dir),y+int(50*oi)},{x+int(150*oi*dir),y+int(50*oi)},
                       {x+int(100*oi*dir),y},{x+int(75*oi*dir),y},{x+int(100*oi*dir),y-int(75*oi)},{x+int(50*oi*dir),y-int(75*oi)},
                       {x+int(25*oi*dir),y},{x-int(100*oi*dir),y},{x-int(100*oi*dir),y-int(50*oi)}
                      };
        txPolygon(et,14);
        txLine(x-75*oi,y+50*oi,x-125*oi,y+(100-50*ramp)*oi);
    }
}

