//!
//! @file    sasLib.h
//! @brief   Библиотека Библиотека (Василий Замятин).
//!




//{----------------------------------------------------------------------------------------------------------------
//!
//! @brief   Рисует пакмана(пэкмэна)
//!
//! @param   x  -  координата центра пакмана (круга) по горизонтали
//! @param   y  -  координата центра пакмана (круга) по вертикали
//! @param   scale - размер пакмана (стандарт (scale = 1) - радиус круга = 50 )
//! @param   color - цвет тела (круга) пакмана
//! @param   mouth - БИНАРНЫЙ ПАРАМЕТР! открытие рта. 1 - закрыт, 0 - открыт
//! @param   eyex -  координата глаза по горизонтали
//! @param   eyey -  координата глаза по вертикали
//! @param   eyesize - размер глаза (стандарт (eyesize = 1 и scale = 1) - радиус круга = 5 )
//! @param   reversecharacter - БИНАРНЫЙ ПАРАМЕТР! поворот персонажа влево или вправо. 1 - влево, 0 - вправо
//! @warning 50<eyex<-10, 50<eyey<0
//!
//!  @code
//!          draw_pacman(100,700,1.0,TX_YELLOW,1.0,1.0,0,0,1,1);
//!
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void draw_pacman(int x, int y, double scale, COLORREF color, int mouth, int eyex, int eyey, double eyesize, short int reversecharacter);


//{----------------------------------------------------------------------------------------------------------------
//!
//! @brief   Рисует инопланетянина(осьминога)
//!
//! @param   x  -  координата центра туловища (овала) по горизонтали
//! @param   y  -  координата центра туловища (овала) по вертикали
//! @param   scale - размер персонажа
//! @param   color - цвет туловища персонажа
//! @param   legslength - длина ног(щупалец) (стандарт  (scale = 1, legslength = 1) - длина ног = 50)
//! @param   eye - БИНАРНЫЙ ПАРАМЕТР! положение зрачка (взгляда) персонажа. 0 - в центре, 1 - вправо, 2 - влево
//! @param   height - высота туловища персонажа отдельно от глаз и ног.
//! @param   legsmove - БИНАРНЫЙ ПАРАМЕТР! движение ног. 0 - на месте, 1 - влево, 2 - вправо
//! @param   eyessize - размер глаз отдельно от всего остального (стандарт  (scale = 1, eyessize = 1) - размер глаза = 15, размер зрачка = 8)
//!
//!
//!  @code
//!          draw_alien(300,700,1.0,TX_RED,1.0,1,1,0,1);
//!
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void draw_alien(int x, int y, double scale, COLORREF color, double legslength, short int eye, double height, int legsmove, double eyessize);



//{----------------------------------------------------------------------------------------------------------------
//!
//! @brief   Рисует марио
//!
//! @param   x  -  координата центра туловища (круга) по горизонтали
//! @param   y  -  координата центра туловища (круга) по вертикали
//! @param   scale - размер персонажа
//! @param   color - цвет шапки персонажа
//! @param   hatheight - высота шапки персонажа
//! @param   moustagex - длина (размер) усов
//! @param   eye - БИНАРНЫЙ ПАРАМЕТР! направление (положение) взгляда. 0 - по центру, 1 - вправо, 2 - влево
//! @param   browwidth - толщина брови
//! @param   signsize - размер значка на шапке персонажа
//!
//!
//!  @code
//!          draw_mario(100,100,1,TX_RED,1.0,1.0,2,1.0,1);
//!
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void draw_mario(int x, int y, double scale, COLORREF color, double hatheight, double moustagex, short int eye, double browwidth, double signsize);



//{----------------------------------------------------------------------------------------------------------------
//!
//! @brief   Рисует кота
//!
//! @param   x  -  координата центра туловища (круга) по горизонтали
//! @param   y  -  координата центра туловища (круга) по вертикали
//! @param   scale - размер персонажа
//! @param   color - цвет тела персонажа
//! @param   eyeopensize - БИНАРНЫЙ ПАРАМЕТР! открытие глаза. 0 - открыт, 1 - прикрыт
//! @param   mouthopensize - открытие рта
//! @param   earx - положение кончика уха персонажа по горизотали
//! @param   eary - положение кончика уха персонажа по вертикали
//! @param   moustagex - длина (размер) усов
//!
//!
//!  @code
//!              draw_cat(650,500,1,TX_GRAY,1,1.0,0,1.0,1.0);
//!
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void draw_cat(int x, int y, double scale, COLORREF color, short int eyeopensize, double mouthopensize, int earx, double eary, double moustagex);



//{----------------------------------------------------------------------------------------------------------------
//!
//! @brief   Рисует мышь
//!
//! @param   x  -  координата верхней точки центра  туловища  по горизонтали
//! @param   y  -  координата верхней точки центра  туловища по вертикали
//! @param   scale - размер персонажа
//! @param   color - цвет тела персонажа
//! @param   eyex - прибавляет (или убавляет) к координате глаза по горизонтали
//! @param   eyey - прибавляет (или убавляет) к координате глаза по вертикали
//! @param   eyesize - размер глаза отдельно.
//! @param   tail - БИНАРНЫЙ ПАРАМЕТР! поднятие хвоста. 0 - не поднят, 1 - поднят.
//! @param   earsize - размер уха отдельно
//! @param   reversecharacter - БИНАРНЫЙ ПАРАМЕТР! поворот персонажа влево или вправо. 1 - влево, 0 - вправо
//!
//!  (кродеца)
//!
//!  @code
//!                  draw_mouse(350,300,1.0,TX_GRAY,0,0,1.0,1,1.0,0);
//!
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void draw_mouse(int x, int y, double scale, COLORREF color, int eyex, int eyey, double eyesize, short int tail, double earsize,int reversecharacter);



void draw_pacman(int x, int y, double scale, COLORREF color, int mouth, int eyex, int eyey, double eyesize, short int reversecharacter)
{
    //pacman
    txSetColor(TX_BLACK,3*scale);
    txSetFillColor(color);

    if(mouth == 1)
    {
        if(reversecharacter == 0)
        {
        txCircle(x,y,50*scale);
        txSetFillColor(TX_BLACK);
        txPie(x - 50*scale,y - 50*scale,x + 50*scale,y + 50*scale,330*0.003,60*0.003);
        txCircle(x + 20*scale+eyex,y - 25*scale+eyey,5*scale*eyesize);
        }
        if(reversecharacter == 1)
        {
        txCircle(x,y,50*scale);
        txSetFillColor(TX_BLACK);
        txPie(x + 50*scale,y + 50*scale,x - 50*scale,y - 50*scale,150*0.003,60*0.003);
        txCircle(x - 20*scale-eyex,y + 25*scale-eyey,5*scale*eyesize);
        }
    }


    if(mouth == 0)
    {
        if(reversecharacter == 0)
        {
            txCircle(x,y,50*scale);
            txSetFillColor(TX_BLACK);
            txPie(x - 50*scale,y - 50*scale,x + 50*scale,y + 50*scale,330*1,60*1);
            txCircle(x + 20*scale+eyex,y - 25*scale+eyey,5*scale*eyesize);
        }
        if(reversecharacter == 1)
        {
            txCircle(x,y,50*scale);
            txSetFillColor(TX_BLACK);
            txPie(x + 50*scale,y + 50*scale,x - 50*scale,y - 50*scale,150*1,60*1);
            txCircle(x - 20*scale-eyex,y + 25*scale-eyey,5*scale*eyesize);
        }
}
}


void draw_alien(int x, int y, double scale, COLORREF color, double legslength, short int eye, double height, int legsmove, double eyessize)
{
    //allien_body
    txSetColor(TX_TRANSPARENT,0);
    txSetFillColor(color);
    txEllipse(x - 37*scale,y - 50*scale*height,x + 38*scale,y + 40*scale);
    //allien_legs
    if (legsmove == 0)
    {
        txSetColor(color,20*scale);
        txLine(x - 27*scale,y,x - 27*scale+0,y + 50*scale*legslength);
        txLine(x,y,x+0,y + 50*scale*legslength);
        txLine(x + 28*scale,y,x + 28*scale+0,y + 50*scale*legslength);
    }
    if (legsmove == 1)
    {
        txSetColor(color,20*scale);
        txLine(x - 27*scale,y,x - 27*scale-10,y + 50*scale*legslength);
        txLine(x,y,x-10,y + 50*scale*legslength);
        txLine(x + 28*scale,y,x + 28*scale-10,y + 50*scale*legslength);
    }

    if (legsmove == 2)
    {
        txSetColor(color,20*scale);
        txLine(x - 27*scale,y,x - 27*scale+10,y + 50*scale*legslength);
        txLine(x,y,x+10,y + 50*scale*legslength);
        txLine(x + 28*scale,y,x + 28*scale+10,y + 50*scale*legslength);
    }

    //allien_eyes
    txSetFillColor(TX_WHITE);

    txSetColor(TX_BLACK,2*scale);
    txCircle(x - 14*scale,y - 20*scale*height,15*scale*eyessize);
    txCircle(x + 15*scale,y - 20*scale*height,15*scale*eyessize);
    txSetFillColor(TX_BLACK);

    if(eye == 0)
    {
        txCircle(x - 14*scale,y - (20*scale)*height,8*scale*eyessize);
        txCircle(x + 15*scale,y - (20*scale)*height,8*scale*eyessize);
    }

    if(eye == 1)
    {
        txCircle(x - 14*scale+5*scale*eyessize,y - (20*scale)*height-2*scale*eyessize,8*scale*eyessize);
        txCircle(x + 15*scale+5*scale*eyessize,y - (20*scale)*height-2*scale*eyessize,8*scale*eyessize);
    }

    if(eye == 2)
    {
        txCircle(x - 14*scale-5*scale*eyessize,y - (20*scale)*height-2*scale*eyessize,8*scale*eyessize);
        txCircle(x + 15*scale-5*scale*eyessize,y - (20*scale)*height-2*scale*eyessize,8*scale*eyessize);
    }


}


void draw_mario(int x, int y, double scale, COLORREF color, double hatheight, double moustagex, short int eye, double browwidth, double signsize)
{
    //mario_head
    txSetFillColor(color);
    POINT hat[5] = {{x - int(50*scale), y - int (25*scale)}, {x - int (25*scale), y - int (75*scale*hatheight)}, {x + int (25*scale), y - int (75*scale*hatheight)}, {x + int (50*scale), y - int (25*scale)}, {x,y + int (10*scale)}};
    txPolygon(hat,5);
    txSetFillColor(TX_WHITE);
    txCircle(x,y - 60*scale,10*scale*signsize);
    txSetFillColor(RGB(255,204,204));
    txCircle(x,y,50*scale);
    txSetColor(TX_BLACK,7*scale);
    txLine(x - 22*scale*moustagex,y + 15*scale,x + 22*scale*moustagex,y + 15*scale);
    txSetColor(TX_BLACK,3*scale);
    txEllipse(x - 20*scale,y,x + 20*scale,y + 15*scale);
    //mario_eyes
    txSetColor(TX_BLACK,3*scale);
    txSetFillColor(TX_WHITE);
    txEllipse(x - 27*scale,y,x - 5*scale,y - 30*scale);
    txEllipse(x + 27*scale,y,x + 5*scale,y - 30*scale);

    if(eye == 0)
    {
        txSetColor(TX_CYAN);
        txSetFillColor(TX_CYAN);
        txEllipse(x - 22*scale,y,x - 10*scale,y - 25*scale);
        txEllipse(x + 22*scale,y,x + 10*scale,y - 25*scale);
        txSetColor(TX_BLACK);
        txSetFillColor(TX_BLACK);
        txEllipse(x - 19*scale,y,x - 13*scale,y - 22*scale);
        txEllipse(x + 19*scale,y,x + 13*scale,y - 22*scale);
        txSetColor(TX_BLACK,3*scale*browwidth);
        txLine(x - 27*scale,y - 35*scale,x - 5*scale,y - 35*scale);
        txLine(x + 27*scale,y - 35*scale,x + 5*scale,y - 35*scale);
    }

    if(eye == 1)
    {
        txSetColor(TX_CYAN);
        txSetFillColor(TX_CYAN);
        txEllipse(x - 22*scale+3.33*scale,y-3.33*scale,x - 10*scale+3.33*scale,y - 25*scale-3.33*scale);
        txEllipse(x + 22*scale+3.33*scale,y-3.33*scale,x + 10*scale+3.33*scale,y - 25*scale-3.33*scale);
        txSetColor(TX_BLACK);
        txSetFillColor(TX_BLACK);
        txEllipse(x - 19*scale+3.33*scale,y-3.33*scale,x - 13*scale+3.33*scale,y - 22*scale-3.33*scale);
        txEllipse(x + 19*scale+3.33*scale,y-3.33*scale,x + 13*scale+3.33*scale,y - 22*scale-3.33*scale);
        txSetColor(TX_BLACK,3*scale*browwidth);
        txLine(x - 27*scale,y - 35*scale,x - 5*scale,y - 35*scale);
        txLine(x + 27*scale,y - 35*scale,x + 5*scale,y - 35*scale);
    }

    if(eye == 2)
    {
        txSetColor(TX_CYAN);
        txSetFillColor(TX_CYAN);
        txEllipse(x - 22*scale-3.33*scale,y-3.33*scale,x - 10*scale-3.33*scale,y - 25*scale-3.33*scale);
        txEllipse(x + 22*scale-3.33*scale,y-3.33*scale,x + 10*scale-3.33*scale,y - 25*scale-3.33*scale);
        txSetColor(TX_BLACK);
        txSetFillColor(TX_BLACK);
        txEllipse(x - 19*scale-3.33*scale,y-3.33*scale,x - 13*scale-3.33*scale,y - 22*scale-3.33*scale);
        txEllipse(x + 19*scale-3.33*scale,y-3.33*scale,x + 13*scale-3.33*scale,y - 22*scale-3.33*scale);
        txSetColor(TX_BLACK,3*scale*browwidth);
        txLine(x - 27*scale,y - 35*scale,x - 5*scale,y - 35*scale);
        txLine(x + 27*scale,y - 35*scale,x + 5*scale,y - 35*scale);
    }

}


void draw_cat(int x, int y, double scale, COLORREF color, short int eyeopensize, double mouthopensize, int earx, double eary, double moustagex)
{
    //cat_head
    txSetColor(TX_TRANSPARENT);
    txSetFillColor(color);
    txCircle(x,y,100*scale);
    txSetColor(color,20*scale);
    txLine(x - 90*scale,y - 10*scale,x - 70*scale+earx,y - 120*scale*eary);
    txLine(x - 70*scale+earx,y - 120*scale*eary,x - 45*scale,y - 10*scale);
    txLine(x + 90*scale,y - 10*scale,x + 70*scale-earx,y - 120*scale*eary);
    txLine(x + 70*scale-earx,y - 120*scale*eary,x + 45*scale,y - 10*scale);

    txSetColor(TX_BLACK,5*scale);

    txLine(x - 40*scale,y + 30*scale,x - 20*scale,y + 50*scale);
    txLine(x - 20*scale,y + 50*scale,x,y + 30*scale*mouthopensize);
    txLine(x,y + 30*scale*mouthopensize,x + 20*scale,y + 50*scale);
    txLine(x + 20*scale,y + 50*scale,x + 40*scale,y + 30*scale);

    txSetFillColor(RGB(204,51,51));
    txCircle(x,y + 10*scale,10*scale);

    txSetColor(TX_BLACK);
    txLine(x - 20*scale,y + 15*scale,x - 50*scale*moustagex,y + 15*scale);
    txLine(x + 20*scale,y + 15*scale,x + 50*scale*moustagex,y + 15*scale);
    txLine(x - 20*scale,y + 15*scale,x - 50*scale*moustagex,y + 20*scale);
    txLine(x + 20*scale,y + 15*scale,x + 50*scale*moustagex,y + 20*scale);
    txLine(x - 20*scale,y + 15*scale,x - 50*scale*moustagex,y + 10*scale);
    txLine(x + 20*scale,y + 15*scale,x + 50*scale*moustagex,y + 10*scale);
    if(eyeopensize == 0)
    {
        txSetColor(TX_BLACK,5*scale);
        txLine(x - 70*scale,y,x - 50*scale,y- 25*scale*1);
        txLine(x + 70*scale,y,x + 50*scale,y- 25*scale*1);
        txLine(x - 50*scale,y- 25*scale*1,x - 30*scale,y);
        txLine(x + 50*scale,y- 25*scale*1,x + 30*scale,y);
    }

    if(eyeopensize == 1)
    {
        txSetColor(TX_BLACK,5*scale);
        txLine(x - 70*scale,y,x - 50*scale,y- 25*scale*0.3);
        txLine(x + 70*scale,y,x + 50*scale,y- 25*scale*0.3);
        txLine(x - 50*scale,y- 25*scale*0.3,x - 30*scale,y);
        txLine(x + 50*scale,y- 25*scale*0.3,x + 30*scale,y);
    }
}


void draw_mouse(int x, int y, double scale, COLORREF color, int eyex, int eyey, double eyesize, short int tail, double earsize, int reversecharacter)
{
    //mouse
    txSetFillColor(color);
    txSetColor(TX_TRANSPARENT);

    if (reversecharacter == 0)
    {
    txPie(x - 100*scale,y,x + 100*scale,y + 200*scale,00,180);
    txPie(x + 90*scale,y + 50*scale,x + 200*scale,y + 150*scale,00,180);
    txCircle(x + 120*scale,y + 50*scale,30*scale*earsize);

    if(tail == 0)
    {
        txSetColor(color,4*scale);
        txLine(x - 100*scale,y + 95*scale,x - 150*scale,y + 95*scale);
    }

    if(tail == 1)
    {
        txSetColor(color,4*scale);
        txLine(x - 100*scale,y + 95*scale,x - 150*scale,y + (-10+95)*scale);
    }

    txSetFillColor(TX_WHITE);
    txSetColor(TX_BLACK,2*scale);
    txCircle(x + 150*scale+eyex,y + 70*scale+eyey,10*scale*eyesize);
    txSetFillColor(TX_BLACK);
    txCircle(x + 200*scale,y + 90*scale,10*scale);
    txCircle(x + 150*scale+eyex,y + 70*scale+eyey,5*scale*eyesize);
    }

    if (reversecharacter == 1)
    {
    txPie(x + 100*scale,y,x - 100*scale,y + 200*scale,00,180);
    txPie(x - 90*scale,y + 50*scale,x - 200*scale,y + 150*scale,00,180);
    txCircle(x - 120*scale,y + 50*scale,30*scale*earsize);

    if(tail == 0)
    {
        txSetColor(color,4*scale);
        txLine(x + 100*scale,y + 95*scale,x + 150*scale,y + 95*scale);
    }

    if(tail == 1)
    {
        txSetColor(color,4*scale);
        txLine(x + 100*scale,y + 95*scale,x +150*scale,y + (-10+95)*scale);
    }

    txSetFillColor(TX_WHITE);
    txSetColor(TX_BLACK,2*scale);
    txCircle(x - 150*scale-eyex*scale,y + 70*scale+eyey,10*scale*eyesize);
    txSetFillColor(TX_BLACK);
    txCircle(x - 200*scale,y + 90*scale,10*scale);
    txCircle(x - 150*scale-eyex*scale,y + 70*scale+eyey,5*scale*eyesize);
    }

}
