
#include "TXLib.h"

/// @file varyaLib.h
//{----------------------------------------------------------------------------------------------------------------
//! @brief   рисует человека женского пола
//!
//! @param   x             координата по x
//! @param   y             координата по y
//! @param   size          размер
//! @param   bodyColor     цвет тела
//! @param   rightHand     положение правой руки
//! @param   leftHand      положение левой руки
//! @param   rightLeg      положение правой ноги
//! @param   leftLeg       положение левой ноги
//!
//!          с координатой по у что то не так
//!
//! @usage @code
//! for(int i = 0; i<15; i++){
//!
//!    int leftLeg = i%4 == 0 ? 0 : i%4 == 1 ? 2 : i%4 == 2 ? 3 : 1;
//!    int rightLeg = i%4 == 0 ? 3 : i%4 == 1 ? 1 : i%4 == 2 ? 0 : 2;
//!    drouWoman(1200, 900, 0.5, RGB(0, 128, 128), 0, 0, rightLeg,leftLeg);
//!
//!     txSleep(500);
//!
//!    txSetFillColor (RGB(0, 0, 0));
//!    txClear();
//!
//!  }
//! @endcode
//}----------------------------------------------------------------------------------------------------------------

void drouWoman(int x, int y,double size, COLORREF dressColor,int rightHand,int leftHand,int rightLeg,int leftLeg);

//{----------------------------------------------------------------------------------------------------------------
//! @brief   рисует человека мужского пола
//!
//! @param   x             координата по x
//! @param   y             координата по y
//! @param   size          размер
//! @param   bodyColor     цвет тела
//! @param   rightHand     положение правой руки
//! @param   leftHand      положение левой руки
//! @param   rightLeg      положение правой ноги
//! @param   leftLeg       положение левой ноги
//!
//!          с координатой по у что то не так
//!
//! @usage @code
//! for(int i = 0; i<15; i++){
//!
//!    int leftLeg = i%4 == 0 ? 0 : i%4 == 1 ? 2 : i%4 == 2 ? 3 : 1;
//!    int rightLeg = i%4 == 0 ? 3 : i%4 == 1 ? 1 : i%4 == 2 ? 0 : 2;
//!    drouMan(1200, 900, 0.5, RGB(0, 128, 128), 0, 0, rightLeg,leftLeg);
//!
//!     txSleep(500);
//!
//!    txSetFillColor (RGB(0, 0, 0));
//!    txClear();
//!
//!  }
//! @endcode
//}----------------------------------------------------------------------------------------------------------------

void drouMan(int x, int y,double size, COLORREF bodyColor,int rightHand,int leftHand,int rightLeg,int leftLeg);

//{----------------------------------------------------------------------------------------------------------------
//! @brief   рисует бутылку с соусом
//!
//! @param   x               координата по x
//! @param   y               координата по y
//! @param   size            размер
//! @param   sauseColor      цвет соуса
//! @param   capColor        цвет крышки
//! @param   upperLabelColor цвет верхней этикетки
//! @param   glareColor      цвет блика
//! @param   lowerLabelColor цвет нижней этикетки
//!
//!          с координатой по у что то не так
//!
//! @usage @code
//! drouKetchup(650, 800,0.8, RGB(165, 42, 42), RGB(255, 245, 238),RGB(255, 245, 238),RGB(255, 250, 250),RGB(255, 245, 238) );
//! @endcode
//}----------------------------------------------------------------------------------------------------------------

void drouKetchup(int x, int y,double size, COLORREF sauseColor, COLORREF capColor, COLORREF
upperLabelColor, COLORREF glareColor, COLORREF lowerLabelColor );

//{----------------------------------------------------------------------------------------------------------------
//! @brief   рисует нож
//!
//! @param   x               координата по x
//! @param   y               координата по y
//! @param   size            размер
//! @param   bladeColor      цвет лезви€
//! @param   handleColor     цвет руко€дки
//! @param   nail1Color      цвет первой заклепки
//! @param   nail2Color      цвет второй заклепки
//! @param   nail3Color      цвет третьей заклепки
//!
//!          с координатой по у что то не так
//!
//! @usage @code
//! drouKnife(1000, 750,1, RGB(220, 220, 220), RGB(160, 82, 45), RGB(220, 220, 220), RGB(220, 220, 220), RGB(220, 220, 220) );
//! @endcode
//}----------------------------------------------------------------------------------------------------------------

void drouKnife(int x, int y,double size, COLORREF bladeColor, COLORREF handleColor, COLORREF nail1Color,
 COLORREF nail2Color, COLORREF nail3Color );

 //{----------------------------------------------------------------------------------------------------------------
//! @brief   рисует окно
//!
//! @param   x                 координата по x
//! @param   y                 координата по y
//! @param   size              размер
//! @param   color             цвет окна
//! @param   circuitColor      цвет рамы
//! @param   circuitWidth      толщина рамы
//!
//!          с координатой по у что то не так
//!
//! @usage @code
//! drouKnife(1000, 750,1, RGB(220, 220, 220), RGB(160, 82, 45), RGB(220, 220, 220), RGB(220, 220, 220), RGB(220, 220, 220) );
//! @endcode
//}----------------------------------------------------------------------------------------------------------------

void drouWindow(int x, int y,double size , COLORREF color, COLORREF circuitColor, int circuitWidth);

//{----------------------------------------------------------------------------------------------------------------
//! @brief   рисует нож
//!
//! @param   x                     координата по x
//! @param   y                     координата по y
//! @param   size                  размер
//! @param   color                 цвет дома
//! @param   windowsColor          цвет окон
//! @param   windowsCircuitColor   цвет рам окон
//! @param   windowsCircuitWidth   толщина рам
//! @param   window                номер окна с другим цветом
//! @param   windowColor           другой цвет
//!
//!          с координатой по у что то не так
//!
//! @usage @code
//! drouKnife(1000, 750,1, RGB(220, 220, 220), RGB(160, 82, 45), RGB(220, 220, 220), RGB(220, 220, 220), RGB(220, 220, 220) );
//! @endcode
//}----------------------------------------------------------------------------------------------------------------

void drouPieceOfHouse(int x, int y,double size, COLORREF color, COLORREF windowsColor,
COLORREF windowsCircuitColor, int windowsCircuitWidth, int window, COLORREF windowColor );




void drouWoman(int x, int y,double size, COLORREF dressColor,int rightHand,int leftHand,int rightLeg,int leftLeg){

 if(rightHand%5==1){
  txSetColor(RGB (255, 222, 173), 25*size);
  txLine(x+75*size, y-400*size, x+12*size, y-338*size);
 txLine(x+12*size, y-338*size, x-50*size, y-388*size);

 }

 if(rightHand%5==4){
  txSetColor(RGB (255, 222, 173), 25*size);
  txLine(x+75*size, y-400*size, x+138*size, y-338*size);
 txLine(x+138*size, y-338*size, x+100*size, y-263*size);
 }

 if(rightHand%5==2){
  txSetColor(RGB (255, 222, 173), 25*size);
  txLine(x+75*size, y-400*size, x+25*size, y-325*size);
 txLine(x+25*size, y-325*size, x-50*size, y-275*size);
 }

 if(rightHand%5==3){
  txSetColor(RGB (255, 222, 173), 25*size);
  txLine(x+75*size, y-400*size, x+100*size, y-325*size);
 txLine(x+100*size, y-325*size, x+38*size, y-250*size);
 }


 if(rightLeg%5==0){
  txSetColor(RGB (255, 222, 173), 25*size);
 txLine(x+75*size, y-225*size, x+75*size, y-15*size);
 txLine(x+30*size, y-15*size, x+75*size, y-15*size);
}

if(rightLeg%5==1){
  txSetColor(RGB (255, 222, 173), 25*size);
 txLine(x+75*size, y-225*size, x+38*size, y-125*size);
 txLine(x+38*size, y-125*size, x+63*size, y-15*size);
 txLine(x+63*size, y-15*size, x+25*size, y-15*size);
}

if(rightLeg%5==2){
  txSetColor(RGB (255, 222, 173), 25*size);
 txLine(x+75*size, y-225*size, x+113*size, y-15*size);
 txLine(x+113*size, y-15*size, x+75*size, y-15*size);
}

if(rightLeg%5==3){
  txSetColor(RGB (255, 222, 173), 25*size);
 txLine(x+75*size, y-225*size, x+113*size, y-138*size);
 txLine(x+113*size, y-138*size, x+188*size, y-63*size);
 txLine(x+188*size, y-63*size, x+175*size, y-25*size);
}

if(rightLeg%5==4){
  txSetColor(RGB (255, 222, 173), 25*size);
 txLine(x+75*size, y-225*size, x+125*size, y-138*size);
 txLine(x+125*size, y-138*size, x+200*size, y-225*size);
 txLine(x+200*size, y-225*size, x+238*size, y-188*size);
}




if(leftLeg%5==0){
 txSetColor(RGB (255, 228, 196), 25*size);
 txLine(x+75*size, y-225*size, x+75*size, y-15*size);
 txLine(x+30*size, y-15*size, x+75*size, y-15*size);
}

if(leftLeg%5==1){
 txSetColor(RGB (255, 228, 196), 25*size);
 txLine(x+75*size, y-225*size, x+38*size, y-125*size);
 txLine(x+38*size, y-125*size, x+63*size, y-15*size);
 txLine(x+63*size, y-15*size, x+25*size, y-15*size);
}

if(leftLeg%5==2){
 txSetColor(RGB (255, 228, 196), 25*size);
 txLine(x+75*size, y-225*size, x+113*size, y-15*size);
 txLine(x+113*size, y-15*size, x+75*size, y-15*size);
}

if(leftLeg%5==3){
 txSetColor(RGB (255, 228, 196), 25*size);
 txLine(x+75*size, y-225*size, x+113*size, y-138*size);
 txLine(x+113*size, y-138*size, x+188*size, y-63*size);
 txLine(x+188*size, y-63*size, x+175*size, y-25*size);
}

if(leftLeg%5==4){
 txSetColor(RGB (255, 228, 196), 25*size);
 txLine(x+75*size, y-225*size, x+125*size, y-138*size);
 txLine(x+125*size, y-138*size, x+200*size, y-225*size);
 txLine(x+200*size, y-225*size, x+238*size, y-188*size);
}


//платье
 txSetColor(dressColor);
 txSetFillColor(dressColor);
 POINT dress[4] = {{x+50*size, y-400*size}, {x+100*size, y-400*size}, {x+150*size, y-150*size}, {x, y-150*size}};
 txPolygon (dress, 4);

 //голова
 txSetColor(TX_BLACK);
 txSetFillColor(RGB (255, 228, 196));
 txCircle(x+75*size,y-525*size, 75*size);



  if(leftHand%5==1){
  txSetColor(TX_BLACK);
 txSetFillColor(RGB (255, 255, 240));
 POINT package[7] = {{x+50*size- 125*size, y-225*size-175*size},{x+75*size -125*size, y-225*size-175*size},
                     {x+100*size-125*size, y-150*size-175*size},{x+100*size-125*size, y-100*size-175*size},
                     {x+60*size- 125*size, y-75*size- 175*size},{x+25*size- 125*size, y-100*size-175*size},
                     {x+25*size- 125*size, y-150*size-175*size}};
 txPolygon (package, 7);

  txSetColor(RGB (255, 228, 196), 25*size);
  txLine(x+75*size, y-400*size, x+12*size, y-338*size);
 txLine(x+12*size, y-338*size, x-50*size, y-388*size);


 }

 if(leftHand%5==4){
 txSetColor(TX_BLACK);
  txSetFillColor(RGB (255, 255, 240));
  POINT package[7] ={{x+50*size+13 , y-225*size-50*size},{x+75*size+13 , y-225*size-50*size},
                     {x+100*size+13, y-150*size-50*size},{x+100*size+13, y-100*size-50*size},
                     {x+60*size+13 , y-75*size- 50*size},{x+25*size+13 , y-100*size-50*size},
                     {x+25*size+13 , y-150*size-50*size}};
  txPolygon (package, 7);

  txSetColor(RGB (255, 228, 196), 25*size);
  txLine(x+75*size, y-400*size, x+138*size, y-338*size);
 txLine(x+138*size, y-338*size, x+100*size, y-263*size);


 }

 if(leftHand%5==2){
 txSetColor(TX_BLACK);
 txSetFillColor(RGB (255, 255, 240));
 POINT package[7] = {{x+50*size- 100*size, y-225*size-62*size},{x+75*size -100*size, y-225*size-62*size},
                     {x+100*size-100*size, y-150*size-62*size},{x+100*size-100*size, y-100*size-62*size},
                     {x+60*size- 100*size, y-75*size- 62*size},{x+25*size- 100*size, y-100*size-62*size},
                     {x+25*size- 100*size, y-150*size-62*size}};
 txPolygon (package, 7);

  txSetColor(RGB (255, 228, 196), 25*size);
  txLine(x+75*size, y-400*size, x+25*size, y-325*size);
 txLine(x+25*size, y-325*size, x-50*size, y-275*size);
 }

 if(leftHand%5==3){
  txSetColor(TX_BLACK);
  txSetFillColor(RGB (255, 255, 240));
  POINT package[7] ={{x+50*size , y-225*size-50*size},{x+75*size , y-225*size-50*size},
                     {x+100*size, y-150*size-50*size},{x+100*size, y-100*size-50*size},
                     {x+60*size , y-75*size- 50*size},{x+25*size , y-100*size-50*size},
                     {x+25*size , y-150*size-50*size}};
  txPolygon (package, 7);

  txSetColor(RGB (255, 228, 196), 25*size);
  txLine(x+63*size , y-400*size, x+100*size,y-325*size);
  txLine(x+100*size, y-325*size, x+63*size, y-250*size);
 }

 if(leftHand%5==0){
 txSetColor(TX_BLACK);
  txSetFillColor(RGB (255, 255, 240));
  POINT package[7] ={{x+50*size , y-225*size},{x+75*size , y-225*size},
                     {x+100*size, y-150*size},{x+100*size, y-100*size},
                     {x+60*size , y-75*size },{x+25*size , y-100*size},
                     {x+25*size , y-150*size}};
  txPolygon (package, 7);

  txSetColor(RGB (255, 228, 196), 25*size);
  txLine(x+63*size , y-400*size, x+63*size,y-200*size);
 }

 //волосы
 txSetColor(TX_BLACK);
 txSetFillColor(RGB (139, 69, 19));
 POINT hair[7] = { {x+50*size, y-600*size}, {x+125*size, y-600*size}, {x+150*size, y-550*size}, {x+150*size, y-450*size}, {x+100*size, y-400*size},
  {x+25*size, y-400*size}, {x+50*size, y-450*size}, };
 txPolygon (hair, 7);


}


void drouMan(int x, int y,double size, COLORREF bodyColor,int rightHand,int leftHand,int rightLeg,int leftLeg){

 if(rightHand==1){
  txSetColor(RGB (255, 222, 173), 25*size);
  txLine(x+75*size, y-400*size, x+12*size, y-338*size);
 txLine(x+12*size, y-338*size, x-50*size, y-388*size);
 }

 if(rightHand==4){
  txSetColor(RGB (255, 222, 173), 25*size);
  txLine(x+75*size, y-400*size, x+138*size, y-338*size);
 txLine(x+138*size, y-338*size, x+100*size, y-263*size);
 }

 if(rightHand==2){
  txSetColor(RGB (255, 222, 173), 25*size);
  txLine(x+75*size, y-400*size, x+25*size, y-325*size);
 txLine(x+25*size, y-325*size, x-50*size, y-275*size);
 }

 if(rightHand==3){
  txSetColor(RGB (255, 222, 173), 25*size);
  txLine(x+75*size, y-400*size, x+100*size, y-325*size);
 txLine(x+100*size, y-325*size, x+38*size, y-250*size);
 }


 if(rightLeg==0){
  txSetColor(RGB (0, 0, 139), 30*size);
 txLine(x+75*size, y-225*size, x+75*size, y-15*size);
 txLine(x+30*size, y-15*size, x+75*size, y-15*size);
}

if(rightLeg==1){
  txSetColor(RGB (0, 0, 139), 30*size);
 txLine(x+75*size, y-225*size, x+38*size, y-125*size);
 txLine(x+38*size, y-125*size, x+63*size, y-15*size);
 txLine(x+63*size, y-15*size, x+25*size, y-15*size);
}

if(rightLeg==2){
  txSetColor(RGB (0, 0, 139), 30*size);
 txLine(x+75*size, y-225*size, x+113*size, y-15*size);
 txLine(x+113*size, y-15*size, x+75*size, y-15*size);
}

if(rightLeg==3){
  txSetColor(RGB (0, 0, 139), 30*size);
 txLine(x+75*size, y-225*size, x+113*size, y-138*size);
 txLine(x+113*size, y-138*size, x+188*size, y-63*size);
 txLine(x+188*size, y-63*size, x+175*size, y-25*size);
}

if(rightLeg==4){
  txSetColor(RGB (0, 0, 139), 30*size);
 txLine(x+75*size, y-225*size, x+125*size, y-138*size);
 txLine(x+125*size, y-138*size, x+200*size, y-225*size);
 txLine(x+200*size, y-225*size, x+238*size, y-188*size);
}



  //ше€
 txSetColor(RGB (255, 228, 196), 15*size);
 txLine(x+80*size, y-475*size, x+80*size, y-400*size);

//тело
 txSetColor(bodyColor);
 txSetFillColor(bodyColor);
 POINT dress[8] = {{x+50*size, y-400*size}, {x+100*size, y-400*size},{x+125*size, y-350*size},
                   {x+125*size, y-250*size},{x+100*size, y-225*size}, {x+50*size, y-225*size},
                   {x+25*size, y-250*size}, {x+25*size, y-350*size}};
 txPolygon (dress, 8);

 //голова
 txSetColor(TX_BLACK);
 txSetFillColor(RGB (255, 228, 196));
 txCircle(x+75*size,y-525*size, 75*size);

 //рука
 if(leftHand==1){
  txSetColor(RGB (255, 228, 196), 25*size);
  txLine(x+75*size, y-400*size, x+12*size, y-338*size);
 txLine(x+12*size, y-338*size, x-50*size, y-388*size);
 }

 if(leftHand==4){
  txSetColor(RGB (255, 228, 196), 25*size);
  txLine(x+75*size, y-400*size, x+138*size, y-338*size);
 txLine(x+138*size, y-338*size, x+100*size, y-263*size);
 }

 if(leftHand==2){
  txSetColor(RGB (255, 228, 196), 25*size);
  txLine(x+75*size, y-400*size, x+25*size, y-325*size);
 txLine(x+25*size, y-325*size, x-50*size, y-275*size);
 }

 if(leftHand==3){
  txSetColor(RGB (255, 228, 196), 25*size);
  txLine(x+75*size, y-400*size, x+100*size, y-325*size);
 txLine(x+100*size, y-325*size, x+38*size, y-250*size);
 }



 //волосы
 txSetColor(TX_BLACK);
 txSetFillColor(RGB (210, 105, 30));
 POINT hair[6] = {{x+50*size, y-600*size}, {x+150*size, y-600*size}, {x+150*size, y-450*size},
                  {x+75*size, y-450*size}, {x+100*size, y-500*size}, {x+25*size, y-575*size}};
 txPolygon (hair, 6);

if(leftLeg==0){
  txSetColor(RGB (0, 0, 205), 30*size);
 txLine(x+75*size, y-225*size, x+75*size, y-15*size);
 txLine(x+30*size, y-15*size, x+75*size, y-15*size);
}

if(leftLeg==1){
  txSetColor(RGB (0, 0, 205), 30*size);
 txLine(x+75*size, y-225*size, x+38*size, y-125*size);
 txLine(x+38*size, y-125*size, x+63*size, y-15*size);
 txLine(x+63*size, y-15*size, x+25*size, y-15*size);
}

if(leftLeg==2){
  txSetColor(RGB (0, 0, 205), 30*size);
 txLine(x+75*size, y-225*size, x+113*size, y-15*size);
 txLine(x+113*size, y-15*size, x+75*size, y-15*size);
}

if(leftLeg==3){
  txSetColor(RGB (0, 0, 205), 30*size);
 txLine(x+75*size, y-225*size, x+113*size, y-138*size);
 txLine(x+113*size, y-138*size, x+188*size, y-63*size);
 txLine(x+188*size, y-63*size, x+175*size, y-25*size);
}

if(leftLeg==4){
  txSetColor(RGB (0, 0, 205), 30*size);
 txLine(x+75*size, y-225*size, x+125*size, y-138*size);
 txLine(x+125*size, y-138*size, x+200*size, y-225*size);
 txLine(x+200*size, y-225*size, x+238*size, y-188*size);
}

if(leftHand%5==0){
  txSetColor(RGB (255, 228, 196), 25*size);
  txLine(x+63*size , y-400*size, x+63*size,y-200*size);
 }


}


void drouKetchup(int x, int y,double size, COLORREF sauseColor, COLORREF capColor, COLORREF
upperLabelColor, COLORREF glareColor, COLORREF lowerLabelColor ){


 //бутылка
 txSetColor(sauseColor);
 txSetFillColor(sauseColor);
 POINT butle[8] = {{x+50*size, y-600*size}, {x+150*size, y-600*size}, {x+150*size, y-525*size},
                  {x+200*size, y-250*size}, {x+200*size, y}, {x, y}, {x, y-250*size}, {x+50*size, y-525*size}, };
 txPolygon (butle, 8);

 //крышка
 txSetFillColor(capColor);
 POINT cap[4] = {{x+50*size, y-600*size}, {x+150*size, y-600*size}, {x+150*size, y-575*size}, {x+50*size, y-575*size}, };
 txPolygon (cap, 4);

 //верхн€€ этикетка
 txSetFillColor(upperLabelColor);
 POINT label[6] = {{x+50*size, y-550*size}, {x+150*size, y-550*size}, {x+150*size, y-525*size},
                  {x+165*size, y-450*size}, {x+35*size, y-450*size}, {x+50*size, y-525*size}, };
 txPolygon (label, 6);

 //блик
 txSetFillColor(glareColor);
 POINT glare[4] = {{x+125*size, y-375*size}, {x+150*size, y-375*size},
                   {x+175*size, y-300*size}, {x+125*size, y-300*size}, };
 txPolygon (glare, 4);

 //нижн€€ этикетка
 txSetFillColor(lowerLabelColor);
 POINT labelb[6] = {{x+25*size, y-225*size}, {x+50*size, y-250*size}, {x+150*size, y-250*size},
                   {x+175*size, y-225*size}, {x+150*size, y-50*size}, {x+50*size, y-50*size}, };
 txPolygon (labelb, 6);

}


void drouKnife(int x, int y,double size, COLORREF bladeColor, COLORREF handleColor, COLORREF nail1Color,
 COLORREF nail2Color, COLORREF nail3Color ){
    txSetColor(bladeColor);
    txSetFillColor(bladeColor);
    POINT blade[7] = {{x-120*size, y-20*size},{x-50*size, y-20*size},{x-50*size, y-10*size},{x-55*size, y-10*size},{x-60*size, y-5*size},{x-100*size, y-5*size},{x-110*size, y-10*size}};
    txPolygon (blade, 7);

    txSetFillColor(RGB (139, 69, 19));
    POINT lever[6] = {{x-50*size, y-20*size},{x, y-20*size},{x, y-10*size},{x-10*size, y-5*size},{x-30*size, y-10*size},{x-50*size, y-10*size}};
    txPolygon (lever, 6);

    txSetFillColor(RGB (211, 211, 211));
    txCircle(x-40*size,y-15*size, 3*size);
    txCircle(x-25*size,y-15*size, 3*size);
    txCircle(x-10*size,y-15*size, 3*size);

}


void drouPieceOfHouse(int x, int y,double size, COLORREF color, COLORREF windowsColor,
COLORREF windowsCircuitColor, int windowsCircuitWidth, int window, COLORREF windowColor ){


    txSetColor(color);
    txSetFillColor(color);
    POINT howse[4] = {{x, y-800*size}, {x+400*size, y-800*size},{x+400*size, y}, {x, y}};
    txPolygon (howse, 4);

    for(int i = 0;i<5;i++){
        if(i==window){
            drouWindow(x+100*size, y-(700-i*150)*size,size,windowColor, windowsCircuitColor,windowsCircuitWidth);
        }else{
            drouWindow(x+100*size, y-(700-i*150)*size,size,windowsColor,windowsCircuitColor,windowsCircuitWidth);}
    }

    for(int i = 5;i<9;i++){
        if(i==window){
            drouWindow(x+300*size, y-(700-(i-5)*150)*size,size,windowColor ,windowsCircuitColor,windowsCircuitWidth);
        }else{
            drouWindow(x+300*size, y-(700-(i-5)*150)*size,size,windowsColor,windowsCircuitColor,windowsCircuitWidth);}
    }



    txSetColor(RGB(211, 211, 211));
    txSetFillColor(RGB (211, 211, 211));
    POINT dor[4] = {{x+250*size, y-150*size}, {x+350*size, y-150*size},{x+350*size, y}, {x+250*size, y}};
    txPolygon (dor, 4);
}


void drouWindow(int x, int y,double size , COLORREF color, COLORREF circuitColor, int circuitWidth){
 txSetColor(circuitColor, circuitWidth*size);
 txSetFillColor(color);
 POINT window[4] = {{x-50*size, y+50*size}, {x+50*size, y+50*size},{x+50*size, y-50*size}, {x-50*size, y-50*size}};
 txPolygon (window, 4);
}
