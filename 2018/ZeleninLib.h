///\file ZeleninLib.h
/// @brief ������������ ���������� ����� ��������.

/// @brief ������ ������.
///
/// @param x - ���������� ������.
/// @param y - ���������� ������.
/// @param scale - ������ ������.
/// @param color - ���� ������.
/// @param phase - ������� ������.
/// @code
/// draw_sun(100,150,1.1,RGB(102,0,204), 1);
/// @endcode
void draw_sun(int x,int y,double scale,COLORREF color,short phase);

//{---------------
/// @ingroup Drawing
///@brief ������ ��������.
///
/// @param x - ������ ����� ������.
/// @param y - ������ ����� ������.
/// @param scale - ������ ��������.
/// @param color - ���� ��������.
/// @param phase - ������� ��������.
/// @code
/// draw_human(100,150,1.1,RGB(102,0,204), 1);
/// @endcode
void draw_human(int x,int y,double scale,COLORREF color,short phase);


//{---------------
/// @ingroup Drawing
/// @brief ������ ��������.
///
/// @param x - ���������� ��������.
/// @param y - ���������� ��������
/// @param scale - ������ ������.
/// @param color - ���� ������.
/// @param phase - ������� ��������.
/// @code
/// draw_gusen(100,150,1.1,RGB(102,0,204), 1);
/// @endcode
void draw_gusen(int x,int y,double scale,COLORREF color,short phase);


//{---------------
/// @ingroup Drawing
/// @brief ������ ������.
///
/// @param x - ���������� ������.
/// @param y - ���������� ������.
/// @param scale - ������ ������.
/// @param color - ���� ������.
/// @code
/// draw_cloud(100,150,1.1,RGB(102,0,204));
/// @endcode
void draw_cloud(int x,int y,double scale,COLORREF color);


//{---------------
/// @ingroup Drawing
/// @brief ������ ������.
///
/// @param x - ���������� ������.
/// @param y - ���������� ������.
/// @param scale - ������ ������.
/// @param color - ���� ������.
/// @param phase - ������� ������.
/// @code
/// draw_tree(100,150,1.1,RGB(102,0,204), 1);
/// @endcode
void draw_tree(int x,int y,double scale,COLORREF color,short phase);



void draw_sun(int x,int y,double scale,COLORREF color,short phase)
{
    txSetColor(color);
    txSetFillColor(color);
    if(phase == 1)
    {
        txSetColor(color,5);
        txLine(x-150,y,x-350,y+100);
        txLine(x-125,y+100,x-300,y+200);
        txLine(x,y+175,x-185,y+300);
    }
    txCircle(x*scale,y,200*scale);
}

void draw_human(int x,int y,double scale,COLORREF color,short phase)
{
    txSetFillColor(color);
    txSetColor(color);
    if(phase == 1)
    {
        txSetColor(color,5);
    }
    txLine(x-25*scale,y+225,x-25*scale,y+25);
    txLine(x-125*scale,y+125,x-25*scale,y+25);
    txLine(x-25*scale,y+25,x+75*scale,y+125);
    txLine(x-125*scale,y+325,x-25*scale,y+225);
    txLine(x+75*scale,y+325,x-25*scale,y+225);
    txCircle(x-25*scale,y,25*scale);
    txCircle(x-50*scale,y,5*scale);
    txSetFillColor(RGB(255,255,255));
    txCircle(x-38*scale,y-5,5*scale);
}

void draw_gusen(int x,int y,double scale,COLORREF color,short phase)
{
    if(phase == 0)
    {
        txSetColor(color,10);
        txLine((x-75)*scale,y-20,(x-90)*scale,y-30);
    }
    txSetColor(RGB(0,0,0));
    txSetFillColor(color);
    txSetColor(color);
    txCircle((x-55)*scale,y-5*scale,30*scale);
    txCircle(x*scale,y,25*scale);
    txCircle((x+50)*scale,y,25*scale);
    txCircle((x+95)*scale,y+5,20*scale);
    txCircle((x-85)*scale,y-5,5*scale);
    txSetFillColor(RGB(255,255,255));
    txCircle((x-70)*scale,y-10,6*scale);
}
void draw_cloud(int x,int y,double scale,COLORREF color)
{
    txSetColor(color);
    txSetFillColor(color);
    txCircle(x,y,50*scale);
    txCircle(x+90*scale,y,75*scale);
    txCircle(x+175*scale,y,40*scale);
}

void draw_tree(int x,int y,double scale,COLORREF color,short phase)
{
    txSetColor(RGB(139,69,19));
    txSetFillColor(RGB(139,69,19));
    txRectangle (x-25*scale, y+325*scale, x+25*scale, y+25*scale);
    txSetFillColor(color);
    txEllipse(x+75*scale,y+175*scale,x-75*scale,y-75*scale);
    if(phase == 0)
    {
        txSetColor(TX_BROWN);
        txSetFillColor(TX_BROWN);
        txCircle(x+50,y+100,10);
        txCircle(x,y+15,10);
        txCircle(x+30,y-10,10);
        txCircle(x-50,y+15,10);
        txCircle(x-30,y+50,10);
    }
    if (phase == 1)
    {
        txSetColor(RGB(255,255,153));
        txSetFillColor(RGB(255,255,153));
        txCircle(x+50,y+100,10);
        txCircle(x,y+15,10);
        txCircle(x+30,y-10,10);
        txCircle(x-50,y+15,10);
        txCircle(x+25,y+200,10);
        txCircle(x-25,y+175,10);

    }
}
