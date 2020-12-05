/** \file ArseniyLibSky.h */

#include "TXLib.h"
#include "math.h"

// Functions

/*!
 * \brief plane drawing function
 *
 * Draws plane. My best function.
 *
 * \param x Horizontal coordinate of the plane
 * \param y Vertical coordinate of the plane
 * \param baseScale Modificatior of the plane's size
 * \param col The color of fuselage
 * \param damaged Is the plane damaged. If True (not 0) draws damage artifacts on the cabin glass.
 * \param shooting Is there some fire on the plane's guns. If True (not 0) adds fire circles on the guns.
 * \param undercarriage Can you see the plane's undercarriage. If True (not 0) draws undercarriage.
 * \param mirror Is the plane mirrored from the main point (point with the base plane coordinates). If -1 mirrors plane, if 1 not.
 *
 * Usage example:
 *
 *     plane(600, 600, 1.0, RGB(255, 255, 0), 0, 0, 0, 1);
 */
void plane(int x, int y, double baseScale, COLORREF col, int damaged, int shooting, int undercarriage, int mirror)
{
  double scale = baseScale * mirror;
  // POINT structures
  // With undercarriage
  POINT plane[11] = {{x - (110 * scale), y - (30 * scale)},
		     {x - (100 * scale), y - (20 * scale)},
		     {x - (30 * scale),  y - (10 * scale)},
		     {x - (10 * scale),  y + (10 * scale)},
		     {x - (30 * scale),  y + (50 * scale)},
		     {x,                 y + (20 * scale)},
		     {x + (30 * scale),  y + (50 * scale)},
		     {x + (10 * scale),  y + (10 * scale)},
		     {x + (30 * scale),  y - (10 * scale)},
		     {x + (100 * scale), y - (20 * scale)},
		     {x + (110 * scale), y - (30 * scale)}};
  // Without undercarriage
  POINT plane2[9] = {{x - (110 * scale), y - (30 * scale)},
		      {x - (100 * scale), y - (20 * scale)},
		      {x - (30 * scale),  y - (10 * scale)},
		      {x - (10 * scale),  y + (10 * scale)},
		      {x,                 y + (20 * scale)},
		      {x + (10 * scale),  y + (10 * scale)},
		      {x + (30 * scale),  y - (10 * scale)},
		      {x + (100 * scale), y - (20 * scale)},
		      {x + (110 * scale), y - (30 * scale)}};
  POINT tail[3] = {{x,                y - (50 * scale)},
		   {x - (10 * scale), y - (10 * scale)},
		   {x + (10 * scale), y - (10 * scale)}};
  // Taking the right color of lines
  txSetColor (RGB(0, 0, 0));
  // Drawing tail
  txSetFillColor(col);    // Plane color
  txPolygon(tail, 3);
  // Drawing fuselage
  txSetFillColor(col);    // Plane color again
  if (undercarriage)
    {
      txPolygon(plane, 11);
    }
  else
    {
      txPolygon(plane2, 9);
    }
  // Drawing glass of the cabin
  txSetFillColor(RGB(55, 230, 255));   // Glass color 
  txCircle(x, y - (20 * baseScale), 20 * scale);
  // Drawing damage (optional)
  if (damaged)
    {
      txLine(x + (5 * scale), y - (22 * scale),
	     x + (10 * scale), y - (28 * scale));
      txLine(x + (10 * scale), y - (28 * scale),
	     x + (7 * scale), y - (32 * scale));
      txLine(x + (7 * scale), y - (32 * scale),
	     x + (7 * scale), y - (35 * scale));
      txLine(x + (7 * scale), y - (35 * scale),
	     x + (2 * scale), y - (38 * scale));
    }
  // Drawing turbine
  txSetFillColor(RGB(150, 150, 150));  // Metallic color
  txCircle(x, y, 30 * baseScale);
  txSetFillColor(RGB(50, 50, 50));     // Metall in the shadow
  txCircle(x, y, 25 * baseScale);
  txSetFillColor(RGB(150, 150, 150));  // Metall again
  txCircle(x, y, 15 * baseScale);
  // Drawing wearpons
  txCircle(x - (30 * scale), y + (20 * scale), 5 * baseScale);
  txCircle(x + (30 * scale), y + (20 * scale), 5 * baseScale);
  txSetFillColor(RGB(50, 50, 50));     // Metall in the shadow again
  txCircle(x - (30 * scale), y + (20 * scale), 2 * baseScale);
  txCircle(x + (30 * scale), y + (20 * scale), 2 * baseScale);
  // Drawing shooting effects (optional)
  if (shooting)
    {
      txSetColor(RGB(255, 100, 0));
      txCircle(x - (30 * scale), y + (20 * scale), 3 * baseScale);
      txCircle(x + (30 * scale), y + (20 * scale), 3 * baseScale);
    }
}

/*!
 * \brief bang drawing function
 *
 * Draws bang.
 *
 * \param x Horisontal coordinate of the bang.
 * \param y Vertical coordinate of the bang.
 * \param scale Modificator of the bang's size.
 * \param col Bang's burning color.
 *
 * Usage example:
 *
 *     boom(600, 600, 1, RGB(255, 0, 0));
 */
void boom(int x, int y, double scale, COLORREF col)
{
  txSetColor(RGB(0, 0, 0));
  txSetFillColor(col);
  txCircle(x,                y,                30 * scale);
  txCircle(x + (20 * scale), y + (20 * scale), 20 * scale);
  txCircle(x - (30 * scale), y - (10 * scale), 20 * scale);
  txCircle(x - (20 * scale), y + (10 * scale), 10 * scale);
  txSetFillColor(RGB(20, 20, 20));     // Smoke color
  txCircle(x + (10 * scale), y - (10 * scale), 10 * scale);
  txCircle(x - (40 * scale), y - (20 * scale), 10 * scale);
  txCircle(x + (10 * scale), y + (10 * scale), 15 * scale);
}

/*!
 * \brief clouds drawing function
 *
 * Draws cloud.
 *
 * \param x Horisontal coordinate of the cloud.
 * \param y Vertical coordinate of the cloud.
 * \param scale Modificator of the clould's size.
 * \param col The cloud's color.
 *
 * Usage example:
 *
 *     cloud(600, 600, 1.0, RGB(150, 150, 255));
 */
void cloud(int x, int y, double scale, COLORREF col)
{
  txSetColor(col);
  txSetFillColor(col);
  txCircle(x,                y,                30 * scale);
  txCircle(x + (20 * scale), y + (10 * scale), 20 * scale);
  txCircle(x - (20 * scale), y + (20 * scale), 35 * scale);
  txCircle(x + (30 * scale), y - (20 * scale), 20 * scale);
}

/*!
 * \brief star drawing function
 *
 * Draws star. Works badly.
 * 
 * \param x Horisontal coordinate of the star.
 * \param y Vertical coordinage of the star.
 * \param scale Modificator of the star's size.
 * \param col Color of the star.
 *
 * Usage example:
 *
 *     star(600, 600, 1.0 ,RGB(255, 255, 0);
 *
 * Please do not use it.
 */
void star(int x, int y, double scale, COLORREF col) // 220, 160
{
  // POINT structure
  POINT star1[5] = {{x, y}, {x + (10 * scale), y + (30 * scale)}, {x - (20 * scale), y + (10 * scale)}, {x + (10 * scale), y + (10 * scale)}, {x - (30 * scale), y - (30 * scale)}};
  POINT star2[5] = {{x, y + (30 * scale)}, {x + (10 * scale), y}, {x - (20 * scale), y + (20 * scale)}, {x + (20 * scale), y + (20 * scale)}, {x - (30 * scale), y}};
  // Actualy drawing
  txSetColor(col);
  txSetFillColor(col);                 // Starshine color
  txPolygon(star1, 5);
  txPolygon(star2, 5);
}

/*!
 * \brief moon drawing function
 *
 * Draws moon.
 * 
 * \param x Horisontal coordinate of the moon.
 * \param y Vertical coordinate of the moon.
 * \param scale Modificator of the moon size.
 * \param col Color of the moon (CRATORS COLOR IS CONSTANT)
 * \param full Is the moon full. If False(0) delites a part of the moon.
 * \param mirror Is the moon mirrored. If -1 mirrors moon, if 1 not.
 *
 * Usage exemple:
 *
 *     moon(600, 600, 1.0, RGV(200, 200, 230), 1, -1);
 */
void moon(int x, int y, double scale, COLORREF col, int full, int mirror)
{
  txSetColor(col);
  txSetFillColor(col);  // Moonglow color
  txCircle(x,                y,                50 * scale);
  txSetFillColor(RGB(150, 150, 180));  // Moon crators color
  txCircle(x + (20 * scale * mirror), y + (20 * scale * mirror), 10 * scale);
  txCircle(x + (35 * scale * mirror), y,                         10 * scale);
  txCircle(x + (10 * scale * mirror), y - (20 * scale * mirror), 20 * scale);
  if (not(full))
    {
      txSetFillColor(RGB(0, 175, 200));    // Sky color
      txSetColor(RGB(0, 175, 200));
      txCircle(x - (20 * scale * mirror), y,                50 * scale);
    }
}

//--------------------------
//----8888----------8888----
//----88888--------88888----
//----888888------888888----
//----8888888----8888888----
//----88888888--88888888----
//----8888-88888888-8888----
//----8888--888888--8888----
//----8888---8888---8888----
//--------------------------
//-----------8888-----------
//----------888888----------
//---------88888888---------
//--------8888--8888--------
//-------8888----8888-------
//------88888888888888------
//-----8888888888888888-----
//----8888----------8888----
//--------------------------
//----888888888-------------
//----88888888888888--------
//----8888------88888888----
//----8888--------888888----
//----8888--------888888----
//----8888--------888888----
//----8888888888888888------
//----88888888888888--------
//--------------------------
//----888888888888888888----
//----888888888888888888----
//----8888------------------
//----888888888888888888----
//----888888888888888888----
//----8888------------------
//----888888888888888888----
//----888888888888888888----
//--------------------------
