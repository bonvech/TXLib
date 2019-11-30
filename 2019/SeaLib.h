
/**
 *\file SeaLib.h
 *\author Anya Kuzmenkova 8"V"
 *\date  2019-11-23
 */


/**
 *> Рисование яйца:
 *\param x x - координата опорной точки = 170\n
 *Опорная точка в нижней части яйца.

 *\param y y - координата опорной точки = 420\n
 *Опорная точка в нижней части яйца.

 *\param x1 Очень важный параметр\n
 *Отвечает за тонкости рисования правильного по форме яйца.\n
 *- ПРЕДУПРЕЖДЕНИЕ:\n
 *Всегда! должно быть значение 450.

 *\param egg рисует яйцо\n
 *Если egg равен 1,то рисуется целое яйцо;\n
 *Если egg не равен 1, то рисуется только нижняя часть скорлупы.\n
 *- ПРЕДУПРЕЖДЕНИЕ:\n
 *Чтобы рисовалась только нижняя часть нужно чтобы параметр scorlupa был не равен 1.

 *\param scorlupa рисование верхней части скорлупы\n
 *Если scorlupa равен 1, то рисуется верхняя часть;\n
 *Если scorlupa не равен 1, то рисуется только нижняя часть скорлупы.\n
 *- ПРЕДУПРЕЖДЕНИЕ:\n
 *Имеет смысл использования только когда параметр egg не равен 1.

 *\param sdvigX движение верхней части скарлупы\n
 *Движение верхней части скарлупы вправо и влево.\n
 *Если sdvigX > 0, то движение вправо;\n
 *Если sdvigX < 0, то движение влево;\n
 *Если sdvigX = 0, то скорлупа не движется.\n
 *- ПРЕДУПРЕЖДЕНИЕ:\n
 *Имеет смысл использования только когда параметр scorlupa равен 1.

 *\param sdvigY движение верхней части скарлупы\n
 *Движение верхней части скарлупы вниз и вверх.\n
 *Если sdvigY > 0, то движение вверх;\n
 *Если sdvigY < 0, то движение вниз (не рекомендую брать такие значения, тк это выглядит странно);\n
 *Если sdvigY = 0, то скорлупа не движется.\n
 *- ПРЕДУПРЕЖДЕНИЕ:\n
 *Имеет смысл использования только когда параметр scorlupa равен 1.

 *\param lines рисование трещен на яйце\n
 *Если lines равен 1, то рисуются трещины на яйце;\n
 *Если lines не равен 1, то трещины не рисуются.\n
 *- ПРЕДУПРЕЖДЕНИЕ:\n
 *Имеет смысл использования только когда параметр egg равен 1.

 *\param color цвет яйца\n
 *Рисует яйцо такого цвета, который вы задали.\n

 *\param scale размер яйца\n
 *Рисует яйцо такого размера, который вы задали.\n
 *- ПРЕДУПРЕЖДЕНИЕ:\n
 *Рекомендуемое значение от 0.1 до 2.5 (для размера окна примерно 1500*900).

 *\param dir отражение яйца по горизонтали\n
 *Если dir = 1, то яйцо не отражается;\n
 *Если dir = -1, то яйцо отражается по горизонтали.\n
 *- ПРЕДУПРЕЖДЕНИЕ:\n
 *Использовать отражение только когда параметр egg равен 1.

 *> Пример использования:\n
 *\code
    draw_egg(700, 450, 30, RGB(201,201,201), 0.5, 0, 1, 1, 0, 70, 0);
 *\endcode

 */
void draw_egg     (int x,int x1,int y,COLORREF color,                                double scale, int egg,     int scorlupa,int dir,       int sdvigX,int sdvigY,int lines);

/**
 *> Рисование черепахи:
 *\param x x - координата опорной точки = 600\n
 *Точка опоры находится в центре панциря черепахи.

 *\param y y - координата опорной точки = 245\n
 *Точка опоры находится в центре панциря черепахи.

 *\param hand движение плавников\n
 *Отвечает за поднимание и опускание верхних плавников черепашки.\n
 *Если hand > 0, то движение плавников вниз;\n
 *Если hand < 0, то движение плавников вверх.\n
 *- ПРЕДУПРЕЖДЕНИЕ:\n
 *Рекомендуемое значение от -50 до 50.

 *\param head движение головы\n
 *С помощью данного параметра черепаха может спрятать голову в панцире.\n
 *- ПРЕДУПРЕЖДЕНИЕ:\n
 *Параметр head всегда должен быть меньше (или равный) 0.\n
 *Рекомендуемое значение от -0.5 до -2.5 (при значении равном -3, головы не видно).

 *\param piatnoshko появление/исчезновение рисунка на панцире\n
 *Если piatnoshko равно 1, то рисунок на панцире рисуется;\n
 *Если piatnoshko не равно 1, то рисунок на панцире не рисуется.

 *\param color цвет тела черепахи\n
 *Рисует черепаху такого цвета, который вы задали.

 *\param color1 цвет панциря черепахи\n
 *Рисует панцирь такого цвета, который вы задали.

 *\param color2 цвет рисунка на панцире черепахи\n
 *Рисует рисунок на панцире черепахи такого цвета, который вы задали.

 *\param scale размер черепахи\n
 *Рисует черепаху такого размера, который вы задали.\n
 *- ПРЕДУПРЕЖДЕНИЕ:\n
 *Рекомендуемое значение от 0.1 до 2.5 (для размера окна примерно 1500*900).

 *\param dir отражение черепахи по горизонтали\n
 *Если dir = 1, то черепаха не отражается;\n
 *Если dir = -1, то черепаха отражается по горизонтали.

 *> Пример использования:
 *\code
    draw_turtle(850 ,290, RGB(131,161,22 ), RGB(4,77,16 ), RGB(232,196,77), 0.5, 0, -1., 1, 1);
 *\endcode

*/
void draw_turtle  (int x,       int y,COLORREF color,COLORREF color1,COLORREF color2,double scale, int hand,    double head, int piatnoshko,int dir                        );

/**
 *> Рисование краба:
 *\param x x - координата опорной точки = 1150\n
 *Опорная точка в центре туловища краба.

 *\param y y - координата опорной точки = 325\n
 *Опорная точка в центре туловища краба.

 *\param foot движение ног\n
 *Если foot > 0, то ноги становятся тоньще и дальше друг относительно друга;\n
 *Если foot < 0, то ноги становятся толще и ближе друг относительно друга.\n
 *- ПРЕДУПРЕЖДЕНИЕ:\n
 *Рекомендуемое значение от 30 до -30.

 *\param smile улыбка краба\n
 *Если smile > 0, то улыбка рисуется вниз (краб грустит);\n
 *Если smile < 0, то улыбка рисуется вверх (краб радуется).\n
 *- ПРЕДУПРЕЖДЕНИЕ:\n
 *Рекомендуемое значение от 10 до -10.

 *\param shine блики в глазах\n
 *Если shine равно 1, то рисуются блики в глазах;\n
 *Если shine не равно 1, то блики в глазах не рисуются.

 *\param cleshni сжимание/разжимание клешней краба\n
 *Если cleshni > 0, то клешни разжимаются;\n
 *Если cleshni < 0, то клешни сжимаются.\n
 *- ПРЕДУПРЕЖДЕНИЕ:\n
 *Рекомендуемое значение от 25 до -25.

 *\param color цвет туловища краба\n
 *Рисует туловище краба такого цвета, который вы задали.

 *\param color1 цвет оснований клешней и ног краба\n
 *Рисует основания клешней и ног краба такого цвета, который вы задали.

 *\param color2 цвет нижних частей клешней и ног краба\n
 *Рисует нижние части клешней и ног краба такого цвета, который вы задали.

 *\param scale размер краба\n
 *Рисует краба такого размера, который вы задали.\n
 *- ПРЕДУПРЕЖДЕНИЕ:\n
 *Рекомендуемое значение от 0.1 до 2.5 (для размера окна примерно 1500*900).

 *\param dir отражение краба по горизонтали\n
 *Если dir = 1, то краб не отражается;\n
 *Если dir = -1, то краб отражается по горизонтали (переворачивается вверх ногами).

*> Пример использования:\n
 *\code
   draw_crab(800, 500, RGB(150,13,6), RGB(110,16,11), RGB(92,9,5), 0.4, 0, -20., 2., 1, -25);
 *\endcode

*/
void draw_crab    (int x,       int y,COLORREF color,COLORREF color1,COLORREF color2,double scale, int foot,    double smile,int shine,     int dir,   int cleshni         );

/**
 *> Рисование чайки:
 *\param x x - координата опорной точки = 325\n
 *Опорная точка в центре туловища чайки.

 *\param y y - координата опорной точки = 835\n
 *Опорная точка в центре туловища чайки.

 *\param wing1 движение крыла на переднем плане\n
 *Если wing1 > 0, то крыло поднимается вверх;\n
 *Если wing1 < 0, то крыло опускается вниз.\n
 *- ПРЕДУПРЕЖДЕНИЕ:\n
 *Рекомендуемое значение от 2 до -2.

 *\param wing2 движение крыла на заднем плане\n
 *Если wing2 > 0, то крыло поднимается вверх;\n
 *Если wing2 < 0, то крыло опускается вниз.\n
 *- ПРЕДУПРЕЖДЕНИЕ:\n
 *Рекомендуемое значение от 2 до -2.

 *\param nose2 открывание/закрывание клюва\n
 *Если nose2 > 0, то клюв открывается;\n
 *Если nose2 < 0, то клюв закрывается.\n
 *- ПРЕДУПРЕЖДЕНИЕ:\n
 *Рекомендуемое значение от 30 до -10.

 *\param eye прищуренный/раскрытый глаз\n
 *Если параметр eye равен 1, то глаз раскрытый;\n
 *Если параметр eye не равен 1, то глаз прищуренный.

 *\param color цвет заднего крыла чайки\n
 *Рисует заднее крыло чайки такого цвета, который вы задали.

 *\param color1 цвет тела чайки\n
 *Рисует тело чайки такого цвета, который вы задали.

 *\param scale размер чайки\n
 *Рисует чайку такого размера, который вы задали.\n
 *- ПРЕДУПРЕЖДЕНИЕ:\n
 *Рекомендуемое значение от 0.1 до 2.5 (для размера окна примерно 1500*900).

 *\param dir отражение чайки по вертикали\n
 *Если dir = 1, то чайка не отражается (и "смотрит" влево);\n
 *Если dir = -1, то чайка отражается по вертикали (и "смотрит" вправо).

 *> Пример использования:\n
 *\code
    draw_gull(780, 690, RGB(163,163,163), RGB(219,219,219), 0.4,  0 , 0 ,  20,  1, -1);
 *\endcode

*/
void draw_gull    (int x,       int y,COLORREF color,COLORREF color1,                double scale, double wing1,double wing2,int nose2,     int eye,   int dir             );

/**
 *> Рисование дельфина:
 *\param x x - координата опорной точки = 925\n
 *Опорная точка в центре туловища дельфина.

 *\param y y - координата опорной точки = 625\n
 *Опорная точка в центре туловища дельфина.

 *\param smile улыбка дельфина\n
 *Если smile = 1, то дельфин улыбается;\n
 *Если smile = -1, то дельфин не улыбается.

 *\param tail движение хвоста\n
 *Если tail > 0, то хвост движется влево;\n
 *Если tail < 0, то хвост движется вправо.\n
 *- ПРЕДУПРЕЖДЕНИЕ:\n
 *Рекомендуемые значения от 40 до -40.

 *\param blush румянец\n
 *Рисует румянец на щёчках дельфина (делает его максимально милым).\n
 *Если blush равен 1, то румянец рисуется;\n
 *Если blush не равен 1, то румянец не рисуется.

 *\param plavnic движение плавников\n
 *Если  plavnic > 0, то плавники расширяются и увеличиваются в размере;\n
 *Если  plavnic < 0, то плавники сужаются и уменьшаются в размере.\n
 *- ПРЕДУПРЕЖДЕНИЕ:\n
 *Рекомендуемые значения от 1 до -0.5.

 *\param color цвет плавников дельфина\n
 *Рисует плавники дельфина такого цвета, который вы задали.

 *\param color1 цвет тела дельфина\n
 *Рисует тело дельфина такого цвета, который вы задали.

 *\param scale размер дельфина\n
 *Рисует дельфина такого размера, который вы задали.\n
 *- ПРЕДУПРЕЖДЕНИЕ:\n
 *Рекомендуемое значение от 0.1 до 2.3 (для размера окна примерно 1500*900).

 *\param dir отражение дельфина по вертикали\n
 *Если dir = 1, то дельфин не отражается (и "смотрит" вправо);\n
 *Если dir = -1, то дельфин отражается по вертикали (и "смотрит" влево).

 *> Пример использования:\n
 *\code
    draw_dolphin(750, 800, RGB(35,133,153 ), RGB(143,181,189), 0.4, 0, 0, 1, 1, 1.);
 *\endcode

*/
void draw_dolphin (int x,       int y,COLORREF color,COLORREF color1,                double scale, double smile,int tail,    int blush,     int dir,   double plavnic      );

void draw_egg(int x,int x1,int y,COLORREF color,double scale,int egg,int scorlupa,int dir,int sdvigX,int sdvigY,int lines)
{
    if(egg==1)
    {
        txSetColor(TX_BLACK, 5*scale);
        txSetFillColor(color);
        txEllipse (x-140*scale, y-380*scale*dir, x+200*scale, y);
        txSetFillColor(TX_WHITE);
        txCircle(x-80 *scale, y-200*scale*dir, 7*scale );
        txCircle(x,           y-120*scale*dir, 10*scale);
        txCircle(x+20 *scale, y-220*scale*dir, 6*scale );
        txCircle(x+140*scale, y-180*scale*dir, 8*scale );
        txCircle(x+120*scale, y-80 *scale*dir, 11*scale);    //круги на яйце
        txCircle(x-60 *scale, y-60 *scale*dir, 7*scale );
        txCircle(x+60*scale,  y-340*scale*dir, 9*scale);
        txCircle(x-20*scale,  y-320*scale*dir, 6*scale);
        if(lines==1)
        {
            txLine(x-110*scale, y-300*scale*dir, x-90*scale,  y-260*scale*dir);
            txLine(x-90 *scale, y-260*scale*dir, x-30*scale,  y-300*scale*dir);
            txLine(x-30*scale,  y-300*scale*dir, x+27*scale,  y-260*scale*dir); //линии скорлупы
            txLine(x+27 *scale, y-260*scale*dir, x+85*scale, y-300*scale*dir);
            txLine(x+85*scale, y-300*scale*dir, x+145*scale, y-260*scale*dir);
            txLine(x+145*scale, y-260*scale*dir, x+165*scale, y-300*scale*dir);
        }
    }
    else
    {
        txSetColor(TX_BLACK, 5*scale);
        txSetFillColor(color);
        txChord(x-140*scale, y-380*scale*dir,x+200*scale, y, -220, 260);
        txSetFillColor(TX_WHITE);
        POINT decor[7]={{int(x-111*scale), int(y-300*scale*dir) },
                        {int(x-90*scale) , int(y-260*scale*dir) },
                        {int(x-30*scale) , int(y-300*scale*dir) },
                        {int(x+27*scale) , int(y-260*scale*dir) },
                        {int(x+85*scale) , int(y-300*scale*dir) },
                        {int(x+145*scale), int(y-260*scale*dir) },
                        {int(x+168*scale), int(y-300*scale*dir)}};
        txPolygon (decor,7);
        txSetColor(TX_WHITE,11*scale);
        txLine(x-111*scale, y-302*scale*dir,x+165*scale,y-302*scale*dir);
        txSetColor(TX_BLACK,5*scale);
        txLine(x-110*scale, y-298*scale*dir, x-90*scale,  y-260*scale*dir);
        txLine(x-90 *scale, y-260*scale*dir, x-30*scale,  y-300*scale*dir);
        txLine(x-30*scale,  y-300*scale*dir, x+27*scale,  y-260*scale*dir);
        txLine(x+27 *scale, y-260*scale*dir, x+85*scale, y-300*scale*dir);
        txLine(x+85*scale, y-300*scale*dir, x+145*scale, y-260*scale*dir);
        txLine(x+145*scale, y-260*scale*dir, x+167*scale, y-300*scale*dir);
        txSetColor(TX_BLACK, 5*scale);
        txSetFillColor(TX_WHITE);
        txCircle(x-80 *scale, y-200*scale*dir, 7*scale );
        txCircle(x,           y-120*scale*dir, 10*scale);
        txCircle(x+20 *scale, y-220*scale*dir, 6*scale );
        txCircle(x+140*scale, y-180*scale*dir, 8*scale );
        txCircle(x+120*scale, y-80 *scale*dir, 11*scale);    //круги на яйце
        txCircle(x-60 *scale, y-60 *scale*dir, 7*scale );
        if(scorlupa==1)
        {
            txSetColor(TX_BLACK, 5*scale);
            txSetFillColor(color);
            txChord(x-(140-sdvigX)*scale, y-(380+sdvigY)*scale*dir, x+(200+sdvigX)*scale, y-sdvigY*scale*dir, 40, 100);//верхняя часть скорлупы
            txSetFillColor(TX_WHITE);
            txCircle(x+(60+sdvigX)*scale, y-(340+sdvigY)*scale*dir, 9*scale);
            txCircle(x-(20-sdvigX)*scale, y-(320+sdvigY)*scale*dir, 6*scale);
            txSetFillColor(color);
            POINT decor[7]={{int(x-(111-sdvigX)*scale), int(y-(300+sdvigY)*scale*dir) },
                            {int(x-(90 -sdvigX)*scale), int(y-(260+sdvigY)*scale*dir) },
                            {int(x-(30 -sdvigX)*scale), int(y-(300+sdvigY)*scale*dir) },
                            {int(x+(27 +sdvigX)*scale), int(y-(260+sdvigY)*scale*dir) },
                            {int(x+(85 +sdvigX)*scale), int(y-(300+sdvigY)*scale*dir) },
                            {int(x+(145+sdvigX)*scale), int(y-(260+sdvigY)*scale*dir) },
                            {int(x+(168+sdvigX)*scale), int(y-(300+sdvigY)*scale*dir)}};
            txPolygon (decor,7);
            txSetColor(color,11*scale);
            txLine(x-(99-sdvigX)*scale, y-(302+sdvigY)*scale*dir,x+(155+sdvigX)*scale,y-(302+sdvigY)*scale*dir);
            txSetColor(TX_BLACK,5*scale);
            txLine(x-(110-sdvigX)*scale, y-(298+sdvigY)*scale*dir, x-(90 -sdvigX)*scale, y-(260+sdvigY)*scale*dir);
            txLine(x-(90 -sdvigX)*scale, y-(260+sdvigY)*scale*dir, x-(30 -sdvigX)*scale, y-(300+sdvigY)*scale*dir);
            txLine(x-(30 -sdvigX)*scale, y-(300+sdvigY)*scale*dir, x+(27 +sdvigX)*scale, y-(260+sdvigY)*scale*dir);
            txLine(x+(27 +sdvigX)*scale, y-(260+sdvigY)*scale*dir, x+(85 +sdvigX)*scale, y-(300+sdvigY)*scale*dir);
            txLine(x+(85 +sdvigX)*scale, y-(300+sdvigY)*scale*dir, x+(145+sdvigX)*scale, y-(260+sdvigY)*scale*dir);
            txLine(x+(145+sdvigX)*scale, y-(260+sdvigY)*scale*dir, x+(167+sdvigX)*scale, y-(300+sdvigY)*scale*dir);
        }
    }



}

void draw_turtle(int x, int y,COLORREF color,COLORREF color1,COLORREF color2,double scale, int hand, double head, int piatnoshko, int dir)
{
    txSetColor(TX_BLACK, 5*scale);
    txSetFillColor(color);
    txCircle(x,int(y-(130+30*head)*scale*dir),45*scale); //голова
    POINT polygon[8]= {{int(x-45 *scale), int(y- 70       *scale*dir) },
                       {int(x-90 *scale), int(y-(105-hand)*scale*dir) },
                       {int(x-120*scale), int(y-(105-hand)*scale*dir) },
                       {int(x-180*scale), int(y-(60 -hand)*scale*dir) }, //лапа левая
                       {int(x-180*scale), int(y-(15 -hand)*scale*dir) },
                       {int(x-135*scale), int(y-(60 -hand)*scale*dir) },
                       {int(x-90 *scale), int(y-(75 -hand)*scale*dir) },
                       {int(x-70 *scale), int(y- 60       *scale*dir)}};
    txPolygon (polygon,8);
    POINT polygon1[8]={{int(x+55*scale ),int(y- 70       *scale*dir) },
                       {int(x+100*scale),int(y-(105-hand)*scale*dir) },
                       {int(x+130*scale),int(y-(105-hand)*scale*dir) },
                       {int(x+190*scale),int(y-(60 -hand)*scale*dir) },
                       {int(x+190*scale),int(y-(15 -hand)*scale*dir) }, //лапа правая
                       {int(x+145*scale),int(y-(60 -hand)*scale*dir) },
                       {int(x+100*scale),int(y-(75 -hand)*scale*dir) },
                       {int(x+70*scale ),int(y- 55       *scale*dir)}};
    txPolygon (polygon1,8);
    POINT polygon2[5]= {{int(x-50*scale),int(y+65 *scale*dir) },
                        {int(x-90*scale),int(y+90 *scale*dir) },
                        {int(x-90*scale),int(y+120*scale*dir) },   //нога левая
                        {int(x-60*scale),int(y+135*scale*dir) },
                        {int(x-30*scale),int(y+75 *scale*dir)}};
    txPolygon (polygon2,5);
    POINT polygon3[5]={{int(x+50*scale),int(y+65 *scale*dir) },
                       {int(x+90*scale),int(y+90 *scale*dir) },
                       {int(x+90*scale),int(y+120*scale*dir) }, //нога правая
                       {int(x+60*scale),int(y+135*scale*dir) },
                       {int(x+30*scale),int(y+75 *scale*dir)}};
    txPolygon (polygon3,5);
    POINT rhomb[4]={{    x,          int(y+80 *scale*dir) },
                    {int(x-15*scale),int(y+105*scale*dir) },  //хвост
                    {    x,          int(y+120*scale*dir) },
                    {int(x+15*scale),int(y+105*scale*dir)}};
    txPolygon (rhomb,4);
    txSetFillColor(TX_BLACK);
    txEllipse(int(x+25*scale),int(y-(155+30*head)*scale*dir ), //глаз правый
              int(x+40*scale),int(y-(125+30*head)*scale*dir));
    txEllipse(int(x-25*scale),int(y-(155+30*head)*scale*dir ),
              int(x-40*scale),int(y-(125+30*head)*scale*dir)); //глаз левый
    txSetFillColor(color1);
    txCircle(x,y,int(90*scale)); //панцирь
    txSetFillColor(color2);

     if (piatnoshko==1)
     {
         POINT draw[6]={{int(x-45*scale),int(y-50*scale*dir) },
                        {int(x-30*scale),    y               },
                        {int(x-45*scale),int(y+50*scale*dir) },   //рисунок на панцире
                        {int(x+45*scale),int(y+50*scale*dir) },
                        {int(x+30*scale),    y               },
                        {int(x+45*scale),int(y-50*scale*dir)}};
         txPolygon(draw,6);
     }
}

void draw_crab(int x, int y,COLORREF color,COLORREF color1,COLORREF color2,double scale,int foot, double smile,int shine, int dir, int cleshni)
{

    txSetColor(TX_BLACK, 5*scale);
    txSetFillColor(color);
    txEllipse(int(x-150*scale),int(y-75*scale*dir),int(x+150*scale),int(y+75*scale*dir));
    txSetFillColor(color1);
    POINT crab[5]={{int(x+100*scale),int(y+5  *scale*dir) },
                   {int(x+100*scale),int(y-30 *scale*dir) },
                   {int(x+130*scale),int(y-110*scale*dir) }, //правая клешня нижняя часть
                   {int(x+155*scale),int(y-85 *scale*dir) },
                   {int(x+130*scale),int(y-25 *scale*dir)}};
    txPolygon (crab,5);
    POINT crab2[5]={{int(x-100*scale),int(y+5  *scale*dir) },
                    {int(x-100*scale),int(y-30 *scale*dir) },
                    {int(x-130*scale),int(y-110*scale*dir) },  //левая клешня нижняя часть
                    {int(x-155*scale),int(y-85 *scale*dir) },
                    {int(x-130*scale),int(y-25 *scale*dir)}};
    txPolygon (crab2,5);
    POINT crabb[10]={{int(x-125*scale),int(y+45 *scale*dir) },
                     {int(x-225*scale),int(y-125*scale*dir) },
                     {int(x-250*scale),int(y-100*scale*dir) },
                     {int(x-235*scale),int(y-65 *scale*dir) },  //три левый ноги верхняя часть
                     {int(x-125*scale),int(y+45 *scale*dir) },
                     {int(x-235*scale),int(y-45 *scale*dir) },
                     {int(x-245*scale),int(y+5  *scale*dir) },
                     {int(x-125*scale),int(y+45 *scale*dir) },
                     {int(x-200*scale),int(y+25 *scale*dir) },
                     {int(x-180*scale),int(y+65 *scale*dir)}};
    txPolygon (crabb,10);
    POINT crabb1[10]={{int(x+125*scale),int(y+45 *scale*dir) },
                      {int(x+225*scale),int(y-125*scale*dir) },
                      {int(x+250*scale),int(y-100*scale*dir) },
                      {int(x+235*scale),int(y-65 *scale*dir) },
                      {int(x+125*scale),int(y+45 *scale*dir) }, //три правые ноги верхняя часть
                      {int(x+235*scale),int(y-45 *scale*dir) },
                      {int(x+245*scale),int(y+5  *scale*dir) },
                      {int(x+125*scale),int(y+45 *scale*dir) },
                      {int(x+200*scale),int(y+25 *scale*dir) },
                      {int(x+180*scale),int(y+65 *scale*dir)}};
    txPolygon (crabb1,10);
    txSetFillColor(color2);
    POINT crab1[10]={{int(x+ 130            *scale),int(y-110*scale*dir) },
                     {int(x+(105+10+cleshni)*scale),int(y-205*scale*dir) },
                     {int(x+(130   -cleshni)*scale),int(y-310*scale*dir) },
                     {int(x+ 130            *scale),int(y-260*scale*dir) },
                     {int(x+ 155            *scale),int(y-235*scale*dir) }, //правая клешня верхняя часть
                     {int(x+ 180            *scale),int(y-260*scale*dir) },
                     {int(x+(180   +cleshni)*scale),int(y-325*scale*dir) },
                     {int(x+ 205            *scale),int(y-300*scale*dir) },
                     {int(x+ 180            *scale),int(y-145*scale*dir) },
                     {int(x+ 155            *scale),int(y-85 *scale*dir)}};
    txPolygon (crab1,10);
    POINT crab3[10]={{int(x- 130            *scale),int(y-110*scale*dir) },
                     {int(x-(105+10+cleshni)*scale),int(y-205*scale*dir) },
                     {int(x-(130   -cleshni)*scale),int(y-310*scale*dir) },
                     {int(x- 130            *scale),int(y-260*scale*dir) },
                     {int(x- 155            *scale),int(y-235*scale*dir) },
                     {int(x- 180            *scale),int(y-260*scale*dir) }, //левая клешня верхняя часть
                     {int(x-(180   +cleshni)*scale),int(y-325*scale*dir) },
                     {int(x- 205            *scale),int(y-300*scale*dir) },
                     {int(x- 180            *scale),int(y-145*scale*dir) },
                     {int(x- 155            *scale),int(y-85 *scale*dir)}};
    txPolygon (crab3,10);
    POINT craab[3]={{int(x- 245      *scale),int(y-105*scale*dir) },
                    {int(x-(370+foot)*scale),int(y+75 *scale*dir) },  //левая крайняя нога нижняя часть
                    {int(x-(290+foot)*scale),int(y+25 *scale*dir)}};
    txPolygon (craab,3);
    POINT craab2[3]={{int(x- 245      *scale),int(y-10 *scale*dir) },
                     {int(x-(245+foot)*scale),int(y+100*scale*dir) }, //правая крайняя нога нижняя часть
                     {int(x-(215+foot)*scale),int(y+50 *scale*dir)}};
    txPolygon (craab2,3);
    POINT craab4[3]={{int(x- 200      *scale),int(y+20*scale*dir) },
                     {int(x-(175+foot)*scale),int(y+120*scale*dir)}, //левая нижняя нога нижняя часть
                     {int(x- 175      *scale),int(y+45*scale*dir)}};
    txPolygon (craab4,3);
    POINT craab1[3]={{int(x+ 245      *scale),int(y-105*scale*dir) },
                     {int(x+(375+foot)*scale),int(y+75 *scale*dir) },  //левая средняя нога нижняя часть
                     {int(x+(295+foot)*scale),int(y+25 *scale*dir)}};
    txPolygon (craab1,3);
    POINT craab3[3]={{int(x+ 245      *scale),int(y-10 *scale*dir) },
                     {int(x+(245+foot)*scale),int(y+100*scale*dir) },  //правая средняя нога нижняя часть
                     {int(x+(215+foot)*scale),int(y+50 *scale*dir)}};
    txPolygon (craab3,3);
    POINT craab5[3]={{int(x+ 200      *scale),int(y+20 *scale*dir) },
                     {int(x+(175+foot)*scale),int(y+120*scale*dir) }, //правая нижняя нога нижняя часть
                     {int(x+ 175      *scale),int(y+45 *scale*dir)}};
    txPolygon (craab5,3);
    txSetColor(TX_BLACK,7*scale);
    txLine(int(x-50*scale),int(y+(15+smile)*scale*dir),int(x-25*scale),int(y+ 15       *scale*dir));
    txLine(int(x-25*scale),int(y+ 15       *scale*dir),int(x+25*scale),int(y+ 15       *scale*dir));  //рот
    txLine(int(x+25*scale),int(y+ 15       *scale*dir),int(x+50*scale),int(y+(15+smile)*scale*dir));
    if (shine==1)
    {
        txSetFillColor(TX_BLACK);
        txEllipse(int(x+40*scale),int(y-145*scale*dir),int(x+90*scale),int(y-35*scale*dir)); //правый глаз
        txEllipse(int(x-80*scale),int(y-145*scale*dir),int(x-30*scale),int(y-35*scale*dir)); //левый глаз
        txSetColor(TX_WHITE);
        txLine(int(x+60*scale),int(y-100*scale*dir),int(x+70*scale),int(y-100*scale*dir));
        txLine(int(x+65*scale),int(y-110*scale*dir),int(x+65*scale),int(y-90*scale*dir ));    //блики в глазах
        txLine(int(x-45*scale),int(y-100*scale*dir),int(x-55*scale),int(y-100*scale*dir));
        txLine(int(x-50*scale),int(y-110*scale*dir),int(x-50*scale),int(y-90*scale*dir ));
    }
    else
    {
        txSetFillColor(TX_BLACK);
        txEllipse(int(x+40*scale),int(y-145*scale*dir),int(x+90*scale),int(y-35*scale*dir));  //глаза
        txEllipse(int(x-80*scale),int(y-145*scale*dir),int(x-30*scale),int(y-35*scale*dir));
    }
}

void draw_gull(int x,int y,COLORREF color,COLORREF color1,double scale,double wing1,double wing2,int nose2,int eye, int dir)
{

    txSetColor(TX_BLACK, 5*scale);
    txSetFillColor(color);
    POINT gull2[8]={{int(x- 100          *scale*dir),int(y- 35           *scale) },
                    {int(x-(125+20*wing2)*scale*dir),int(y-(110+40*wing2)*scale) },
                    {int(x-(175+20*wing2)*scale*dir),int(y-(135+40*wing2)*scale) },
                    {int(x-(225+20*wing2)*scale*dir),int(y-(185+40*wing2)*scale) }, //заднее крыло чайки
                    {int(x-(225+20*wing2)*scale*dir),int(y-(235+40*wing2)*scale) },
                    {int(x-(125+20*wing2)*scale*dir),int(y-(160+40*wing2)*scale) },
                    {int(x-(50+20 *wing2)*scale*dir),int(y-(135+40*wing2)*scale) },
                    {int(x- 25           *scale*dir),int(y- 35           *scale)}};
    txPolygon (gull2,8);
    txSetFillColor(color1);
    POINT gull[17]={{int(x- 200         *scale*dir),int(y+15           *scale)  },
                    {int(x- 175         *scale*dir),int(y-35           *scale)  },
                    {int(x- 50          *scale*dir),int(y-35           *scale)  },
                    {int(x- 25          *scale*dir),int(y-(60+10*wing1)*scale)  },
                    {int(x+(50+10*wing1)*scale*dir),int(y-(185+50*wing1)*scale) },
                    {int(x+ 275         *scale*dir),int(y-(335+60*wing1)*scale) },
                    {int(x+ 275         *scale*dir),int(y-(285+60*wing1)*scale) }, //тело чайки
                    {int(x+ 200         *scale*dir),int(y-(185+40*wing1)*scale) },
                    {int(x+ 150         *scale*dir),int(y-(160+40*wing1)*scale) },
                    {int(x+ 75          *scale*dir),int(y-35            *scale) },
                    {int(x+ 150         *scale*dir),int(y-10            *scale) },
                    {int(x+ 275         *scale*dir),int(y-10            *scale) },
                    {int(x+ 250         *scale*dir),int(y+15            *scale) },
                    {int(x+ 100         *scale*dir),int(y+15            *scale) },
                    {    x,                         int(y+40            *scale) },
                    {int(x- 125         *scale*dir),int(y+40            *scale) },
                    {int(x- 175         *scale*dir),int(y+25            *scale)}};
    txPolygon (gull,17);
    txSetFillColor(RGB(189,102,9));
    POINT nose1[3]={{int(x-175*scale*dir),int(y+25        *scale) },
                    {int(x-235*scale*dir),int(y+(45+nose2)*scale) }, //клюв (нижняя часть)
                    {int(x-215*scale*dir),int(y+(55+nose2)*scale)}};
    txPolygon (nose1,3);
    txSetFillColor(RGB(224,158,16));
    POINT nose[4]={{int(x-200*scale*dir),int(y+15*scale) },
                   {int(x-235*scale*dir),int(y+35*scale) },  //клюв (верхняя часть)
                   {int(x-245*scale*dir),int(y+55*scale) },
                   {int(x-175*scale*dir),int(y+25*scale)}};
    txPolygon (nose,4);

    if (eye==1)
    {
         txSetFillColor(TX_BLACK);
         txCircle(int(x-150*scale*dir),int(y-5*scale),4*scale);     //глаз
         txSetColor(TX_BLACK,5*scale);
    }
    else
    {
          txSetColor(TX_BLACK,5*scale);
          txLine(int(x-160*scale*dir),int(y-5*scale),int(x-130*scale*dir),int(y-5*scale));
    }
}

void draw_dolphin(int x,int y,COLORREF color,COLORREF color1,double scale, double smile, int tail, int blush, int dir, double plavnic)
{

    txSetColor(TX_BLACK, 5*scale);
    txSetFillColor(color);
    POINT dolph1[6]={{int(x-75 *scale*dir),int(y-45 *scale) },
                     {int(x-75 *scale*dir),int(y-75 *scale) },
                     {int(x-125*scale*dir),int(y-100*scale) },
                     {int(x-75 *scale*dir),int(y-125*scale) }, //верхний плавник
                     {int(x-25 *scale*dir),int(y-125*scale) },
                     {int(x+25 *scale*dir),int(y-95 *scale)}};
    txPolygon (dolph1,6);
    POINT dolph2[7]={{int(x+ 150            *scale*dir),int(y-(35 +10*plavnic)*scale) },
                     {int(x+(175+25*plavnic)*scale*dir),int(y+(25 +10*plavnic)*scale) },
                     {int(x+(175+25*plavnic)*scale*dir),int(y+(75 +10*plavnic)*scale) },
                     {int(x+(150+25*plavnic)*scale*dir),int(y+(125+10*plavnic)*scale) }, //задний (дальный) плавник
                     {int(x+(150+25*plavnic)*scale*dir),int(y+(100+10*plavnic)*scale) },
                     {int(x+(125+25*plavnic)*scale*dir),int(y+(50 +10*plavnic)*scale) },
                     {int(x+ 100            *scale*dir),int(y+(15 +10*plavnic)*scale)}};
    txPolygon (dolph2,7);
    txSetFillColor(color1);
    POINT dolph[22]={{int(x+ 200      *scale*dir),int(y-75 *scale) },
                     {int(x+ 225      *scale*dir),int(y-75 *scale) },
                     {int(x+ 250      *scale*dir),int(y-50 *scale) },
                     {int(x+ 225      *scale*dir),int(y-25 *scale) },
                     {int(x+ 150      *scale*dir),int(y-25 *scale) },
                     {int(x+ 100      *scale*dir),int(y+25 *scale) },
                     {int(x- 50       *scale*dir),int(y+150*scale) },
                     {int(x- 100      *scale*dir),int(y+275*scale) },
                     {int(x-(50+tail) *scale*dir),int(y+300*scale) },
                     {int(x-(25+tail) *scale*dir),int(y+350*scale) },
                     {int(x-(75+tail) *scale*dir),int(y+350*scale) },
                     {int(x-(100+tail)*scale*dir),int(y+325*scale) }, //тело дельфина
                     {int(x-(125+tail)*scale*dir),int(y+350*scale) },
                     {int(x-(175+tail)*scale*dir),int(y+375*scale) },
                     {int(x-(175+tail)*scale*dir),int(y+325*scale) },
                     {int(x- 125      *scale*dir),int(y+275*scale) },
                     {int(x- 150      *scale*dir),int(y+100*scale) },
                     {int(x- 100      *scale*dir),int(y-25 *scale) },
                     {int(x- 75       *scale*dir),int(y-50 *scale) },
                     {int(x+ 25       *scale*dir),int(y-100*scale) },
                     {int(x+ 100      *scale*dir),int(y-125*scale) },
                     {int(x+ 150      *scale*dir),int(y-125*scale)}};
    txPolygon (dolph,22);
    txSetFillColor(TX_BLACK);
    txCircle(int(x+125*scale*dir),int(y-75*scale),5*scale); //глаз
    txSetFillColor(color);
    POINT dolph3[6]={{int(x+(75+20*plavnic)*scale*dir),int(y-(25 +10*plavnic)*scale) },
                     {int(x+(50+20*plavnic)*scale*dir),int(y+(25 +10*plavnic)*scale) },
                     {    x                           ,int(y+(75 +10*plavnic)*scale) },
                     {int(x-(50+20*plavnic)*scale*dir),int(y+(100+10*plavnic)*scale) }, //передний плавник
                     {    x                           ,int(y+(25 +10*plavnic)*scale) },
                     {    x                           ,    y                        }};
    txPolygon (dolph3,6);
    txSetColor(TX_BLACK,5*scale);
    txLine(int(x+250*scale*dir),int(y- 50          *scale ),
           int(x+200*scale*dir),int(y- 50          *scale));
    txLine(int(x+200*scale*dir),int(y- 50          *scale ),  //улыбка
           int(x+165*scale*dir),int(y-(60+10*smile)*scale));
    if (blush==1)
    {
        txSetColor(TX_PINK,3*scale);
        txLine(int(x+135*scale*dir),int(y-65*scale ),
               int(x+130*scale*dir),int(y-50*scale));
        txLine(int(x+145*scale*dir),int(y-65*scale ),     //румянец на щечках
               int(x+140*scale*dir),int(y-50*scale));
        txLine(int(x+155*scale*dir),int(y-65*scale ),
               int(x+150*scale*dir),int(y-50*scale));
    }
}
