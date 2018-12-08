
//{----------------------------------------------------------------------------------------------------------------
//! @file     PhILiPoKLib.h
//! @brief   ���������� ������� �����������
//}----------------------------------------------------------------------------------------------------------------

//{----------------------------------------------------------------------------------------------------------------
//! @brief   ������ �������
//!
//! @param   x      ���������� ������
//! @param   y      ���������� ������
//! @param   m      ������ �������
//! @param   r      ������ ����� �������
//! @param   color1 ������ �������
//! @param   color2 ���� �������
//! @param   color3 ������ ������
//! @param   color4 ���� ������
//! @param   color5 ���� ��������
//! @param   color6 ���� ������
//! @param   s      ������������ �������
//! @code
//!          txdrawCar (40,500);
//!
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void drawCar(double x, double y,double m,int r,COLORREF color1,COLORREF color2,COLORREF color3,COLORREF color4,COLORREF color5,COLORREF color6,int s);
//{----------------------------------------------------------------------------------------------------------------
//! @brief   ������ ��������
//! @param   x  X-���������� ������ ������
//! @param   y  Y-���������� ������ ������
//!
//! @code
//!          txdrawSun (10,70);
//!@endcode
//}----------------------------------------------------------------------------------------------------------------
void drawSun(int x,int y);
//{----------------------------------------------------------------------------------------------------------------
//! @brief   ������ ��������
//! @param    x  X-���������� ������� ����� ��������
//! @param    y  Y-���������� ������� ����� ��������
//! @code
//!          txdrawGusenica (40,600);
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void drawGusenica(int x,int y);
//{----------------------------------------------------------------------------------------------------------------
//! @brief   ������ ���������
//! @param    x  X-���������� ������ ��������
//! @param    y  Y-���������� ������ ��������
//! @code
//!          txdrawPlane (100,200);
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void drawPlane(int x,int y);


void drawCar(double x,double y,double  m,int r,COLORREF color1,COLORREF color2,COLORREF color3,COLORREF color4,COLORREF color5,COLORREF color6,int s)
{

    txSetColor(color1,m*5);
    txSetFillColor(color2);

    txRectangle(x-s*m*410,y-m*230,x-s*m*110,y-m*30);

    txLine(x-s*m*110,y-m*230,x-s*m*35, y-m*180);
    txLine(x-s*m*10, y-m*105,x+s*m*65, y-m*90);
    txLine(x+s*m*65, y-m*90, x+s*m*65, y-m*30);
    txLine(x+s*m*65, y-m*30, x-s*m*110,y-m*30);
    txLine(x-s*m*35, y-m*180,x-s*m*10, y-m*105);
    txFloodFill(x-s*m*85,y-m*180);

    txSetColor(color3,m*3);
    txSetFillColor(color4);
    txRectangle(x-s*m*95,y-m*180,x-s*m*45,y-m*110);

    txSetColor(color5,m*4);
    txSetFillColor(color6);
    txCircle(x+s*m,y-m*30,m*r);
    txCircle(x-s*m*310,y-m*30,m*r);
}

void drawSun(int x,int y)
 {
   txSetFillColor(TX_YELLOW);
   txCircle(x,70,100);
   }

void drawGusenica(int x,int y)
{

    txSetColour(TX_BLACK);
    txSetFillColour(TX_GREEN);
    txCircle(x-100,y,25);
    txCircle(x-55,y,20);
    txCircle(x-25,y,15);
    txCircle(x,y,15);


}
void drawPlane(int x,int y)
{

   txSetFillColour(RGB(199,103,103));
   txSetColour(RGB(102,103,103),20);
   txLine(x,y-50,x+75,y-50);
   txLine(x+75,y-50,x+150,y);
   txLine(x+150,y,x+350,y);
   txLine(x+350,y,x+375,y+25);
   txLine(x+375,y+25,x+350,y+50);
   txLine(x+350,y+50,x,y+50);
   txLine(x,y+50,x,y+50);
   txLine(x+200,y,x+150,y+150);
   txLine(x+200,y+150,x+125,y+150);
   txLine(x+125,y+150,x+175,y);


}
