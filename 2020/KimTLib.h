/*
 This coding is used for drawing five characters using "TXLib.h"
*/
void DrawShark(int x, int y, double size, COLORREF color);
//initial value (declaration) of drawing shark
void DrawSubmarine(int x, int y, double size, COLORREF color);
//initial value (declaration) of drawing submarine
void DrawSeabed(int x, int y, double size, COLORREF color);
//initial value (declaration) of drawing seabed
void DrawRegalecusglesne(int x, int y, double size, COLORREF color);
//initial value (declaration) of drawing regalecusglesne
void DrawSubmarinevolcano(int x, int y, COLORREF color);
//initial value (declaration) of drawing submarinevolcano
/*
 int x - point of x-axis
 int y - point of y-axis
 double size - size of the character's position
 COLORREF color - color of the character
*/

void DrawShark(int x, int y, double size, COLORREF color)
{
    txSetColor(color,3);
    //set the color and the thickness of printing
    POINT shark[37]={{x-10*size,y+30*size},{x-40*size,y+50*size},{x-50*size,y+60*size},{x-60*size,y+60*size},{x-70*size,y+50*size},{x-80*size,y+60*size},{x-100*size,y+50*size},{x-140*size,y+40*size},{x-180*size,y+40*size},{x-180*size,y+30*size},{x-170*size,y+10*size},{x-190*size,y+30*size},{x-200*size,y+40*size},{x-230*size,y+40*size},{x-260*size,y+50*size},{x-280*size,y+60*size},{x-290*size,y+70*size},{x-270*size,y+80*size},{x-240*size,y+90*size},{x-200*size,y+90*size},{x-210*size,y+80*size},{x-190*size,y+100*size},{x-160*size,y+110*size},{x-190*size,y+80*size},{x-180*size,y+90*size},{x-150*size,y+90*size},{x-120*size,y+80*size},{x-100*size,y+85*size},{x-90*size,y+80*size},{x-80*size,y+80*size},{x-60*size,y+90*size},{x-70*size,y+80*size},{x-60*size,y+70*size},{x-40*size,y+70*size},{x-20*size,y+90*size},{x-30*size,y+70*size},{x-10*size,y+30*size}};
    txPolygon(shark,37);
    //drawing a polygon shaped a shark
    txCircle(x-240*size,y+60*size,2.5);
    //drawing a circle of an eye part
    txLine(x-270*size,y+80*size,x-250*size,y+80*size);
    txLine(x-250*size,y+80*size,x-280*size,y+75*size);
    txLine(x-200*size,y+60*size,x-200*size,y+80*size);
    txLine(x-210*size,y+55*size,x-210*size,y+80*size);
    txLine(x-220*size,y+55*size,x-220*size,y+80*size);
    //drawing a line of gills part
}

void DrawSubmarine(int x, int y, double size, COLORREF color)
{
    txSetColor(RGB(0,255,255));
    txSetFillColor(RGB(0,255,255));
    txCircle(x+70*size,y+80*size,40*size);
    txRectangle(x+30*size,y+80*size,x+70*size,y+100*size);
    txCircle(x+100*size,y+70*size,10*size);
    txCircle(x+130*size,y+70*size,10*size);
    txCircle(x+160*size,y+70*size,10*size);
    txCircle(x+190*size,y+70*size,10*size);
    //the part of the front glass
    txSetColor(color,2);
    txSetFillColor(RGB(153,153,102));
    //the color of the body
    POINT body[13]={{x+70*size,y+40*size},{x+300*size,y+40*size},{x+310*size,y+50*size},{x+310*size,y+80*size},{x+300*size,y+90*size},{x+280*size,y+100*size},{x+250*size,y+110*size},{x+210*size,y+120*size},{x+40*size,y+120*size},{x+30*size,y+110*size},{x+30*size,y+100*size},{x+70*size,y+100*size},{x+70*size,y+40*size}};
    txPolygon(body,13);
    //drawing a polygon of the main part of the body
    POINT upbody[4]={{x+140*size,y+35*size},{x+150*size,y+40*size},{x+200*size,y+35*size},{x+210*size,y+40*size}};
    txPolygon(upbody,4);
    //drawing a polygon of the upper part of the body
    POINT scope[7]={{x+160*size,y+10*size},{x+170*size,y+10*size},{x+180*size,y+20*size},{x+180*size,y+40*size},{x+170*size,y+40*size},{x+170*size,y+20*size},{x+160*size,y+20*size}};
    txPolygon(scope,7);
    //drawing a polygon of the scope part
    txSetFillColor(RGB(51,51,0));
    POINT enginefirst[10]={{x+220*size,y+70*size},{x+230*size,y+70*size},{x+240*size,y+60*size},{x+260*size,y+60*size},{x+280*size,y+50*size},{x+280*size,y+110*size},{x+260*size,y+100*size},{x+240*size,y+100*size},{x+230*size,y+90*size},{x+220*size,y+90*size}};
    txPolygon(enginefirst,10);
    //drawing a polygon of the first engine
    txLine(x+260*size,y+60*size,x+260*size,y+100*size);
    POINT enginesecond[14]={{x+310*size,y+60*size},{x+320*size,y+60*size},{x+320*size,y+40*size},{x+330*size,y+40*size},{x+340*size,y+30*size},{x+350*size,y+30*size},{x+370*size,y+20*size},{x+370*size,y+110*size},{x+350*size,y+100*size},{x+340*size,y+100*size},{x+330*size,y+90*size},{x+320*size,y+90*size},{x+320*size,y+70*size},{x+310*size,y+70*size}};
    txPolygon(enginesecond,14);
    //drawing a polygon of the second engine
    txSetColor(color,2);
    txLine(x+80*size,y+100*size,x+100*size,y+140*size);
    txLine(x+100*size,y+140*size,x+110*size,y+140*size);
    txLine(x+80*size,y+140*size,x+110*size,y+140*size);
    txLine(x+110*size,y+100*size,x+110*size,y+140*size);
    txLine(x+130*size,y+110*size,x+130*size,y+160*size);
    txLine(x+130*size,y+160*size,x+120*size,y+160*size);
    txLine(x+110*size,y+140*size,x+120*size,y+160*size);
    txLine(x+80*size,y+140*size,x+70*size,y+145*size);
    txLine(x+70*size,y+145*size,x+80*size,y+150*size);
    txLine(x+80*size,y+150*size,x+115*size,y+150*size);
    txLine(x+130*size,y+150*size,x+170*size,y+150*size);
    txLine(x+170*size,y+150*size,x+170*size,y+140*size);
    txLine(x+170*size,y+140*size,x+130*size,y+140*size);
}

void DrawSeabed(int x, int y, double size, COLORREF color)
{
    txSetColor(color,3);
    txSetFillColor(RGB(61,61,52));
    //colors of the seabed( color of the circumference and color of the inside
    POINT seabed[35]={{x,y+100},{x+20,y+80},{x+30,y+80},{x+50,y+70},{x+60,y+70},{x+90,y+80},{x+110,y+80},{x+120,y+70},{x+130,y+70},{x+150,y+40},{x+160,y+40},{x+170,y+50},{x+180,y+50},{x+200,y+70},{x+210,y+70},{x+230,y+40},{x+240,y+40},{x+260,y},{x+270,y},{x+280,y+20},{x+300,y+20},{x+310,y+30},{x+320,y+60},{x+330,y+60},{x+340,y+80},{x+350,y+80},{x+370,y+60},{x+380,y+60},{x+390,y+80},{x+400,y+80},{x+410,y+100},{x+420,y+100},{x+440,y+80},{x+450,y+100},{x+470,y+100}};
    txPolygon(seabed,35);
    //drawing a polygon of a seabed
}

void DrawRegalecusglesne(int x, int y, double size, COLORREF color)
{
    txSetColor(color,2);
    txSetFillColor(RGB(153,153,102));
    //color of the body
    POINT body[15]={{x+0*size,y+50*size},{x+20*size,y+40*size},{x+70*size,y+40*size},{x+100*size,y+30*size},{x+150*size,y+55*size},{x+220*size,y+30*size},{x+310*size,y+60*size},{x+410*size,y+30*size},{x+310*size,y+70*size},{x+220*size,y+55*size},{x+150*size,y+90*size},{x+100*size,y+60*size},{x+70*size,y+70*size},{x+30*size,y+70*size},{x+0*size,y+60*size}};
    txPolygon(body,15);
    //drawing a polygon of the body
    txSetColor(RGB(204,0,0));
    txSetFillColor(RGB(204,0,0));
    txLine(x+20*size,y+40*size,x+20*size,y+30*size);
    txLine(x+25*size,y+40*size,x+25*size,y+30*size);
    txLine(x+30*size,y+40*size,x+30*size,y+30*size);
    txLine(x+35*size,y+40*size,x+35*size,y+30*size);
    txLine(x+20*size,y+30*size,x+30*size,y+10*size);
    txLine(x+25*size,y+30*size,x+35*size,y+10*size);
    txLine(x+30*size,y+30*size,x+40*size,y+10*size);
    txLine(x+35*size,y+30*size,x+45*size,y+10*size);
    txLine(x+30*size,y+10*size,x+40*size,y+0*size);
    txLine(x+35*size,y+10*size,x+45*size,y+0*size);
    txLine(x+40*size,y+10*size,x+50*size,y+0*size);
    txLine(x+45*size,y+10*size,x+55*size,y+0*size);
    POINT hair[13]={{x+40*size,y+30*size},{x+70*size,y+30*size},{x+100*size,y+20*size},{x+150*size,y+45*size},{x+220*size,y+20*size},{x+310*size,y+50*size},{x+410*size,y+30*size},{x+310*size,y+60*size},{x+220*size,y+30*size},{x+150*size,y+55*size},{x+100*size,y+30*size},{x+70*size,y+40*size},{x+40*size,y+40*size}};
    txPolygon(hair,13);
    //drawing a polygon of the hair part
    txLine(x+50*size,y+60*size,x+60*size,y+80*size);
    txLine(x+60*size,y+80*size,x+70*size,y+90*size);
    txLine(x+70*size,y+90*size,x+60*size,y+60*size);
    txLine(x+40*size,y+70*size,x+40*size,y+80*size);
    txLine(x+40*size,y+80*size,x+50*size,y+90*size);
    txLine(x+50*size,y+90*size,x+50*size,y+70*size);
    txSetColor(color,2);
    txSetFillColor(RGB(102,204,255));
    txCircle(x+20*size,y+50*size,2.5*size);
    txLine(x+20*size,y+63.3333*size,x+30*size,y+60*size);
    //drawing the circle of an eye part
}

void DrawSubmarinevolcano(int x, int y, COLORREF color)
{
    txSetColor(color,3);
    txSetFillColor(RGB(28,28,28));
    POINT volcano[24]={{x+0,y+160},{x+20,y+120},{x+50,y+80},{x+60,y+60},{x+65,y+70},{x+70,y+60},{x+75,y+70},{x+80,y+60},{x+85,y+70},{x+90,y+60},{x+95,y+70},{x+100,y+60},{x+110,y+80},{x+140,y+120},{x+150,y+100},{x+155,y+110},{x+160,y+100},{x+165,y+110},{x+170,y+100},{x+180,y+130},{x+190,y+130},{x+200,y+150},{x+210,y+140},{x+220,y+160}};
    txPolygon(volcano,24);
    //drawing a polygon of the volcano
    txSetColor(RGB(255,0,0));
    txLine(x+65,y+70,x+65,y+20);
    txLine(x+65,y+20,x+70,y+0);
    txLine(x+70,y+0,x+80,y-20);
    txLine(x+80,y-20,x+90,y-10);
    txLine(x+90,y-10,x+95,y+10);
    txLine(x+95,y+10,x+95,y+70);
    txLine(x+155,y+110,x+155,y+70);
    txLine(x+155,y+70,x+165,y+70);
    txLine(x+165,y+70,x+165,y+110);
    txSetColor(RGB(255,102,0));
    txLine(x+75,y+70,x+75,y+30);
    txLine(x+75,y+30,x+80,y+20);
    txLine(x+80,y+20,x+90,y+40);
    txLine(x+90,y+40,x+85,y+50);
    txLine(x+85,y+50,x+85,y+70);
    //drawing the flame parts
}
