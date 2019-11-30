#include "TXLib.h"
///@file "yar_lib.h"
///\author yaroslav gospodin_kucher

/**
\brief IZBUSHKA
\details основные функции
\param x            перемещение по оси x
\param y            перемещение по оси y
\param scale        размер персонажа
\param color        цвет персонажа
\param legs         цвет ног
\param up_teeth     высота подъёма верхней челюсти
\param down_teeth   высота подъёма нижней челюсти
\param izb_side     положение избушки(вверх ногами/вниз)
\param teeth        наличие зубов у избушки
\param izb_rightleg положение правой ноги избушки
\param izb_leftleg  положение левой ноги избушки
\code
    draw_izbushka(300,350,0.8,TX_RED,TX_BLUE,10,10,1,1,50,50);
\endcode
*/
void draw_izbushka( int x, int y,double scale, COLORREF color, COLORREF legs,int up_teeth,int down_teeth,int izb_side,int teeth,int izb_rightleg,int izb_leftleg);
/**
\brief CHELOVEK
\details основные функции
\param x         перемещение по оси x
\param y         перемещение по оси y
\param scale     размер персонажа
\param colorHead цвет головы человека
\param colorBody цвет тела человека
\param legs цвет ног
\param colorEyes цвет глаз
\param Right_leg положение правой ноги человека
\param Left_leg  положение левой ноги человека
\param chel_side положение человека(вверх ногами/вниз)
\param head      наличие головы у человека
\param backColor цвет контура
\code
    draw_chlovek(700,350,0.5,TX_YELLOW,TX_GREEN,TX_GREEN,TX_RED,13,13,1,1, TX_BLACK);
\endcode
*/
void draw_chlovek(int x, int y,double scale,COLORREF colorHead,COLORREF colorBody, COLORREF legs,COLORREF colorEyes,int Right_leg, int Left_leg,int chel_side, int head,COLORREF backColor);
/**
\brief ROBOT
\details основные функции
\param x          перемещение по оси x
\param y          перемещение по оси y
\param scale      размер персонажа
\param color      цвет персонажа
\param legs       цвет ног
\param Rrobot_leg длина правой ноги робота
\param Lrobot_leg длина левой ноги робота
\param rob_side   положение робота(вверх ногами/вниз)
\param leg        наличие ног у робота
\code
    draw_robot(1075,350,0.4,TX_PINK,TX_GREEN,50,50,-1,1);
\endcode
*/
void draw_robot(int x,int y,double scale, COLORREF color, COLORREF legs,int Rrobot_leg, int Lrobot_leg,int rob_side,int leg);
/**
\brief LAMP
\details основные функции
\param x         перемещение по оси x
\param y         перемещение по оси y
\param scale     размер персонажа
\param color     цвет персонажа
\param legs      цвет ног
\param Side      положение персонаже(смотрит влево/вправо)
\param UpDown    высота подставки ножки
\param lamp_side положение лампы(вверх ногами/вниз)
\param light     наличие лампочки
\code
    draw_lamp(1325,425,0.7,TX_ORANGE,TX_RED,10,10,-1,1);
\endcode
*/
void draw_lamp(int x,int y, double scale,COLORREF color, COLORREF legs,int Side, int UpDown,int lamp_side, int light);
/**
\brief VIRUS
\details основные функции
\param x              перемещение по оси x
\param y              перемещение по оси y
\param scale          размер персонажа
\param color          цвет персонажа
\param legs           цвет ног
\param Rdownvirus_leg положение правой ноги
\param Ldownvirus_leg положение левой ноги
\param virus_side     положение вируса(вверх ногами/вниз)
\param v_head         наличие головы у вируса
\code
    draw_lamp(1325,425,0.7,TX_ORANGE,TX_RED,10,10,-1,1);
\endcode
*/
void draw_virus(int x, int y,double scale, COLORREF color, COLORREF legs,int Rdownvirus_leg,int Ldownvirus_leg,int virus_side,int v_head);

void draw_izbushka(int x, int y,double scale, COLORREF color, COLORREF legs, int up_teeth,int down_teeth, int izb_side, int teeth,int izb_rightleg,int izb_leftleg)
{
    txSetColor(TX_BLACK,5);
    txSetFillColor(color);
    POINT roof[3]={{x,int(y-250*scale*izb_side)},{int(x-150*scale),int(y-100*scale*izb_side)},{int(x+150*scale),int(y-100*scale*izb_side)}};// ROOF
    txPolygon(roof,3);
    txRectangle(x-150*scale,y-100*scale*izb_side,x+150*scale,y+50*scale*izb_side);// BODY
    txSetColor(legs,5);//LEGS
    txLine(x-100*scale,y+50*scale*izb_side,(x-100+izb_leftleg)*scale,y+250*scale*izb_side);//l
    txLine(x+100*scale,y+50*scale*izb_side,(x+100+izb_rightleg)*scale,y+250*scale*izb_side);//r
    txSetColor(TX_BLACK,5);
    txLine((x-100+izb_leftleg)*scale,y+250*scale*izb_side,(x-100+izb_leftleg)*scale,y+300*scale*izb_side);
    txLine((x-100+izb_leftleg)*scale,y+250*scale*izb_side,(x-50+izb_leftleg)*scale,y+300*scale*izb_side);
    txLine((x-100+izb_leftleg)*scale,y+250*scale*izb_side,(x-150+izb_leftleg)*scale,y+300*scale*izb_side);
    txLine((x+100+izb_rightleg)*scale,y+250*scale*izb_side,(x+100+izb_rightleg)*scale,y+300*scale*izb_side);
    txLine((x+100+izb_rightleg)*scale,y+250*scale*izb_side,(x+50+izb_rightleg)*scale,y+300*scale*izb_side);
    txLine((x+100+izb_rightleg)*scale,y+250*scale*izb_side,(x+150+izb_rightleg)*scale,y+300*scale*izb_side);
    txSetFillColor(TX_RED);//WINDOW
    txRectangle(x-25*scale,y-175*scale*izb_side,x+25*scale,y-125*scale*izb_side);
    txSetFillColor(TX_WHITE);
    if (teeth==1)
    {
        POINT teeth[9]={{int(x-100*scale),int(y+(50+down_teeth)*scale*izb_side)},
                    {int(x-100*scale),int(y-(50-down_teeth)*scale*izb_side)},
                    {int(x-50*scale),int(y+(50+down_teeth)*scale*izb_side)},
                    {int(x-25*scale),int(y-(50-down_teeth)*scale*izb_side)},
                    {x,int(y+(50+down_teeth)*scale*izb_side)},
                    {int(x+25*scale),int(y-(50-down_teeth)*scale*izb_side)},
                    {int(x+50*scale),int(y+(50+down_teeth)*scale*izb_side)},
                    {int(x+100*scale),int(y-(50-down_teeth)*scale*izb_side)},
                    {int(x+100*scale),int(y+(50+down_teeth)*scale*izb_side)}};//TEETH
        txPolygon(teeth,9);
        POINT teeth1[3]={{int(x-100*scale),int(y-(100+up_teeth)*scale*izb_side)},
                    {int(x-50*scale),int(y-(100+up_teeth)*scale*izb_side)},
                    {int(x-50*scale),int(y+(50-up_teeth)*scale*izb_side)}};
        txPolygon(teeth1,3);
        POINT teeth2[3]={{int(x+100*scale),int(y-(100+up_teeth)*scale*izb_side)},
                    {int(x+50*scale),int(y-(100+up_teeth)*scale*izb_side)},
                    {int(x+50*scale),int(y+(50-up_teeth)*scale*izb_side)}};
        txPolygon(teeth2,3);
    }

}



void draw_chlovek(int x, int y,double scale, COLORREF colorHead,COLORREF colorBody, COLORREF legs,COLORREF colorEyes,int Right_leg, int Left_leg,int chel_side, int head,COLORREF backColor)

{
    txSetColor(backColor,5);
    if(head==1)
    {
        txSetFillColor(colorHead);//HEAD
        txRectangle(x-50*scale,y-250*scale*chel_side,x+50*scale,y-150*scale*chel_side);
        txSetFillColor(colorBody);//BODY
    }
    txRectangle(x-50*scale,y-150*scale*chel_side,x+50*scale,y+50*scale*chel_side);
    POINT arm1[4]={{int(x-100*scale),int(y-(150*scale*chel_side))},{int(x-50*scale),int(y-(150*scale*chel_side))},{int(x-150*scale),int(y+(50*scale*chel_side))},
                    {int(x-200*scale),int(y+(50*scale*chel_side))}};//arms
    txPolygon(arm1,4);
    POINT arm2[4]={{int(x+100*scale),int(y-(150*scale*chel_side))},{int(x+50*scale),int(y-(150*scale*chel_side))},{int(x+150*scale),int(y+(50*scale*chel_side))},
                    {int(x+200*scale),int(y+(50*scale*chel_side))}};
    txPolygon(arm2,4);
    txSetFillColor(legs);//LEGS
    POINT right_leg[4]={{int(x-50*scale),int(y+(50*scale*chel_side))},
                        {x,int(y+(50+Right_leg)*scale*chel_side)},
                        {int(x-Right_leg),int(y+(300*scale*chel_side))},
                        {int(x-(50+Right_leg)*scale),int(y+(300-Right_leg)*scale*chel_side)}};
    txPolygon(right_leg,4);
    POINT left_leg[4]={{x,int(y+(50+Left_leg)*scale*chel_side)},
                        {int(x+50*scale),int(y+(50*scale*chel_side))},
                        {int(x+(50+Left_leg)*scale),int(y+(300-Left_leg)*scale*chel_side)},
                        {int(x+Left_leg),int(y+(300*scale*chel_side))}};
    txPolygon(left_leg,4);
    //txSetColor(TX_BLACK,5);
    //txLine(x-25*scale,y-225*scale*chel_side,x-25*scale,y-175*scale*chel_side);//EYES
    //txLine(x+25*scale,y-225*scale*chel_side,x+25*scale,y-175*scale*chel_side);
    txSetColor(colorEyes,10);
    txLine(x-25*scale,y-200*scale*chel_side,x-25*scale,y-200*scale*chel_side);
    txLine(x+25*scale,y-200*scale*chel_side,x+25*scale,y-200*scale*chel_side);
}

void draw_robot(int x,int y,double scale, COLORREF color, COLORREF legs,int Rrobot_leg, int Lrobot_leg,int rob_side,int leg)

{
    txSetColor(TX_BLACK,5);
    txSetFillColor(color);
    txRectangle(x-75*scale,y-250*scale*rob_side,x+75*scale,y-150*scale*rob_side);//HEAD
    txRectangle(x-25*scale,y-150*scale*rob_side,x+25*scale,y-100*scale*rob_side);//NECK
    txRectangle(x-75*scale,y-100*scale*rob_side,x+75*scale,y+50*scale*rob_side);//BODY
    txRectangle(x-125*scale,y-100*scale*rob_side,x-75*scale,y+50*scale*rob_side);//ARMS
    txRectangle(x+125*scale,y-100*scale*rob_side,x+75*scale,y+50*scale*rob_side);
    txRectangle(x-25*scale,y+50*scale*rob_side,x+25*scale,y+250*scale*rob_side);
    txSetFillColor(legs);//LEGS
    if(leg==1)
    {
        txLine(x-25*scale,y+200*scale*rob_side,x-(50+Lrobot_leg)*scale,y+200*scale*rob_side);
        txLine(x+25*scale,y+200*scale*rob_side,x+(50+Rrobot_leg)*scale,y+200*scale*rob_side);
        txRectangle(x-(100+Lrobot_leg)*scale,y+150*scale*rob_side,x-(50+Lrobot_leg)*scale,y+250*scale*rob_side);
        txRectangle(x+(100+Rrobot_leg)*scale,y+150*scale*rob_side,x+(50+Rrobot_leg)*scale,y+250*scale*rob_side);
    }
    txSetColor(TX_RED,10);
    txLine(x+25*scale,y-200*scale*rob_side,x+25*scale,y-200*scale*rob_side);
    txLine(x-25*scale,y-200*scale*rob_side,x-25*scale,y-200*scale*rob_side);

}

void draw_lamp(int x,int y,double scale, COLORREF color, COLORREF legs,int Side, int UpDown,int lamp_side,int light)

{

    txSetFillColor(color);
    txSetColor(legs,5);//LEG
    txEllipse(x-(75+Side)*scale,y+(75-UpDown)*scale,x+(75+Side)*scale,y+(175+UpDown)*scale);
    txLine(x,y+125*scale,x,y-225*scale);
    txSetColor(TX_BLACK,5);
    txSetFillColor(TX_ORANGE);//HEAD
    POINT triangle[3]={{x,int(y-225*scale)},{int(x+125*scale*lamp_side),int(y-325*scale)},{int(x+125*scale*lamp_side),int(y-125*scale)}};
    txPolygon(triangle,3);
    txSetFillColor(TX_YELLOW);
    if(light==1)
    {
        txRectangle(x+125*scale*lamp_side,y-250*scale,x+175*scale*lamp_side,y-200*scale);
    }
    txLine(x,y+175*scale,x,y+225*scale);
    txRectangle(x-25*scale,y+225*scale,x+25*scale,y+275*scale);
    txLine(x,y+250*scale,x,y+275*scale);
}

void draw_virus(int x,int y,double scale, COLORREF color, COLORREF legs,int Rvirus_leg,int Lvirus_leg, int virus_side, int v_head)

{
    txSetColor(TX_BLACK,5);
    txSetFillColor(color);
    if(v_head==1)
    {
        POINT romb[4]={{x,int(y-200*scale*virus_side)},{int(x-75*scale),int(y-100*scale*virus_side)},{x,y},{int(x+75*scale),int(y-100*scale*virus_side)}};//HEAD
        txPolygon(romb,4);
        txSetColor(TX_BLUE,10);
        txLine(x,y-100*scale*virus_side,x,y-100*scale*virus_side);
    }
    txLine(x,y,x,y+200*scale*virus_side);//BODY
    txSetColor(legs);//LEGS
    txLine(x,y+200*scale*virus_side,x-75*scale,y+50*scale*virus_side);
    txLine(x-75*scale,y+50*scale*virus_side,x-125*scale,y+(200)*scale*virus_side);
    txLine(x,y+200*scale*virus_side,x+75*scale,y+50*scale*virus_side);
    txLine(x+75*scale,y+50*scale*virus_side,x+125*scale,y+200*scale*virus_side);
    txLine(x,y+200*scale*virus_side,x-125*scale,y+100*scale*virus_side);//l
    txLine(x-125*scale,y+100*scale*virus_side,x-150*scale,y+(200-Lvirus_leg)*scale*virus_side);//l
    txLine(x,y+200*scale*virus_side,x+125*scale,y+100*scale*virus_side);//r
    txLine(x+125*scale,y+100*scale*virus_side,x+150*scale,y+(200-Rvirus_leg)*scale*virus_side);//r

}
