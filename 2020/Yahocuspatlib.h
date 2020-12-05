
 #include "Txlib.h"
 /*!  @author       Peter Artukhov
       @version      ALPHA v. 0.02
       @brief          I want to sleep
       @date          28.11.2020
       @file            Yahocuspatlib.h
       @warning     This is the alpha version. To use the library, you must agree with its author.
 */
 /*!
     @brief        Draws a shark
     @param      x  coordinates along the x-axis
     @param      y  coordinates along the y-axis
     @param      scale  size
     @param      color1  variable responsible for the main fill color
     @param      color  the variable responsible for the basic color of the stroke
     @param      eyecolor  the variable responsible for the fill color of the eyes
     @param      gillslitcolor  variable responsible for the fill color of the Gill slits
     @param      type  variable responsible for the type of shark... there are only 2 of them. The first is if the type is less than 1 and the second is in any other cases
     @param      eyeradius  the size of the eyes
     @param      gillslit  responsible for the type of Gill slits. There are 2 types in total
     @param      mirror  turns the shark in the opposite direction by x axis
     @param      ymirror  turns the shark in the opposite direction by y axis
     @warning
                    mirror and ymirror can't be described with numbers other than -1 and 1, otherwise something very scary happens..
     @todo
                    make more types of Gill slits

*/
void shark(int x, int y, double scale, COLORREF color, COLORREF color1, COLORREF eyecolor, COLORREF gillslitcolor, int type, double eyeradius, int gillslit, int mirror, int ymirror);
//888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888
/*!
    @brief        Draws a coral
    @param      x              coordinates along the x-axis
    @param      y              coordinates along the y-axis
    @param      scale        size
    @param      color1       variable responsible for the main fill color
    @param      color         the variable responsible for the basic color of the stroke
    @param      number      the number of leaves in the seaweed
    @param      mirror        turns the coral in the opposite direction by x axis
    @param      ymirror       turns the coral in the opposite direction by y axis
    @param      compress    the compression ratio on the x-axis
    @param      ycompress   the compression ratio on the y-axis
    @warning
                    mirror and ymirror can't be described with numbers other than -1 and 1, otherwise something very scary happens..
                    compress and ycompress do no more than 5.

*/
 void coral(int x, int y, double scale, COLORREF color, COLORREF color1, int number, int mirror, int ymirror, double compress, double ycompress);
//888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888
/*!
     @brief        Draws a submarine
     @param      x           coordinates along the x-axis
     @param      y           coordinates along the y-axis
     @param      scale     size
     @param      color1   variable responsible for the main fill color
     @param      color     the variable responsible for the basic color of the stroke
     @param      number it doesn't make much sense but you need it to find delx
     @param      mirror  turns the coral in the opposite direction by x axis
     @param      ymirror  turns the coral in the opposite direction by y axis
     @param      type      needed to select the shape of the submarine hull
     @param      radius   radius of the submarine window
     @warning
                    mirror and ymirror can't be described with numbers other than -1 and 1, otherwise something very scary happens..
                    compress and ycompress do no more than 5.
     @todo
                    make more shapes for the upper body parts in different types

*/
void submarine(int x, int y, double scale, COLORREF color, COLORREF color1, int number, int mirror, int ymirror, int type, int radius );
//88888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888
/*!
     @brief        Draws a rock
     @param      x           coordinates along the x-axis
     @param      y           coordinates along the y-axis
     @param      scale     size
     @param      color1   variable responsible for the main fill color
     @param      color     the variable responsible for the basic color of the stroke
     @param      type      the shape of the stone.. their total
     @param      mirror    turns the coral in the opposite direction by x axis
     @param      ymirror  turns the coral in the opposite direction by y axis
     @warning
                    mirror and ymirror can't be described with numbers other than -1 and 1, otherwise something very scary happens..
                    compress and ycompress do no more than 5.
     @todo
                      make more shapes of rocks
*/
void rock(int x, int y, double scale, COLORREF color, COLORREF color1, int type, int mirror ,int ymirror);
//88888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888
/*!
     @brief        Draws a coal
     @param      x            coordinates along the x-axis
     @param      y            coordinates along the y-axis
     @param      scale       size
     @param      color1      variable responsible for the main fill color
     @param      color        the variable responsible for the basic color of the stroke
     @param      eyecolor   the fill color of the eyes
     @param      gillcolor      color of the gills
     @param      mirror       turns the coral in the opposite direction by x axis
     @param      ymirror     turns the coral in the opposite direction by y axis
     @param      gillslits type of drawing of gills.. only 2
     @warning
                    mirror and ymirror can't be described with numbers other than -1 and 1, otherwise something very scary happens..
                    compress and ycompress do no more than 5.

*/
void coal(double x, double y, double scale, COLORREF color, COLORREF color1, COLORREF eyecolor, COLORREF gillcolor, int mirror, int ymirror, int gillslits);
//88888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888
void shark(int x, int y, double scale, COLORREF color, COLORREF color1, COLORREF eyecolor, COLORREF gillslitcolor, int type, double eyeradius,int gillslit, int mirror, int ymirror)
{
    txSetColor(color);
    txSetFillColor(color1);
    if (type < 5)
    {
        POINT shark1[33]  = {{x, y}, {x - 10*scale*mirror, y + 7*scale*ymirror }, {x - 25*scale*mirror, y + 11.5*scale*ymirror}, {x - 35*scale*mirror, y +11.5*scale*ymirror},
        {x - 44*scale*mirror, y + 22*scale*ymirror}, {x - 47*scale*mirror, y + 22*scale*ymirror},
        {x - 50*scale*mirror, y + 18*scale*ymirror}, { x - 53*scale*mirror, y + 24*scale*ymirror},
        {x - 56*scale*mirror, y + 25*scale*ymirror}, {x - 54.5*scale*mirror, y + 11.5*scale*ymirror}, {x - 59*scale*mirror, y + 11.5*scale*ymirror}, {x - 62*scale*mirror, y + 15*scale*ymirror},
        {x - 65*scale*mirror, y + 11.5*scale*ymirror},{x - 74*scale*mirror, y + 9.5*scale*ymirror}, {x - 76*scale*mirror, y + 13*scale*ymirror },
        {x - 80*scale*mirror, y + 12.5*scale*ymirror}, {x - 82*scale*mirror, y +11*scale*ymirror}, {x - 90*scale*mirror, y + 10*scale*ymirror},
        {x - 95*scale*mirror, y + 25*scale*ymirror},{x - 103*scale*mirror, y + 23.5*scale*ymirror}, {x - 100*scale*mirror, y + 7*scale*ymirror}, { x - 115*scale*mirror, y - 9*scale*ymirror }, {x - 112*scale*mirror, y - 11*scale*ymirror}, {x -  90*scale*mirror, y}, {x - 80*scale*mirror, y - 3*scale*ymirror},
        {x - 78*scale*mirror, y - 5*scale*ymirror}, { x - 76*scale*mirror, y - 3.5*scale*ymirror},
        {x - 62*scale*mirror, y - 5*scale*ymirror}, { x - 60*scale*mirror, y - 11 *scale*ymirror }, {x - 57*scale*mirror,  y - 13.5*scale*ymirror}, {x - 53*scale*mirror, y - 8*scale*ymirror },
        {x - 45*scale*mirror, y - 1.5*scale*ymirror},{x - 20*scale*mirror, y - 3*scale*ymirror}} ;
        txPolygon(shark1, 33);
        txLine(x - 10*scale*mirror, y + 7*scale*ymirror, x - 25*scale*mirror, y + 7*scale*ymirror);
        txSetFillColor(TX_LIGHTCYAN);
        txCircle(x - 17.5*scale*mirror, y + 2*scale*ymirror, eyeradius*scale);
        if (gillslit < 1)
        {
        txSetFillColor(gillslitcolor);
        POINT gillslit [11] = { {x - 45*scale*mirror, y + 20*scale*ymirror}, {x - 50*scale*mirror, y + 15*scale*ymirror}, {x - 48.5*scale*mirror, y + 15*scale*ymirror},
        {x - 55*scale*mirror, y + 10*scale*ymirror}, {x - 53.5*scale*mirror, y + 7.5*scale*ymirror}, {x - 60*scale*mirror, y  + 5*scale*ymirror}, {x - 52.5*scale*mirror, y + 2.5*scale*ymirror},
        {x - 50*scale*mirror, y + 8.5*scale*ymirror}, {x - 52.5*scale*mirror, y + 10*scale*ymirror}, {x - 47.5*scale*mirror, y + 15*scale*ymirror }, {x - 45*scale*mirror, y + 15*scale*ymirror} };
        txPolygon(gillslit, 11);

        }
        else
        {
        txSetFillColor(gillslitcolor);
        POINT gillslit [4] = {{x - 44*scale*mirror, y + 12*scale*ymirror}, {x - 40*scale*mirror, y + 8*scale*ymirror}, {x - 44*scale, y + 4 }, {x -  36*scale*mirror, y + 8*scale*ymirror}} ;
        txPolygon(gillslit, 4);
        }
    }
    else
    {
    POINT tulovische[30]  = {{x,y}, {x - 20*scale*mirror, y - 5*scale*ymirror}, {x - 50*scale*mirror, y - 10*scale*ymirror},{x - 56*scale*mirror, y - 25*scale*ymirror}, {x - 66*scale*mirror, y - 40*scale*ymirror},
    {x - 65*scale*mirror, y - 20*scale*ymirror},{x - 70*scale*mirror, y - 8*scale*ymirror},{x - 95*scale*mirror, y - 5*scale*ymirror}, {x - 99*scale*mirror, y - 8*scale*ymirror},
    {x - 102*scale*mirror, y - 4*scale*ymirror}, {x - 110*scale*mirror, y - 3*scale*ymirror},{x - 125*scale*mirror, y - 20*scale}, {x - 135*scale*mirror, y - 35*scale*ymirror}, {x - 119*scale*mirror, y },
    {x - 123*scale*mirror, y + 25*scale*ymirror}, {x - 115*scale*mirror, y + 15*scale*ymirror}, {x - 105*scale*mirror, y + 5*scale*ymirror}, {x - 85*scale*mirror, y + 7.5*scale*ymirror},
    {x - 81*scale*mirror, y + 11*scale*ymirror}, {x - 77*scale*mirror, y + 8*scale*ymirror},{x - 67*scale*mirror, y + 9.5*scale*ymirror}, {x - 63*scale*mirror, y + 13*scale*ymirror}, {x - 59*scale*mirror, y + 10*scale*ymirror},
    {x - 44*scale*mirror, y + 12*scale*ymirror}, {x - 45*scale*mirror, y + 12.5*scale*ymirror},{x - 40*scale*mirror, y + 25*scale*ymirror}, {x - 41*scale*mirror, y + 35*scale*ymirror}, {x - 30*scale*mirror, y + 25*scale*ymirror},
    {x - 30*scale*mirror, y + 10*scale*ymirror}, {x - 5*scale*mirror, y + 3*scale*ymirror}} ;
    txPolygon(tulovische, 30);
    txSetFillColor(eyecolor);
    txCircle(x - 15*scale*mirror, y - 2*scale*ymirror, eyeradius*scale) ;
    if (gillslit < 1)
        {
        txSetFillColor(gillslitcolor);
        POINT gillslit [11] = { {x - 45*scale*mirror, y + 10*scale*ymirror}, {x - 50*scale*mirror, y + 5*scale*ymirror}, {x - 48.5*scale*mirror, y + 5*scale*ymirror},
        {x - 55*scale*mirror, y }, {x - 53.5*scale*mirror, y - 2.5*scale*ymirror}, {x - 60*scale*mirror, y  - 5*scale*ymirror}, {x - 52.5*scale*mirror, y - 7.5*scale*ymirror},
        {x - 50*scale*mirror, y - 1.5*scale*ymirror}, {x - 52.5*scale*mirror, y}, {x - 47.5*scale*mirror, y + 5*scale*ymirror }, {x - 45*scale*mirror, y + 5*scale*ymirror} };
        txPolygon(gillslit, 11);

        }
        else
        {
        txSetFillColor(gillslitcolor);
        POINT gillslit [4] = {{ x - 45*scale*mirror, y + 10*scale*ymirror}, {x - 40*scale*mirror, y + 6*scale*ymirror}, {x - 45*scale*mirror, y + 2*scale*ymirror }, {x -  35*scale*mirror, y + 6*scale*ymirror}} ;
        txPolygon(gillslit, 4);
        }
    }
}
void coral(int x, int y, double scale, COLORREF color, COLORREF color1, int number, int mirror, int ymirror, double compress, double ycompress)
{
    txSetColor(color);
    txSetFillColor(color1);
    int i = 1;
    for(; i < number; i++ )
    {
        y-=30*scale*compress ;
        POINT coral[10] = {{x, y}, {x, y - 30*scale*ymirror*ycompress}, {x - 20*scale*mirror*compress, y - 50*scale*ymirror*ycompress}, {x - 15*scale*mirror*compress, y - 57*scale*ymirror*ycompress},
         {x, y - 36*scale*ymirror*ycompress}, {x+12*scale*mirror*compress, y - 36*scale*ymirror*ycompress},{x + 25*scale*mirror*compress, y - 57*scale*ymirror*ycompress},
         {x + 30*scale*mirror*compress, y - 50*scale*ymirror*ycompress}, {x + 12*scale*mirror*compress, y - 30*scale*ymirror*ycompress}, {x+12*scale*mirror*compress, y}};
        txPolygon(coral, 10);
    }
}
void submarine(int x, int y, double scale, COLORREF color, COLORREF color1, int number, int mirror, int ymirror, int type, int radius)
{
    if(type < 1)
    {
        txSetColor(color);
        txSetFillColor(color1);
        POINT telo[4] = {{x, y}, {x + 150*scale*mirror, y + 60*scale*ymirror}, {x + 300*scale*mirror, y}, {x + 150*scale*mirror, y - 60*scale*ymirror}};
        txPolygon(telo, 4);
        txSetColor(color1);
        POINT yyyy[5] = { {x + 120*scale*mirror, y}, {x + 110*scale*mirror, y - 60*scale*ymirror}, {x + 150*scale*mirror, y - 90*scale*ymirror}, {x + 190*scale*mirror, y - 60*scale*ymirror}, {x + 180*scale*mirror, y} };
        txPolygon(yyyy, 5);
        int delx = 200 / number;
        int maxx = x + 230*scale ;
        for(int i = 0;  x  + radius < maxx  ; x += delx)
        {
            txSetColor(RGB(rand()%256, rand()%256, rand()%256)) ;
            txSetFillColor(RGB(rand()%256, rand()%256, rand()%256));
            txCircle(x + delx*scale*mirror, y, radius);
        }
    }
    else
    {
        txSetColor(color);
        txSetFillColor(color1);
        txEllipse(x,y - 100*scale*ymirror,x + 250*scale*mirror, y );
        txSetColor(color1);
        txRectangle(x + 100*scale*mirror, y - 125*scale*ymirror, x + 150*scale*mirror, y - 90*scale*ymirror);
        int delx = 200/number;
        int maxx = x + 200*scale;
        for(int i = 0; x + radius < maxx; x += delx)
        {
            txSetColor(RGB(rand()%256, rand()%256, rand()%256)) ;
            txSetFillColor(RGB(rand()%256, rand()%256, rand()%256));
            txCircle(x + delx*scale*mirror, y - 50*scale*ymirror, radius);
        }

    }
}
void rock(int x, int y, double scale, COLORREF color, COLORREF color1, int type, int mirror, int ymirror)
{
    if (type < 1)
    {
        txSetColor(color);
        txSetFillColor(color1);
        POINT rock1[12]  = {{x, y}, {x, y - 5*scale*ymirror}, {x + 5*scale*mirror, y - 5*scale*ymirror}, {x + 5*scale*mirror, y - 15*scale*ymirror}, {x + 25*scale*mirror, y - 15*scale*ymirror},
        {x + 25*scale*mirror, y - 12.5*scale*ymirror}, {x + 30*scale*mirror, y - 12.5*scale*ymirror}, {x + 30*scale*mirror, y - 10*scale*ymirror}, {x + 37.5*scale*mirror, y - 10*scale*ymirror},
        {x + 37.5*scale*mirror, y - 5*scale*ymirror}, {x + 47.5*scale*mirror, y - 5*scale*ymirror}, {x + 47.5*scale*mirror, y }};
        txPolygon(rock1, 12);

    }
    else
    {
        txSetColor(color);
        txSetFillColor(color1);
        POINT rock2[10]  = {{x,y}, {x, y - 10*scale*ymirror}, {x + 20*scale*mirror, y - 10*scale*ymirror}, {x + 20*scale*mirror, y - 20*scale*ymirror}, {x + 30*scale*mirror, y - 20*scale*ymirror}, {x + 30*scale*mirror, y - 7.5*scale*ymirror},
        {x + 45*scale*mirror, y - 7.5*scale*ymirror},{x + 45*scale*mirror, y - 2.5*scale*ymirror}, {x + 35*scale*mirror, y - 2.5*scale*ymirror}, {x+35*scale*mirror, y}};
        txPolygon(rock2, 10) ;
    }

}
void coal(double x, double y, double scale, COLORREF color, COLORREF color1, COLORREF eyecolor, COLORREF gillcolor,  int mirror, int ymirror, int gillslitssss)
{
    txSetColor(color1);
    txSetFillColor(color);
    POINT coal[10] = {{x,y}, {x + 20*scale*mirror, y - 15*scale*ymirror}, {x +30*scale*mirror, y - 22.5*scale*ymirror},{x + 50*scale*mirror, y - 15*scale*ymirror}, {x + 85*scale*mirror, y - 10*scale*ymirror},
    {x + 105*scale*mirror, y - 15*scale*ymirror}, {x + 130*scale*mirror, y - 20*scale*ymirror}, {x + 100*scale*mirror, y + 2.5*scale*ymirror}, {x + 70*scale*mirror, y + 7.5*scale*ymirror}, { x + 30*scale*mirror, y + 10*scale*ymirror}};
    txPolygon(coal, 10);
    txSetFillColor(eyecolor);
    txCircle(x + 15*scale*mirror, y - 5*scale*ymirror, 4*scale);
    if(gillslitssss < 1)
    {
        txSetColor(gillcolor, scale);
        txLine(x + 35*scale*mirror, y + 5*scale*ymirror, x + 25*scale*mirror, y - 5*scale*ymirror);
        txLine(x + 45*scale*mirror, y + 5*scale*ymirror, x + 35*scale*mirror, y - 5*scale*ymirror);
        txLine(x + 55*scale*mirror, y + 5*scale*ymirror, x + 45*scale*mirror, y - 5*scale*ymirror);
    }
    else
    {
    txSetColor(gillcolor);
    txSetFillColor(gillcolor);
    POINT gliss[3] = {{x + 35*scale*mirror, y + 5*scale*ymirror}, {x + 45*scale*mirror, y + 2.5*scale*ymirror }, {x + 35*scale*mirror, y - 10*scale*ymirror}};
    txPolygon(gliss, 3);
    }

}
