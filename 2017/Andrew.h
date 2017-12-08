/// @file Andrew.h
//! @brief Моя собственность
//! @warning Работает только с библиотекой TXLib
//! @brief Описание функций
//{
//! @brief Рисует луну
//! @param x - координата по оси х
//! @param y - координата по оси y
//! @param size- коэфицент размера
//! @param color1 - цвет большого круга луны
//! @param color2 - цвет маленьких кругов луны
 //}
void drawMoon (int x, int y, double size, COLORREF color1, COLORREF color2);


//{
//! @brief Рисует солнце
//! @param x - координата по оси х
//! @param y - координата по оси y
//! @param size- коэфицент размера
//! @param color - цвет солнца
//}
void drawSun  (int x, int y, double size, COLORREF color);



//{
//! @brief Рисует звезду
//! @param x - координата по оси х
//! @param y - координата по оси y
//! @param size- коэфицент размера
//! @param color - цвет звезды
//}
void drawStar (int x, int y, double size, COLORREF color);



//{
//! @brief Рисует дом
//! @param x - координата по оси х
//! @param y - координата по оси y
//! @param size- коэфицент размера
//! @param color1 - цвет
//! @param color2 - цвет
//! @param color3 - цвет
//! @param color4 - цвет
//}
void drawHouse(int x, int y, double size, COLORREF color1, COLORREF color2, COLORREF color3, COLORREF color4);



//{
//! @brief Рисует машину
//! @param x - координата по оси х
//! @param y - координата по оси y
//! @param size- коэфицент размера
//! @param color1 - цвет
//! @param color2 - цвет
//! @param color3 - цвет
//! @param color4 - цвет
 //}
void drawCar  (int x, int y, double size, COLORREF color1, COLORREF color2, COLORREF color3, COLORREF color4);



//{
//! @brief Рисует человека
//! @param x - координата по оси х
//! @param y - координата по оси y
//! @param size- коэфицент размера
//! @param color - цвет человека
 //}
void draw4elovek2(int x, int y, double size, COLORREF color);



{
    txSetColor(color1,5);
    txSetFillColor(color2);
    POINT house[7] = {{x+50*size,y+50*size},{x+50*size,y+150*size},{x-50*size,y+150*size},{x-50*size,y+50*size},{x+50*size,y+50*size},{x,y},{x-50*size,y+50*size}};
    txPolygon (house, 7);
    txSetColor(color3,3*size);
    txSetFillColor(color4);
    txCircle(x,y+100*size,20*size);
    txLine(x,y+80*size,x,y+120*size);
    txLine(x-20*size,y+100*size,x+20*size,y+100*size);
}
void drawMoon(int x, int y, double size, COLORREF color1, COLORREF color2)
{
    txSetColor(color1);
    txSetFillColor(color1);
    txCircle(x,y,50*size);
    txSetColor(color2);
    txSetFillColor(color2);
    txCircle(x-10*size,y-15*size,20*size);
    txCircle(x-30*size,y+20*size,10*size);

}
void drawStar(int x, int y, double size, COLORREF color)
{
    txSetColor(TX_YELLOW, 7);
    txSetFillColor(color);
    POINT star[5] = {{x-50*size,y+200*size},{x,y},{x+50*size,y+200*size},{x-100*size,y+100*size},{x+100*size,y+100*size}};
    txPolygon (star, 5);
}
void drawCar(int x, int y, double size, COLORREF color1, COLORREF color2, COLORREF color3, COLORREF color4)
{
    txSetColor(TX_BLACK,5*size);
    txSetFillColor(color1);
    POINT car[6] = {{x-200*size,y+50*size},{x-200*size,y-50*size},{x,y-50*size},{x,y},{x+100*size,y},{x+100*size,y+50*size}};

    txPolygon (car,6);
    txSetColor(color2,15*size);
    txSetFillColor(color3);
    txCircle(x-175*size,y+50*size,40*size);
    txCircle (x+50*size,y+50*size,40*size);
    txSetFillColor(color4);
    txSetColor (color3,3);
    txCircle (x-25*size,y-25*size,20*size);
}
void drawSun(int x, int y, double size, COLORREF color1)
{
    txSetFillColor(color1);
    txCircle(x,y,100*size);

    txSetColor(color1,10*size);
    txLine(x,y,x         ,y-200*size);
    txLine(x,y,x-150*size,y-175*size);
    txLine(x,y,x-200*size,y    );
    txLine(x,y,x+150*size,y+170*size);
    txLine(x,y,x+150*size,y-175*size);
    txLine(x,y,x    ,y+200*size);
    txLine(x,y,x+200*size,y    );
    txLine(x,y,x-180*size,y+150*size);
}
void draw4elovek2(int x, int y, double size, COLORREF color)
{
    txSetFillColor(color);
    txSetColor(color, 3);
    txLine(  x, y+90*size, x,         y+ 30*size);
    txLine(  x, y+90*size, x-40*size, y+160*size);
    txLine(  x, y+90*size, x+40*size, y+160*size);
    txLine(  x, y+40*size, x-50*size, y+ 85*size);
    txLine(  x, y+40*size, x+80*size, y+ 30*size);
    txCircle(x, y, 30*size);

    txSetFillColor(TX_RED);
    txCircle(x-10*size, y-5*size, 5*size);
    txCircle(x+10*size, y-5*size, 5*size);

    txSetColor(TX_RED, 3*size+0.5);
    txLine(x-5*size, y+15*size, x+5*size, y+15*size);
}
