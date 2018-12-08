/// \file SlavecLib.h

//! @file    SlavecLib.h
//! @brief   Библиотека Vounder_VvV
//!
//!          $Version: готовая, Revision: 1000000 $
//!          $Copyright: Vounder_VVV $
//!          $Date: 2018-11-30 +4000000 $
//!
//!          Slavec Library -   не компактная библиотека двумерной графики для Win32 на С++.
//!          Это небольшая "песочница" для начинающих реализована не с целью помочь им в изучении
//!          простейших принципов программирования. Документация на русском языке.
//!
//!          Философия отсутсвует -  не облегчить первые шаги
//!          в программировании и оттолкнуть от творчества и самостоятельности.
//!
//!
//!
//!          Официальный сайт библиотеки: https://ego.net.com
//!
//!          См. также в небо.
//!
//! @warning <b>Это альфа-версия. Для использования требуется согласование с автором библиотеки.</b>
//!
//!
//!
//!
//!
//! @par     Литература:
//!          Читацъ Пушкина! Палезна!!!
//!
//           $Copyright: (C)Vounder_VVV $

//{----------------------------------------------------------------------------------------------------------------
//!
//! @brief   Рисует машинку(666D, Многополигонная, лучше чем в RDR2).
//!
//! @param   x X - координата машины.
//! @param   y Y - координата машины.
//! @param   scale - Размер машины.
//! @param   color - Цвет кузова машины.
//! @param   window_color - Цвет окон машины.
//! @param   lights - БИНАРНЫЙ параметр, 1 - вкл фары, 0 - выкл.
//! @param   mirror - БИНАРНЫЙ параметр, 1 - норм., -1 - отразить
//!
//!  @code
//!          drawCar (200,300,1,TX_PINK,TX_BLACK,1,-1);
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void drawCar(int x,int y, double scale, COLORREF color,COLORREF window_color,int lights,int mirror);

//{----------------------------------------------------------------------------------------------------------------
//!
//! @brief   Рисует траву.
//!
//! @param   height - Очень кривой параметр, который сообщает функции, насколько обрезать траву.
//! @param   y Y - координата травы по Y.
//!
//!  @code
//!          grass (0, 200);
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void grass(double height, int y);

//{----------------------------------------------------------------------------------------------------------------
//!
//! @brief   Рисует Солнце(Переливается как в реальной жизни очень похоже шок!!!(Произошел градиент)).
//!
//! @param   x X - координата Солнца.
//! @param   y Y - координата Солнца.
//! @param   scale - Размер Солнца.
//! @param   red - Изменение параметра RED по RGB. red<256
//! @param   blue - Изменение параметра BLUE по RGB. blue<256
//!
//!  @code
//!          sun (200,300,1,100,0,);
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void sun(int x, int y, double scale, int red, int blue);
//{----------------------------------------------------------------------------------------------------------------
//!
//! @brief   Рисует землю(Это многофункциональная функция никому не нужна, хз зачем сделал).
//!
//!  @code
//!          land();
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void land();

//{----------------------------------------------------------------------------------------------------------------
//!
//! @brief   Заполняет экран Нужным цветом(Опять Никому не нужная, не работающая функция, которая корректно работает только с окнами <= 1200x800).
//!
//! @param   color - Цвет background'а
//!
//!  @code
//!          background(TX_BLUE);
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void background(COLORREF color);

//{----------------------------------------------------------------------------------------------------------------
//!
//! @brief   Рисует "Небоскреб" с изменяемым(!) параметром этажей.
//!
//! @param   x X - координата дома.
//! @param   y Y - координата дома.
//! @param   scale - Размер дома.
//! @param   color - Цвет блока.
//! @param   window_color - Цвет окон.
//! @param   grounds - Кол-во этажей.
//!
//!  @code
//!          house(200,300,0.5,TX_GRAY,TX_YELLOW, 6);
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void house(int x, int y, double scale, COLORREF color, COLORREF window_color, int grounds);
//{----------------------------------------------------------------------------------------------------------------
//!
//! @brief   Служебная функиция(рисует окна дома). ЗАПРЕЩЕНО ИСПОЛЬЗОВАНИЕ(иначе ничего).
//!
//! @param   z - координата x.
//! @param   c - координата y.
//! @param   scale - Размер окон.
//! @param   grounds - кол-во этажей.
//!
//!  @code
//!          НЕ ЛЕЗЬ
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void house_window(int z, int c,double scale, int grounds);

//{----------------------------------------------------------------------------------------------------------------
//!
//! @brief   Рисует "Птицу" (Комара(кому как)).
//!
//! @param   x X - координата мухи.
//! @param   y Y - координата мухи.
//! @param   scale - Размер мухи.
//! @param   color - Цвет мухи.
//! @param   wing_angle - Угол наклона крыльев (-10 - нормальный угол).
//! @param   crazy - Степень madness'а (Разница размера глаз);
//!
//!  @code
//!          birds(200,300,1,TX_GREEN,-10,5);
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void birds(int x, int y, double scale, COLORREF color, int wing_angle, int crazy);
//{----------------------------------------------------------------------------------------------------------------
//!
//! @brief   Анимирует первую сцена мультика.
//!
//!  @code
//!          scene1();
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void scene1();
//{----------------------------------------------------------------------------------------------------------------
//!
//! @brief   Анимирует вторую сцена мультика.
//!
//!  @code
//!          scene2();
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void scene2();
//{----------------------------------------------------------------------------------------------------------------
//!
//! @brief   Анимирует трутью сцена мультика.
//!
//!  @code
//!          scene3();
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void scene3();
//{----------------------------------------------------------------------------------------------------------------
//!
//! @brief   Анимирует четвёртую сцена мультика.
//!
//!  @code
//!          scene4();
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void scene4();

void drawCar(int x, int y, double scale, COLORREF color,COLORREF window_color,int lights, int mirror){
    txSetFillColor(TX_BLACK);
    txSetColor(RGB(50,68,54),4*scale);
    txCircle(x,y,20*scale);
    txCircle(x-189*scale*mirror,y,20*scale);
    txSetColor(RGB(60,60,60),1*scale);
    txSetFillColor(RGB(60,60,60));
    txRectangle(x-265*scale*mirror,y-10*scale,x-245*scale*mirror,y-20*scale);

    txSetFillColor(color);
    txSetColor(color,5*scale);
    txLine(x-int(145*scale*mirror),y-90*scale,x-45*scale*mirror,y-90*scale);
    txLine(x-int(45*scale*mirror),y-90*scale,x+5*scale*mirror,y-40*scale);
    txLine(x-int(145*scale*mirror),y-90*scale,x-195*scale*mirror,y-40*scale);
    txLine(x+int(5*scale*mirror),y-40*scale,x+55*scale*mirror,y-40*scale);
    txLine(x-int(195*scale*mirror),y-40*scale,x-245*scale*mirror,y-40*scale);
    txLine(x-int(245*scale*mirror),y-40*scale,x-245*scale*mirror,y);
    txLine(x+int(55*scale*mirror),y-40*scale,x+55*scale*mirror,y);
    txLine(x+35*scale*mirror,y,x+55*scale*mirror,y);
    txLine(x-245*scale*mirror,y,x-225*scale*mirror,y);
    txLine(x-225*scale*mirror,y,x-205*scale*mirror,y-20*scale);
    txLine(x-205*scale*mirror,y-20*scale,x-175*scale*mirror,y-20*scale);
    txLine(x-175*scale*mirror,y-20*scale,x-155*scale*mirror,y);
    txLine(x-155*scale*mirror,y,x-35*scale*mirror,y);
    txLine(x-205*scale*mirror,y-20*scale,x-175*scale*mirror,y-20*scale);
    txLine(x+15*scale*mirror,y-20*scale,x-15*scale*mirror,y-20*scale);
    txLine(x-15*scale*mirror,y-20*scale,x-35*scale*mirror,y);
    txLine(x+15*scale*mirror,y-20*scale,x+35*scale*mirror,y);
    txFloodFill(x-15*scale*mirror,y-40*scale);

    txSetColor((window_color),3*scale);
    txSetFillColor(window_color);

    POINT window1[4] = {{x-int(145*scale*mirror),y-int(85*scale)},{x-int(185*scale*mirror),y-int(45*scale)},{x-int(110*scale*mirror),y-int(45*scale)},{x-int(110*scale*mirror),y-int(85*scale)}};
    txPolygon(window1,4);

    POINT window2[4] = {{x-int(45*scale*mirror),y-int(85*scale)},{x-int(5*scale*mirror),y-int(45*scale)},{x-int(80*scale*mirror),y-int(45*scale)},{x-int(80*scale*mirror),y-int(85*scale)}};
    txPolygon(window2,4);

    txSetColor((TX_BLACK),6*scale);
    txLine(x-95*scale*mirror,y-90*scale,x-95*scale*mirror,y-30*scale);
    txLine(x-245*scale*mirror,y-30*scale,x+55*scale*mirror,y-30*scale);

    txSetColor(TX_RED);
    txSetFillColor(TX_RED);
    txRectangle(x-247*scale*mirror,y-32*scale,x-235*scale*mirror,y-42*scale);


    txSetColor(TX_YELLOW);
    txSetFillColor(TX_YELLOW);
    txRectangle(x+58*scale*mirror,y-32*scale,x+45*scale*mirror,y-42*scale);

    if(lights == 1){
        POINT light[4] = {{x+int(58*scale*mirror),y-int(42*scale)},{x+int(145*scale*mirror),y-int(92*scale)},{x+int(145*scale*mirror),y+int(8*scale)},{x+int(58*scale*mirror),y-int(32*scale)}};
        txPolygon(light,4);
    }
}

void grass(double height, int y){

    txSetColor(RGB(40,130,5));

    for(int k = 0;k <= 1200;k += 3){
        txLine(k,y,(k + 2),y-70-height);
        txLine((k+2),y-70-height,(k + 4),y);
        }
}

void sun(int x, int y, double scale, int red, int blue){
    int a = 0;
        for(int k = 236; k>49;k-=5){
            a+=3;
            txSetColor(RGB(red,k,blue),4*scale);
            txSetFillColor(TX_NULL);
            txCircle(x,y,a*scale);
        }

}

void land(){
    txSetColor(RGB(63,155,11));
    txSetFillColor(RGB(63,155,11));
    txRectangle(0,800,1200,600);
}

void background(COLORREF color){
    txSetFillColor(color);
    txClear();
}

void house(int x, int y, double scale, COLORREF color, COLORREF window_color, int grounds){
    txSetColor(TX_BLACK);
    txSetFillColor(color);
    txRectangle(x,y+590*scale,x+300*scale,y+scale*(590-52*grounds));
    txSetColor((TX_BLACK),6*scale);
    txLine(x+150*scale,y+scale*(590-57*grounds),x+150*scale,y+scale*(590-52*grounds));
    txSetColor((color),4*scale);
    txLine(x+150*scale,y+scale*(590-57*grounds),x+150*scale,y+scale*(590-52*grounds));
    txSetColor((TX_BLACK),6*scale);
    txLine(x+120*scale,y+scale*(590-57*grounds),x+180*scale,y+scale*(590-57*grounds));
    txSetColor((color),4*scale);
    txLine(x+125*scale,y+scale*(590-57*grounds),x+175*scale,y+scale*(590-57*grounds));


    txSetColor(RGB(50,68,54));
    txSetFillColor(window_color);
    house_window(x+int(10*scale),y+int(550*scale),scale,grounds);
}

void house_window(int x, int y, double scale, int grounds){
    int x2 = x;
    for(int i = 0; i < grounds; i++){
        for(int k = 0; k < 6; k++){
            txRectangle(x,y,x+30*scale,y+30*scale);
            x += int(50*scale);
        }
        x = x2;
        y -= int(50*scale);
    }
}

void birds(int x,int y, double scale, COLORREF color, int wing_angle, int crazy){
    txSetColor((color),4*scale);
    txSetFillColor(color);
    txLine(x,y+wing_angle*scale,x+30*scale,y+20*scale);
    txLine(x+30*scale,y+20*scale,x+40*scale,y+40*scale);
    txLine(x+40*scale,y+40*scale,x+50*scale,y+20*scale);
    txLine(x+50*scale,y+20*scale,x+80*scale,y+wing_angle*scale);
    txLine(x+30*scale,y+20*scale,x+50*scale,y+20*scale);
    txFloodFill(x+35*scale,y+25*scale);
    txSetColor((TX_BLACK), crazy*scale);
    txLine(x+35*scale,y+25*scale,x+35*scale,y+25*scale);
    txSetColor((TX_BLACK), 5*scale);
    txLine(x+47*scale,y+25*scale,x+47*scale,y+25*scale);
}

void scene1(){
    for(int c = 0, z = 1,k = 150, k2 = 1000,g = 20, num = 0;g>2; ){

        txClear();
        background(RGB(0, 191, 255));
        land();
        grass(-20,650);
        house(630,330, 0.5, TX_BROWN, TX_YELLOW,g);
        drawCar(k,600,0.7, TX_MAGENTA, TX_WHITE,c,1);
        drawCar(k2,600,0.7, TX_BLACK, TX_GRAY,z,-1);
        sun(1200,0,1.2,234, 14);
        Sleep(40);
        if (k2>820)k2-=4;
        if (k<590)k+=6;
        if (k2<821 && g>10)g-=2;
        if (k>589)g-=2;
        num++;
        if (num >= 5){
            if(c == 0) c = 1; else c = 0;
            if(z == 0) z = 1; else z = 0;
            num = 0;
        }
    }
}
void scene2(){
for(int x = -100, y = -20, num = 1; x<440; x+=5){
        txClear();
        background(RGB(0, 191, 255));
        land();
        grass(-20,650);
        house(630,330, 0.5, TX_BROWN, TX_YELLOW,3);
        drawCar(590,600,0.7, TX_MAGENTA, TX_WHITE,0,1);
        drawCar(820,600,0.7, TX_BLACK, TX_GRAY,0,-1);
        sun(1200,0,1.2,234, 14);
        birds(x,200,2, TX_GREEN,y,7);
        Sleep(40);
        if (y <= 50 && num == 1) y+=5;
        else if(y>=51) num = 0;
        if (y >= -20&& num == 0) y-=5;
        else if(y<=-20) num = 1;
    }
    for(int x = 0; x<185; x+=5){
        txClear();
        background(RGB(0, 191, 255));
        land();
        grass(-20,650);
        house(630,330, 0.5, TX_BROWN, TX_YELLOW,3);
        drawCar(590,600,0.7, TX_MAGENTA, TX_WHITE,0,1);
        drawCar(820,600,0.7, TX_BLACK, TX_GRAY,0,-1);
        sun(1200,0,1.2,234, 14);
        birds(440,200,2, TX_GREEN,x,7);
        Sleep(40);
    }
    for(int x = 440,y = 200; x>-200; x-=5){
        txClear();
        background(RGB(0, 191, 255));
        land();
        grass(-20,650);
        house(630,330, 0.5, TX_BROWN, TX_YELLOW,3);
        drawCar(x+150,y+400,0.7, TX_MAGENTA, TX_WHITE,0,1);
        drawCar(820,600,0.7, TX_BLACK, TX_GRAY,0,-1);
        sun(1200,0,1.2,234, 14);
        birds(x,y,2, TX_GREEN,185,7);
        Sleep(40);
        if(y>160) y-=2;
    }
    for(int x = 1400, num = 1,y = -20; x>805; x-=5){
        txClear();
        background(RGB(0, 191, 255));
        land();
        grass(-20,650);
        house(630,330, 0.5, TX_BROWN, TX_YELLOW,3);
        drawCar(820,600,0.7, TX_BLACK, TX_GRAY,0,-1);
        sun(1200,0,1.2,234, 14);
        birds(x,300,2, TX_GREEN,y,7);
        Sleep(40);
        if (y <= 50 && num == 1) y+=5;
        else if(y>=51) num = 0;
        if (y >= -20&& num == 0) y-=5;
        else if(y<=-20) num = 1;
    }
    for(int x = -10; x<135; x+=5){
        txClear();
        background(RGB(0, 191, 255));
        land();
        grass(-20,650);
        house(630,330, 0.5, TX_BROWN, TX_YELLOW,3);
        drawCar(820,600,0.7, TX_BLACK, TX_GRAY,0,-1);
        sun(1200,0,1.2,234, 14);
        birds(805,300,2, TX_GREEN,x,7);
        Sleep(40);
    }
    for(int x = 805,y = 300; x<1400; x+=5){
        txClear();
        background(RGB(0, 191, 255));
        land();
        grass(-20,650);
        house(630,330, 0.5, TX_BROWN, TX_YELLOW,3);
        drawCar(x+15,y+300,0.7, TX_BLACK, TX_GRAY,0,-1);
        sun(1200,0,1.2,234, 14);
        birds(x,y,2, TX_GREEN,135,7);
        Sleep(40);
        if(y>160) y-=2;
    }
}
void scene3(){
for(int y = -200, x = 400, an = -20, num = 1; y<450; y+=5){
        txClear();
        background(RGB(0, 191, 255));
        land();
        sun(1200,0,1.2,234, 14);
        grass(-20,650);
        house(630,330,0.5,TX_BROWN,TX_YELLOW,3);
        birds(x,y,1.5, TX_PINK,an,7);
        if(x<640) x+=4;
        Sleep(40);
        if (an <= 50 && num == 1) an+=5;
        else if(an>=51) num = 0;
        if (an >= -20&& num == 0) an-=5;
        else if(an<=-20) num = 1;
    }
    for(int angle = -10; angle <= 65; angle+=4){
        txClear();
        background(RGB(0, 191, 255));
        land();
        sun(1200,0,1.2,234, 14);
        grass(-20,650);
        house(630,330,0.5,TX_BROWN,TX_YELLOW,3);
        birds(640,450,1.5, TX_PINK,angle,7);
        Sleep(40);
    }
    for(int y = 450, gr = 3, num = 0; y >= 50; y-=3){
        txClear();
        background(RGB(0, 191, 255));
        land();
        sun(1200,0,1.2,234, 14);
        grass(-20,650);
        house(630,330,0.5,TX_BROWN,TX_YELLOW,gr);
        birds(640,y,1.5, TX_PINK,65,7);
        num++;
        if(gr < 20 && num == 8){gr++; num = 0;}
        Sleep(40);
    }
}

void scene4(){
txClear();
    background(RGB(0, 191, 255));
    land();
    sun(1200,0,1.2,234, 14);
    grass(-20,650);
    house(630,330,0.5,TX_BROWN,TX_YELLOW,20);

    for(int k = 0; k<400;k+=5){
        txClear();
        background(RGB(0, 191, 255));
        land();
        sun(1200,0,1.2,234, 14);
        grass(-20,650);
        house(630,330,0.5,TX_BROWN,TX_YELLOW,20);
        txSelectFont("Arial",k);
        txTextOut(300,500,"THE END");
        Sleep(15);
    }
    txClear();
}


