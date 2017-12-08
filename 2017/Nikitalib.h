//=================================================================================================================
//{           [HELP ME!]     [NIKITA]
//=================================================================================================================
//!
//! @file     Nikitalib.h
//! @brief    библиотека персонажей Егорова Никиты, 8 "В"
//! @defgroup Car       Машинка
//! @defgroup Sun       Солнце
//! @defgroup Elephant  Слон
//! @defgroup Castle    Замок
//! @defgroup House     Дом
//}
//=================================================================================================================

//{----------------------------------------------------------------------------------------------------------------
//! @brief           Рисуем Машинку
//!
//! @param x         координата по оси Х
//! @param y         координата по оси Y
//! @param size      размер Машинки
//! @param color     цвет   Машинки
//! @param light_off вкл./выкл. фара
//! @param с         форма машинки
//! @param d         форма машинки
//! @param wheel1    размер колеса 1
//! @param wheel2    размер колеса 2
//!
//! @usage @code
//! DrawCar(300, 100, 1.3, RGB(59, 68, 75), 1, 10, 15, 11, 11);
//! @endcode
//}----------------------------------------------------------------------------------------------------------------

void DrawCar(int x, int y, double size, COLORREF color, int light_off, double c, double d, double wheel1, double wheel2);


void DrawSun(int x, int y, double size, COLORREF color, double q, double r);

//{----------------------------------------------------------------------------------------------------------------
//! @brief       Рисуем Солнце
//!
//! @param x     координата по оси Х
//! @param y     координата по оси Y
//! @param size  размер Солнца
//! @param color цвет   Солнца
//! @param q     длина лучей (коэфициент)
//! @param r     длина лучей (коэфициент)
//! @usage @code
//! DrawSun(100, 300, 1.1, TX_ORANGE, 1.4, 0.8);
//! @endcode
//}----------------------------------------------------------------------------------------------------------------

void DrawSun(int x, int y, double size, COLORREF color, double q, double r)
{
    txSetColor(color, 6*size);
    txLine(x-(100*q)*size, y,              x+(100*q)*size, y             );
    txLine(x,              y-(100*q)*size, x,              y+(100*q)*size);
    txLine(x-(75*q)*size,  y-(75*q)*size,  x+(75*q)*size,  y+(75*q)*size );
    txLine(x+(75*q)*size,  y-(75*q)*size,  x-(75*q)*size,  y+(75*q)*size );

    txSetColor(RGB (255, 191, 0), 6*size);
    txLine(x-50*size,  y-100*size, x+50*size,  y+100*size);
    txLine(x+50*size,  y-100*size, x-50*size,  y+100*size);
    txLine(x-100*size, y-50*size,  x+100*size, y+50*size);
    txLine(x+100*size, y-50*size,  x-100*size, y+50*size);

    txSetFillColor(color);
    txCircle(x, y, 25*size);

    txSetFillColor(RGB (255, 191, 0));
    txCircle(x, y, 12.5*size);
}

void DrawElephant(int x, int y, double size, COLORREF color, int angry, double longer1);

//{----------------------------------------------------------------------------------------------------------------
//! @brief         Рисуем Слона
//!
//! @param x       координата по оси Х
//! @param y       координата по оси Y
//! @param size    размер Слона
//! @param color   цвет   Слона
//! @param angry   вкл./выкл. глаз (белый или красный глаз)
//! @param longer1 длина хобота
//! @usage @code
//! DrawElephant(500, 300, 1.5, RGB(40, 79, 100), 0, 35);
//! @endcode
//}----------------------------------------------------------------------------------------------------------------

void DrawElephant(int x, int y, double size, COLORREF color, int angry, double longer1)
{
    txSetColor(TX_BLACK, 5*size);
    txSetFillColor(color);
    POINT elephant[16] = {{x-100*size,        y}, {x,                    y        }, {x,                    y-25*size }, {x-25*size,  y-25*size },
                          {x-25*size, y-75*size}, {x+25*size,            y-75*size}, {x+25*size,            y-50*size }, {x+75*size,  y-50*size },
                          {x+75*size, y+75*size}, {x+(100+longer1)*size, y+75*size}, {x+(100+longer1)*size, y+100*size}, {x+50*size,  y+100*size},
                          {x+50*size, y+25*size}, {x+25*size,            y+25*size}, {x+25*size,            y+100*size}, {x-100*size, y+100*size}};
    txPolygon (elephant, 16);

    txSetColor(TX_BLACK, 5*size);
    txSetFillColor(RGB (132, 132, 130));
    txCircle(x+(100+longer1)*size, y+87.5*size, 12.5*size);

    txSetFillColor(TX_BLACK);
    txCircle(x+50*size, y-25*size, 10*size);

    txSetColor(TX_BLACK, 4*size);
    if(angry == 1)
        txSetFillColor(RGB (204, 6, 5));
    else
        txSetFillColor(TX_WHITE);

    txCircle(x+50*size, y-25*size, 11*size);

    txSetFillColor(TX_BLACK);
    txCircle(x+50*size, y-25*size, 3*size);
}

void DrawCastle(int x, int y, double size, COLORREF color, double z, double w, double a, double b, int n);

//{----------------------------------------------------------------------------------------------------------------
//! @brief       Рисуем Замок
//!
//! @param x     координата по оси Х
//! @param y     координата по оси Y
//! @param size  размер Замка
//! @param color цвет   Замка
//! @param z     высота ворот Замка
//! @param w     растояние от башен до главной части Замка
//! @param a     высота башен
//! @param b     высота башен
//! @param n     количество башен
//! @usage @code
//! DrawCastle(100, 500, 0.9, RGB(192, 192, 192), 5, 15, -38, 38, 4);
//! @endcode
//}----------------------------------------------------------------------------------------------------------------

void DrawCastle(int x, int y, double size, COLORREF color, double z, double w, double a, double b, int n)
{
        int k=0;
        int l=0;



    txSetColor(TX_BLACK, 4*size);
    txSetFillColor(color);
    POINT castle[26] = {{x+a*size,y+w*size},{x+(12.5+a)*size,y+(50+w)*size},{x+(12.5+a)*size,y+125*size},{x+37.5*size,y+125*size},{x+37.5*size,y+25*size},
                        {x+50*size,       y+25*size    },  {x+50*size,        y+50*size    }, {x+62.5*size,     y+50*size    }, {x+62.5*size,    y+25*size}, {x+75*size,      y+25*size},
                        {x+75*size,       y+50*size    },  {x+87.5*size,      y+50*size    }, {x+87.5*size,     y+25*size    }, {x+100*size,     y+25*size}, {x+100*size,     y+50*size},
                        {x+112.5*size,    y+50*size    },  {x+112.5*size,     y+25*size    }, {x+125*size,      y+25*size    }, {x+125*size,    y+125*size}, {x+(150+b)*size, y+125*size},
                        {x+(150+b)*size,  y+(50+w)*size},  {x+(162.5+b)*size, y+w*size     }, {x+(175+b)*size,  y+(50+w)*size}, {x+(175+b)*size,y+150*size}, {x-(12.5-a)*size,y+150*size},
                        {x-(12.5-a)*size, y+(50+w)*size}};
    txPolygon (castle, 26);

    txSetFillColor(TX_BLACK);
    POINT gates[4] = {{x+100*size, y+150*size}, {x+62.5*size, y+150*size}, {x+62.5*size, y+(112.5+z)*size}, {x+100*size, y+(112.5+z)*size}};
    txPolygon (gates, 4);

    txSetFillColor(TX_BLACK);
    txCircle(x+81.25*size, y+(112.5+z)*size, 18.75*size);

    for(k=0; k < n; k++)
    {
        txSetColor(TX_BLACK, 4*size);

        if(k == 0)
            {txSetFillColor(RGB(255, 0, 0));}
        else
        {   if(k == 2)
                {txSetFillColor(RGB(255, 0, 0));}
            else
            {   if(k == 4)
                   {txSetFillColor(RGB(255, 0, 0));}
                else
                   {txSetFillColor(color);}
            }
        }

        POINT tower1[7] = {{x+(a-50*k)*size,      y+w*size},    {x+(a+12.5-50*k)*size, y+(50+w)*size},
                           {x+(a+12.5-50*k)*size, y+125*size},  {x+(a+37.5-50*k)*size, y+125*size},
                           {x+(a+37.5-50*k)*size, y+150*size},  {x+(a-12.5-50*k)*size, y+150*size},
                           {x+(a-12.5-50*k)*size, y+(50+w)*size}};
        txPolygon (tower1, 7);
    }
    for(l=0; l < n; l++)
    {
        txSetColor(TX_BLACK, 4*size);

        if(l == 0)
            {txSetFillColor(RGB(255, 0, 0));}
        else
        {   if(l == 2)
                {txSetFillColor(RGB(255, 0, 0));}
            else
            {   if(l == 4)
                   {txSetFillColor(RGB(255, 0, 0));}
                else
                   {txSetFillColor(color);}
            }
        }

        POINT tower2[7] = {{x+(162.5+b+50*l)*size, y+w*size},    {x+(175+b+50*l)*size, y+(50+w)*size},
                           {x+(175+b+50*l)*size,   y+150*size},  {x+(125+b+50*l)*size, y+150*size},
                           {x+(125+b+50*l)*size,   y+125*size},  {x+(150+b+50*l)*size, y+125*size},
                           {x+(150+b+50*l)*size,   y+(w+50)*size}};
        txPolygon (tower2, 7);
    }

}

void DrawHouse(int x, int y, double size, COLORREF color, int light_on, int light_on1, double roofer1, int n_h);

//{----------------------------------------------------------------------------------------------------------------
//! @brief       Рисуем Дом
//!
//! @param x         координата по оси Х
//! @param y         координата по оси Y
//! @param size      размер Дома
//! @param color     цвет   Дома
//! @param light_on  вкл./выкл. свет в окнах
//! @param light_on1 вкл./выкл. свет в окнах (других)
//! @param roofer1   высота крыши
//! @param n_h       количество пристроек к Дому
//! @usage @code
//! DrawHouse(200, 550, 0.6, RGB(124, 252, 0), 0, 1, 10, 5);
//! @endcode
//}----------------------------------------------------------------------------------------------------------------

void DrawHouse(int x, int y, double size, COLORREF color, int light_on, int light_on1, double roofer1, int n_h)
{
     int i=0;


    txSetColor(TX_BLACK, 5*size);
    txSetFillColor(color);
    POINT house[7] = {{x-100*size, y+75*size},  {x,                   y+roofer1*size}, {x+50*size,  y-(25-roofer1)*size}, {x+150*size, y+50*size},
                      {x+150*size, y+150*size}, {x+100*size, y+175*size}, {x-100*size, y+175*size}};
    txPolygon (house, 7);

    txSetColor(TX_BLACK, 5*size);
    txLine(x+100*size, y+75*size, x,          y+roofer1*size);
    txLine(x+100*size, y+75*size, x+150*size, y+50*size);
    txLine(x+100*size, y+75*size, x+100*size, y+175*size);
    txLine(x+100*size, y+75*size, x-100*size, y+75*size);

    txSetColor(TX_BLACK, 3*size);

    if(light_on == 1)
    txSetFillColor(RGB (255, 215, 0));

    else
    txSetFillColor(RGB (112, 128, 144));

    POINT window1[4] = {{x-75*size, y+100*size}, {x-25*size, y+100*size}, {x-25*size, y+150*size}, {x-75*size, y+150*size}};
    txPolygon (window1, 4);

    txSetColor(TX_BLACK, 3*size);

    if(light_on == 1)
    txSetFillColor(RGB (255, 215, 0));

    else
    txSetFillColor(RGB (112, 128, 144));

    POINT window2[4] = {{x-12.5*size, y+100*size}, {x+37.5*size, y+100*size}, {x+37.5*size, y+150*size}, {x-12.5*size, y+150*size}};
    txPolygon (window2, 4);

    txSetColor(TX_BLACK, 3*size);

    if(light_on1 == 1)
    txSetFillColor(RGB (255, 215, 0));

    else
    txSetFillColor(RGB (112, 128, 144));

    POINT window3[4] = {{x+112.5*size, y+93.75*size}, {x+137.5*size, y+81.25*size}, {x+137.5*size, y+131.25*size}, {x+112.5*size, y+143.75*size}};
    txPolygon (window3, 4);

    txSetFillColor(TX_RED);
    POINT door1[4] = {{x+50*size, y+100*size}, {x+87.5*size, y+100*size}, {x+87.5*size, y+175*size}, {x+50*size, y+175*size}};
    txPolygon (door1, 4);

    txSetColor(TX_BLACK, 3*size);
    txLine(x-50*size,   y+100*size,   x-50*size,   y+150*size);
    txLine(x-75*size,   y+125*size,   x-25*size,   y+125*size);
    txLine(x+12.5*size, y+100*size,   x+12.5*size, y+150*size);
    txLine(x-12.5*size, y+125*size,   x+37.5*size, y+125*size);
    txLine(x+125*size,  y+87.5*size,  x+125*size,  y+137.5*size);
    txLine(x+112.5*size,y+118.75*size,x+137.5*size,y+106.25*size);

    txSetColor(TX_BLACK, 4*size);

    if(light_on1 == 1)
        txSetFillColor(RGB (255, 215, 0));
    else
        txSetFillColor(RGB (112, 128, 144));

    txCircle(x, y+(43+roofer1)*size, 20*size);

    txSetColor(TX_BLACK, 5*size);
    txLine(x+55*size, y+137.5*size, x+63*size, y+137.5*size);

    for(i=0; i < n_h; i++)
    {
        txSetColor(TX_BLACK, 5*size);

        if(i == 0)
            {txSetFillColor(RGB(0, 191, 255));}
        else
        {   if(i == 2)
                {txSetFillColor(RGB(0, 191, 255));}
            else
            {   if(i == 4)
                   {txSetFillColor(RGB(0, 191, 255));}
                else
                   {txSetFillColor(color);}
            }
        }

        POINT part_of_house[6] = {{x+( 0+ 50*i)*size, y+(roofer1   -25*i)*size},
                                  {x+( 50+50*i)*size, y+(-25+roofer1-25*i)*size},
                                  {x+(150+50*i)*size, y+(50-25*i)*size},
                                  {x+(150+50*i)*size, y+(150       -25*i)*size},
                                  {x+(100+50*i)*size, y+(175       -25*i)*size},
                                  {x+(100+50*i)*size, y+(75-25*i)*size}};
        txPolygon (part_of_house, 6);

        txLine(x+(100+50*i)*size, y+(75-25*i)*size, x+(150+50*i)*size, y+(50-25*i)*size);

        txSetColor(TX_BLACK, 3*size);

        if(i == 0)
            {txSetFillColor(RGB (255, 215, 0));}
        else
        {   if(i == 2)
                {txSetFillColor(RGB (255, 215, 0));}
            else
            {    if(i == 4)
                    {txSetFillColor(RGB (255, 215, 0));}
                 else
                    {txSetFillColor(RGB (112, 128, 144));}
            }
        }

        POINT window3[4] = {{x+(112.5+50*i)*size, y+( 93.75-25*i)*size},
                            {x+(137.5+50*i)*size, y+( 81.25-25*i)*size},
                            {x+(137.5+50*i)*size, y+(131.25-25*i)*size},
                            {x+(112.5+50*i)*size, y+(143.75-25*i)*size}};
        txPolygon (window3, 4);

        txLine(x+(125+50*i)*size,  y+(87.5-25*i)*size,  x+(125+50*i)*size,  y+(137.5-25*i)*size);
        txLine(x+(112.5+50*i)*size,y+(118.75-25*i)*size,x+(137.5+50*i)*size,y+(106.25-25*i)*size);
   }
}


void DrawCar (int x, int y, double size, COLORREF color, int light_off, double c, double d, double wheel1, double wheel2)
{

    txSetColor(TX_BLACK, 3*size);
    txSetFillColor(color);
    POINT car[8] = {{x-125*size, y            }, {x-25*size,  y            },
                    {x-25*size,  y-(50-c)*size}, {x+50*size,  y-(50-c)*size},
                    {x+50*size,  y+d*size     }, {x+150*size, y+d*size     },
                    {x+150*size, y+50*size    }, {x-125*size, y+50*size    }};
    txPolygon (car, 8);

    txSetFillColor(TX_BLACK);
    txCircle(x-75*size, y+50*size, (25+wheel2)*size);

    txSetFillColor(TX_BLACK);
    txCircle(x+100*size, y+50*size, (25+wheel1)*size);

    txSetFillColor(RGB (124, 252, 0));
    txCircle(x-75*size, y+50*size, (24+wheel2)*size);

    txSetFillColor(RGB (124, 252, 0));
    txCircle(x+100*size, y+50*size, (24+wheel1)*size);

    txSetColor(TX_BLACK, 3*size);
    txSetFillColor(color);
    POINT door[4] = {{x+50*size, y+d*size}, {x+50*size, y+50*size}, {x, y+50*size}, {x, y+d*size}};
    txPolygon (door, 4);

    txSetColor(TX_BLACK, 3*size);
    txSetFillColor(RGB (93, 138, 168));
    POINT window[4] = {{x+50*size, y+d*size}, {x, y+d*size}, {x, y-(50-c)*size}, {x+50*size, y-(50-c)*size}};
    txPolygon (window, 4);

    txSetColor(TX_BLACK, 5*size);
    txLine(x+5*size, y+(7+d)*size, x+20*size, y+(7+d)*size);

    txSetColor(TX_BLACK);

    if(light_off == 1)
        txSetFillColor(RGB (253, 233, 16));
    else
        txSetFillColor(RGB (112, 128, 144));

    POINT light[4] = {{x+150*size, y+d*size}, {x+150*size, y+38*size}, {x+140*size, y+38*size}, {x+140*size, y+d*size}};
    txPolygon (light, 4);
}
