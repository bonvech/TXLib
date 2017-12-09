//=================================================================================================================
//         [HELP ME!]     [PAVLOV]
//{
//=================================================================================================================
//!
//! @file PlainLib.h
//! @brief  ���������� ������� ������� 8 "�"
//! @defgroup plane      ������
//}
//=================================================================================================================


//{-----------------------------------------------------------------------------------------------------------------
//! @brief        ������ ������
//! @param x      ��������� �� ��� x
//! @param y      ��������� �� ��� y
//! @param size   ������ �������
//! @param color  ���� ������� �������
//! @param color2 ���� ������ �������
//! @param color3 ���� ����� �������
//! @param color4 ���� ������ �������
//! @param z      ����� ���� �������
//! @param v      ��������� ������ ������ ������� �� ��� y � ������� �� ����������
//! @param c      ����� �����
//! @usage @code
//!         drawplane(500, 400, 1, RGB(159, 182, 205), TX_BLUE, RGB(127,127,127), TX_BLACK, 0, 0, 0, ac);
//! @endcode
//}-----------------------------------------------------------------------------------------------------------------
void drawplane(int x, int y, double size, COLORREF color, COLORREF color2, COLORREF color3, COLORREF color4, int z, int v, int c);


////////////////////////////////////////////////////////


void drawplane(int x, int y, double size, COLORREF color, COLORREF color2, COLORREF color3, COLORREF color4, int z, int v, int c)
{
    txSetColor(TX_BLACK);
    txSetFillColor (color);
    POINT plane[11] = {{x, y}, {x+100*size, y}, {x+200*size, y+75*size}, {x+300*size, y+75*size}, {x+350*size, y+v*size}, {x+400*size, y+v*size}, {x+350*size, y+125*size},
    {x-100*size, y+125*size}, {x-125*size, y+87.5*size}, {x-150*size+z*size, y+75*size}, {x-50*size, y+50*size}};
    txPolygon(plane, 11);

    txSetFillColor (color2);
    POINT glass[6] = {{x-50*size, y+50*size}, {x, y}, {x, y+25*size}, {x+100*size, y+25*size}, {x+175*size, y+75*size}, {x, y+75*size}};
    txPolygon(glass, 6);

    txSetColor(TX_BLACK);
    txSetFillColor (color);
    POINT a[7] = {{x, y}, {x, y+90*size}, {x-10*size, y+110*size}, {x+6.25*size, y+115*size}, {x+22.5*size, y+110*size}, {x+12.5*size, y+90*size}, {x+12.5*size, y}};
    txPolygon(a, 7);

    txSetColor(TX_BLACK,5*size);
    txLine(x-50*size, y+125*size, x-60*size, y+150*size);

    txSetColor (color,20*size);
    txLine(x+95*size, y+120*size, x+80*size, y+150*size);

    txSetFillColor(color4);
    txSetColor(TX_BLACK);
    txCircle(x+80*size, y+150*size, 20*size);

    txSetFillColor (color3);
    txSetColor(TX_BLACK);
    txCircle(x+80*size, y+150*size, 10*size);

    txSetFillColor(color4);
    txSetColor(TX_BLACK);
    txCircle(x-60*size, y+150*size, 10*size);

    txSetFillColor (color3);
    txSetColor(TX_BLACK);
    txCircle(x-60*size, y+150*size, 5*size);

    txSetFillColor(color4);
    txSetColor(TX_BLACK);
    txCircle(x+80*size, y+150*size, 5*size);

    txSetColor(color4,5*size);
    txLine(x-50*size, y+125*size, x-60*size, y+150*size);
}
