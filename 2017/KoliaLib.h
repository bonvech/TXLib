//=================================================================================================================
//         [HELP ME!]     [PAVLOV]
//{
//=================================================================================================================
//!
//! @file KoliaLib.h
//! @brief  Библиотека Павлова Николая 8 "В"
//! @defgroup Man        человек
//! @defgroup Hause      дом
//! @defgroup Sun        солнце
//! @defgroup parachute  парашют
//! @defgroup plane      самолёт
//}
//=================================================================================================================

//{-----------------------------------------------------------------------------------------------------------------
//! @brief       Рисуем человека
//! @param x     Кордината по оси x
//! @param y     Кордината по оси y
//! @param size  Размер человека
//! @param color Цвет человека
//! @param a     Поднятие руки
//! @param s     Поднятие руки
//! @param d     Отлитание бошки
//! @param o     Кордината по оси x
//! @usage @code
//!         drawMan(950, 550, 1, TX_BLACK, -50, -50, 0, i);
//! @endcode
//}-----------------------------------------------------------------------------------------------------------------

void drawMan(int x, int y, double size, COLORREF color, int a, int s, int d, int o);


//{-----------------------------------------------------------------------------------------------------------------
//! @brief       Рисуем солнце
//! @param x     Кордината по оси x
//! @param y     Кордината по оси y
//! @param size  Размер солнца
//! @param color Цвет солнце
//! @param h     Длина вертикальных и горизантальных лучей
//! @param k     Длина диагональнах лучей
//! @param i     Размер центра солнца
//! @usage @code
//!         drawSun(1100, 100, 1, TX_YELLOW, 0, 0, 0);
//! @endcode
//}-----------------------------------------------------------------------------------------------------------------
void drawSun(int x, int y, double size, COLORREF color, int h, int k, int l);

//{-----------------------------------------------------------------------------------------------------------------
//! @brief        Рисуем парашют
//! @param x      Кордината по оси x
//! @param y      Кордината по оси y
//! @param size   Размер парашюта
//! @param color  Цвет головы парашюта
//! @param color1 Цвет рамки закрывающая  часть головы
//! @param color2 Цвет палок
//! @param q      Длина парашютных строп
//! @usage @code
//!         drawparachute(1100,750, 1,  RGB(100, 100, 100), TX_WHITE, TX_RED, 0, 0, 0);
//! @endcode
//}-----------------------------------------------------------------------------------------------------------------
void drawparachute(int x, int y, double size, COLORREF color, COLORREF color2, COLORREF color3, int q)

//{-----------------------------------------------------------------------------------------------------------------
//! @brief        Рисуем самолёт
//! @param x      Кордината по оси x
//! @param y      Кордината по оси y
//! @param size   Размер самолёта
//! @param color  Цвет каркаса самолёта
//! @param color2 Цвет стекла самолёта
//! @param color3 Цвет крыла самолёта
//! @param color4 Цвет колеса самолёта
//! @param z      Длина носа самолёта
//! @param v      Отдоление концов хвоста самолёта по оси y я надеюсь ты раазберёшся
//! @param c      Длина крыла
//! @param ab     Перемещение по оси x
//! @usage @code
//!         drawplane(500, 400, 1, RGB(159, 182, 205), TX_BLUE, RGB(127,127,127), TX_BLACK, 0, 0, 0, ac);
//! @endcode
//}-----------------------------------------------------------------------------------------------------------------
void drawplane(int x, int y, double size, COLORREF color, COLORREF color2, COLORREF color3, COLORREF color4, int z, int v, int c, int ab)

//{-----------------------------------------------------------------------------------------------------------------
//! @brief        Рисуем самолёт
//! @param x      Кордината по оси x
//! @param y      Кордината по оси y
//! @param size   Размер самолёта
//! @param color  Цвет каркаса дома
//! @param color2 Цвет крыши дома
//! @param color3 Цвет двери дома
//! @param color4 Цвет света в доме
//! @param color5 Высота крыши
//! @param f      Открывание двери
//! @param p      Если п=1 тогда цвет 4 иначе цвет 5
//! @usage @code
//!         drawplane(500, 400, 1, RGB(159, 182, 205), TX_BLUE, RGB(127,127,127), TX_BLACK, 0, 0, 0, ac);
//! @endcode
//}-----------------------------------------------------------------------------------------------------------------
void drawHause(int x, int y, double size, COLORREF color, COLORREF color2, COLORREF color3, COLORREF color4, COLORREF color5, int f, int g, int p)

////////////////////////////////////////////////////////
void drawMan(int x, int y, double size, COLORREF color, int a, int s, int d, int o);
void drawHause(int x, int y, double size, COLORREF color, COLORREF color2, COLORREF color3, COLORREF color4,  COLORREF color5, int f, int g, int p);
void drawSun(int x, int y, double size, COLORREF color, int h, int k, int l);
void drawparachute(int x, int y, double size, COLORREF color, COLORREF color2, COLORREF color3, int q, int w, int e);
void drawplane(int x, int y, double size, COLORREF color, COLORREF color2, COLORREF color3, COLORREF color4, int z, int v, int c, int ab);

void drawMan(int x, int y, double size, COLORREF color, int a, int s, int d, int o)
{
    txSetFillColor(color);
    txSetColor(color, 10*size);
    txLine(x+o, y,         x-25*size+o, y+50*size);
    txLine(x+o, y,         x+25*size+o, y+50*size);
    txLine(x+o, y,         x+o,         y-50*size);
    txLine(x+o, y-50*size, x+25*size+o, y-50*size-a*size);
    txLine(x+o, y-50*size, x-25*size+o, y-50*size-s*size);

    txSetColor(TX_BLACK);
    txCircle(x+o, y-65*size-d*size, 15*size);

}

void drawSun(int x, int y, double size, COLORREF color, int h, int k, int l)
{
    txSetFillColor(color);
    txSetColor(color,7.5*size);
    txCircle(x, y, 50*size+l*size);
    txLine(x,          y-75*size, x,                 y-125*size+h*size);
    txLine(x,          y+75*size, x,                 y+125*size+h*size);
    txLine(x-125*size, y,         x-75*size+h*size,  y);
    txLine(x+75*size,  y,         x+125*size+h*size, y);
    txLine(x-50*size,  y-50*size, x-75*size+k*size,  y-75*size+k*size);
    txLine(x+50*size,  y+50*size, x+75*size-k*size,  y+75*size-k*size);
    txLine(x-50*size,  y+50*size, x-75*size+k*size,  y+75*size-k*size);
    txLine(x+50*size,  y-50*size, x+75*size-k*size,  y-75*size+k*size);
}

void drawparachute(int x, int y, double size, COLORREF color, COLORREF color2, COLORREF color3, int q)
{
    txSetFillColor(color);
    txSetColor(TX_BLACK);
    txCircle(x, y-100*size, 50*size);

    txSetFillColor (color2);
    txSetColor(color2);
    POINT b[4] = {{x-50*size, y-100*size}, {x-50*size, y-50*size}, {x+50*size, y-50*size}, {x+50*size, y-100*size}};
    txPolygon(b, 4);

    txSetColor(color3,2.5*size);
    txLine(x-50*size, y-100*size, x, y+q*size);
    txLine(x-25*size, y-100*size, x, y+q*size);
    txLine(x,         y-100*size, x, y+q*size);
    txLine(x+25*size, y-100*size, x, y+q*size);
    txLine(x+50*size, y-100*size, x, y+q*size);
}



void drawHause(int x, int y, double size, COLORREF color, COLORREF color2, COLORREF color3, COLORREF color4, COLORREF color5, int f, int g, int p)
{

    txSetColor(TX_BLACK);
    txSetFillColor (color);
    POINT hous[4] = {{x, y}, {x-250*size, y}, {x-250*size, y-250*size}, {x, y-250*size}};
    txPolygon(hous, 4);

    txSetFillColor (color2);
    POINT ruf[3] = {{x-250*size, y-250*size}, {x-125*size, y-450*size+g*size}, {x, y-250*size}};
    txPolygon(ruf, 3);


    if(p==1)
    {
        txSetFillColor (color4);
    }
    else
    {
        txSetFillColor (color5);
    }
    POINT door2[4] = {{x-225*size, y}, {x-150*size, y}, {x-150*size, y-200*size}, {x-225*size, y-200*size}};
    txPolygon(door2, 4);

    txSetFillColor (color3);
    POINT door[4] = {{x-225*size, y}, {x-150*size-f*size, y}, {x-150*size-f*size, y-200*size}, {x-225*size, y-200*size}};
    txPolygon(door, 4);

    if(p==1)
    {
        txSetFillColor (color4);
    }
    else
    {
        txSetFillColor (color5);
    }
    POINT window[4] = {{x-25*size, y-125*size}, {x-25*size, y-200*size}, {x-125*size, y-200*size}, {x-125*size, y-125*size}};
    txPolygon(window, 4);
}


void drawparachute(int x, int y, double size, COLORREF color, COLORREF color2, COLORREF color3, int q)
{
    txSetFillColor(color);
    txSetColor(TX_BLACK);
    txCircle(x, y-100*size, 50*size);

    txSetFillColor (color2);
    txSetColor(color2);
    POINT b[4] = {{x-50*size, y-100*size}, {x-50*size, y-50*size}, {x+50*size, y-50*size}, {x+50*size, y-100*size}};
    txPolygon(b, 4);

    txSetColor(color3,2.5*size);
    txLine(x-50*size, y-100*size, x, y+q*size);
    txLine(x-25*size, y-100*size, x, y+q*size);
    txLine(x,         y-100*size, x, y+q*size);
    txLine(x+25*size, y-100*size, x, y+q*size);
    txLine(x+50*size, y-100*size, x, y+q*size);
}


void drawplane(int x, int y, double size, COLORREF color, COLORREF color2, COLORREF color3, COLORREF color4, int z, int v, int c, int ab)
{
    txSetColor(TX_BLACK);
    txSetFillColor (color);
    POINT plane[11] = {{x+ab, y}, {x+100*size+ab, y}, {x+200*size+ab, y+75*size}, {x+300*size+ab, y+75*size}, {x+350*size+ab, y+v*size}, {x+400*size+ab, y+v*size}, {x+350*size+ab, y+125*size}, {x-100*size+ab, y+125*size}, {x-125*size+ab, y+87.5*size}, {x-150*size+z*size+ab, y+75*size}, {x-50*size+ab, y+50*size}};
    txPolygon(plane, 11);

    txSetFillColor (color2);
    POINT glass[6] = {{x-50*size+ab, y+50*size}, {x+ab, y}, {x+ab, y+25*size}, {x+100*size+ab, y+25*size}, {x+175*size+ab, y+75*size}, {x+ab, y+75*size}};
    txPolygon(glass, 6);

    txSetColor(TX_BLACK);
    txSetFillColor (color);
    POINT a[7] = {{x+ab, y}, {x+ab, y+90*size}, {x-10*size+ab, y+110*size}, {x+6.25*size+ab, y+115*size}, {x+22.5*size+ab, y+110*size}, {x+12.5*size+ab, y+90*size}, {x+12.5*size+ab, y}};
    txPolygon(a, 7);

    txSetFillColor(color3);
    POINT wing[6] = {{x+ab, y}, {x+10*size+ab, y-5*size}, {x+25*size+ab, y-15*size}, {x+125*size+c*size+ab, y}, {x+10*size+ab, y+5*size}, {x+25*size+ab, y+15*size}};
    txPolygon(wing, 6);

    txSetColor (color,12.5*size);
    txLine(x+93.75*size+ab, y+25*size, x+93.75*size+ab, y+75*size);

    txSetColor(color3,12.5*size);
    txLine(x+300*size+ab, y+105*size, x+350*size+ab, y+105*size);

    txSetColor(TX_BLACK,5*size);
    txLine(x-130*size+ab, y+25*size, x-130*size+ab, y+125*size);

    txSetColor(TX_BLACK,5*size);
    txLine(x-50*size+ab, y+125*size, x-60*size+ab, y+150*size);

    txSetColor (color,20*size);
    txLine(x+95*size+ab, y+120*size, x+80*size+ab, y+150*size);

    txSetFillColor(color4);
    txSetColor(TX_BLACK);
    txCircle(x+80*size+ab, y+150*size, 20*size);

    txSetFillColor (color3);
    txSetColor(TX_BLACK);
    txCircle(x+80*size+ab, y+150*size, 10*size);

    txSetFillColor(color4);
    txSetColor(TX_BLACK);
    txCircle(x-60*size+ab, y+150*size, 10*size);

    txSetFillColor (color3);
    txSetColor(TX_BLACK);
    txCircle(x-60*size+ab, y+150*size, 5*size);

    txSetFillColor(color4);
    txSetColor(TX_BLACK);
    txCircle(x+80*size+ab, y+150*size, 5*size);

    txSetColor(color4,5*size);
    txLine(x-50*size+ab, y+125*size, x-60*size+ab, y+150*size);
}
