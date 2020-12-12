
 #include "Txlib.h"
 /*!  @author       Peter Artukhov
       @version      ALPHA v. 0.02
       @brief          I want to sleep
       @date          28.11.2020
       @file            Yahocuspatlib.h
       @warning     This is the alpha version. To use the library, you must agree with its author.
 */
//88888888888SHARK88888888888888888SHARK888888888888888SHARK888888888888888SHARK88888888888888888SHARK888888888888SHARK888888888888888SHARK8888888888888888SHARK888888888888888SHARK8888888888888888SHARK8888888888888SHARK888888888888888SHARK8888888888888888888888888888888888888888888888888888888888888888888888888888888888
 /*!
     @brief        Draws a shark
     @param      x               coordinates along the x-axis
     @param      y               coordinates along the y-axis
     @param      scale          size
     @param      color1        variable responsible for the main fill color
     @param      color          the variable responsible for the basic color of the stroke
     @param      eyecolor     the variable responsible for the fill color of the eyes
     @param      gillslitcolor  variable responsible for the fill color of the Gill slits
     @param      type            variable responsible for the type of shark... there are only 2 of them. The first is if the type is less than 1 and the second is in any other cases.
     @param      eyeradius    the size of the eyes
     @param      gillslit         responsible for the type of Gill slits. There are 2 types in total. The first is if the type is less than 1 and the second is in any other cases.
     @param      mirror         turns the shark in the opposite direction by x axis
     @param      ymirror       turns the shark in the opposite direction by y axis
     @warning
                    Mirror and ymirror can't be described with numbers other than -1 and 1, otherwise something very scary happens..
                    @n Eyeradius do not do more than 3.5
                    @n Don't make the scale variable larger than 10
                    @n if the variable type takes values less than 1, then the first type is drawn, and in other cases another type is drawn
     @todo
                    make more types of Gill slits

        Usage example:
        @code
         shark(800, 300, 3, RGB(0,0,0), RGB(160, 113, 122), RGB(110, 4, 122), RGB(95, 4, 0),4, 3, 0, -1, -1) ;
        @endcode

*/
void shark(int x, int y, double scale, COLORREF color, COLORREF color1, COLORREF eyecolor, COLORREF gillslitcolor, int type, double eyeradius, int gillslit, int mirror, int ymirror);
//888888888CORAL8888888888888CORAL8888888888888CORAL888888888888888CORAL8888888888888CORAL8888888888888CORAL888888888888CORAL888888888888CORAL88888888888CORAL8888888888888CORAL8888888888888888888CORAL8888888888888888888CORAL888888888888888888CORAL888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888
/*!
    @brief        Draws a coral
    @param      x               coordinates along the x-axis
    @param      y               coordinates along the y-axis
    @param      scale         size
    @param      color1        variable responsible for the main fill color
    @param      color          the variable responsible for the basic color of the stroke
    @param      number      the number of leaves in the seaweed                              "
    @param      mirror         turns the coral in the opposite direction by x axis
    @param      ymirror       turns the coral in the opposite direction by y axis
    @param      compress    the compression ratio on the x-axis
    @param      ycompress   the compression ratio on the y-axis
    @warning
                    Mirror and ymirror can't be described with numbers other than -1 and 1, otherwise something very scary happens..
                    @n Compress and ycompress do no more than 5
                    @n Compress and ycompress cant take negative values
                    @n Don't make the scale variable larger than 10

        Usage example:
        @code
        coral(300, 500, 2, RGB(20, 106, 20), RGB(20, 97, 10),7, -1, 1, 1,1);
        @endcode
*/
 void coral(int x, int y, double scale, COLORREF color, COLORREF color1, int number, int mirror, int ymirror, double compress, double ycompress);
//8888888SUBMARINE8888888888888SUBMARINE888888888888888888SUBMARINE88888888888888888SUBMARINE8888888888888888888SUBMARINE888888888888888888888SUBMARINE88888888888888888SUBMARINE888888888888888888888SUBMARINE88888888888888888888888SUBMARINE888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888
/*!
     @brief        Draws a submarine
     @param      x           coordinates along the x-axis
     @param      y           coordinates along the y-axis
     @param      scale     size
     @param      color1   variable responsible for the main fill color
     @param      color     the variable responsible for the basic color of the stroke
     @param      number it doesn't make much sense but you need it to find delx
     @param      mirror   turns the submarine in the opposite direction by x axis
     @param      ymirror  turns the submarine in the opposite direction by y axis
     @param      type      needed to select the shape of the submarine hull. There are 2 types in total. The first is if the type is less than 1 and the second is in any other cases.
     @param      radius   radius of the submarine window
     @warning
                    Mirror and ymirror can't be described with numbers other than -1 and 1, otherwise something very scary happens..
                    @n Compress and ycompress do no more than 5.
                    @n If the variable type takes values less than 1, then the first type is drawn, and in other cases another type is drawn
                    @n Don't make the scale variable larger than 10
                    @n Don't make the number value 0 or negative numbers

     @todo
                    Make more shapes for the upper body parts in different types
     @note
                    number is needed for this formula: "  int delx = 200 / number" for calculating the delx variable and for the loop counter: "x += delx"

        Usage example:
        @code
        submarine(500, 550, 1.7, RGB(0, 0, 0), RGB(12, 124, 123), 1, -1, 1, 1, 30);
        @endcode

*/
void submarine(int x, int y, double scale, COLORREF color, COLORREF color1, int number, int mirror, int ymirror, int type, int radius );
//8888888888888ROCK888888888888ROCK888888888888888ROCK8888888888888ROCK888888888888ROCK88888888888ROCK88888888888ROCK8888888888888888ROCK8888888888888888ROCK8888888888888ROCK88888888888888888888ROCK8888888888888888888888ROCK888888888888888888ROCK88888888888888888888888888888888888888888888888888888888888888888
/*!
     @brief        Draws a rock
     @param      x           coordinates along the x-axis
     @param      y           coordinates along the y-axis
     @param      scale     size
     @param      color1   variable responsible for the main fill color
     @param      color     the variable responsible for the basic color of the stroke
     @param      type      the shape of the stone.. their total 2 types. The first is if the type is less than 1 and the second is in any other cases.
     @param      mirror    turns the rock in the opposite direction by x axis
     @param      ymirror  turns the rock in the opposite direction by y axis
     @warning
                    Mirror and ymirror can't be described with numbers other than -1 and 1, otherwise something very scary happens..
                    @n Compress and ycompress do no more than 5.
                    @n Don't make the scale variable larger than 25
                    @n If the variable type takes values less than 1, then the first type is drawn, and in other cases another type is drawn
     @todo
                      make more shapes of rocks

        Usage example:
        @code
        rock(700, 500, 3, RGB(0, 0, 0), RGB(101, 108, 137), 0, -1, -1
        @endcode
*/
void rock(int x, int y, double scale, COLORREF color, COLORREF color1, int type, int mirror ,int ymirror);
//88888888888888COAL888888888888888COAL88888888888COAL8888888888COAL8888888888888COAL8888888888888COAL888888888888COAL88888888888COAL888888888COAL8888888888888COAL888888888888888888888COAL888888888888888888COAL8888888888888888888888COAL888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888
/*!
     @brief        Draws a coal
     @param      x                 coordinates along the x-axis
     @param      y                 coordinates along the y-axis
     @param      scale           size
     @param      color1         variable responsible for the main fill color
     @param      color           the variable responsible for the basic color of the stroke
     @param      eyecolor      the fill color of the eyes
     @param      gillcolor      color of the gills
     @param      mirror         turns the coral in the opposite direction by x axis
     @param      ymirror       turns the coral in the opposite direction by y axis
     @param      gillslits       type of drawing of gills.. only 2. The first is if the type is less than 1 and the second is in any other cases.
     @warning
                    Mirror and ymirror can't be described with numbers other than -1 and 1, otherwise something very scary happens..
                    @n Compress and ycompress do no more than 5.
                    @n If the gillslit is less than 1, then the first type of Gill slits is drawn, in other cases, type 2 is drawn
                    @n Don't make the scale variable larger than 10

        Usage example:
        @code
         coal(300, 100, 2, RGB(74, 129, 137), RGB(255, 86, 113), RGB(255, 86, 197), RGB(153, 28, 0),  1, 1, 1 ) ;
        @endcode

*/
void coal(double x, double y, double scale, COLORREF color, COLORREF color1, COLORREF eyecolor, COLORREF gillcolor, int mirror, int ymirror, int gillslits);
//888888888FUNCTOINS888888888888888888FUNCTOINS888888888888888888888888FUNCTOINS8888888888888888888888888888888FUNCTOINS88888888888888888888888888888FUNCTOINS8888888888888888888888FUNCTOINS88888888888888888888888FUNCTOINS88888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888
void shark(int x, int y, double scale, COLORREF color, COLORREF color1, COLORREF eyecolor, COLORREF gillslitcolor, int type, double eyeradius,int gillslit, int mirror, int ymirror)
{
    txSetColor(color);
    txSetFillColor(color1);
    if (type < 1)
    {
        POINT shark1[33]  = {{x*mirror, y*mirror}, {int(x - 10*scale*mirror), int(y + 7*scale*ymirror) }, {int(x - 25*scale*mirror), int(y + 11.5*scale*ymirror)}, {int(x - 35*scale*mirror), int(y +11.5*scale*ymirror)},
        {int(x - 44*scale*mirror), int(y + 22*scale*ymirror)}, {int(x - 47*scale*mirror), int(y + 22*scale*ymirror)},
        {int(x - 50*scale*mirror), int(y + 18*scale*ymirror)}, {int( x - 53*scale*mirror), int(y + 24*scale*ymirror)},
        {int(x - 56*scale*mirror), int(y + 25*scale*ymirror)}, {int(x - 54.5*scale*mirror), int(y + 11.5*scale*ymirror)}, {int(x - 59*scale*mirror), int(y + 11.5*scale*ymirror)}, {int(x - 62*scale*mirror), int(y + 15*scale*ymirror)},
        {int(x - 65*scale*mirror), int(y + 11.5*scale*ymirror)},{int(x - 74*scale*mirror), int(y + 9.5*scale*ymirror)}, {int(x - 76*scale*mirror), int(y + 13*scale*ymirror) },
        {int(x - 80*scale*mirror), int(y + 12.5*scale*ymirror)}, {int(x - 82*scale*mirror), int(y +11*scale*ymirror)}, {int(x - 90*scale*mirror), int(y + 10*scale*ymirror)},
        {int(x - 95*scale*mirror), int(y + 25*scale*ymirror)},{int(x - 103*scale*mirror), int(y + 23.5*scale*ymirror)}, {int(x - 100*scale*mirror), int(y + 7*scale*ymirror)}, { int(x - 115*scale*mirror), int(y - 9*scale*ymirror) },
        {int(x - 112*scale*mirror), int(y - 11*scale*ymirror)}, {int(x -  90*scale*mirror), int(y)}, {int(x - 80*scale*mirror), int(y - 3*scale*ymirror)},
        {int(x - 78*scale*mirror), int(y - 5*scale*ymirror)}, { int(x - 76*scale*mirror), int(y - 3.5*scale*ymirror)},
        {int(x - 62*scale*mirror), int(y - 5*scale*ymirror)}, { int(x - 60*scale*mirror), int(y - 11 *scale*ymirror) }, {int(x - 57*scale*mirror),  int(y - 13.5*scale*ymirror)}, {int(x - 53*scale*mirror), int(y - 8*scale*ymirror) },
        {int(x - 45*scale*mirror), int(y - 1.5*scale*ymirror)},{int(x - 20*scale*mirror), int(y - 3*scale*ymirror)}} ;
        txPolygon(shark1, 33);
        txLine(int(x - 10*scale*mirror), int(y + 7*scale*ymirror), int(x - 25*scale*mirror), int(y + 7*scale*ymirror));
        txSetFillColor(TX_LIGHTCYAN);
        txCircle(int(x - 17.5*scale*mirror), int(y + 2*scale*ymirror), int(eyeradius*scale));
        if (gillslit < 1)
        {
        txSetFillColor(gillslitcolor);
        POINT gillslit [11] = { {int(x - 45*scale*mirror), int(y + 20*scale*ymirror)}, {int(x - 50*scale*mirror), int(y + 15*scale*ymirror)}, {int(x - 48.5*scale*mirror), int(y + 15*scale*ymirror)},
        {int(x - 55*scale*mirror), int(y + 10*scale*ymirror)}, {int(x - 53.5*scale*mirror), int(y + 7.5*scale*ymirror)}, {int(x - 60*scale*mirror), int(y  + 5*scale*ymirror)}, {int(x - 52.5*scale*mirror), int(y + 2.5*scale*ymirror)},
        {int(x - 50*scale*mirror), int(y + 8.5*scale*ymirror)}, {int(x - 52.5*scale*mirror), int(y + 10*scale*ymirror)}, {int(x - 47.5*scale*mirror), int(y + 15*scale*ymirror) }, {int(x - 45*scale*mirror), int(y + 15*scale*ymirror)} };
        txPolygon(gillslit, 11);

        }
        else
        {
        txSetFillColor(gillslitcolor);
        POINT gillslit [4] = {{int(x - 44*scale*mirror), int(y + 12*scale*ymirror)}, {int(x - 40*scale*mirror), int(y + 8*scale*ymirror)}, {int(x - 44*scale*mirror), int(y + 4*scale*ymirror) },
        {int(x -  36*scale*mirror), int(y + 8*scale*ymirror)}} ;
        txPolygon(gillslit, 4);
        }
    }
    else
    {
    POINT tulovische[30]  = {{x,y}, {int(x - 20*scale*mirror), int(y - 5*scale*ymirror)}, {int(x - 50*scale*mirror), int(y - 10*scale*ymirror)},
    {int(x - 56*scale*mirror), int(y - 25*scale*ymirror)},{int(x - 66*scale*mirror), int(y - 40*scale*ymirror)},
    {int(x - 65*scale*mirror), int(y - 20*scale*ymirror)},{int(x - 70*scale*mirror), int(y - 8*scale*ymirror)},{int(x - 95*scale*mirror), int(y - 5*scale*ymirror)}, {int(x - 99*scale*mirror), int(y - 8*scale*ymirror)},
    {int(x - 102*scale*mirror), int(y - 4*scale*ymirror)}, {int(x - 110*scale*mirror), int(y - 3*scale*ymirror)},{int(x - 125*scale*mirror), int(y - 20*scale*ymirror)},
    {int(x - 135*scale*mirror), int(y - 35*scale*ymirror)}, {int(x - 119*scale*mirror), y },
    {int(x - 123*scale*mirror), int(y + 25*scale*ymirror)}, {int(x - 115*scale*mirror), int(y + 15*scale*ymirror)}, {int(x - 105*scale*mirror), int(y + 5*scale*ymirror)}, {int(x - 85*scale*mirror), int(y + 7.5*scale*ymirror)},
    {int(x - 81*scale*mirror), int(y + 11*scale*ymirror)}, {int(x - 77*scale*mirror), int(y + 8*scale*ymirror)},{int(x - 67*scale*mirror), int(y + 9.5*scale*ymirror)},
    {int(x - 63*scale*mirror), int(y + 13*scale*ymirror)}, {int(x - 59*scale*mirror), int(y + 10*scale*ymirror)},
    {int(x - 44*scale*mirror), int(y + 12*scale*ymirror)}, {int(x - 45*scale*mirror), int(y + 12.5*scale*ymirror)},{int(x - 40*scale*mirror), int(y + 25*scale*ymirror)},
    {int(x - 41*scale*mirror), int(y + 35*scale*ymirror)}, {int(x - 30*scale*mirror), int(y + 25*scale*ymirror)},
    {int(x - 30*scale*mirror), int(y + 10*scale*ymirror)}, {int(x - 5*scale*mirror), int(y + 3*scale*ymirror)}} ;
    txPolygon(tulovische, 30);
    txSetFillColor(eyecolor);
    txCircle(int(x - 15*scale*mirror), int(y - 2*scale*ymirror), eyeradius*scale) ;
    if (gillslit < 1)
        {
        txSetFillColor(gillslitcolor);
        POINT gillslit [11] = { {int(x - 45*scale*mirror), int(y + 10*scale*ymirror)}, {int(x - 50*scale*mirror), int(y + 5*scale*ymirror)}, {int(x - 48.5*scale*mirror), int(y + 5*scale*ymirror)},
        {int(x - 55*scale*mirror), y }, {int(x - 53.5*scale*mirror), int(y - 2.5*scale*ymirror)}, {int(x - 60*scale*mirror), int(y  - 5*scale*ymirror)}, {int(x - 52.5*scale*mirror), int(y - 7.5*scale*ymirror)},
        {int(x - 50*scale*mirror), int(y - 1.5*scale*ymirror)}, {int(x - 52.5*scale*mirror), y}, {int(x - 47.5*scale*mirror), int(y + 5*scale*ymirror) }, {int(x - 45*scale*mirror), int(y + 5*scale*ymirror)} };
        txPolygon(gillslit, 11);

        }
        else
        {
        txSetFillColor(gillslitcolor);
        POINT gillslit [4] = {{ int(x - 45*scale*mirror), int(y + 10*scale*ymirror)}, {int(x - 40*scale*mirror), int(y + 6*scale*ymirror)}, {int(x - 45*scale*mirror), int(y + 2*scale*ymirror) }, {int(x -  35*scale*mirror), int(y + 6*scale*ymirror)}} ;
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
        POINT coral[10] = {{x, y}, {x, int(y - 30*scale*ymirror*ycompress)}, {int(x - 20*scale*mirror*compress), int(y - 50*scale*ymirror*ycompress)}, {int(x - 15*scale*mirror*compress), int(y - 57*scale*ymirror*ycompress)},
         {x, int(y - 36*scale*ymirror*ycompress)}, {int(x+12*scale*mirror*compress), int(y - 36*scale*ymirror*ycompress)},{int(x + 25*scale*mirror*compress), int(y - 57*scale*ymirror*ycompress)},
         {int(x + 30*scale*mirror*compress), int(y - 50*scale*ymirror*ycompress)}, {int(x + 12*scale*mirror*compress), int(y - 30*scale*ymirror*ycompress)}, {int(x+12*scale*mirror*compress), y}};
        txPolygon(coral, 10);
    }
}
void submarine(int x, int y, double scale, COLORREF color, COLORREF color1, int number, int mirror, int ymirror, int type, int radius)
{
    if(type < 1)
    {
        txSetColor(color);
        txSetFillColor(color1);
        POINT telo[4] = {{x, y}, {int(x + 150*scale*mirror), int(y + 60*scale*ymirror)}, {int(x + 300*scale*mirror), y}, {int(x + 150*scale*mirror), int(y - 60*scale*ymirror)}};
        txPolygon(telo, 4);
        txSetColor(color1);
        POINT yyyy[5] = { {int(x + 120*scale*mirror), y}, {int(x + 110*scale*mirror), int(y - 60*scale*ymirror)}, {int(x + 150*scale*mirror), int(y - 90*scale*ymirror)},
        {int(x + 190*scale*mirror), int(y - 60*scale*ymirror)}, {int(x + 180*scale*mirror), y} };
        txPolygon(yyyy, 5);
        int delx = 200 / number;
        int maxx = x + 230*scale ;
        for(;  x  + radius < maxx  ; x += delx)
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
        txEllipse(x,int(y - 100*scale*ymirror),int(x + 250*scale*mirror), y );
        txSetColor(color1);
        txRectangle(int(x + 100*scale*mirror), int(y - 125*scale*ymirror), int(x + 150*scale*mirror), int(y - 90*scale*ymirror));
        int delx = 200/number;
        int maxx = x + 200*scale;
        for(; x + radius < maxx; x += delx)
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
        POINT rock1[12]  = {{x, y}, {x, int(y - 5*scale*ymirror)}, {int(x + 5*scale*mirror), int(y - 5*scale*ymirror)}, {int(x + 5*scale*mirror), int(y - 15*scale*ymirror)}, {int(x + 25*scale*mirror), int(y - 15*scale*ymirror)},
        {int(x + 25*scale*mirror), int(y - 12.5*scale*ymirror)}, {int(x + 30*scale*mirror), int(y - 12.5*scale*ymirror)}, {int(x + 30*scale*mirror), int(y - 10*scale*ymirror)}, {int(x + 37.5*scale*mirror), int(y - 10*scale*ymirror)},
        {int(x + 37.5*scale*mirror), int(y - 5*scale*ymirror)}, {int(x + 47.5*scale*mirror), int(y - 5*scale*ymirror)}, {int(x + 47.5*scale*mirror), y }};
        txPolygon(rock1, 12);

    }
    else
    {
        txSetColor(color);
        txSetFillColor(color1);
        POINT rock2[10]  = {{x,y}, {x, int(y - 10*scale*ymirror)}, {int(x + 20*scale*mirror), int(y - 10*scale*ymirror)}, {int(x + 20*scale*mirror), int(y - 20*scale*ymirror)},
        {int(x + 30*scale*mirror), int(y - 20*scale*ymirror)}, {int(x + 30*scale*mirror), int(y - 7.5*scale*ymirror)},
        {int(x + 45*scale*mirror), int(y - 7.5*scale*ymirror)},{int(x + 45*scale*mirror), int(y - 2.5*scale*ymirror)}, {int(x + 35*scale*mirror), int(y - 2.5*scale*ymirror)}, {int(x+35*scale*mirror), y}};
        txPolygon(rock2, 10) ;
    }

}
void coal(double x, double y, double scale, COLORREF color, COLORREF color1, COLORREF eyecolor, COLORREF gillcolor,  int mirror, int ymirror, int gillslitssss)
{
    txSetColor(color1);
    txSetFillColor(color);
    POINT coal[10] = {{x,y}, {int(x + 20*scale*mirror), int(y - 15*scale*ymirror)}, {int(x +30*scale*mirror), int(y - 22.5*scale*ymirror)},
    {int(x + 50*scale*mirror), int(y - 15*scale*ymirror)}, {int(x + 85*scale*mirror), int(y - 10*scale*ymirror)},
    {int(x + 105*scale*mirror), int(y - 15*scale*ymirror)}, {int(x + 130*scale*mirror), int(y - 20*scale*ymirror)}, {int(x + 100*scale*mirror), int(y + 2.5*scale*ymirror)},
    {int(x + 70*scale*mirror), int(y + 7.5*scale*ymirror)}, { int(x + 30*scale*mirror), int(y + 10*scale*ymirror)}};
    txPolygon(coal, 10);
    txSetFillColor(eyecolor);
    txCircle(x + 15*scale*mirror, y - 5*scale*ymirror, 4*scale);
    if(gillslitssss < 1)
    {
        txSetColor(gillcolor, scale);
        txLine(int(x + 35*scale*mirror), int(y + 5*scale*ymirror), int(x + 25*scale*mirror), int(y - 5*scale*ymirror));
        txLine(int(x + 45*scale*mirror), int(y + 5*scale*ymirror), int(x + 35*scale*mirror), int(y - 5*scale*ymirror));
        txLine(int(x + 55*scale*mirror), int(y + 5*scale*ymirror), int(x + 45*scale*mirror), int(y - 5*scale*ymirror));
    }
    else
    {
    txSetColor(gillcolor);
    txSetFillColor(gillcolor);
    POINT gliss[3] = {{int(x + 35*scale*mirror), int(y + 5*scale*ymirror)}, {int(x + 45*scale*mirror), int(y + 2.5*scale*ymirror) }, {int(x + 35*scale*mirror), int(y - 10*scale*ymirror)}};
    txPolygon(gliss, 3);
    }

}
