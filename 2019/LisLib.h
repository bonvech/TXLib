///@file "LisLib.h"
///\author amosova "фикус"
///\2019-11-26

///---------------------------------------------------------

/**
    \brief рисует сердечко
    \param x x - координата по центральной x
    \param y y - координата по верхней y
    \param ccolor - задаёт цвет контура
    \param bcolor - задаёт цвет заливки
    \param scale - задаёт маштаб
    \param dir - задаёт отражение по оси y
    Пример использования:
    \code
        draw_heart(200, 125, TX_RED, TX_LIGHTRED, 0.7, 1);
    \endcode
**/
void draw_heart(int x, int y, COLORREF ccolor, COLORREF bcolor, double scale, int dir) //функция сердце
{
    txSetColor(ccolor,10*scale);
    txSetFillColor(bcolor);
    POINT heart[10] = {{x,                  y                    }, {x - int( 50*scale), y - int( 50*scale*dir)},
                       {x - int(100*scale), y - int(50*scale*dir)}, {x - int(150*scale), y                     },
                       {x - int(150*scale), y + int(50*scale*dir)}, {x,                  y + int(200*scale*dir)},
                       {x + int(150*scale), y + int(50*scale*dir)}, {x + int(150*scale), y                     },
                       {x + int(100*scale), y - int(50*scale*dir)}, {x + int( 50*scale), y - int( 50*scale*dir)}};

    txPolygon (heart, 10);
}

///---------------------------------------------------------

/**
    \brief рисует птицу
    \param x x - координата по задней x
    \param y y - координата по центральной y
    \param ccolor - задаёт цвет контура
    \param bcolor - задаёт цвет заливки
    \param scale - задаёт маштаб
    \param hvost1 - движение верхней части хвоста по оси y
    \param hvost2 - движение нижней части хвоста по оси y
    \param hair - изменение хохолка
    \param eye - изменение глаз
    \param eyes - при eye != 1, движение глаза по оси y
    \param dir - задаёт отражение по оси x
    \param footy - движение ноги по оси x
    Пример использования:
    \code
        draw_bird(275,375,TX_GREEN, TX_LIGHTGREEN, 0.6, +25, -5, 2, 1, +0, -1, -25);
    \endcode
**/
void draw_bird(int x,int y, COLORREF ccolor, COLORREF bcolor, double scale, int hvost1, int hvost2, int hair, int eye, int eyes, int dir, int footy) //функция птица 1
{
    txSetColour(ccolor,10*scale);
    txLine(x,y,x - 50*scale*dir,y - (50 + hvost1)*scale); //верхняя часть хвоста
    txLine(x,y,x - 50*scale*dir,y                      ); //средняя часть хвоста
    txLine(x,y,x - 50*scale*dir,y + (50 - hvost2)*scale); //нижняя часть хвоста
    txSetFillColour(bcolor);
    if(hair==1)
    {
        txLine(x + 100*scale*dir,y - 50*scale,x +  75*scale*dir,y - 100*scale); //лево хохолка
        txLine(x + 100*scale*dir,y - 50*scale,x + 100*scale*dir,y - 100*scale); //центр хохолка
        txLine(x + 100*scale*dir,y - 50*scale,x + 125*scale*dir,y - 100*scale); //право хохолка
    }
    else
    {
         POINT birdr[3] = {{x + int( 50*scale*dir), y - int( 50*scale)},
                           {x + int( 75*scale*dir), y - int(100*scale)},
                           {x + int(100*scale*dir), y - int( 50*scale)}};
         txPolygon (birdr, 3);
    }
    txLine(x + 75 *scale*dir,y + 50*scale,x + (75 + footy)*scale*dir,y + 100*scale);
    POINT birdbody1[6] = {{x,                      y                },
                          {x + int( 50*scale*dir), y - int(50*scale)},
                          {x + int(100*scale*dir), y - int(50*scale)},
                          {x + int(150*scale*dir), y                },
                          {x + int(100*scale*dir), y + int(50*scale)},
                          {x + int( 50*scale*dir), y + int(50*scale)}};
    txPolygon (birdbody1, 6); //тело
    txSetColour(ccolor,5*scale);
    txSetFillColour(TX_BLACK);
    if(eye==1)
    {
        POINT birdeye1[3] = {{x + int(125*scale*dir), y                },
                             {x + int(100*scale*dir), y                },
                             {x + int(100*scale*dir), y - int(25*scale)}};
        txPolygon (birdeye1, 3); //глаз
    }
    else
    {
        txSetColour(TX_BLACK,5*scale);
        txLine(x + 100*scale*dir,y,x + 100*scale*dir,y - (25 - eyes)*scale);
    }
}

///---------------------------------------------------------

/**
    \brief рисует бабочку
    \param x x - координата по центральной x
    \param y y - координата по верхней y
    \param ccolor - задаёт цвет контура крыльев
    \param bcolor - задаёт цвет заливки крыльев
    \param ccolor2 - задаёт цвет контура тела
    \param bcolor2 - задаёт цвет заливки тела
    \param scale - задаёт маштаб
    \param wings1 - движение левого крыла по оси x
    \param wings2 - движение правого крыла по оси x
    \param dir - задаёт отражение по оси y
    \param roga - рисует или нет рога на голове
    Пример использования:
    \code
        draw_buterfly(1150, 675, TX_MAGENTA, TX_LIGHTMAGENTA, RGB(200,100,0), RGB(250,150,0), 0.2, -25, -0 , 1, 1);
    \endcode
**/
void draw_buterfly(int x,int y,COLORREF ccolor, COLORREF bcolor,COLORREF ccolor2, COLORREF bcolor2, double scale, int wings1, int wings2, int dir, int roga) //функция бабочка
{
    txSetColour(ccolor,10*scale);
    txSetFillColour(bcolor);
    POINT wing1[12] = {{x - int(  25*scale),           y                     },
                       {x - int(  75*scale),           y - int(100*scale*dir)},
                       {x - int( 125*scale),           y - int(100*scale*dir)},
                       {x - int((200 + wings1)*scale), y - int( 25*scale*dir)},
                       {x - int((200 + wings1)*scale), y + int( 75*scale*dir)},
                       {x - int( 175*scale),           y + int(125*scale*dir)},
                       {x - int( 150*scale),           y + int( 75*scale*dir)},
                       {x - int( 125*scale),           y + int(112*scale*dir)},
                       {x - int( 100*scale),           y + int( 75*scale*dir)},
                       {x - int(  75*scale),           y + int(100*scale*dir)},
                       {x - int(  50*scale),           y + int( 75*scale*dir)},
                       {x - int(  25*scale),           y + int(87*scale*dir)}};
    txPolygon (wing1, 12);//крыло 1
    POINT wing2[12] = {{x + int(  25*scale),           y                     },
                       {x + int(  75*scale),           y - int(100*scale*dir)},
                       {x + int( 125*scale),           y - int(100*scale*dir)},
                       {x + int((200 + wings2)*scale), y - int( 25*scale*dir)},
                       {x + int((200 + wings2)*scale), y + int( 75*scale*dir)},
                       {x + int( 175*scale),           y + int(125*scale*dir)},
                       {x + int( 150*scale),           y + int( 75*scale*dir)},
                       {x + int( 125*scale),           y + int(112*scale*dir)},
                       {x + int( 100*scale),           y + int( 75*scale*dir)},
                       {x + int(  75*scale),           y + int(100*scale*dir)},
                       {x + int(  50*scale),           y + int( 75*scale*dir)},
                       {x + int(  25*scale),           y + int( 87*scale*dir)}};
    txPolygon (wing2, 12); //крыло 2
    txSetColour(ccolor2,10*scale);
    txSetFillColour(bcolor2);
    POINT body[6] = {{x,                 y                     },
                     {x + int(25*scale), y - int( 50*scale*dir)},
                     {x + int(25*scale), y + int(100*scale*dir)},
                     {x,                 y + int(125*scale*dir)},
                     {x - int(25*scale), y + int(100*scale*dir)},
                     {x - int(25*scale), y - int( 50*scale*dir)}};
    txPolygon (body, 6);//тело
    if(roga==1)
    {
        txLine(x - 25*scale, y - 50*scale*dir, x - 15*scale, y -  75*scale*dir);
        txLine(x - 15*scale, y - 75*scale*dir, x - 50*scale, y - 100*scale*dir);
        txLine(x + 25*scale, y - 50*scale*dir, x + 15*scale, y -  75*scale*dir);
        txLine(x + 15*scale, y - 75*scale*dir, x + 50*scale, y - 100*scale*dir);
    }
}

///---------------------------------------------------------

/**
    \brief рисует монстрика
    \param x x - координата по центральной x
    \param y y - координата по верхней y
    \param ccolor - задаёт цвет контура
    \param bcolor - задаёт цвет заливки
    \param scale - задаёт маштаб
    \param foot - движение левой ноги по оси x
    \param foot1 - движение правой ноги по оси x
    \param ear - рисует уши
    \param dir - задаёт отражение по оси x
    Пример использования:
    \code
        draw_monster(1400, 325, RGB(150,0,100), RGB(250,0,150), 0.8, +25, -0, 2, -1);
    \endcode
**/
void draw_monster(int x,int y,COLORREF ccolor, COLORREF bcolor, double scale, int foot, int foot1, int ear, int dir) //функция монстр 1
{
    txSetColour(ccolor,10*scale);
    txSetFillColour(bcolor);
    POINT monster[8] = {{x + int(50*scale),  y                     }, {x + int(100*scale), y + int(50*scale*dir)},
                        {x + int(100*scale), y + int(100*scale*dir)}, {x + int( 50*scale), y + int(150*scale*dir)},
                        {x - int(50*scale),  y + int(150*scale*dir)}, {x - int(100*scale), y + int(100*scale*dir)},
                        {x - int(100*scale), y + int( 50*scale*dir)}, {x - int( 50*scale), y                     }};
    txPolygon (monster, 8);//тело
    if(ear==1)
    {
        POINT monsterear1[3] = {{x + int(50*scale), y}, {x + int(100*scale), y}, {x + int(75*scale), y + int(25*scale*dir)}};
        txPolygon (monsterear1, 3);//ухо 1
        POINT monsterear2[3] = {{x - int(50*scale), y}, {x - int(100*scale), y}, {x - int(75*scale), y + int(25*scale*dir)}};
        txPolygon (monsterear2, 3);//ухо 2
    }
    else
    {
        POINT monsterear1_1[3] = {{x + int(50*scale), y}, {x + int(25*scale), y - int(50*scale*dir)}, {x + int(25*scale), y}};
        txPolygon (monsterear1_1, 3);//ухо 1
        POINT monsterear2_1[3] = {{x - int(50*scale), y}, {x - int(25*scale), y - int(50*scale*dir)}, {x - int(25*scale), y}};
        txPolygon (monsterear2_1, 3);//ухо 2
    }
    txLine(x + 100*scale,y + 100*scale*dir,x +  150         *scale, y + 150*scale*dir);
    txLine(x + 150*scale,y + 150*scale*dir,x + (150 + foot) *scale, y + 250*scale*dir);//нога 1
    txLine(x - 100*scale,y + 100*scale*dir,x -  150         *scale, y + 150*scale*dir);
    txLine(x - 150*scale,y + 150*scale*dir,x - (150 + foot1)*scale, y + 250*scale*dir);//нога 2
    txSetColour(TX_BLACK,7*scale);
    txSetFillColour(TX_WHITE);
    POINT monstereye[4] = {{x, y + int( 25*scale*dir)}, {x + int(50*scale), y + int(75*scale*dir)},
                           {x, y + int(125*scale*dir)}, {x - int(50*scale), y + int(75*scale*dir)}};
    txPolygon (monstereye, 4);//глаз
    txLine(x, y + 25*scale*dir, x, y + 125*scale*dir);//зрачёк
}

///---------------------------------------------------------

/**
    \brief рисует монстрика номер 2
    \param x x - координата по центральной круга x
    \param y y - координата по центральной круга y
    \param ccolor - задаёт цвет контура
    \param bcolor - задаёт цвет заливки
    \param scale - задаёт маштаб
    \param eye - движение глаза по оси y
    \param tail - движение хвоста по оси x
    \param dir - задаёт отражение по оси x
    \param uho - рисует уши
    Пример использования:
    \code
        draw_monster(1400, 325, RGB(150,0,100), RGB(250,0,150), 0.8, +25, -0, 2, -1);
    \endcode
**/
void draw_monster2(int x,int y,COLORREF ccolor, COLORREF bcolor, double scale, int eye, int tail, int dir, int uho) //функция монстр 2
{
    txSetColour(ccolor,10*scale);
    txSetFillColour(bcolor);
    if(uho==1)
    {
         POINT ear1[3] = {{x + int(50*scale), y - int(50*scale*dir)}, {x + int(75*scale), y - int(125*scale*dir)},
                               {x + int(75*scale), y}};
         txPolygon (ear1, 3);//ухо 1
         POINT ear2[3] = {{x - int(50*scale), y - int(50*scale*dir)}, {x - int(75*scale), y - int(125*scale*dir)},
                               {x - int(75*scale), y}};
         txPolygon (ear2, 3);//ухо 2
    }
    else
    {
         POINT ear2_1[3] = {{x + int(75*scale), y}, {x + int(175*scale), y}, {x + int(65*scale), y + int(25*scale*dir)}};
         txPolygon (ear2_1, 3);//ухо 1
         POINT ear2_2[3] = {{x - int(75*scale), y}, {x - int(175*scale), y}, {x - int(65*scale), y + int(25*scale*dir)}};
         txPolygon (ear2_2, 3);//ухо 2
    }
    txCircle(x,y,75*scale); //тело
    txSetColour(ccolor,7*scale);
    txLine(x,           y,                 x,                    y -   75      *scale*dir);
    txLine(x,           y,                 x -  75        *scale,y                       );
    txLine(x,           y +  75*scale*dir, x -  25        *scale,y +  100      *scale*dir);   //глаз
    txLine(x - 25*scale,y + 100*scale*dir, x +  25        *scale,y +  125      *scale*dir);
    txLine(x + 25*scale,y + 125*scale*dir, x - (25 - tail)*scale,y +  175      *scale*dir);
    txLine(x - 25*scale,y,                 x -  25        *scale,y - (70 - eye)*scale*dir);  //хвост
    txSetColour(ccolor,20*scale);
    txLine(x - 1*scale, y + 24*scale*dir,x + 1*scale, y + 26*scale*dir);//нос
}
