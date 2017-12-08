
//! @file KonstantinInshakovLib.h
//! @brief Библиотека Константина Иншакова
//! @warning Данная библиотека работает только вместе с библиотекой TXLib
//!
//!
//{----------------------------------------
//!
//! @brief Рисует солнце
//!
//! @param x        положение по оси X центра солнца
//! @param y        положение по оси Y центра солнца
//! @param scale    коэффицент размера(при значении равном 1 радиус и длина лучей равны 100 пикселей)
//! @param color    отвечает за цвет(всего объекта)
//! @param lenght   коэффицент длины лучей(при значении равном 1,длина лучей 100 пикселей)
//! @param radius   прибавка к радиусу
//! @param lines    отвечает за существование или отсутствие лучей (если равно 0 лучи исчезают)
//! @param spin     вращает солнце по кругу (работает не совсем так как надо)
//! @param on       отвечает за существование объекта (если равно 0 объект исчезает)
//!
//!  @code
//! drawSun(100,100,1,TX_YELLOW,1,0,1,0,1)
//! @endcode
//}----------------------------------------
void drawSun(int x, int y, double scale,COLORREF color,double lenght,int radius,int lines,int spin,int on);

//{----------------------------------------
//!
//! @brief Рисует человека
//!
//! @param x            положение по оси X основания ног
//! @param y            положение по оси Y основания ног
//! @param scale        коэффицент размера(при значении равном 1 высота равна 250 пикселей, ширина 100)
//! @param color        отвечает за цвет(всего объекта)
//! @param z            смещение центра рта(при значении равном 140 рот является одним отрезком)
//! @param angle        перемещение левой руки по вертикали(при слишком большом значении ломает рисунок)
//! @param eyes_closed  отвечает за закрытие глаз(при значении больше 0 глаза закрыты)
//! @param angle_legs   перемещение ног по горизонтали(при слишком большом значении ломает рисунок)
//! @param eyes_move    перемещение глаз по оси X(при слишком большом значении ломает рисунок)
//! @param angle2       перемещение правой руки по вертикали(при слишком большом значении ломает рисунок)
//!
//!  @code
//! drawHuman(500,500,1,TX_BLACK,140,0,0,0,0,0)
//! @endcode
//!
//}----------------------------------------
void drawHuman(int x,int y, double scale,COLORREF color,int z,int angle,int eyes_closed,int angle_legs,int eyes_move,int angle2);
//{----------------------------------------
//!
//! @brief Рисует дерево
//!
//! @param x                положение по оси X центра кроны
//! @param y                положение по оси Y центра кроны
//! @param scale            коэффицент размера(при значении равном 1 высота 200б радиус кроны 100)
//! @param color            отвечает за цвет ствола(рекомендую использовать RGB)
//! @param radius           прибавка к  радиусу кроны
//! @param width            толщина ствола(в пикселях)
//! @param z                толщина веток(в пикселях)
//! @param branch1_exist    отвечает за существование правой ветки(при любом значении больше 0 ветка существует)
//! @param branch2_exist    отвечает за существование левой ветки(при любом значении больше 0 ветка существует)
//!
//!  @code
//! drawTree1(700,700,1,TX_BLACK,1,25,10,1,1)
//! @endcode
//!
//}----------------------------------------
void drawTree1(int x,int y, double scale,COLORREF color,int radius,int width,int z,int branch1_exist, int branch2_exist);

//{----------------------------------------
//!
//! @brief Рисует дом
//!
//! @param x                положение по оси X верхней точки крыши
//! @param y                положение по оси Y верхней точки крыши
//! @param scale            коэффицент размера (при значении равном 1 ширина равна 300 высота 400)
//! @param color1           отвечает за цвет крыши
//! @param color2           отвечает за цвет стен
//! @param color3           отвечает за цвет двери
//! @param width            прибавка к ширине(перемещает правый край направо на заданное число пикселей)
//! @param height           прибавка к высоте крыши(перемещает верхнюю точку вверх на заданное число пикселей)
//! @param light_on         параметр цвета окна(если равен 0, окно чёрное. Иначе жёлтое)
//! @param door_open        параметр открытия и закрытия двери(Если равен 0, дверь закрыта.Иначе открыта.)
//! @param high2            отвечает за высоту всего дома(нижний край остаётся на месте.Остальные точки перемещаются вверх на заданное число пикселей)
//!
//!  @code
//! drawHouse(100,700,1,TX_RED,TX_BLACK,TX_RED,0,0,1,0,0)
//! @endcode
//!
//}----------------------------------------
void drawHouse(int x, int y, double scale,COLORREF color1,COLORREF color2,COLORREF color3, int width,int height,int light_on,int door_open,int high2);

//{----------------------------------------
//!
//!  @brief Рисует ель
//!
//!  @param x        положение по оси X верхней точки верхнего треугольника
//!  @param y        положение по оси Y верхней точки верхнего треугольника
//!  @param scale    коэффицент размера(при значении равном 1 высота 375 ширина нижнего треугольника 350 )
//!  @param color1   цвет листвы
//!  @param color2   цвет ствола
//!  @param high     перемещение верхней точки верхнего треугольника по оси y
//!  @param width    прибавка к ширине нижнего треугольника(симметрия сохраняетя)
//!  @param z        прибавка к длине ствола
//!  @param width2   прибавка к ширине среднего треугольника(симметрия сохраняетя)
//!  @param width3   прибавка к ширине верхнего треугольника(симметрия сохраняетя)
//!
//!  @code
//! drawTree2(1150,450,1,TX_GREEN,RGB(139,69,19),0,0,0,0,0)
//! @endcode
//}----------------------------------------
void drawTree2(int x, int y, double scale,COLORREF color1,COLORREF color2,int high,int width,int z,int width2,int width3);

void drawSun(int x, int y, double scale,COLORREF color,double lenght, int radius,int lines,int spin ,int on)
{
    txSetColor(color,4);
    txSetFillColor(color);
    if(on==0)
    {
        txSetColor(TX_WHITE);
        txSetColor(TX_WHITE);
    }
    if(lines==0)
    {
        txSetColor(TX_WHITE);
    }
    txLine(x,y,x+spin,y+200*scale*lenght);
    txLine(x,y,x-spin,y-200*scale*lenght);
    txLine(x,y,x+200*scale*lenght,y+spin);
    txLine(x,y,x-200*scale*lenght,y-spin);
    txLine(x,y,x-200*scale*lenght,y-200*scale*lenght+spin);
    txLine(x,y,x+200*scale*lenght+spin,y+200*scale*lenght);
    txLine(x,y,x-200*scale*lenght,y+200*scale*lenght+spin);
    txLine(x,y,x+200*scale*lenght-spin,y-200*scale*lenght);
    txSetColor(color,4);
    txSetFillColor(color);
    txCircle(x,y,(100+radius)*scale);
}
void drawHuman(int x,int y, double scale,COLORREF color,int z,int angle,int eyes_closed,int angle_legs,int eyes_move,int angle2)
{
    txSetColor(color, 4);
    txSetFillColor(TX_WHITE);
    txLine(x,y,x+(50+angle_legs)*scale,y+100*scale);
    txLine(x,y,x,y-150*scale);
    txLine(x,y,x-(50+angle_legs)*scale,y+100*scale);
    txLine(x,y-50*scale,x+50*scale,y-(100+angle)*scale);
    txLine(x,y-50*scale,x-50*scale ,y-(100+angle2)*scale);
    txCircle(x,y-150*scale,50*scale);
    if(eyes_closed>0)
    {
        txSetFillColor(color);
    }
    txCircle(x-(25+eyes_move)*scale,y-165*scale,5*scale);
    txCircle(x+(25-eyes_move)*scale,y-165*scale,5*scale);
    txLine(x+25*scale,y-140*scale,x,y-z*scale);
    txLine(x,y-z*scale,x-25*scale,y-140*scale);
}

void drawTree1(int x, int y, double scale,COLORREF color,int radius,int width,int z,int branch1_exist,int branch2_exist )
{
    txSetColor(TX_GREEN);
    txSetFillColor(TX_GREEN);
    txCircle(x,y,(100*scale)+radius);
    txSetColor(color,width*scale);
    txSetFillColor(color);
    txLine(x,y+(100+radius)*scale,x,y+300*scale);
    txSetColor(color,z*scale);
    if(branch2_exist>0)
        txLine(x,y+170*scale,x-100*scale,y+130*scale);
    txSetColor(TX_GREEN);
    txSetFillColor(TX_GREEN);
    if(branch2_exist>0)
        txCircle(x-100*scale,y+130*scale,40*scale+radius);
    txSetColor(color,z*scale);
    txSetFillColor(color);
    if(branch1_exist>0)
        txLine(x,y+190*scale,x+50*scale,y+170*scale);
    txSetColor(TX_GREEN);
    txSetFillColor(TX_GREEN);
    if(branch1_exist>0)
        txCircle(x+50*scale,y+170*scale,30*scale+radius);
}
void drawHouse(int x, int y, double scale,COLORREF color1,COLORREF color2,COLORREF color3, int width,int height,int light_on,int door_open,int high)
{
    txSetColor(color1);
    txSetFillColor(color1);
    POINT roof[3] = {{x+width*0.5*scale,y+height-high}, {x-150*scale, y+(150-high)*scale}, {x+(150+width)*scale, y+(150-high)*scale}};
    txPolygon (roof, 3);
    txSetColor(color2);
    txSetFillColor(color2);
    POINT house[4] = {{x-150*scale,y+(150-high)*scale}, {x-150*scale, y+400*scale}, {x+(150+width)*scale, y+400*scale}, {x+(150+width)*scale, y+(150-high)*scale}};
    txPolygon (house, 4);
    txSetColor(TX_YELLOW);
    txSetFillColor(TX_YELLOW);
    if(light_on=0)
    {
        txSetFillColor(RGB(0,0,0 ));
        txSetColor(RGB(0, 0, 0) );
    }
    txRectangle(x-120*scale,y+200*scale,x-20*scale,y+300*scale);
    txSetColor(TX_BLACK,4);
    txSetFillColor(TX_BLACK);
    txLine(x-70*scale,y+200*scale,x-70*scale,y+300*scale);
    txLine(x-120*scale,y+250*scale,x-20*scale,y+250*scale);
    txSetColor(color3,4);
    txSetFillColor(color3);
    if(door_open>0)
    {
        txSetColor(TX_BLACK);
        txSetFillColor(TX_BLACK);
    }
    txRectangle(x+10*scale,y+400*scale,x+110*scale,y+200*scale);
    txSetColor(RGB(255, 215, 0));
    txSetFillColor(RGB(255, 215, 0));
    if(door_open>0)
    {
        txSetColor(TX_BLACK);
        txSetFillColor(TX_BLACK);
    }
    txCircle(x+25*scale,y+300*scale,10*scale);
}
void drawTree2(int x, int y, double scale,COLORREF color1,COLORREF color2,int high,int width,int z,int width2,int width3)
{
    txSetColor(color1);
    txSetFillColor(color1);
    POINT part1[3] = {{x,y-high},{x+(75+width3*0.5)*scale,y+100*scale},{x-(75+width3*0.5)*scale,y+100*scale}};
    txPolygon (part1,3);
    POINT part2[4] = {{x+25*scale,y+100*scale},{x-25*scale,y+100*scale},{x-(125+width2*0.5)*scale,y+200*scale},{x+(125+width2*0.5)*scale,y+200*scale}};
    txPolygon (part2,4);
    POINT part3[4] = {{x+(175+(0.5*width))*scale,y+300*scale},{x-(175-(0.5*width))*scale,y+300*scale},{x-25*scale,y+200*scale},{x+25*scale,y+200*scale}};
    txPolygon (part3,4);
    txSetColor(color2);
    txSetFillColor(color2);
    txRectangle(x-25*scale,y+300*scale,x+25*scale,y+(375+z)*scale);
}
