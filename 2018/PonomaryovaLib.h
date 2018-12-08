///\file PonomaryovaLib.h
//! @brief    Библиотека с закалённым слоном (Пономарёва Ирина)

//! @brief    Рисует новогоднюю ёлку с гирляндой и тремя шариками
//! @param    x               координата, проходящая через центр ёлки по ох
//! @param    y               координата верхушки пня
//! @param    scale           размер ёлки
//! @param    color           основной цвет "иголок" ёлки
//! @param    thickness       регулирует толщину пня
//! @param    colorsh         регулирует цвет шариков
//! @param    mirroring       перевшивает шарики на другую ветку и запускает гирлянду в другую сторону
//! @param    onoff           "включает" и "выключает" гирлянду||
/// @code     draw_christmastree(800, 450, 1.0, RGB(3,192,60), 1.5, TX_RED, 1, 1);
/// @endcode
void draw_christmastree(int x, int y, double scale, COLORREF color, double thickness, COLORREF colorsh, int mirroring, short onoff);

//! @brief    Рисует снеговика
//! @param    x               координата, проходящая через центр снеговика по ох
//! @param    y               координата центр второго шара
//! @param    scale           размер снеговика
//! @param    color           основной цвет снеговика
//! @param    lengthcarrot    регулирует длину морковки
//! @param    heights         регулирует высоту поднятие рук снеговика
//! @param    mirroring       морковка направлена в другую сторону
//! @param    mood            регулирует настроение снеговика
/// @code     draw_snowman(500, 450, 1.0, RGB(202,218,186), 10, -20, -1, -1);
/// @endcode
void draw_snowman(int x, int y, double scale, COLORREF color, int lengthcarrot, int heights, int mirroring, int mood);

//! @brief    Рисует фейерверк
//! @param    x               координата центральной точки фейерверка
//! @param    y               координата центральной точки фейерверка
//! @param    scale           размер фейервека
//! @param    color           цвет фейерверка
//! @param    ftail           регулирует наличие "хвоста" у взрыва
//! @param    mirroring       "хвост" направлен в другую сторону
//! @param    dot             регулирует положение взрыва - уже произошёл/не произошёл
//! @param    colorf          цвет хвоста
/// @code     draw_firework(950, 100, 1.0, TX_PINK, 0, -1, 1, TX_PINK);
/// @endcode
void draw_firework     (int x, int y, double scale, COLORREF color, int ftail, int mirroring, short dot, COLORREF colorf);

//! @brief    Рисует подарок с ленточкой
//! @param    x               координата центральной точки коробки
//! @param    y               координата центральной точки коробки
//! @param    scale           размер подарка
//! @param    color           цвет коробки
//! @param    colortape       цвет ленточки
//! @param    heightp         регулирует ширину коробки
/// @code     draw_present(750, 510, 0.4, RGB(255,0,255), RGB(255,209,220), 0);
/// @endcode
void draw_present      (int x, int y, double scale, COLORREF color, COLORREF colortape, int heightp);

//! @brief    Рисует слона
//! @param    x               координата центра туловища
//! @param    y               координата центра туловища
//! @param    scale           размер слона
//! @param    color           цвет кожи
//! @param    coloreyes       цвет глаз
//! @param    heightet        регулирует высоту поднятия хобота
//! @param    mirroring       поворачивает слона в другую сторону
//! @param    walking         регулирует состояние слона - идёт/не идёт
//! @note     цвет внутренней части уха всегда светло-серый
/// @code     draw_elephant(210, 400, 1.0, TX_GRAY, RGB(150,75,0), 10, -1, 1);
/// @endcode
void draw_elephant     (int x, int y, double scale, COLORREF color, COLORREF coloreyes, int heightet, int mirroring, short walking);

void draw_christmastree(int x,int y,double scale,COLORREF color,double thickness, COLORREF colorsh, int mirroring, short onoff)
{
    txSetColor(RGB(101,67,33));
    txSetFillColor(RGB(101,67,33));
    txRectangle(x-(10*scale)*thickness,y+75*scale,x+(10*scale)*thickness,y);

    txSetColor(color);
    txSetFillColor(color);
    POINT triangle[3]=
    {{x-int(150*scale),y+int(25*scale)},
    { x+int(150*scale),y+int(25*scale)},
    { x,               y-int(125*scale)}};
    txPolygon(triangle,3);

    POINT triangle2[3]=
    {{x-int(100*scale),y-int(80*scale )},
    { x+int(100*scale),y-int(80*scale )},
    { x,               y-int(190*scale)}};
    txPolygon(triangle2,3);

    POINT triangle3[3]=
    {{x-int(75*scale),y-int(140*scale)},
    { x+int(75*scale),y-int(140*scale)},
    { x,              y-int(220*scale)}};
    txPolygon(triangle3,3);

    txSetColor(TX_BLACK,2*scale);
    txSetFillColor(TX_BLACK);
    txLine(x-90*scale*mirroring,y+25*scale,x+49*scale*mirroring,y-75*scale);
    txLine(x-70*scale*mirroring,y-80*scale,x+43*scale*mirroring,y-175*scale);

    if (onoff == 0)
    {
        txSetColor(TX_BLACK);
        txSetFillColor(TX_BLACK);

        txCircle(x-80*scale*mirroring,y+18*scale, 5*scale);
        txCircle(x-8*scale*mirroring, y-33*scale, 5*scale);
        txCircle(x-61*scale*mirroring,y-86*scale, 5*scale);
        txCircle(x+9*scale*mirroring, y-145*scale,5*scale);
    }
    else
    {
        txSetColor(TX_RED);
        txSetFillColor(TX_RED);

        txCircle(x-80*scale*mirroring,y+18*scale, 5*scale);
        txCircle(x-8*scale*mirroring, y-33*scale, 5*scale);
        txCircle(x-61*scale*mirroring,y-86*scale, 5*scale);
        txCircle(x+9*scale*mirroring, y-145*scale,5*scale);
    }

     if (onoff == 0)
    {
        txSetColor(TX_BLACK);
        txSetFillColor(TX_BLACK);
        txCircle(x-62*scale*mirroring,y+5*scale,  5*scale);
        txCircle(x+12*scale*mirroring,y-46*scale, 5*scale);
        txCircle(x-45*scale*mirroring,y-100*scale,5*scale);
        txCircle(x+25*scale*mirroring,y-160*scale,5*scale);
    }
    else
    {
        txSetColor(TX_YELLOW);
        txSetFillColor(TX_YELLOW);

        txCircle(x-62*scale*mirroring,y+5*scale,  5*scale);
        txCircle(x+12*scale*mirroring,y-46*scale, 5*scale);
        txCircle(x-45*scale*mirroring,y-100*scale,5*scale);
        txCircle(x+25*scale*mirroring,y-160*scale,5*scale);
    }

     if (onoff == 0)
    {
        txSetColor(TX_BLACK);
        txSetFillColor(TX_BLACK);
        txCircle(x-43*scale*mirroring,y-8*scale,  5*scale);
        txCircle(x+30*scale*mirroring,y-59*scale, 5*scale);
        txCircle(x-28*scale*mirroring,y-115*scale,5*scale);
    }
    else
    {
        txSetColor(TX_GRAY);
        txSetFillColor(TX_GRAY);
        txCircle(x-43*scale*mirroring,y-8*scale,  5*scale);
        txCircle(x+30*scale*mirroring,y-59*scale, 5*scale);
        txCircle(x-28*scale*mirroring,y-115*scale,5*scale);
    }

     if (onoff == 0)
    {
        txSetColor(TX_BLACK);
        txSetFillColor(TX_BLACK);
        txCircle(x-27*scale*mirroring,y-20*scale, 5*scale);
        txCircle(x-9*scale*mirroring, y-130*scale,5*scale);
    }
    else
    {
        txSetColor(RGB(80,200,120));
        txSetFillColor(RGB(80,200,120));
        txCircle(x-27*scale*mirroring,y-20*scale, 5*scale);
        txCircle(x-9*scale*mirroring, y-130*scale,5*scale);
    }



    txSetColor(colorsh);
    txSetFillColor(colorsh);
    txCircle(x-100*scale,y+35*scale, 10*scale);
    txCircle(x+85*scale, y-int(70*scale), 10*scale);
    txCircle(x-65*scale, y-int(130*scale), 10*scale);

}

void draw_snowman      (int x,int y,double scale,COLORREF color,int lengthcarrot,  int heights, int mirroring, int mood)
{
    txSetFillColor(color);
    txSetColor(color);
    txCircle(x,y,100*scale);
    txCircle(x,y-125*scale,75*scale);
    txCircle(x,y-225*scale,50*scale);

    txSetFillColor(TX_ORANGE);
    txSetColor(TX_ORANGE);
    POINT carrot[3]=
    {{x,              y-int(230*scale)},
    { x,              y-int(220*scale)},
    { x+(int(50*scale+lengthcarrot))*mirroring,y-int(225*scale)}};
    txPolygon(carrot,3);

    txSetFillColor(RGB(101,67,33));
    txSetColor(RGB(101,67,33),5*scale);
    txLine(x+75*scale,y-125*scale,x+150*scale,y-(175*scale)+heights);
    txLine(x-75*scale,y-125*scale,x-150*scale,y-(175*scale)+heights);

    txSetFillColor(TX_BLACK);
    txSetColor(TX_BLACK);
    txCircle(x-15*scale,y-240*scale,5*scale);
    txCircle(x+15*scale,y-240*scale,5*scale);

    txCircle(x,         y-(200+2*mood)*scale,5*scale);
    txCircle(x+10*scale,y-(200+5*mood)*scale,5*scale);
    txCircle(x-10*scale,y-(200+5*mood)*scale,5*scale);
    txCircle(x+20*scale,y-(200+10*mood)*scale,5*scale);
    txCircle(x-20*scale,y-(200+10*mood)*scale,5*scale);

    txCircle(x,         y-150*scale,5*scale);
    txCircle(x,         y-100*scale,5*scale);
    txCircle(x,         y-125*scale,5*scale);
    txCircle(x,         y,          5*scale);
    txCircle(x,         y-25*scale, 5*scale);
    txCircle(x,         y+25*scale, 5*scale);
}

void draw_firework     (int x,int y,double scale,COLORREF color,int ftail,int mirroring,short dot,COLORREF colorf)
{
    txSetFillColor(color);
    txSetColor(color,4);
    if (dot == 0)
        txCircle(x,y,2);

    else
    {
        txCircle(x,y,2);
        txLine(x+5*scale*mirroring,y+3*scale,x+50*scale*mirroring,y+21*scale);
        txLine(x-5*scale*mirroring,y+3*scale,x-50*scale*mirroring,y+15*scale);
        txLine(x-2*scale*mirroring,y+3*scale,x-47*scale*mirroring,y+37*scale);
        txLine(x+4*scale*mirroring,y-2*scale,x+45*scale*mirroring,y-35*scale);
        txLine(x+4*scale*mirroring,y+3*scale,x+45*scale*mirroring,y+40*scale);
        txLine(x-5*scale*mirroring,y-2*scale,x-42*scale*mirroring,y-39*scale);
        txLine(x+2*scale*mirroring,y+3*scale,x+53*scale*mirroring,y+14*scale);
        txLine(x-3*scale*mirroring,y-1*scale,x-41*scale*mirroring,y-16*scale);
        txLine(x+5*scale*mirroring,y-3*scale,x+43*scale*mirroring,y-23*scale);
        txLine(x-4*scale*mirroring,y+5*scale,x-34*scale*mirroring,y+15*scale);
        txLine(x+3*scale*mirroring,y+3*scale,x+11*scale*mirroring,y+40*scale);
        txLine(x-5*scale*mirroring,y-2*scale,x-12*scale*mirroring,y-39*scale);
        txLine(x+1*scale*mirroring,y-2*scale,x+16*scale*mirroring,y-61*scale);
        txLine(x-3*scale*mirroring,y+5*scale,x-11*scale*mirroring,y+63*scale);
    }

    txSetColor(colorf,2);
    txLine(x,y,x+(50*scale)*ftail*mirroring,y+(100*scale)*ftail);
}

void draw_present      (int x,int y,double scale,COLORREF color,COLORREF colortape,int heightp)
{
    txSetColor(color);
    txSetFillColor(color);
    txRectangle(x-50*scale,y-50*scale-heightp,x+50*scale,y+50*scale);
    txSetColor(colortape,3);
    txLine(x,y-50*scale-heightp,x,y+50*scale);

    txLine(x,         y-50*scale-heightp,x+15*scale,y-80*scale-heightp);
    txLine(x+25*scale,y-65*scale-heightp,x+15*scale,y-80*scale-heightp);
    txLine(x,         y-50*scale-heightp,x+25*scale,y-65*scale-heightp);
    txLine(x,         y-50*scale-heightp,x-15*scale,y-80*scale-heightp);
    txLine(x-25*scale,y-65*scale-heightp,x-15*scale,y-80*scale-heightp);
    txLine(x,         y-50*scale-heightp,x-25*scale,y-65*scale-heightp);
}

void draw_elephant     (int x,int y,double scale,COLORREF color,COLORREF coloreyes,int heightet, int mirroring, short walking)
{
    txSetFillColor(color);
    txSetColor(TX_BLACK);
    txCircle(x,          y,         75*scale);
    txCircle(x-120*scale*mirroring,y-80*scale,25*scale);
    txCircle(x-60*scale*mirroring, y-80*scale,25*scale);

    txSetFillColor(TX_LIGHTGRAY);
    txSetColor(TX_LIGHTGRAY);
    txCircle(x-117*scale*mirroring,y-75*scale,10*scale);
    txCircle(x-63*scale*mirroring, y-75*scale,10*scale);

    txSetFillColor(color);
    txSetColor(TX_BLACK);
    txCircle(x-90*scale*mirroring,y-45*scale,35*scale);

    txSetColor((color),15*scale);
    txLine(x-85*scale*mirroring, y-45*scale,         x-115*scale*mirroring,y+5*scale);
    txLine(x-135*scale*mirroring,y-15*scale+heightet,x-115*scale*mirroring,y+5*scale);

    txSetColor((color),23*scale);
    txLine(x-15*scale*mirroring,y+50*scale,x-15*scale*mirroring,y+105*scale);
    txLine(x+45*scale*mirroring,y+50*scale,x+45*scale*mirroring,y+105*scale);
    if (walking == 0)
    {
        txLine(x-45*scale*mirroring,y+50*scale,x-45*scale*mirroring,y+105*scale);
        txLine(x+15*scale*mirroring,y+50*scale,x+15*scale*mirroring,y+105*scale);
    }
    else
    {
        txSetColor((color),23*scale);
        txLine(x-45*scale*mirroring,y+50*scale,x+45+(15*mirroring)*scale*mirroring,y+105*scale);
        txLine(x+15*scale*mirroring,y+50*scale,x-15+(15*mirroring)*scale*mirroring,y+105*scale);
    }

    txSetColor((color),5*scale);
    txLine(x+70*scale*mirroring, y-5*scale, x+90*scale*mirroring,y+30*scale);
    txLine(x+85*scale*mirroring, y+55*scale,x+90*scale*mirroring,y+30*scale);
    txLine(x+95*scale*mirroring, y+56*scale,x+90*scale*mirroring,y+30*scale);
    txLine(x+105*scale*mirroring,y+55*scale,x+90*scale*mirroring,y+30*scale);

    txSetFillColor(TX_WHITE);
    txSetColor(TX_WHITE);
    txCircle(x-100*scale*mirroring,y-55*scale,9*scale);
    txCircle(x-80*scale*mirroring, y-55*scale,9*scale);

    txSetFillColor(coloreyes);
    txSetColor(coloreyes);
    txCircle(x-100*scale*mirroring,y-55*scale,7*scale);
    txCircle(x-80*scale*mirroring, y-55*scale,7*scale);

    txSetFillColor(TX_BLACK);
    txSetColor(TX_BLACK);
    txCircle(x-100*scale*mirroring,y-55*scale,5*scale);
    txCircle(x-80*scale*mirroring, y-55*scale,5*scale);
}
