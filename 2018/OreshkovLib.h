//!
//! @file    OreshkovLib.h
//! @brief   ���������� ������������ ������ �������� ����� (����� ��������)
//!

//{----------------------------------------------------------------------------------------------------------------
//! @brief ������ ��� �� ������ (�� ������� Breaking Bad)
//!
//! @param x      X-���������� ������ �������
//! @param y      Y-���������� ������ �������
//! @param a      �������� �� �������������� ������� (���� �=1, �� ������ ������� �������. ���� �=0, �� ������ ������� �����)
//! @param scale  �������� �� ������ �������
//! @param color  �������� �� �������� ���� �������
//!
//! @code
//!          draw_avtohouse(500, 450, 1, 1.1, RGB(255,255,204));
//! @endcode
//}----------------------------------------------------------------------------------------------------------------

void draw_avtohouse(int x, int y, int a, double scale, COLORREF color);

//{----------------------------------------------------------------------------------------------------------------
//! @brief ������ ������
//!
//! @param x      X-���������� ������ ������
//! @param y      Y-���������� ������ ������
//! @param z      �������� �� ����� �����
//! @param a      �������� �� ���������� ����� ������ � ����� ������� (�������������� ��� ����������� �������, ��� ����������� ������� � �=0, ���������� =10)
//! @param b      �������� �� ������� �����
//! @param scale  �������� �� ������ ������
//! @param color  �������� �� ���� ������
//!
//! @code
//!          draw_sun(250, 200, 0, 0, 6, 1.0, RGB(255,204,51));
//! @endcode
//}----------------------------------------------------------------------------------------------------------------

void draw_sun(int x, int y, int z, int a, int b, double scale, COLORREF color);

//{----------------------------------------------------------------------------------------------------------------
//! @brief ������ Walter White (���������)
//!
//! @param x      X-���������� ������ ���������
//! @param y      Y-���������� ���������� ��� � �����
//! @param z      X-���������� ����� ����
//! @param r      Y-���������� ����� ����
//! @param a      X-���������� ������ ����
//! @param b      Y-���������� ������ ����
//! @param scale  �������� �� ������ ��������
//! @param color  �������� �� ���� ����
//!
//! @code
//!          draw_walter(50,  100, 10,  -10, 0,  0,   0.5, RGB(255,204,153));
//! @endcode
//}----------------------------------------------------------------------------------------------------------------

void draw_walter(int x, int y, int z, int r, int a, int b, double scale, COLORREF color);

//{----------------------------------------------------------------------------------------------------------------
//! @brief ������ ���
//!
//! @param x       X-���������� ������ ����
//! @param y       Y-���������� ������ ���� (����)
//! @param scale   �������� �� ������ ����
//! @param color   �������� �� ���� ����
//! @param grounds �������� �� ���-�� ������
//! @param a       �������� �� ���� � ����� (�=1: ����� ��� �����; a=0: ��� ����� �� �����)
//!
//! @code
//!          draw_home(400, 670, 1.5, RGB(204,102,51),3, 0);
//! @endcode
//}----------------------------------------------------------------------------------------------------------------

void draw_home(int x, int y, float scale, COLORREF color, int grounds, int a);

//{----------------------------------------------------------------------------------------------------------------
//! @brief ������ ��������
//!
//! @param x       X-���������� ������ ������ �������
//! @param y       Y-���������� ������ ������ �������
//! @param scale   �������� �� ������ ���������
//! @param z       ������ ��������� (z=1 ����� ������; z=2 ����� �����; z=3 ����� �������; z=4 ����� ��; z=0 ������ �� �����)
//! @param color   �������� �� ���� �������
//!
//! @code
//!          draw_svet(500, 490, 1.1, 1, RGB(102,102,102));
//! @endcode
//}----------------------------------------------------------------------------------------------------------------

void draw_svet(int x, int y, double scale, short z, COLORREF color);


//��� � ���� �������

void draw_avtohouse(int x, int y, int a, double scale, COLORREF color)
{
    if (a==1)
    {
    txSetColor(RGB(204,102,0), 2*scale);
    txSetFillColor(color);
    POINT star[6] = {{x-170*scale, y+90*scale}, {x-180*scale, y-85*scale}, {x+120*scale, y-85*scale}, {x+130*scale, y},
    {x+163*scale, y+4*scale}, {x+165*scale,y+90*scale}};
    txPolygon (star, 6);
    txRectangle(x+30*scale, y-75*scale, x-30*scale, y+80*scale);
    POINT staa[5] = {{x+35*scale, y+80*scale}, {x+35*scale, y-75*scale}, {x+110*scale, y-75*scale}, {x+120*scale, y},
    {x+90*scale, y+80*scale}};
    txPolygon (staa, 5);
    txSetFillColor(TX_LIGHTGRAY);
    txSetColor(TX_BLACK, 10*scale);
    txCircle (x+125*scale,y+80*scale, 25*scale);
    txCircle (x-70*scale,y+80*scale, 25*scale);
    txSetColor(TX_BLACK, 2*scale);
    txSetFillColor(RGB (102,153,255));
    txRectangle(x+20*scale, y-65*scale, x-20*scale, y-25*scale);
    txRectangle(x+45*scale, y-65*scale, x+100*scale, y-25*scale);
    txRectangle(x-165*scale, y-65*scale, x-90*scale, y-25*scale);
    }
    if (a==0)
    {
    txSetColor(RGB(204,102,0), 2*scale);
    txSetFillColor(color);
    POINT star[6] = {{x+170*scale, y+90*scale}, {x+180*scale, y-85*scale}, {x-120*scale, y-85*scale}, {x-130*scale, y},
    {x-163*scale, y+4*scale}, {x-165*scale,y+90*scale}};
    txPolygon (star, 6);
    txRectangle(x-30*scale, y-75*scale, x+30*scale, y+80*scale);
    POINT staa[5] = {{x-35*scale, y+80*scale}, {x-35*scale, y-75*scale}, {x-110*scale, y-75*scale}, {x-120*scale, y},
    {x-90*scale, y+80*scale}};
    txPolygon (staa, 5);
    txSetFillColor(TX_LIGHTGRAY);
    txSetColor(TX_BLACK, 10*scale);
    txCircle (x-125*scale,y+80*scale, 25*scale);
    txCircle (x+70*scale,y+80*scale, 25*scale);
    txSetColor(TX_BLACK, 2*scale);
    txSetFillColor(RGB (102,153,255));
    txRectangle(x-20*scale, y-65*scale, x+20*scale, y-25*scale);
    txRectangle(x-45*scale, y-65*scale, x-100*scale, y-25*scale);
    txRectangle(x+165*scale, y-65*scale, x+90*scale, y-25*scale);
    }
}


void draw_sun(int x, int y, int z, int a, int b, double scale, COLORREF color)
{
    txSetColor(color,3*a);
    txSetFillColor(color);
    txCircle(x,y,30*scale);
    txSetColor(color,b*scale);
    txLine(x,y-a-40*scale,x,y-z-90*scale);
    txLine(x,y+a+40*scale,x,y+z+90*scale);
    txLine(x+a+40*scale,y,x+z+90*scale,y);
    txLine(x-a-40*scale,y,x-z-90*scale,y);
    txLine(x+a+30*scale,y+a+30*scale,x+z+60*scale,y+z+60*scale);
    txLine(x+a+30*scale,y-a-30*scale,x+z+60*scale,y-z-60*scale);
    txLine(x-a-30*scale,y+a+30*scale,x-z-60*scale,y+z+60*scale);
    txLine(x-a-30*scale,y-a-30*scale,x-z-60*scale,y-z-60*scale);
}


void draw_walter(int x, int y, int z, int r, int a, int b, double scale, COLORREF color)
{
    txSetFillColor (color);
    txSetColor (TX_BLACK, 3*scale);
    txCircle (x,y-130*scale,30*scale);

    txLine(x,y-100*scale,x,y);

    txLine(x, y, x+z+20*scale, y+r+100*scale);
    txLine(x, y, x+a-20*scale, y+b+100*scale);

    txLine(x, y-80*scale,x+25*scale,y+20*scale);
    txLine(x, y-80*scale,x-25*scale,y+20*scale);
    txSetFillColor(TX_BLACK);
    txCircle(x-10*scale, y-140*scale,3*scale);
    txCircle(x+10*scale, y-140*scale,3*scale);
    txSetColor(RGB(153,51,0), 5*scale);
    txSetFillColor (color);
    txRectangle(x-10*scale, y-110*scale, x+10*scale, y-123*scale);
    txSetColor(TX_BLACK,2);
    txLine(x-5*scale, y-117*scale, x+5*scale, y-117*scale);
}


void draw_home(int x, int y, float scale, COLORREF color, int grounds, int a)
{
    txSetColor(RGB(102,51,0),2*scale);
    txSetFillColor(TX_BLACK);
    txSetColor(TX_BLACK);
    txRectangle(x+20*scale,y+(60-(80*(grounds+0.7)))*scale,x+15*scale,y+(80-(80*(grounds+0.7)))*scale);
    txSetFillColor(color);
    txSetColor(RGB(102,51,0),2*scale);
    POINT staq[3] = {{x+40*scale, y+(40-(80*grounds))*scale}, {x, y-(80*grounds)*scale}, {x-40*scale, y+(40-(80*grounds))*scale}};
    txPolygon (staq, 3);

    int x2 = x;
    for(int i = 0; i < grounds; i++)
    {
        for(int k = 0; k < 1; k++)
        {
            txSetFillColor(color);
        txRectangle(x-40*scale,y-40*scale,x+40*scale,y+40*scale);
        if (a==1)
        {
            txSetFillColor(RGB(255,205,51));
            txRectangle(x-15*scale,y-15*scale,x+15*scale,y+15*scale);
        }
        if (a==0)
        {
            txSetFillColor(TX_BLACK);
            txRectangle(x-15*scale,y-15*scale,x+15*scale,y+15*scale);
        }
            y -= 40*scale;
        }
        x = x2;
        y -= 40*scale;
    }
}


void draw_svet(int x, int y, double scale, short z, COLORREF color)
{
    txSetColor(TX_BLACK, 3*scale);
    txSetFillColor(color);
    txRectangle(x-25*scale,y+75*scale,x+25*scale,y-75*scale);
    txRectangle(x-10,y+75*scale,x+10,y+275*scale);
    if (z==2)
    {
        txSetFillColor(TX_YELLOW);
        txCircle (x, y, 20*scale);
        txSetFillColor(TX_BLACK);
        txCircle (x, y+50*scale, 20*scale);
    }
    if (z==1)
    {
        txSetFillColor(TX_GREEN);
        txCircle (x, y+50*scale, 20*scale);
        txSetFillColor(TX_BLACK);
        txCircle (x, y, 20*scale);
    }
    if (z==3)
    {
        txSetFillColor(TX_BLACK);
        txCircle (x, y, 20*scale);
        txCircle (x, y+50*scale, 20*scale);
        txSetFillColor(TX_RED);
    }
    if (z==0)
    {
        txSetFillColor(TX_BLACK);
        txCircle (x, y+50*scale, 20*scale);
        txCircle (x, y, 20*scale);
    }
    if (z==4)
    {
        txSetFillColor(TX_YELLOW);
        txCircle (x, y, 20*scale);
        txSetFillColor(TX_GREEN);
        txCircle (x, y+50*scale, 20*scale);
        txSetFillColor (TX_RED);
    }
    txCircle (x, y-50*scale, 20*scale);
}


//�� ������� �� ����� � �� ������ ����������. � �� �����!
