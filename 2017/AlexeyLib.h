//=================================================================================================================
//      [Help AlexeyLib.h]
//{
//=================================================================================================================
///
/// @file    AlexeyLib.h
/// @brief   Библиотека Николаева Алексея 8"В" (Alexey Library, AlexeyLib).
/// @warning Все суммы и разности ниже, при scale=1!
//           $Copyright: (C) Niklaev Alexey ( Николаев Алексей ) $
//-----------------------------------------------------------------------------------------------------------------
/// @defgroup Шляпа
/// @defgroup Озеро_кораблик
/// @defgroup Солнце
/// @defgroup Прочее
//}
//=================================================================================================================

//=================================================================================================================
//{
//! @name    Рисование шляп
//=================================================================================================================
/// @{
//{------------------------------------------------------------------------------------------------------------------
/// @ingroup Шляпа
/// @brief Рисует Шляпу
///
//! @param   x    x-сумма координаты нижней левой точки полигона, лежащего в основании шляпы, по оси абсцисс и 75.
//! @param   y    y-ордината центра круга, лежащего внутри полигона, лежащего в основании шляпы.
//! @param   scale    scale-коэффицент размера шляпы и ее состовляющих.
//! @param   color    color-цвет контура полигона, лежащего в основании шляпы.
//! @param   qcolor    qcolor-цвет полигона, лежащего в основании шляпы ( без контура ).
//! @param   fcolor    fcolor-цвет контура круга, лежащего внутри полигона, лежащего в основании шляпы.
//! @param   hcolor    hcolor-цвет круга, лежащего внутри полигона, лежащего в основании шляпы ( без контура ).
//! @param   ccolor    ccolor-цвет контура "линии", находящейся внизу полигона, лежащего в основании шляпы.
//! @param   e    e-разность толщины контура "линии", находящейся внизу полигона, лежащего в основании шляпы и 20.
//! @param   z    z-разность толщины контура круга, лежащего внутри полигона, лежащего в основании шляпы и 20.
//! @param   r    r-разность радиуса круга, лежащего внутри полигона, лежащего в основании шляпы и 50.
//! @param   a    a-разность [разности ординаты "линии", находящейся внизу полигона, лежащего в основании шляпы и 100] и y.
//! @param   n    n-разность [разности {суммы ординаты высшей точки полигона, лежащего в основании шляпы и 140} и a] и y.
/// @warning ( e-n-при scale=1)
/// @usage @code
///          drawShlapia(175,200,1, TX_GREEN, TX_LIGHTCYAN, TX_BLUE, TX_BLUE, TX_MAGENTA, 0, 0, 0, 0, 0);
/// или
///          drawShlapia(275,100,0.5, TX_YELLOW, TX_YELLOW, TX_WHITE, TX_BLUE, TX_BLACK, 4, -10, 20, 20, 38);
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void drawShlapia (int x, int y, double scale, COLORREF color, COLORREF hcolor, COLORREF fcolor, COLORREF ccolor, COLORREF qcolor, int e, int z, int r, int a, int n);

void drawShlapia (int x, int y, double scale, COLORREF color, COLORREF hcolor, COLORREF fcolor, COLORREF ccolor, COLORREF qcolor, int e, int z, int r, int a, int n)
{
//x0=175,y0=200
    txSetColor (color, 8);
    txSetFillColor (qcolor);
    POINT shlapia[5] = {{x - 75 * scale, y + (100 + a)* scale}, {x + 125 * scale, y + (100 + a)* scale}, {x + 125 * scale, y - (100 + a)* scale}, {x + 25 * scale, y - (140 + a + n)* scale}, {x - 75 * scale, y - (100 + a)* scale}};
    txPolygon (shlapia, 5);

    txSetFillColor (TX_LIGHTBLUE);

    txSetColor (fcolor, (20 + z) *scale);
    txSetFillColor (hcolor);
    txCircle (x + 25 * scale, y, (50 + r) *scale);

    txSetColor (ccolor, (20 + e) *scale);
    txSetFillColor (TX_LIGHTBLUE);
    txLine (x - 150 * scale, y + (100 + a) *scale, x + 200 * scale, y + (100 + a) *scale);
}

//{----------------------------------------------------------------------------------------------------------------
/// @ingroup Шляпа
/// @brief Рисует Шляпу
///
//! @param   x    x-сумма координаты нижней левой точки полигона, лежащего в основании шляпы, по оси абсцисс и 75.
//! @param   y    y-ордината центра круга, лежащего внутри полигона, лежащего в основании шляпы.
//! @param   scale    scale-коэффицент размера шляпы и ее состовляющих.
//! @param   color    color-цвет контура полигона, лежащего в основании шляпы.
//! @param   qcolor    qcolor-возможный (смотр. era) цвет полигона, лежащего в основании шляпы ( без контура ).
//! @param   fcolor    fcolor-цвет контура круга, лежащего внутри полигона, лежащего в основании шляпы.
//! @param   hcolor    hcolor-цвет круга, лежащего внутри полигона, лежащего в основании шляпы ( без контура ).
//! @param   ccolor    ccolor-цвет контура "линии", находящейся внизу полигона, лежащего в основании шляпы.
//! @param   eracolor    eracolor-возможный (смотр. era) цвет полигона, лежащего в основании шляпы ( без контура ).
//! @param   teracolor    teracolr-возможный (смотр. era) цвет полигона, лежащего в основании шляпы ( без контура ).
//! @param   e    e-разность толщины контура "линии", находящейся внизу полигона, лежащего в основании шляпы и 20.
//! @param   z    z-разность толщины контура круга, лежащего внутри полигона, лежащего в основании шляпы и 20.
//! @param   r    r-разность радиуса круга, лежащего внутри полигона, лежащего в основании шляпы и 50.
//! @param   a    a-разность [разности ординаты "линии", находящейся внизу полигона, лежащего в основании шляпы и 100] и y.
//! @param   n    n-разность [разности {суммы ординаты высшей точки полигона, лежащего в основании шляпы и 140} и a] и y.
/// @param   era    era-параметр, отвечающий за наличие/неналичие "линии", находящейся внизу полигона, лежащего в основании шляпы ( при era=0, линия рисуется, а при другом значение-нет ).
/// Также от данного параметра зависит цвет полигона, лежащего в основании шляпы ( без контура ) ( era<200-qcolor; 200<era<350-eracolor, era=/>350-teracolor).
/// @warning ( e-n-при scale=1)
/// @note Главное отличие от предыдущего-последний параметр.
/// @usage @code
///          drawShlapia2(175,200,1, TX_GREEN, TX_LIGHTCYAN, TX_BLUE, TX_BLUE, TX_MAGENTA, TX_BLACK, TX_WHITE, 5, -14, 22, 18, 40, 0);
//! @endcode
//}----------------------------------------------------------------------------------------------------------------

void drawShlapia2 (int x, int y, double scale, COLORREF color, COLORREF hcolor, COLORREF fcolor, COLORREF ccolor, COLORREF qcolor, COLORREF eracolor, COLORREF teracolor, int e, int z, int r, int a, int n, int era);

void drawShlapia2 (int x, int y, double scale, COLORREF color, COLORREF hcolor, COLORREF fcolor, COLORREF ccolor, COLORREF qcolor, COLORREF eracolor, COLORREF teracolor, int e, int z, int r, int a, int n, int era)
{
//x0=175,y0=200
    txSetColor (color, 8);

    if (era < 200)
        txSetFillColor (qcolor);
    else
        {
        if (era < 350)
            txSetFillColor (eracolor);
        else
            txSetFillColor (teracolor);
        }

    POINT shlapia[5] = {{x - 75 * scale, y + (100 + a)* scale}, {x + 125 * scale, y + (100 + a)* scale}, {x + 125 * scale, y - (100 + a)* scale}, {x + 25 * scale, y - (140 + a + n)* scale}, {x - 75 * scale, y - (100 + a)* scale}};
    txPolygon (shlapia, 5);

    txSetFillColor (TX_LIGHTBLUE);

    txSetColor (fcolor, (20 + z) *scale);
    txSetFillColor (hcolor);
    txCircle (x + 25 * scale, y, (50 + r) *scale);

    if (era == 0)
        {
        txSetColor (ccolor, (20 + e) *scale);
        txSetFillColor (TX_LIGHTBLUE);
        txLine (x - 150 * scale, y + (100 + a) *scale, x + 200 * scale, y + (100 + a) *scale);
        }
    else
        txSleep (10);
}

//{----------------------------------------------------------------------------------------------------------------
/// @ingroup Шляпа
/// @brief Рисует Шляпу
///
//! @param   x    x-сумма координаты нижней левой точки полигона, лежащего в основании шляпы, по оси абсцисс и 75.
//! @param   y    y-ордината центра круга, лежащего внутри полигона, лежащего в основании шляпы.
//! @param   scale    scale-коэффицент размера шляпы и ее состовляющих.
//! @param   color    color-цвет контура полигона, лежащего в основании шляпы.
//! @param   qcolor    qcolor-возможный (смотр. era) цвет полигона, лежащего в основании шляпы ( без контура ).
//! @param   fcolor    fcolor-цвет контура круга, лежащего внутри полигона, лежащего в основании шляпы.
//! @param   hcolor    hcolor-цвет круга, лежащего внутри полигона, лежащего в основании шляпы ( без контура ).
//! @param   ccolor    ccolor-цвет контура "линии", находящейся внизу полигона, лежащего в основании шляпы.
//! @param   e    e-разность толщины контура "линии", находящейся внизу полигона, лежащего в основании шляпы и 20.
//! @param   z    z-разность толщины контура круга, лежащего внутри полигона, лежащего в основании шляпы и 20.
//! @param   r    r-разность радиуса круга, лежащего внутри полигона, лежащего в основании шляпы и 50.
//! @param   a    a-разность [разности ординаты "линии", находящейся внизу полигона, лежащего в основании шляпы и 100] и y.
//! @param   n    n-разность [разности {суммы ординаты высшей точки полигона, лежащего в основании шляпы и 140} и a] и y.
/// @param   era    era-параметр, отвечающий за наличие/неналичие "линии", находящейся внизу полигона, лежащего в основании шляпы ( при era=0, линия рисуется, а при другом значение-нет ).
///Также от данного параметра зависит цвет полигона, лежащего в основании шляпы ( без контура ) ( era<200-qcolor; 200<era<350-eracolor, era=/>350-teracolor).
/// @warning ( e-n-при scale=1)
/// @note Главное отличие от предыдущего-функция последнего параметра.
/// @usage @code
///          drawShlapia3(175,200,1, TX_GREEN, TX_LIGHTCYAN, TX_BLUE, TX_BLUE, TX_MAGENTA, 5, -14, 22, 18, 40, 0);
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void drawShlapia3 (int x, int y, double scale, COLORREF color, COLORREF hcolor, COLORREF fcolor, COLORREF ccolor, COLORREF qcolor, int e, int z, int r, int a, int n, int era);
void drawShlapia3 (int x, int y, double scale, COLORREF color, COLORREF hcolor, COLORREF fcolor, COLORREF ccolor, COLORREF qcolor, int e, int z, int r, int a, int n, int era)
{
//x0=175,y0=200
    txSetColor (color, 8);
    txSetFillColor (qcolor);
    POINT shlapia[5] = {{x - 75 * scale, y + (100 + a)* scale}, {x + 125 * scale, y + (100 + a)* scale}, {x + 125 * scale, y - (100 + a)* scale}, {x + 25 * scale, y - (140 + a + n)* scale}, {x - 75 * scale, y - (100 + a)* scale}};
    txPolygon (shlapia, 5);

    txSetFillColor (TX_LIGHTBLUE);

    txSetColor (fcolor, (20 + z) *scale);
    txSetFillColor (hcolor);
    txCircle (x + 25 * scale, y, (50 + r) *scale);

    if (era == 0)
        {
        txSetColor (ccolor, (20 + e) *scale);
        txSetFillColor (TX_LIGHTBLUE);
        txLine (x - 150 * scale, y + (100 + a) *scale, x + 200 * scale, y + (100 + a) *scale);
        }
    else
        txSleep (10);
}
//! @}
//}
//=================================================================================================================

//=================================================================================================================
//{
//! @name    Рисование солнц
//=================================================================================================================
//! @{
//{----------------------------------------------------------------------------------------------------------------
/// @ingroup Солнце
/// @brief Рисует Солнце
///
//! @param   x    x-абсцисса центра круга ( солнца ).
//! @param   y    y-ордината центра круга ( солнца ).
//! @param   scale    scale-коэффицент размера солнца и его состовляющих.
//! @param   color    color-цвет круга ( солнца ) и его лучей ( полностью ).
//! @param   colorb    colorb-контура круга, лежащего внутри круга ( солнца ).
//! @param   colorn    colorn-цвет круга, лежащего внутри круга ( солнца ) ( без контура ).
//! @param   colorv    colorv-цвет контура круга, лежащего внутри круга, лежащего внутри круга ( солнца ).
//! @param   colorc    colorc-цвет круга, лежащего внутри круга, лежащего внутри круга ( солнца ) ( без контура ).
//! @param   colora    colorp-цвет круга, внутри которого лежит круг ( солнце ) ( без контура ).
//! @param   colora    colorp-цвет контура круга внутри, которого лежит круг ( солнце ).
//! @param   e    e-разность абсциссы нижнего правого луча солнца и 50.
//! @param   t    t-частное размера круга, внутри которого лежит круг ( солнце ) и scale.
//! @param   c    c-частное размера круга, лежащего внутри круга ( солнца ) и scale.
//! @param   f    f-толщина контура круга, лежащего внутри круга, лежащего внутри круга ( солнца ).
//! @param   s    s-толщина контура круга ( солнца ).
//! @param   ra    ra-параметр, который меняет цвет круга ( солнца ) и лучей на красный, а цвет круга внутри которого лежит круг ( солнце ) - на черный, при его значении равном 15.
/// @warning (e, s, f при scale=1)
/// @usage @code
///          drawColnce(500,500,1, TX_YELLOW, TX_BROWN, TX_MAGENTA, TX_LIGHTCYAN, TX_BLACK, TX_BLUE, TX_BLUE, 0, 0, 0, 1, 1, 0);
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void drawColnce (int x, int y, double scale, COLORREF color, COLORREF colorb, COLORREF colorn, COLORREF colorv, COLORREF colorc, COLORREF colora, COLORREF colorp, double e, double t, int c, double f, int s, int ra);

void drawColnce (int x, int y, double scale, COLORREF color, COLORREF colorb, COLORREF colorn, COLORREF colorv, COLORREF colorc, COLORREF colora, COLORREF colorp, double e, double t, int c, double f, int s, int ra)
{
    txSetColor (color , 10);
//x0= 500,y0= 500

    if (ra == 15)
        {
        txSetColor (TX_BLACK, s);
        txSetFillColor (TX_BLACK);
        }
    else
        {
        txSetColor (colorp, s);
        txSetFillColor (colora);
        }

    txCircle (x, y, (125 + e) *t * scale);

    if (ra == 15)
        {
        txSetColor (TX_RED, 10);
        txSetFillColor (TX_RED);
        }
    else
        {
        txSetColor (color, 10);
        txSetFillColor (color);
        }

    txCircle (x, y, 50 * scale);

    txLine (x + (50 + e) *scale, y + (50 + e) *scale, x + (75 + e) *scale, y + (75 + e) *scale);
    txLine (x - (50 + e) *scale, y - (50 + e) *scale, x - (75 + e) *scale, y - (75 + e) *scale);
    txLine (x - (50 + e) *scale, y + (50 + e) *scale, x - (75 + e) *scale, y + (75 + e) *scale);
    txLine (x + (50 + e) *scale, y - (50 + e) *scale, x + (75 + e) *scale, y - (75 + e) *scale);
    txLine (x + (75 + e) *scale, y, x + (100 + e) *scale, y);
    txLine (x, y - (75 + e) *scale, x, y - (100 + e) *scale);
    txLine (x, y + (100 + e) *scale, x, y + (75 + e) *scale);
    txLine (x - (75 + e) *scale, y, x - (100 + e) *scale, y);

    txSetColor (colorb, 10);
    txSetFillColor (colorn);
    txCircle (x, y, c * scale);

    txSetColor (colorv, f);
    txSetFillColor (colorc);
    txCircle (x - (c / 2) *scale, y - (c / 4) *scale, (c / 8) *scale);
    txCircle (x + (c / 2) *scale, y - (c / 4) *scale, (c / 8) *scale);

}
//{----------------------------------------------------------------------------------------------------------------
/// @ingroup Солнце
/// @brief Рисует Солнце
///
//! @param   x    x-абсцисса центра круга ( солнца ).
//! @param   y    y-ордината центра круга ( солнца ).
//! @param   scale    scale-коэффицент размера солнца и его состовляющих.
//! @param   color    color-цвет круга ( солнца ) и его лучей ( полностью ).
//! @param   colorb    colorb-контура круга, лежащего внутри круга ( солнца ).
//! @param   colorn    colorn-цвет круга, лежащего внутри круга ( солнца ) ( без контура ).
//! @param   colorv    colorv-цвет контура круга, лежащего внутри круга, лежащего внутри круга ( солнца ).
//! @param   colorc    colorc-цвет круга, лежащего внутри круга, лежащего внутри круга ( солнца ) ( без контура ).
//! @param   colora    colora-цвет круга внутри, которого лежит круг ( солнце ) ( без контура ).
//! @param   colorp    colorp-цвет контура круга, внутри которого лежит круг ( солнце ).
//! @param   e    e-разность абсциссы нижнего правого луча солнца и 50.
//! @param   t    t-частное размера круга, внутри которого лежит круг ( солнце ) и scale.
//! @param   c    c-частное размера круга, лежащего внутри круга ( солнца ) и scale.
//! @param   f    f-толщина контура круга, лежащего внутри круга, лежащего внутри круга ( солнца ).
//! @param   s    s-толщина контура круга, внутри которого лежит круг ( солнце ) ( солнца ).
//! @param   ra    ra-параметр, который меняет цвет круга ( солнца ) и лучей на красный, а цвет круга внутри которого лежит круг ( солнце ) - на черный, при своем значении равном 0.
/// @warning (e, s, f при scale=1)
/// @usage @code
///          drawColnce2(300,400,0.5, TX_YELLOW, TX_BROWN, TX_MAGENTA, TX_LIGHTCYAN, TX_BLACK, TX_BLUE, TX_BLUE, 1, 1, 50, 1, 1, 0);
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void drawColnce2 (double x, double y, double scale, COLORREF color, COLORREF colorb, COLORREF colorn, COLORREF colorv, COLORREF colorc, COLORREF colora, COLORREF colorp, double e, double t, int c, double f, int s, int ra);

void drawColnce2 (double x, double y, double scale, COLORREF color, COLORREF colorb, COLORREF colorn, COLORREF colorv, COLORREF colorc, COLORREF colora, COLORREF colorp, double e, double t, int c, double f, int s, int ra)
{
    txSetColor (color , 10);
//x0= 500,y0= 500

    if (ra == 00)
        {
        txSetColor (TX_BLACK, s);
        txSetFillColor (TX_BLACK);
        }
    else
        {
        txSetColor (colorp, s);
        txSetFillColor (colora);
        }

    txCircle (x, y, (125 + e) *t * scale);

    if (ra == 0)
        {
        txSetColor (TX_RED, 10);
        txSetFillColor (TX_RED);
        }
    else
        {
        txSetColor (color, 10);
        txSetFillColor (color);
        }

    txCircle (x, y, 50 * scale);

    txLine (x + (50 + e) *scale, y + (50 + e) *scale, x + (75 + e) *scale, y + (75 + e) *scale);
    txLine (x - (50 + e) *scale, y - (50 + e) *scale, x - (75 + e) *scale, y - (75 + e) *scale);
    txLine (x - (50 + e) *scale, y + (50 + e) *scale, x - (75 + e) *scale, y + (75 + e) *scale);
    txLine (x + (50 + e) *scale, y - (50 + e) *scale, x + (75 + e) *scale, y - (75 + e) *scale);
    txLine (x + (75 + e) *scale, y, x + (100 + e) *scale, y);
    txLine (x, y - (75 + e) *scale, x, y - (100 + e) *scale);
    txLine (x, y + (100 + e) *scale, x, y + (75 + e) *scale);
    txLine (x - (75 + e) *scale, y, x - (100 + e) *scale, y);

    txSetColor (colorb, 10);
    txSetFillColor (colorn);
    txCircle (x, y, c * scale);

    txSetColor (colorv, f);
    txSetFillColor (colorc);
    txCircle (x - (c / 2) *scale, y - (c / 4) *scale, (c / 8) *scale);
    txCircle (x + (c / 2) *scale, y - (c / 4) *scale, (c / 8) *scale);

}
//! @}
//}
//=================================================================================================================

//=================================================================================================================
//{
//! @name    Рисование озера/кораблика.
//=================================================================================================================
//! @{
//{----------------------------------------------------------------------------------------------------------------
/// @ingroup Озеро_кораблик
/// @brief Рисует Озеро
///
//! @param   x    x-абсцисса центра круга ( озера ).
//! @param   y    y-ордината центра круга ( озера ).
//! @param   scale    scale-коэффицент размера озера.
//! @param   colore    colore-цвет круга ( озера ) ( без контура ).
//! @param   v    v-разность радиуса круга ( озера ) и 90, при scale=1.
/// @usage @code
///          drawOzero(500,500,1, TX_BLUE, 30);
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void drawOzero (int x, int y, double scale, COLORREF colore, int v);

void drawOzero (int x, int y, double scale, COLORREF colore, int v)
{
    txSetColor (TX_BROWN, 10);
    txSetFillColor (colore);
    txCircle (x, y, (90 + v) *scale);
}
//{----------------------------------------------------------------------------------------------------------------
/// @ingroup Озеро_кораблик
/// @brief Рисует кораблик
///
//! @param   x    x-абсцисса верхней точки кораблика ( фигуры, образованной 4 треугольниками ).
//! @param   y    y-сумма ординаты самой левой точки кораблика ( фигуры, образованной 4 треугольниками ) и 75.
//! @param   scale    scale-коэффицент размера кораблика точки кораблика ( фигуры, образованной 4 треугольниками ).
//! @param   color    color-цвет кораблика ( фигуры, образованной 4 треугольниками ) ( полностью ).
//! @param   u    u-разность y и суммы ординаты верхней точки кораблика ( фигуры, образованной 4 треугольниками ) и 99, при scale=1. u>=0
//! @param   h    h-разность x и суммы абсциссы самой левой точки кораблика ( фигуры, образованной 4 треугольниками ) и 50, при scale=1. h>=0
//! @param   m    m-разность абсциссы самой правой точки кораблика ( фигуры, образованной 4 треугольниками ) и суммы x и 50, при scale=1. m>=0
/// @usage @code
///          drawKorablik (300, 300, 1, TX_BROWN, 20, 10, 30);
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void drawKorablik (int x, int y, double scale, COLORREF color, int u, int h, int m);

void drawKorablik (int x, int y, double scale, COLORREF color, int u, int h, int m)
{
    txSetColor (color , 10);
    txSetFillColor (color);
    POINT v1[3] = {{x + (50 + m)* scale, y - 75 * scale}, {x, y - 75 * scale}, {x + 25 * scale, y - 50 * scale}};
    txPolygon (v1, 3);
    POINT v2[3] = {{x - 25 * scale, y - 50 * scale}, {x, y - 75 * scale}, {x + 25 * scale, y - 50 * scale}};
    txPolygon (v2, 3);
    POINT v3[3] = {{x - 25 * scale, y - 50 * scale}, {x, y - 75 * scale}, {x - (50 + h)* scale, y - 75 * scale}};
    txPolygon (v3, 3);
    POINT v4[3] = {{x + 25 * scale, y - 75 * scale}, {x - 25 * scale, y - 75 * scale}, {x, y - (99 + u)* scale}};
    txPolygon (v4, 3);
}

//{----------------------------------------------------------------------------------------------------------------
/// @ingroup Озеро_кораблик
/// @brief Рисует Озеро
///
//! @param   x    x-абсцисса центра круга ( озера ).
//! @param   y    y-ордината центра круга ( озера ).
//! @param   scale    scale-коэффицент размера озера и кораблика.
//! @param   colore    colore-цвет круга ( озера ) ( без контура ).
//! @param   color    color-цвет кораблика ( фигуры, образованной 4 треугольниками ) ( полностью ).
//! @param   v    v-разность y и суммы ординаты верхней точки кораблика ( фигуры, образованной 4 треугольниками ) и 99, при scale=1. u>=0
//! @param   u    u-разность радиуса круга ( озера ) и 90, при scale=1.
//! @param   h    h-разность x и суммы абсциссы самой левой точки кораблика ( фигуры, образованной 4 треугольниками ) и 50, при scale=1. h>=0
//! @param   m    m-разность абсциссы самой правой точки кораблика ( фигуры, образованной 4 треугольниками ) и суммы x и 50, при scale=1. m>=0
//! @param   a    a-разность абсциссы верхней точки кораблика ( фигуры, образованной 4 треугольниками ) и x, при scale=1.
//! @param   b    b-разность [суммы ординаты самой левой точки кораблика ( фигуры, образованной 4 треугольниками ) и 75] и y, при scale=1.
/// @usage @code
///          drawOzero_korablik(425,200,0.5, TX_YELLOW, TX_LIGHTGRAY, 50, 50, 75, 55, 30, 40) ;
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void drawOzero_korablik (int x, int y, double scale, COLORREF color, COLORREF colore, int v, int u, int h, int m, int a, int b);

void drawOzero_korablik (int x, int y, double scale, COLORREF color, COLORREF colore, int v, int u, int h, int m, int a, int b)
{
    drawOzero (x, y, scale, colore, u);
    drawKorablik (x + a, y + b, scale, color, v, h, m);
//x0=525 ,y0=100 Попробуйте сами
//ozero_korablik
}
//{----------------------------------------------------------------------------------------------------------------
/// @ingroup Озеро_кораблик
/// @brief Рисует кораблик
///
//! @param   x    x-абсцисса верхней точки кораблика ( фигуры, образованной 4 треугольниками ) ( возможен нецелый).
//! @param   y    y-сумма ординаты самой левой точки кораблика ( фигуры, образованной 4 треугольниками ) и 75 ( возможен нецелый ).
//! @param   scale    scale-коэффицент размера кораблика точки кораблика ( фигуры, образованной 4 треугольниками ).
//! @param   color    color-цвет кораблика ( фигуры, образованной 4 треугольниками ) ( полностью ).
//! @param   u    u-разность y и суммы ординаты верхней точки кораблика ( фигуры, образованной 4 треугольниками ) и 99, при scale=1. u>=0
//! @param   h    h-разность x и суммы абсциссы самой левой точки кораблика ( фигуры, образованной 4 треугольниками ) и 50, при scale=1. h>=0
//! @param   m    m-разность абсциссы самой правой точки кораблика ( фигуры, образованной 4 треугольниками ) и суммы x и 50, при scale=1. m>=0
/// @usage @code
///          drawKorablik2 (300.5, 456.56, 1, TX_BROWN, 10, 30, 20);
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void drawKorablik2 (double x, double y, double scale, COLORREF color, int u, int h, int m);

void drawKorablik2 (double x, double y, double scale, COLORREF color, int u, int h, int m)
{
    txSetColor (color , 10);
    txSetFillColor (color);
    POINT v1[3] = {{x + (50 + m)* scale, y - 75 * scale}, {x, y - 75 * scale}, {x + 25 * scale, y - 50 * scale}};
    txPolygon (v1, 3);
    POINT v2[3] = {{x - 25 * scale, y - 50 * scale}, {x, y - 75 * scale}, {x + 25 * scale, y - 50 * scale}};
    txPolygon (v2, 3);
    POINT v3[3] = {{x - 25 * scale, y - 50 * scale}, {x, y - 75 * scale}, {x - (50 + h)* scale, y - 75 * scale}};
    txPolygon (v3, 3);
    POINT v4[3] = {{x + 25 * scale, y - 75 * scale}, {x - 25 * scale, y - 75 * scale}, {x, y - (99 + u)* scale}};
    txPolygon (v4, 3);
}
//! @}
//}
//=================================================================================================================

//=================================================================================================================
//{
//! @name    Рисование колпака/часовни.
//=================================================================================================================
//! @{
//{----------------------------------------------------------------------------------------------------------------
/// @ingroup Прочее
/// @brief Рисует часовню
///
//! @param   x    x-абсцисса центра круга, лежащего внутри полигона ( часовни ).
//! @param   y    y-разность ординаты нижнего левого угла полигона ( часовни ) и 100.
//! @param   scale    scale-коэффицент размера часовни и ее составляющих.
//! @param   color    color-возможный цвет полигона ( часовни ) ( полностью ) ( смотр. t ).
//! @param   colort    colort-цвет круга, внутри которого лежит круг, лежащий внутри полигона ( часовни ) ( без контура ) ( на вид ).
//! @param   colorte    colorte-цвет контура круга, внутри которого лежит круг, лежащий внутри полигона( на вид ).
//! @param   colorn    colorn-возможный цвет полигона ( часовни ) ( полностью ) ( смотр. t ).
//! @param   l    l-радиус круга, внутри которого лежит круг, лежащий внутри полигона ( часовни ) ( на вид ), при scale=1.
//! @param   q    q-разность абсциссы точки, являющийся концом нижней ( при {q, p, z}=0 ) линии ( из двух, смотря по необщему концу), другим концом которой явлется центр круга, лежащего внутри полигона ( часовни ) и [суммы x и 5] , при scale=1.
//! @param   p    p-разность абсциссы точки, являющийся концом верхней ( при {q, p, z}=0 ) линии ( из двух, смотря по необщему концу), другим концом которой явлется центр круга, лежащего внутри полигона ( часовни ) и x , при scale=1.
//! @param   g    g-толщина контура круга, внутри которого лежит круг, лежащий внутри полигона ( часовни ) ( на вид ).
//! @param   w    w-разность y и [суммы ординаты высшей точки полигона ( часовни ) и {суммы 50 и z}] , при scale=1.
//! @param   z    z-разность y и ординаты верхней правой точки полигона ( часовни ), при scale=1.
//! @param   t    t-параметр, при значении которого меньше 1000, цвет полигона ( часовни ) становиться colorn, а при другом значение - color.
/// @note x0=325,y0=500
/// @warning Важно:
/// @warning -6<q<6;
/// @warning -6<p<6.
/// @usage @code
///          drawChasovnia(425,400,0.5, TX_BROWN, TX_YELLOW, TX_BLACK, TX_GREEN, 30, 5, -3, 2, 10, 10, 2);
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void drawChasovnia (int x, int y, double scale, COLORREF color, COLORREF colort, COLORREF colorte, COLORREF colorn, int l, int q, int p, int g, int w, int z, int t);

void drawChasovnia (int x, int y, double scale, COLORREF color, COLORREF colort, COLORREF colorte, COLORREF colorn, int l, int q, int p, int g, int w, int z, int t)
{


    if (t < 1000)
        {
        txSetFillColor (colorn);
        txSetColor (colorn , 10);
        }
    else
        {
        txSetFillColor (color);
        txSetColor (color , 10);
        }

    POINT dom[5] = {{x - 25 * scale, y - z * scale}, {x - 25 * scale, y + 100 * scale}, {x + 25 * scale, y + 100 * scale}, {x + 25 * scale, y - z * scale}, {x, y - (50 + w + z)* scale}};
    txPolygon (dom, 5);

    txSetColor (colorte , 1 * g);
    txSetFillColor (colort);
    txCircle (x, y - z * scale, l * scale);

    txSetFillColor (TX_LIGHTCYAN);
    txCircle (x, y - z * scale, 20 * scale);
    txSetColor (TX_BLACK, 5 * scale);
    txLine (x, y - z * scale, x + p * scale, y - (10 + z) *scale);
    txLine (x, y - z * scale, x + (5 + q) *scale, y + (5 - q - z) *scale);

}
//{----------------------------------------------------------------------------------------------------------------
/// @ingroup Прочее
/// @brief Рисует часовню
///
//! @param   x    x-абсцисса верхней точки полигона.
//! @param   y    y-ордината верхней точки полигона.
//! @param   scale    scale-коэффицент размера колпака и его составляющих.
//! @param   color    color-цвет полигона ( полностью ).
//! @param   colori    colori-цвет круга, внутри которого лежит круг и центром, которго является точка с координатой x,y, при s<50.
//! @param   colora    colora-цвет лучей ( линий находящихся рядом с полигоном ).
//! @param   coloru   coloru-цвет нижнего круга ( без контура ).
//! @param   e    e-радиус круга, внутри которого лежит круг и центром, которго является точка с координатой x,y, при s<50, при scale=1.
//! @param   d    d-толщина контура нижнего круга, при scale=1.
//! @param   w    w-разность x и [суммы абсциссы точки, являющийся ближним к полигону концом левого луча и 75], при scale=1.
//! @param   j    j-разность радиуса круга, внутри которого лежит круг и центром, которго является точка с координатой x,y, при s<50 и 50, при scale=1.
//! @param   s    s-разность радиуса круга, который лежит внутри круга и центром, которго является точка с координатой x,y, при s<50 и j, при scale=1.
//! @param   f    f-параметр при четном значении которого, его абсциссой центра нижнего круга является сумма x и f, а при нечетном - разность.
/// @usage @code
///          drawKolpak(250,400,0.5, TX_GREEN, TX_LIGHTCYAN, TX_BLACK, TX_WHITE, 20, 5, 10, -30, 60, 8);
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void drawKolpak (int x, int y, double scale, COLORREF color, COLORREF colori, COLORREF colora,  COLORREF coloru, int e, int d, int w, int j, int s, int f);

void drawKolpak (int x, int y, double scale, COLORREF color, COLORREF colori, COLORREF colora, COLORREF coloru, int e, int d, int w, int j, int s, int f)
{
//x0=150 ,y0=500
//s>j
    //kolpak
    txSetColor (TX_BLACK, d * scale);
    txSetFillColor (coloru);

    if (f % 2 == 1)
        txCircle (x - f, y + 100 * scale, e * scale);
    else
        txCircle (x + f, y + 100 * scale, e * scale);

    txSetColor (color, 10 * scale);
    txSetFillColor (color);

    if (f % 2 == 1)
        {
        POINT kolpak[3] = {{x, y}, {x - (50 + 2 * f)* scale, y + 100 * scale}, {x + (50 - 2 * f)* scale, y + 100 * scale}};
        txPolygon (kolpak, 3);
        }
    else
        {
        POINT kolpak[3] = {{x, y}, {x - (50 - 2 * f)* scale, y + 100 * scale}, {x + (50 + 2 * f)* scale, y + 100 * scale}};
        txPolygon (kolpak, 3);
        }

    txSetColor (color, 10 * scale);
    txSetFillColor (colori);
    txCircle (x, y, (50 + j) *scale);
    txSetColor (colora, 10);
    txLine (x - (75 + w) *scale, y, x - (125 + w) *scale, y);
    txLine (x + (75 + w) *scale, y, x + (125 + w) *scale, y);
    txLine (x, y - (75 + w) *scale, x, y - (125 + w) *scale);
    txSetColor (color, d * scale);
    txSetFillColor (coloru);
    txCircle (x, y, (s + j) *scale);
}
//! @}
//}
//=================================================================================================================

