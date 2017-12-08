//! @file    CheBobLib.h
//! @brief   Библиотека Владимира Черничкина (CheBobLib).
//! @brief @warning   АХТУНГ!!! Эта библиотека работает ТОЛЬКО совместно с библиотекой Тупого Художника, разработанной И. Р. Дединским ("TXLib.h")
//! @brief @warning @warning   {ДЛЯ УЧЕНИКОВ} СМОТРИТЕ СЮДА!!! Если вы вдруг нарушите АВТОРСКОЕ ПРАВО, то вас покарают. Как, я не скажу. Это может быть снайпер за вашим окном, может быть вирусная атака. НО знайте и помните: Я за вами слежу!
//!   By Chebobka76
#include <TXLib.h>
//{----------------------------------------------------------------------------------------------------------------
//! @brief   Рисует божью коровку с изменением цвета, размера и высоты.
//!
//! @param x координата по горизонтали
//! @param y координата по вертикали
//! @param z размер (единица - стандартный размер, какое число вводите, ВО столько раз увеличивается размер)
//! @param c цвет божьей коровки (вводите какую-нибудь фигню наподобие "TX_YELLOW" или "RGB(255, 127, 0)")
//! @param n расстояние, на которое сдвигаются ножки(вперёд - положительное число, назад - отрицательное) в пикселах
//! @param b цвет пятнышек (только 0 или 1, 0 - чёрные, 1 - белые)
//! @param h высота (единица - стандартная высота, какое число вводите, ВО столько раз увеличивается высота)
//!
//! @warning    если сделать параметр z/n/h слишком большим, то будет печалька ( ?° ?? ?°)
//! @warning    если сделать параметр x/y слишком большим, то жука не будет ?\_(?)_/?
//!
//! @usage
//!     @code
//!          DrawBug(600, 300, 1, RGB(255, 127, 0), 10, 1, 1);
//!          //Я - корова
//!     @endcode
//}----------------------------------------------------------------------------------------------------------------
void DrawBug(   int x, int y, double z, COLORREF c,             double n,    int b, double h); //Function prototype


//{----------------------------------------------------------------------------------------------------------------
//! @brief   Рисует дом с изменением цвета, размера и высоты.
//!
//! @param x координата по горизонтали
//! @param y координата по вертикали
//! @param z размер (единица - стандартный размер, какое число вводите, ВО столько раз увеличивается размер)
//! @param c цвет блока дома (вводите какую-нибудь фигню наподобие "TX_YELLOW" или "RGB(255, 127, 0)")
//! @param d цвет крыши дома (вводите какую-нибудь фигню наподобие "TX_YELLOW" или "RGB(255, 127, 0)")
//! @param n расстояние, на которое открывается дверь(единица - дверь открыта, чем ближе к нулю, тем ,ольше закрыта)
//! @param b свет в окне (только 0 или 1, 0 - выключен, 1 - включён)
//! @param h высота (единица - стандартная высота, какое число вводите, ВО столько раз увеличивается высота)
//!
//! @warning    если сделать параметр z/n/h слишком большим, то будет фигня (? ?° ?? ?°)????
//! @warning    если сделать параметр x/y слишком большим, то дома не будет (?_?)
//!
//! @usage
//!     @code
//!          DrawHouse(600, 300, 1, RGB(255, 127, 0), RGB(200, 0, 0), 0.25, 1, 1);
//!          //Я - дом
//!     @endcode
//}----------------------------------------------------------------------------------------------------------------
void DrawHouse( int x, int y, double z, COLORREF c, COLORREF d, double n,    int b, double h); //   -||-


//{----------------------------------------------------------------------------------------------------------------
//! @brief   Рисует упоротое солнце с изменением цвета, размера и высоты.
//!
//! @param x координата по горизонтали
//! @param y координата по вертикали
//! @param z размер (единица - стандартный размер, какое число вводите, ВО столько раз увеличивается размер)
//! @param c цвет "круга" солнца (вводите какую-нибудь фигню наподобие "TX_YELLOW" или "RGB(255, 127, 0)")
//! @param d цвет глаз солнца (вводите какую-нибудь фигню наподобие "TX_YELLOW" или "RGB(255, 127, 0)")
//! @param n расстояние, на которое открывается рот (единица - рот открыт, какое число вводите, ВО столько раз увеличивается)
//! @param b моргание глаз (только 0, 1, 2 или 3. 0 - оба закрыты, 1 - оба открыты, 2 - левый глаз открыт, правый - закрыт, 4 - наоборот.)
//!
//! @warning    если сделать параметр z/n/h слишком большим, то будет нечто ?  ?° ?? ?° ?
//! @warning    если сделать параметр x/y слишком большим, то солнца не будет ( ?°( ?° ??( ?° ?? ?°)? ?°) ?°)
//!
//! @usage
//!     @code
//!          DrawSun(600, 300, 1, TX_YELLOW, TX_LIGHTCYAN, 1, 2);
//!          //Я - упоротое солнце
//!     @endcode
//}----------------------------------------------------------------------------------------------------------------
void DrawSun(   int x, int y, double z, COLORREF c, COLORREF d, double n,    int b);           //   -||-


//{----------------------------------------------------------------------------------------------------------------
//! @brief   Рисует дорогу с изменением длины, положения полос и высоты.
//!
//! @param x координата по горизонтали
//! @param y координата по вертикали
//! @param z размер (единица - стандартный размер, какое число вводите, ВО столько раз увеличивается размер)
//! @param c цвет полосок (вводите какую-нибудь фигню наподобие "TX_YELLOW" или "RGB(255, 127, 0)")
//! @param n расстояние, на которое смещаются полоски (вперёд - положительное число, назад - отрицательное) в пикселах
//! @param l добавочная длина дороги (увеличивается длина дороги вместе с количеством полосок) в пикселах
//!
//! @warning    если сделать параметр z слишком большим, то будет ^0^ (? ?° ??? ?°)?
//! @warning    если сделать параметр x/y слишком большим, то дороги не будет [??$??(?? ?° ?? ?°??)??$??]
//!
//! @usage
//!     @code
//!          DrawRoad(600, 300, 1, TX_WHITE, 0, 2);
//!          //Я - дорога
//!     @endcode
//}----------------------------------------------------------------------------------------------------------------
void DrawRoad(  int x, int y, double z, COLORREF c,             double n, double l);           //   -||-


//{----------------------------------------------------------------------------------------------------------------
//! @brief   Рисует драгстер с изменением цвета, размера и фар.
//!
//! @param x координата по горизонтали
//! @param y координата по вертикали
//! @param z размер (единица - стандартный размер, какое число вводите, ВО столько раз увеличивается размер)
//! @param c цвет кузова (вводите какую-нибудь фигню наподобие "TX_YELLOW" или "RGB(255, 127, 0)")
//! @param a угол, на который поворачивается переднее колесо (функция "DrawFWheel" в доработке, поэтому просто вводите "0")
//! @param b включение фары (только 1 и 0. 1 - включена, 0 - выключена)
//!
//! @warning    если сделать параметр z слишком большим, то будет кек (?? ?? ?)
//! @warning    если сделать параметр x/y слишком большим, то драгстера не будет [??$??(?? ?° ?? ?°??)??$??]
//!
//! @usage
//!     @code
//!          DrawCar(600, 300, 1, TX_ORANGE, 0, 1);
//!          //Я - Драгстер
//!     @endcode
//}----------------------------------------------------------------------------------------------------------------
void DrawCar(   int x, int y, double z, COLORREF c,             double a,    int b);           //   -||-


//{----------------------------------------------------------------------------------------------------------------
//! @brief @warning  Функция в доработке
//! @brief   Должна рисовать переднее колесо для функдии "DrawCar"
//}----------------------------------------------------------------------------------------------------------------
void DrawFWheel(int x, int y, double z,                         double a);                     //   -||-

//Draw Bug         (function)
void DrawBug(   int x, int y, double z, COLORREF c,             double n,    int b, double h) //x=1360; y=640
{

    COLORREF m = TX_WHITE;
    if(b == 0)
        m = TX_BLACK;

    //Draw legs
    txSetColor(TX_BROWN, 5*z);
    int i = 0;
    for(i; i < 6; i++)
        txLine(x-45*z+i*18*z, y-5*z, x-45*z+i*18*z+n*z, y+15*z);
/*
    txLine(x-45*z, y-5*z, (x-45*z)-n*z, y+15*z);
    txLine(x-27*z, y-5*z, (x-27*z)-n*z, y+15*z);
    txLine(x- 9*z, y-5*z, (x- 9*z)-n*z, y+15*z);
    txLine(x+ 9*z, y-5*z, (x+ 9*z)-n*z, y+15*z);
    txLine(x+27*z, y-5*z, (x+27*z)-n*z, y+15*z);
    txLine(x+45*z, y-5*z, (x+45*z)-n*z, y+15*z);
*/

    //Draw body
    txSetColor(m, 5*z);
    txSetFillColor(c);
    txPie(x+50*z, y+50*z*h, x-50*z, y-50*z*h, 0, 180);

    //Draw dots

    txSetColor(m);
    txSetFillColor(m);
    txCircle(x     , y-10*z  , 10*z);
    txCircle(x-20*z, y-35*z*h, 10*z);
    txCircle(x+20*z, y-35*z*h, 10*z);
    txCircle(x+40*z, y-10*z  , 10*z);
    txCircle(x-40*z, y-10*z  , 10*z);
}

//Draw House       (function)
void DrawHouse( int x, int y, double z, COLORREF c, COLORREF d, double n,    int b, double h) //x=1150; y=500
{

    COLORREF m = TX_YELLOW;
    if(b == 0)
        m = RGB (131, 111, 255);

    //Draw block
    txSetColor(TX_BROWN, 5*z);
    txSetFillColor(        c); //RGB (210, 180, 140)
    txRectangle(x+150*z, y+150*z, x-150*z, y-150*z);
    txSetFillColor( TX_BLACK);
    txRectangle(      x, y+150*z, x-120*z, y-100*z);

    //Draw roof
    txSetColor(TX_RED, 5*z);
    txSetFillColor(d); //RGB (205, 85, 85)
    POINT roof[3] = {{x-150*z, y-150*z}, {x+150*z, y-150*z}, {    x, y-150*z-100*z*h}};
    txPolygon(roof, 3);

    //Draw door
    txSetColor(RGB (139, 0, 0), 10*z);
    txSetFillColor(RGB (139, 50, 50));
    txRectangle(   x, y+150*z, x-120*z*n, y-100*z);

    //Draw window
    txSetColor(RGB (139, 115, 85), 10*z);
    txSetFillColor(m);
    txRectangle(x+130*z,  y+10*z,  x+20*z, y-100*z);
    txLine(x+75*z, y+ 8*z, x+ 75*z, y-98*z);
    txLine(x+77*z, y-45*z, x+128*z, y-45*z);

}

//Draw Sun         (function)
void DrawSun(   int x, int y, double z, COLORREF c, COLORREF d, double n,    int b) //x=1300; y=200
{

    //Draw silhouette
    txSetColor(c, 10*z); //RGB (255, 193, 37)
    txSetFillColor(c);
    txCircle(x, y, 100*z);

    //Draw smile
    txSetColor(TX_RED, 5*z);
    txSetFillColor(TX_WHITE);
    txPie(x+80*z, y-80*z*n, x-80*z, y+80*z*n, 180, 180);

    //Draw right eye
    txSetColor(TX_BLACK, 2*z);
    txSetFillColor(TX_WHITE);

    if (b == 0)
        txLine(x-60*z, y-40*z, x-20*z, y-40*z);
    else
        {
        if (b == 2)
            txLine(x-60*z, y-40*z, x-20*z, y-40*z);
        else
            {
            txCircle(x-40*z, y-40*z, 20*z);
            txSetColor(RGB (150, 200, 200), 2*z);
            txSetFillColor(d);
            txCircle(x-40*z, y-40*z, 10*z);
            txSetColor(TX_BLACK);
            txSetFillColor(TX_BLACK);
            txCircle(x-40*z, y-40*z,  3*z);
            }
        }

    //Draw left eye
    txSetColor(TX_BLACK, 2*z);
    txSetFillColor(TX_WHITE);

    if (b == 0)
        txLine(x+60*z, y-40*z, x+20*z, y-40*z);
    else
        {
        if (b == 3)
            txLine(x+60*z, y-40*z, x+20*z, y-40*z);
        else
            {
            txCircle(x+40*z, y-40*z, 20*z);
            txSetColor(RGB (150, 200, 200), 2*z);
            txSetFillColor(d);
            txCircle(x+40*z, y-40*z, 10*z);
            txSetColor(TX_BLACK);
            txSetFillColor(TX_BLACK);
            txCircle(x+40*z, y-40*z,  3*z);
            }
        }

    //Draw teeth
    txSetColor(TX_BLACK, 3*z);
    txLine(x-67*z, y+40*z*n, x+67*z, y+40*z*n);
    txLine(x     , y       , x     , y+80*z*n);
    txLine(x-40*z, y       , x-40*z, y+70*z*n);
    txLine(x+40*z, y       , x+40*z, y+70*z*n);

    //Draw eyebrows
    txSetColor(RGB (139, 69, 19), 5*z);
    txArc(x-70*z, y-70*z, x-10*z, y-10*z, 0, 180);
    txArc(x+10*z, y-70*z, x+70*z, y-10*z, 0, 180);

}

//Draw Road        (function)
void DrawRoad(  int x, int y, double z, COLORREF c,             double n, double l)        //x=750; y=725
{

//Draw asphalt
    txSetColor(RGB (40, 40, 40), 5*z);
    txSetFillColor(RGB (100, 100, 100));
    POINT road[4] = {{x, y-75*z}, {x+(1500+l)*z, y-75*z}, {x+(1500+l)*z, y+75*z}, {x, y+75*z}};
    txPolygon(road, 4);

    //Draw stripes
    txSetColor(c, 20*z);
    int i = 1;
    for(i = 1; i < (10 + int(l/175)); i++ )
        txLine(x+(175*i+n-175)*z, y, x+(175*i+n-75)*z, y);
    /*txLine(x-825*z+n, y, x-725*z+n, y);
    txLine(x-675*z+n, y, x-575*z+n, y);
    txLine(x-500*z+n, y, x-400*z+n, y);
    txLine(x-325*z+n, y, x-225*z+n, y);
    txLine(x-150*z+n, y, x- 50*z+n, y);
    txLine(x+ 25*z+n, y, x+125*z+n, y);
    txLine(x+200*z+n, y, x+300*z+n, y);
    txLine(x+375*z+n, y, x+475*z+n, y);
    txLine(x+550*z+n, y, x+650*z+n, y);
    */
}

//Draw Dragster    (function)
void DrawCar(   int x, int y, double z, COLORREF c,             double a,    int b) //x=300; y=600
{

    //Draw cabine
    txSetColor(TX_LIGHTBLUE, 5*z);
    txSetFillColor(RGB (100, 100, 255));
    txCircle(x+220*z, y-100*z, 50*z);

    //Draw dragster body
    txSetColor(TX_RED, 5*z);
    txSetFillColor(c);
    POINT dragster_body[3]   =  {{x, y-200*z}, {x, y}, {x+850*z, y+120*z}};
    txPolygon(dragster_body, 3);

    //Draw spoiler
    txSetColor(TX_GRAY, 5*z);
    txSetFillColor(RGB (20, 20, 20));
    POINT dragster_spoiler[4] = {{x, y}, {x, y-250*z}, {x+50*z,  y-250*z}, {x+50*z, y}};
    txPolygon(dragster_spoiler, 4);

    //Draw back wheel
    txSetColor(TX_BLACK, 70*z);
    txSetFillColor(TX_GRAY);
    txCircle(x, y, 150*z);

    txSetColor(TX_LIGHTGRAY);
    txSetFillColor(TX_LIGHTGRAY);
    txCircle(x, y, 100*z);

    txSetColor(TX_WHITE);
    txSetFillColor(TX_WHITE);
    txCircle(x, y,  50*z);

    txSetColor(TX_DARKGRAY);
    txSetFillColor(TX_DARKGRAY);
    txCircle(x, y,  10*z);

    txSetColor(TX_BLACK, 4*z);
    txSetFillColor(TX_DARKGRAY);
    txCircle(x, y,   4*z);

    //Draw back wing
    txSetColor(TX_RED, 5*z);
    txSetFillColor(c);
    POINT dragster_wing[3]   =  {{x-100*z, y-250*z}, {x+150*z, y-225*z}, {x-100*z, y-300*z}};
    txPolygon(dragster_wing, 3);

    //Draw light
    txSetColor(TX_DARKGRAY);
    if (b == 0)
        txSetFillColor(TX_DARKGRAY);
    else
        txSetFillColor(TX_YELLOW);

    txCircle(x+858*z, y+120*z, 10*z);

    //Draw front wing
    txSetColor(RGB (40, 40, 40), 5*z);
    txSetFillColor(TX_GRAY);
    POINT dragster_balancer[4] = {{x+855*z, y+125*z}, {x+855*z, y+115*z}, {x+810*z, y+115*z}, {x+810*z, y+125*z}};
    txPolygon(dragster_balancer, 4);

    DrawFWheel(x+750*z, y+120*z, a, z);

    //Draw front wheel
/*    txSetColor(TX_BLACK, 10*z);
    txSetFillColor(TX_GRAY);
    txCircle(x+750*z, y+120*z, 50*z);

    a *= M_PI / 180;

    double x1 = ((x+745*z)*cos(a))+((y+160*z)*sin(a));
    double y1 = ((y+160*z)*cos(a))-((x+745*z)*sin(a));
    double x2 = ((x+745*z)*cos(a))+((y+ 80*z)*sin(a));
    double y2 = ((y+ 80*z)*cos(a))-((x+745*z)*sin(a));
    double x3 = ((x+710*z)*cos(a))+((y+115*z)*sin(a));
    double y3 = ((y+115*z)*cos(a))-((x+710*z)*sin(a));
    double x4 = ((x+790*z)*cos(a))+((y+115*z)*sin(a));
    double y4 = ((y+115*z)*cos(a))-((x+790*z)*sin(a));

    double x5 = ((x+755*z)*cos(a))+((y+ 80*z)*sin(a));
    double y5 = ((y+ 80*z)*cos(a))-((x+755*z)*sin(a));
    double x6 = ((x+755*z)*cos(a))+((y+160*z)*sin(a));
    double y6 = ((y+160*z)*cos(a))-((x+755*z)*sin(a));
    double x7 = ((x+790*z)*cos(a))+((y+125*z)*sin(a));
    double y7 = ((y+125*z)*cos(a))-((x+790*z)*sin(a));
    double x8 = ((x+710*z)*cos(a))+((y+125*z)*sin(a));
    double y8 = ((y+125*z)*cos(a))-((x+710*z)*sin(a));

    txSetColor(RGB (40, 40, 40));
    txSetFillColor(RGB (40, 40, 40));
    POINT holes[8] = {{x1, y1}, {x2, y2}, {x3, y3}, {x4, y4}, {x5, y5}, {x6, y6}, {x7, y7}, {x8, y8}}; //{{x+745*z, y+160*z}, {x+745*z, y+80*z}, {x+710*z, y+115*z}, {x+790*z, y+115*z}, {x+755*z, y+80*z}, {x+755*z, y+160*z}, {x+790*z, y+125*z}, {x+710*z, y+125*z}};
    txPolygon(holes, 8);
 */
    txSetColor (TX_LIGHTGRAY);
    txSetFillColor(TX_LIGHTGRAY);
    POINT hole[4] = {{x+745*z, y+125*z}, {x+745*z, y+115*z}, {x+755*z, y+115*z}, {x+755*z, y+125*z}};
    txPolygon(hole, 4);

    txSetColor(TX_BLACK, 4);
    txCircle(x+750*z, y+120*z, 4*z);

    //Draw exhaust pipe #1
    txSetColor(TX_GRAY, 5*z);
    txSetFillColor(RGB (40, 40, 40));
    POINT dragster_pipe1[6] = {{x+380*z, y+48*z}, {x+360*z, y+48*z}, {x+350*z, y-112*z}, {x+335*z,  y-112*z}, {x+345*z, y+63*z}, {x+370*z, y+63*z}};
    txPolygon(dragster_pipe1, 6);

    //Draw exhaust pipe #2
    txSetColor(TX_GRAY, 5*z);
    txSetFillColor(RGB (40, 40, 40));
    POINT dragster_pipe2[6] = {{x+395*z, y+51*z}, {x+375*z, y+51*z}, {x+365*z, y-109*z}, {x+350*z,  y-109*z}, {x+360*z, y+66*z}, {x+385*z, y+66*z}};
    txPolygon(dragster_pipe2, 6);

    //Draw exhaust pipe #3
    txSetColor(TX_GRAY, 5*z);
    txSetFillColor(RGB (40, 40, 40));
    POINT dragster_pipe3[6] = {{x+410*z, y+54*z}, {x+390*z, y+54*z}, {x+380*z, y-106*z}, {x+365*z, y-106*z}, {x+375*z, y+69*z}, {x+400*z, y+69*z}};
    txPolygon(dragster_pipe3, 6);

    //Draw exhaust pipe #4
    txSetColor(TX_GRAY, 5*z);
    txSetFillColor(RGB (40, 40, 40));
    POINT dragster_pipe4[6] = {{x+425*z, y+57*z}, {x+405*z, y+57*z}, {x+395*z, y-103*z}, {x+380*z,  y-103*z}, {x+390*z, y+72*z}, {x+415*z, y+72*z}};
    txPolygon(dragster_pipe4, 6);

    //Draw exhaust pipe #5
    txSetColor(TX_GRAY, 5*z);
    txSetFillColor(RGB (40, 40, 40));
    POINT dragster_pipe5[6] = {{x+440*z, y+60*z}, {x+420*z, y+60*z}, {x+410*z, y-100*z}, {x+395*z,  y-100*z}, {x+405*z, y+75*z}, {x+430*z, y+75*z}};
    txPolygon(dragster_pipe5, 6);

}

//Draw front wheel (function)
void DrawFWheel(int x, int y, double a,                         double z)
{

    txSetColor(    TX_BLACK, 10*z);
    txSetFillColor(TX_GRAY       );
    txCircle(x, y, 50*z);

    a *= M_PI / 180;

    double x1 = ( x-5*z*cos(a))+(y+40*z*sin(a));
    double y1 = (y+40*z*cos(a))-( x-5*z*sin(a));
    double x2 = ( x-5*z*cos(a))+(y-40*z*sin(a));
    double y2 = (y-40*z*cos(a))-( x-5*z*sin(a));
    double x3 = (x-40*z*cos(a))+( y-5*z*sin(a));
    double y3 = ( y-5*z*cos(a))-(x-40*z*sin(a));
    double x4 = (x+40*z*cos(a))+( y-5*z*sin(a));
    double y4 = ( y-5*z*cos(a))-(x+40*z*sin(a));

    double x5 = ( x+5*z*cos(a))+(y-40*z*sin(a));
    double y5 = (y-40*z*cos(a))-( x+5*z*sin(a));
    double x6 = ( x+5*z*cos(a))+(y+40*z*sin(a));
    double y6 = (y+40*z*cos(a))-( x+5*z*sin(a));
    double x7 = (x+40*z*cos(a))+( y+5*z*sin(a));
    double y7 = ( y+5*z*cos(a))-(x+40*z*sin(a));
    double x8 = (x-40*z*cos(a))+( y+5*z*sin(a));
    double y8 = ( y+5*z*cos(a))-(x-40*z*sin(a));

    txSetColor(    RGB (40, 40, 40));
    txSetFillColor(RGB (40, 40, 40));
    POINT holes[8] = {{x1, y1}, {x2, y2}, {x3, y3}, {x4, y4}, {x5, y5}, {x6, y6}, {x7, y7}, {x8, y8}}; //{{x+745*z, y+160*z}, {x+745*z, y+80*z}, {x+710*z, y+115*z}, {x+790*z, y+115*z}, {x+755*z, y+80*z}, {x+755*z, y+160*z}, {x+790*z, y+125*z}, {x+710*z, y+125*z}};
    txPolygon(holes, 8);
}


//Scene_1
void Scene_1()
{

}
