
//! @file  LeyzerovichLib.h
//! @brief Библиотека LeyzerovichLib.h
//!        - это библиотека для рисования 5 персонажей
//!
//!
//!
//!
void drawCar(double x, double y,double m,int r,COLORREF color1,COLORREF color2,COLORREF color3,COLORREF color4,COLORREF color5,COLORREF color6,int s);

//! @brief Рисует машинку
//!
//! @param x - координата x ,числа должны быть в виде 1.00
//! @param y - Координата y ,числа должны быть в виде 1.00
//! @param m - Параметр маштаба ,числа должны быть в виде 1.00
//! @param r - Радиус колёс ,числа должны быть в виде 1
//! @param color1 - Контур машинки
//! @param color2 - Цвет корпуса
//! @param color3 - Контур окошка
//! @param color4 - Цвет окошка
//! @param color5 - Цвет покрышек
//! @param color6 - Цвет дисков
//! @param s - Параметр и инвертирования (значения 1 либо -1 ,где 1 Маштина повёрнута в право и -1 влево)
//! @code
//!
//!        drawCar(0.0,500.0,1.0,30,RGB(248,248,255),RGB(128,128,128),RGB(119,136,153),RGB(176,224,230),RGB(0,0,0),RGB(169,169,169),s);
//!
//!        drawCar(x,500.0,1.0,30,RGB(248,248,255),RGB(128,128,128),RGB(119,136,153),RGB(176,224,230),RGB(0,0,0),RGB(169,169,169),s);
//!
//!   @endcode
void drawCar(double x, double y,double m,int r,COLORREF color1,COLORREF color2,COLORREF color3,COLORREF color4,COLORREF color5,COLORREF color6,int s);


//! @brief Рисует солнышко
//!
//! @param  x - Координата x ,числа должны быть в виде 1.00
//! @param  y - Координата y ,числа должны быть в виде 1.00
//! @param  m - Параметр маштаба ,числа должны быть в виде 1.00
//! @param  r - адиус колёс ,числа должны быть в виде 1
//! @param  color - Цвет солнца
//!
//!  @code
//!
//!     drawSun(x,y,m,r,RGB(255, 165, 0));
//!
//! @endcode
void drawSun(double x, double y,double m,double r,COLORREF color);

//! @brief Рисует человечка
//!
//! @param  x - Координата x ,числа должны быть в виде 1.00
//! @param  y - Координата y ,числа должны быть в виде 1.00
//! @param  m - Параметр маштаба ,числа должны быть в виде 1.00
//! @param  r - адиус головы ,числа должны быть в виде 1
//! @param  color - Цвет головы
//! @param  color1 - Цвет рук
//! @param  color2 - Цвет тела
//! @param  color3 - Цвет ног
//! @code
//!
//!     drawMan(400.0,500.0,1.0,10.0,RGB(1,1,8),RGB(28,4,238),RGB(28,66,238),RGB(28,13,238));
//!
//! @endcode





void drawMan(double x, double y,double m,double r,COLORREF color,COLORREF color1,COLORREF color2,COLORREF color3);


void drawCar(double x,double y,double  m,int r,COLORREF color1,COLORREF color2,COLORREF color3,COLORREF color4,COLORREF color5,COLORREF color6,int s)
{

    txSetColor(color1,m*5);
    txSetFillColor(color2);

    txRectangle(x-s*m*410,y-m*230,x-s*m*110,y-m*30);

    txLine(x-s*m*110,y-m*230,x-s*m*35, y-m*180);
    txLine(x-s*m*10, y-m*105,x+s*m*65, y-m*90);
    txLine(x+s*m*65, y-m*90, x+s*m*65, y-m*30);
    txLine(x+s*m*65, y-m*30, x-s*m*110,y-m*30);
    txLine(x-s*m*35, y-m*180,x-s*m*10, y-m*105);
    txFloodFill(x-s*m*85,y-m*180);

    txSetColor(color3,m*3);
    txSetFillColor(color4);
    txRectangle(x-s*m*95,y-m*180,x-s*m*45,y-m*110);

    txSetColor(color5,m*4);
    txSetFillColor(color6);
    txCircle(x+s*m,y-m*30,m*r);
    txCircle(x-s*m*310,y-m*30,m*r);
}

void drawSun(double x, double y,double m,double r,COLORREF color)
{
    txSetColor(color,m*5);
    txSetFillColor(color);
    txCircle(x,y,m*r);
}
void drawMan(double x, double y,double m,double r,COLORREF color,COLORREF color1,COLORREF color2,COLORREF color3)
{


    txSetFillColor(color);
    txSetColor(color);
    txCircle(x+m,y-m*115,r*m);

    txSetColor(color2,m*7);
    txSetFillColor(color2);
    POINT A [4]{{x-m*25,y-m*100},{x-m*20,y-m*50},{x+m*20,y-m*50},{x+m*25,y-m*100 }};
    txPolygon(A,4);

    txSetColor(color1,7*m);
    txSetFillColor(color1);
    txLine(x-m*25,y-m*100,x-m*38,y-m*67);
    txLine(x+m*25,y-m*100,x+m*38,y-m*67);

    txSetColor(color3,10*m);
    txSetFillColor(color3);
    txLine(x+m*20,y-m*50,x+m*30,y+m*10);
    txLine(x-m*20,y-m*50,x-m*30,y+m*10);


}

