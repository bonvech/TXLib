//! @file KaratyginLib.h
//! @brief Описание библиотеки Ивана Каратыгина
//{----------------------------------------------------------------------------------------------------------------
//! @brief   Рисует домик
//!
//! @param    x - x координата опорной точки
//! @param   y -координата опорной точки
//! @param    scale - параметр умножения размера
//! @param    color - параметр цвета
//!
//!         опорная точка- правая нижняя точка дома
//!  @code
//!          draw_house(1000,999, 0.5,TX_RED);
//!
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void draw_house(int x,int y, double scale, COLORREF color);

//{----------------------------------------------------------------------------------------------------------------
//! @brief   Рисует машину
//!
//! @param    x - x координата опорной точки
//! @param   y -координата опорной точки
//! @param    scale - параметр умножения размера
//! @param    color - параметр цвета
//!
//!         опорная точка- левая нижняя точка корпуса машины
//!  @code
//!          draw_ball(x,650, 3, TX_GREEN);
//!
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void draw_ball(int x,int y, double scale, COLORREF color);

//{----------------------------------------------------------------------------------------------------------------
//! @brief   Рисует облако
//!
//! @param    x - x координата опорной точки
//! @param   y -координата опорной точки
//! @param    scale - параметр умножения размера
//! @param    color - параметр цвета
//!
//!         опорная точка- центр облака
//!  @code
//!         draw_cloud(180,200, 2,RGB(157,205,105));
//!
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void draw_cloud(int x,int y, double scale, COLORREF color);

//{----------------------------------------------------------------------------------------------------------------
//! @brief   Рисует солнце
//!
//! @param    x - x координата опорной точки
//! @param   y -координата опорной точки
//! @param    scale - параметр умножения размера
//! @param    color - параметр цвета
//!
//!         опорная точка- центр солнца
//!  @code
//!         draw_sun(1100,y, 2,RGB(255,255,51));
//!
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void draw_sun(int x,int y, double scale, COLORREF color);

//{----------------------------------------------------------------------------------------------------------------
//! @brief   Рисует светофор
//!
//! @param    x - x координата опорной точки
//! @param   y -координата опорной точки
//!@param    z - переменная для света
//! @param    scale - параметр умножения размера
//! @param    color - параметр цвета
//!
//!         опорная точка- ножка светофора
//!  @code
//!         draw_migalka(100, 700, 0.5, z,TX_MAGENTA);
//!
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void draw_migalka(int x,int y, double scale, int z, COLORREF color);

//{----------------------------------------------------------------------------------------------------------------
//! @brief   человека
//!
//! @param    x - x координата опорной точки
//! @param   y -координата опорной точки
//! @param    scale - параметр умножения размера
//! @param    color - параметр цвета
//!
//!         опорная точка- низ тела человека
//!  @code
//!         draw_human(1200,700, 0.2,TX_CYAN);
//!
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void draw_human(int x,int y, double scale, COLORREF color);





void draw_human(int x,int y, double scale, COLORREF color)
{
    txSetFillColor(color);
    txSetColor(color);
    txLine(x,y,x,y-200*scale);
    txLine(x-100*scale,y-100*scale,x,y-200*scale);
    txLine(x,y-200*scale,x+100*scale,y-100*scale);
    txLine(x-100*scale,y+100*scale,x,y);
    txLine(x+100*scale,y+100*scale,x,y);
    txCircle(x,y-225*scale,25*scale);
}

void draw_cloud(int x,int y, double scale, COLORREF color)
{
    txSetColor(color);
    txSetFillColor(color);
    txCircle(x,y,70*scale);
    txCircle(x+90*scale,y,75*scale);
    txCircle(x+155*scale,y,40*scale);
    txLine(0,400,1600,400);
    txSetColor(TX_BLUE);
    txSetFillColor(TX_BLUE);
    txFloodFill(805,200);
}

void draw_sun(int x,int y, double scale, COLORREF color)
{
    txSetColor(color);
    txSetFillColor(color);
    txCircle(x,y,100*scale);
}

void draw_migalka(int x, int y, double scale, int z, COLORREF color)
{
    txSetColor(TX_RED, 3*scale);
    txSetFillColor(color);
    txRectangle(x-25*scale,y+75*scale,x+25*scale,y-75*scale);
    txRectangle(x-10,y+75*scale,x+10,y+275*scale);
    if (z==1)
    {
        txSetFillColor(TX_PINK);
        txCircle (x, y, 20*scale);
        txSetFillColor(TX_BLACK);
        txCircle (x, y-50*scale, 20*scale);
        txCircle (x, y+50*scale, 20*scale);
    }
    if (z==2)
    {
        txSetFillColor(TX_ORANGE);
        txCircle (x, y+50*scale, 20*scale);
        txSetFillColor(TX_BLACK);
        txCircle (x, y, 20*scale);
        txCircle (x, y-50*scale, 20*scale);
    }
    if (z==3)
    {
        txSetFillColor(TX_WHITE);
        txCircle (x, y-50*scale, 20*scale);
        txSetFillColor(TX_BLACK);
        txCircle (x, y, 20*scale);
        txCircle (x, y+50*scale, 20*scale);
    }
    if (z==10)
    {
        txSetFillColor(TX_PINK);
        txCircle (x, y, 20*scale);
        txSetFillColor(TX_ORANGE);
        txCircle (x, y+50*scale, 20*scale);
        txSetFillColor (TX_WHITE);
        txCircle (x, y-50*scale, 20*scale);
    }
    if (z==0)
    {
        txSetFillColor(TX_BLACK);
        txCircle (x, y+50*scale, 20*scale);
        txCircle (x, y, 20*scale);
        txCircle (x, y-50*scale, 20*scale);
    }
}

void draw_house(int x,int y, double scale, COLORREF color)
{
    txSetColor(color);
    txSetFillColor(color);
    txRectangle(x,y,x-200*scale,y-200*scale);
    txSetColor(TX_BLACK);
    txSetFillColor(TX_BLACK);
    POINT krisha[3] {{x-230*scale,y-200*scale},{x-100*scale,y-270*scale},{x+30*scale,y-200*scale}};
    txPolygon (krisha, 3);
    txSetColor(TX_BLUE);
    txSetFillColor(TX_BLUE);
    txRectangle(x-50*scale,y-50*scale,x-100*scale,y-100*scale);
}

void draw_ball(int x,int y, double scale, COLORREF color)
{

    txSetColor(color);
    txSetFillColor(color);
    txLine(x+30*scale,y,x-100*scale,y);
    txLine(x+30*scale,y-30*scale,x+30*scale,y);
    txLine(x+30*scale,y-30*scale,x-40*scale,y-30*scale);
    txLine(x-40*scale,y-30*scale,x-42*scale,y-60*scale);
    txLine(x-42*scale,y-60*scale,x-100*scale,y-60*scale);
    txLine(x-100*scale,y-60*scale,x-100*scale,y);
    txFloodFill(x-31*scale,y-10*scale);
    txSetColor(TX_RED);
    txSetFillColor(TX_RED);
    txCircle(x,y,20*scale);
    txCircle(x-70*scale,y,20*scale);
    txSetColor(TX_BLUE);
    txSetFillColor(TX_BLUE);
    txLine(x-44*scale,y-59*scale,x-44*scale,y-30*scale);
    txLine(x-44*scale,y-59*scale,x-80*scale,y-59*scale);
    txLine(x-80*scale,y-59*scale,x-80*scale,y-30*scale);
    txLine(x-80*scale,y-30*scale,x-44*scale,y-30*scale);
    txFloodFill(x-75,y-55);
}
