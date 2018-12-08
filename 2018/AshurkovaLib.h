//! \file AshurkovaLib.h
//! @brief Библиотека мультика Аглаи, А

//! @brief рисует облачко
//! @param x - координата x
//! @param y - координата y
//! @param scale - размер облачка
//! @param color - цвет облачка
//! @code draw_cloud(100, 100, 1, RGB(255, 255, 255));
//! @endcode
void draw_cloud(int x, int y, double scale, COLORREF color);

//! @brief рисует мальчика
//! @param x - координата x
//! @param y - координата y
//! @param scale - размер мальчика
//! @param color - цвет одежды мальчика
//! @param boyarm1 - высота поднятия правой руки мальчика
//! @param boyarm2 - высота поднятия левой руки мальчика
//! @param mirroring4 - зеркально отражает мальчика
//! @param eyes3 - глаза мальчика открыты/закрыты
//! @code draw_boy(100, 100, 1, TXBLUE, 25, 30, -1, 1);
//! @endcode
void draw_boy(int x, int y, double scale, COLORREF color, double boyarm1, double boyarm2, short mirroring4, short eyes3);

//! @brief рисует девочку
//! @param x - координата x
//! @param y - координата y
//! @param scale - размер девочки
//! @param color - цвет платья девочки
//! @param hair - длина косы девочки
//! @param girlarm - высота поднятия правой руки девочки
//! @param mirroring3 - зеркально отражает девочку
//! @param eyes2 - глаза девочки открыты/закрыты
//! @param tears - рисует слезы
//! @code draw_girl(100, 100, 0.8, RGB(255, 0, 0), 40, 7, 1, 0, 0);
//! @endcode
void draw_girl(int x, int y, double scale, COLORREF color, double hair, double girlarm, short mirroring3, short eyes2, int tears);

//! @brief рисует птичку
//! @param x - координата x
//! @param y - координата y
//! @param scale - размер птички
//! @param color - цвет оперения птички
//! @param wings - верхнее/нижнее положение крыльев
//! @param mirroring2 - зеркально отражает птичку
//! @param beak - клюв птички открыт/закрыт
//! @param plumage - длина перьев в хвосте
//! @param birdeye - глаза птички закрыты/открыты
//! @code draw_bird(100, 80, 0.9, RGB (16, 45, 78), 55, 3, -1, 4, 1);
//! @endcode
void draw_bird(int x, int y, double scale, COLORREF color, double wings, double beak, short mirroring2, double plumage, short birdeye);

//! @brief рисует зайца
//! @param x - координата x
//! @param y - координата y
//! @param scale - размер зайца
//! @param color - цвет шкурки зайца
//! @param tail - верхнее/нижнее положение хвоста
//! @param mirroring1 - зеркально отражает зайца
//! @param ear - верхнее/нижнее положение уха
//! @param eyes - размер глаза зайца
//! @param legs - расстояние между ногами
//! @code draw_rabbit(270, 495, 0.4, RGB (196, 196, 196), 5, 25, -1, 1, 10);
//! @endcode
void draw_rabbit(int x, int y, double scale, COLORREF color, double tail, double ear, short mirroring1, short eyes, double legs);

//! @brief исует травушку-забавушку
//! @param x - координата x
//! @param y - координата y
//! @param scale - размер травушки-забавушки
//! @param color - цвет травушки-забавушки
void draw_ground(int x, int y, double scale, COLORREF color);

//! @brief рисует декор к дому
//! @param x - координата x
//! @param y - координата y
//! @param scale - размер декора
//! @param color - цвет занавесок
//! @param roof - высота крыши
//! @param floor - количество этажей
//! @param i - вспомогательная переменная к циклу
//! @code draw_decoration (210, 500, 1.0, RGB (82, 47, 0), 10.0, 3, 2);
//! @endcode
void draw_decoration (int x, int y, double scale, COLORREF color, double roof, int floor, int i);

//! @brief рисует панель дома
//! @param x - координата x
//! @param y - координата y
//! @param scale - размер панели
//! @param color - цвет стен дома
//! @param curtains - ширина между двумя занавесками
//! @param onoff - включение света в окне
//! @param floor - количество этажей
//! @code draw_panel(100, 100, 1, TXBROWN, 15, 1, 1);
//! @endcode
void draw_panel(int x, int y, double scale, COLORREF color, double curtains, short onoff, int floor);

//! @brief рисует дом (испульзуюся функции draw_decoration и draw_panel)
//! @param x - координата x
//! @param y - координата y
//! @param scale - размер дома
//! @param color - цвет стен дома
//! @param curtains - ширина между двумя занавесками
//! @param onoff - включение света в окне
//! @param floor - количество этажей
//! @param roof - высота крыши
//! @code draw_house(210, 500, 1.0, RGB (82, 47, 0), 15.0, 1, 10.0, 2);
//! @endcode
void draw_house(int x, int y, double scale, COLORREF color, double curtains, short onoff, double roof, int floor);

//! @brief рисует звезды
//!
//! Рисует точки на небе
void draw_stars();


void draw_house(int x, int y, double scale, COLORREF color, double curtains, short onoff, double roof, int floor)
{
    draw_decoration (210, 500, 1.0, RGB (82, 47, 0), 10.0, 3, 2);
    for(int i = 0; i < floor; i++)
    {
    draw_panel(x, y-150*i, scale, color, curtains, onoff, floor);
    }
}


void draw_decoration (int x, int y, double scale, COLORREF color, double roof, int floor, int i)
{
    //ступеньки
    txSetFillColor (color);
    txRectangle (x+59*scale, y-55*scale, x+70*scale, y-3*scale);
    txRectangle (x+69*scale, y-50*scale, x+80*scale, y-3*scale);

    //крыша
    txSetFillColor (color);
    POINT triangle[3] = {{x-int(110*scale), y-int(150*scale)-i*75}, {x-int(10*scale), y-int((250+roof)*scale)-i*75}, {x+int(90*scale), y-int(150*scale)-i*75}};
    txPolygon (triangle, 3);
}


void draw_panel(int x, int y, double scale, COLORREF color, double curtains, short onoff, int floor)
{
    //панель
    txSetFillColor (color);
    txRectangle (x-80*scale, y-150*scale, x+60*scale, y);

    //окна
    const COLORREF NORMALYELLOW_COLOR = RGB (220, 157, 0);
    if(onoff == 0)
    txSetFillColor (RGB (163, 128, 0));
    if(onoff == 1)
    txSetFillColor (NORMALYELLOW_COLOR);
    txRectangle (x-60*scale, y-133*scale, x+40*scale, y-55*scale);
    txCircle (x-10*scale, y-180*scale, 15*scale);
    txSetFillColor (TX_WHITE);
    txRectangle (x-60*scale, y-133*scale, x-(30+curtains)*scale, y-55*scale);
    txRectangle (x+(10+curtains)*scale, y-133*scale, x+40*scale, y-55*scale);
}


void draw_ground(int x, int y, double scale, COLORREF color)
{
    //рисует землю, лес, дорогу
    //x=0, y=0
    txSetFillColor (color);
    POINT forest[7] = {{x+int(800*scale), y+int(200*scale)}, {x+int(700*scale), y+int(300*scale)}, {x+int(750*scale), y+int(300*scale)}, {x+int(650*scale), y+int(400*scale)}, {x+int(750*scale), y+int(400*scale)}, {x+int(600*scale), y+int(520*scale)}, {x+int(800*scale), y+int(520*scale)}};
    txPolygon (forest, 7);
    txSetFillColor (TX_GREEN);
    txEllipse (x-100*scale, y+450*scale, x+900*scale, y+800*scale);
}


void draw_girl(int x, int y, double scale, COLORREF color, double girlhair, double girlarm, short mirroring3, short eyes2, int tears)
{
    //рисует девочку (персонаж 4)
    //x=470 y=460
    const COLORREF SKIN_COLOR = RGB (255, 217, 171);
    txSetColor (SKIN_COLOR);
    txSetFillColor (SKIN_COLOR);
    txCircle (x, y-100*scale, 12*scale);
    txSetColor (color);
    txSetFillColor (color);
    txCircle (x, y-76*scale, 12*scale);
    POINT dress[3] = {{x, y-int(80*scale)}, {x-int(20*scale), y}, {x+int(20*scale), y}};
    txPolygon (dress, 3);
    txSetColor (color, 7);
    txLine (x-12*scale*mirroring3, y-80*scale, x-(12+girlarm)*scale*mirroring3, y-(50+girlarm)*scale);
    txLine (x+12*scale*mirroring3, y-80*scale, x+(12+girlarm)*scale*mirroring3, y-(50+girlarm)*scale);
    txSetColor (TX_ORANGE);
    txSetFillColor (TX_ORANGE);
    txRectangle (x-12*scale*mirroring3, y-112*scale, x+12*scale*mirroring3, y-104*scale);
    txRectangle (x-15*scale*mirroring3, y-112*scale, x-7*scale*mirroring3, y-(70-girlhair)*scale);
    txRectangle (x+9*scale*mirroring3, y-112*scale, x+15*scale*mirroring3, y-82*scale);
    if(eyes2 == 1)
    {
        txSetColor (TX_BLACK);
        txSetFillColor (TX_BLACK);
        txCircle (x-3*scale*mirroring3, y-100*scale, 2*scale);
        txCircle (x+3*scale*mirroring3, y-100*scale, 2*scale);
    }
    else
    {
        txSetPixel (x-3*scale*mirroring3, y-100*scale, TX_BLACK);
        txSetPixel (x+3*scale*mirroring3, y-100*scale, TX_BLACK);
        txSetPixel (x-4*scale*mirroring3, y-100*scale, TX_BLACK);
        txSetPixel (x+4*scale*mirroring3, y-100*scale, TX_BLACK);
        txSetPixel (x-2*scale*mirroring3, y-100*scale, TX_BLACK);
        txSetPixel (x+2*scale*mirroring3, y-100*scale, TX_BLACK);
    }
    txSetColor (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txCircle (x-10*scale*mirroring3, y, 7*scale);
    txCircle (x+10*scale*mirroring3, y, 7*scale);
    if (tears == 1)
    {
        txSetPixel (x-3*scale*mirroring3, y-99*scale, TX_BLACK);
        txSetPixel (x+3*scale*mirroring3, y-99*scale, TX_BLACK);
        txSetPixel (x-3*scale*mirroring3, y-98*scale, TX_BLACK);
        txSetPixel (x+3*scale*mirroring3, y-98*scale, TX_BLACK);
        txSetPixel (x-3*scale*mirroring3, y-97*scale, TX_BLACK);
        txSetPixel (x+3*scale*mirroring3, y-97*scale, TX_BLACK);
    }
}


void draw_boy(int x, int y, double scale, COLORREF color, double boyarm1, double boyarm2, short mirroring4, short eyes3)
{
    //рисует мальчика (персонаж 5)
    //x=386 y=460
    const COLORREF SKIN_COLOR = RGB (255, 217, 171);
    txSetColor (SKIN_COLOR);
    txSetFillColor (SKIN_COLOR);
    txCircle (x-1*scale*mirroring4, y-103*scale, 12*scale);
    txSetColor (color);
    txSetFillColor (color);
    POINT BODY[3] = {{x-int(13*scale)*mirroring4, y-int(91*scale)}, {x-int(1*scale)*mirroring4, y-int(64*scale)}, {x+int(12*scale)*mirroring4, y-int(91*scale)}};
    txPolygon (BODY, 3);
    txSetColor (color, 7);
    txLine (x+4*scale*mirroring4, y-60*scale, x+4*scale*mirroring4, y);
    txLine (x-4*scale*mirroring4, y-60*scale, x-4*scale*mirroring4, y);
    txSetColor (color);
    txSetFillColor (color);
    txRectangle (x-6*scale*mirroring4, y-70*scale, x+6*scale*mirroring4, y-50*scale);
    txSetColor (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txCircle (x-8*scale*mirroring4, y, 7*scale);
    txCircle (x+8*scale*mirroring4, y, 7*scale);
    txSetColor (TX_ORANGE);
    txSetFillColor (TX_ORANGE);
    txRectangle (x-13*scale*mirroring4, y-115*scale, x+11*scale*mirroring4, y-110*scale);
    txRectangle (x-17*scale*mirroring4, y-115*scale, x-11*scale*mirroring4, y-95*scale);
    txRectangle (x+15*scale*mirroring4, y-115*scale, x+8*scale*mirroring4, y-95*scale);
    txSetColor (color, 7);
    txLine (x-13*scale*mirroring4, y-88*scale, x-(13+boyarm1)*scale*mirroring4, y-(50+boyarm1)*scale);
    txLine (x+12*scale*mirroring4, y-88*scale, x+24*scale*mirroring4, y-(50+boyarm2)*scale);
    if(eyes3 == 1)
    {
        txSetColor (TX_BLACK);
        txSetFillColor (TX_BLACK);
        txCircle (x-3*scale*mirroring4, y-104*scale, 2*scale);
        txCircle (x+3*scale*mirroring4, y-104*scale, 2*scale);
    }
    else
    {
        txSetPixel (x-3*scale*mirroring4, y-104*scale, TX_BLACK);
        txSetPixel (x+3*scale*mirroring4, y-104*scale, TX_BLACK);
        txSetPixel (x-4*scale*mirroring4, y-104*scale, TX_BLACK);
        txSetPixel (x+4*scale*mirroring4, y-104*scale, TX_BLACK);
        txSetPixel (x-2*scale*mirroring4, y-104*scale, TX_BLACK);
        txSetPixel (x+2*scale*mirroring4, y-104*scale, TX_BLACK);
    }
}


void draw_bird(int x, int y, double scale, COLORREF color, double wings, double beak, short mirroring2, double plumage, short birdeye)
{
    //рисует птицу (персонаж 3)
    //x=372  y=200
    txSetColor (color);
    txSetFillColor (color);
    txCircle (x-(12*scale)*mirroring2, y, 12*scale);
    txSetColor (color, 10);
    txLine (x-(12*scale)*mirroring2, y+2*scale, x+(38*scale)*mirroring2, y+2*scale);
    txSetColor (color, 6);
    txLine (x+(38*scale)*mirroring2, y+2*scale, x+(72*scale)*mirroring2, y-(7+plumage)*scale);
    txLine (x+(38*scale)*mirroring2, y+2*scale, x+(72*scale)*mirroring2, y+2*scale);
    txLine (x+(38*scale)*mirroring2, y+2*scale, x+(72*scale)*mirroring2, y+(11+plumage)*scale);
    POINT wing[4] = {{x+(int(5*scale))*mirroring2,y+int(2*scale)}, {x+(int(41*scale))*mirroring2, y+int((30-wings)*scale)}, {x+(int(59*scale))*mirroring2, y+int((28-wings)*scale)}, {x+(int(28*scale))*mirroring2, y+int(2*scale)}};
    txPolygon (wing, 4);
    txSetColor (TX_YELLOW);
    txSetFillColor (TX_YELLOW);
    POINT BIRDSNOSE1[3] = {{x-(int(24*scale))*mirroring2, y}, {x-(int(30*scale))*mirroring2, y+int((3-beak)*scale)}, {x-(int(24*scale))*mirroring2, y+int(6*scale)}};
    txPolygon (BIRDSNOSE1, 3);
    POINT BIRDSNOSE2[3] = {{x-(int(24*scale))*mirroring2, y}, {x-(int(30*scale))*mirroring2, y+int((3+beak)*scale)}, {x-(int(24*scale))*mirroring2, y+int(6*scale)}};
    txPolygon (BIRDSNOSE2, 3);
    if(birdeye == 1)
    {
        txSetColor (RGB (255, 66, 66));
        txSetFillColor (RGB (255, 66, 66));
        txCircle (x-(14*scale)*mirroring2, y, 2*scale);
    }
}


void draw_rabbit(int x, int y, double scale, COLORREF color, double tail, double ear, short mirroring1, short eyes, double legs)
{
    //рисует зайца (персонаж 2)
    //x=231  y=500
    txSetFillColor (color);
    txCircle (x-(31*scale)*mirroring1, y+30*scale, 15*scale);
    txSetFillColor (TX_PINK);
    txCircle (x-(39*scale)*mirroring1, y+35*scale, 5*scale);
    txSetFillColor (color);
    txEllipse (x-(32*scale)*mirroring1, y+30*scale, x+((19-ear)*scale)*mirroring1, y+(12-ear)*scale);
    txEllipse (x-(36*scale)*mirroring1, y-15*scale, x-(21*scale)*mirroring1, y+20*scale);
    txSetFillColor (TX_BLACK);
    if(eyes == 1)
    txCircle (x-(29*scale)*mirroring1, y+29*scale, 5*scale);
    else
    txCircle (x-(29*scale)*mirroring1, y+29*scale, 3*scale);
    txSetFillColor (color);
    txEllipse (x-(31*scale)*mirroring1, y+30*scale, x+(29*scale)*mirroring1, y+50*scale);
    txCircle (x+(29*scale)*mirroring1, y+(40-tail)*scale, 7*scale);
    txCircle (x-((13+legs)*scale)*mirroring1, y+50*scale, 7*scale);
    txCircle (x+((14+legs)*scale)*mirroring1, y+50*scale, 7*scale);
}


void draw_cloud(int x, int y, double scale, COLORREF color)
{
    //x=150 y=125
    txSetFillColor (color);
    txCircle (x, y, 30*scale);
    txCircle (x-35*scale, y+15*scale, 30*scale);
    txCircle (x+35*scale, y+15*scale, 30*scale);
    txCircle (x, y+15*scale, 30*scale);
}


void draw_stars()
{
     txSetPixel(100, 100, TX_WHITE);
     txSetPixel(200, 300, TX_WHITE);
     txSetPixel(400, 50, TX_WHITE);
     txSetPixel(500, 240, TX_WHITE);
     txSetPixel(600, 70, TX_WHITE);
     txSetPixel(430, 400, TX_WHITE);
     txSetPixel(500, 380, TX_WHITE);
     txSetPixel(600, 250, TX_WHITE);
     txSetPixel(700, 490, TX_WHITE);
     txSetPixel(350, 10, TX_WHITE);
     txSetPixel(440, 17, TX_WHITE);
     txSetPixel(570, 25, TX_WHITE);
     txSetPixel(260, 46, TX_WHITE);
     txSetPixel(330, 310, TX_WHITE);
     txSetPixel(410, 410, TX_WHITE);
     txSetPixel(400, 210, TX_WHITE);
}
