#include "TXlib.h"\
/// \file MishaLib.h
/// ������� ��� ��������� ����.
/**
    \param  x, y -  ����������  ��������� ����. ���������� ��������� �� ����� ������ ���� ����.
    \param  scale - ���������� ��� ��������� ����������� �������� ����������� ��������.
    \param  color - ���� ���������.
    \param  turn -  �������� �������� �� �������������� ���.
    \param  mirror - �������� ��������� �� �������������� ���.
    \param  border - �������� �������� �� ������������ ���.
*/
void DrawHome(int x, int y, double scale, COLORREF color, int turn, int mirror, int border );

/**
    ������� ��� ��������� ��������
    \param x, y -  ����������  ��������� ��������. ���������� ��������� �� ����� �������.
    \param scale  ���������� ��� ��������� ����������� ��������
    \param color - ���� ���������.
    \param turn -  �������� �������� �� �������������� ���.
    \param  mirror - �������� ��������� �� �������������� ���.
    \param  border - �������� �������� �� ������������ ���.
*/
void DrawMan(int x, int y, double scale, COLORREF color, int turn, int mirror, int border);
    /**
        ������� ��� ��������� ������.
    \param  x, y - ���������� ��������� ������. ���������� ��������� �� ����� ������ ���� ������.
    \param scale  ���������� ��� ��������� ����������� ��������
    \param color - ���� ���������.
    \param turn -  �������� �������� �� �������������� ���.
    \param  mirror - �������� ��������� �� �������������� ���.
    \param  border - �������� �������� �� ������������ ���.
*/
void DrawBag(int x, int y, double scale, COLORREF color, int turn, int mirror, int border);
    /**
        ������� ��� ��������� ������.
    \param x, y - ����������  ��������� ������. ��������� �� ����� ������.
    \param scale  ���������� ��� ��������� ����������� ��������
    \param color - ���� ���������.
    \param turn -  �������� �������� �� �������������� ���.
    \param  mirror - �������� ��������� �� �������������� ���.
    \param  border - �������� �������� �� ������������ ���.
    */
void DrawCircle(int x,int y, double scale, COLORREF color, int turn, int mirror, int border);
    /**
        ������� ��� ��������� ������.
    \param x, y - ���������� ��������� ������. ��������� �� ����� ������ ���� �������� ��������������.
    \param scale  ���������� ��� ��������� ����������� ��������
    \param color - ���� ���������.
    \param turn -  �������� �������� �� �������������� ���.
    \param  mirror - �������� ��������� �� �������������� ���.
    \param  border - �������� �������� �� ������������ ���.
    */
void DrawCar(int x,int y, double scale, COLORREF color, int turn, int mirror, int border );

        DrawCar(900, 600, 1, TX_RED, 1, 0, 1);
    }
void DrawHome(int x,int y, double scale, COLORREF color, int turn, int mirror,  int border )
{
     //�����
    if ( border==0 ){

    txSetColor(color);
    }
    else
    {
        txSetColor(TX_WHITE);
    }
    txSetFillColor (color);

    if ( mirror==0)
    {
        txRectangle (x, y, x+100*scale, y-100*scale);
        txLine (x,y-100*scale,x+50*scale,y-150*scale);
        txLine (x+50*scale,y-150*scale,x+100*scale,y-100*scale);
        txFloodFill(x+50*scale,y-125*scale);
        if (turn==0){
            txSetFillColor(TX_BLACK);
            txRectangle (x+25*scale, y, x+75*scale, y-75*scale);
        } else {
            txSetFillColor(TX_BLUE);
            txRectangle (x+25*scale, y-50*scale, x+50*scale, y-75*scale);
        }

    } else {
        txRectangle (x, y-50*scale, x+100*scale, y-150*scale);
        txLine(x, y-50*scale, x+50*scale, y);
        txLine(x+50*scale, y, x+100*scale, y-51*scale);
        txFloodFill(x+50*scale,y-30*scale);
        if (turn==0){
            txSetFillColor(TX_BLACK);
            txRectangle (x+25*scale, y-75*scale, x+75*scale, y-150*scale);
        } else {
            txSetFillColor(TX_BLUE);
            txRectangle (x+25*scale, y-75*scale, x+50*scale, y-100*scale);
        }
    }

}
void DrawCar(int x, int y, double scale, COLORREF color, int turn, int mirror, int border)
{

     //�������
     if ( border==0 ){

     txSetColor(color);
     }
     else
     {
        txSetColor(TX_WHITE);
    }
     txSetFillColor (color);
     if ( mirror==0 ){
     txRectangle (x, y, x+200*scale, y-100*scale);
     txRectangle (x-50*scale, y, x, y-50*scale);
     txRectangle (x+200*scale, y, x+250*scale, y-50*scale);
     txCircle (x+25*scale, y+25*scale, 25*scale);
     txCircle (x+175*scale, y+25*scale, 25*scale);
     txSetFillColor(TX_YELLOW);
     if (turn==0) {
        txRectangle (x+230*scale, y-30*scale, x+250*scale, y-50*scale);
     } else {
        txRectangle (x-50*scale, y-30*scale, x-30*scale, y-50*scale);
        }

    }else{
    txRectangle (x, y+50*scale, x+200*scale, y-50*scale);
     txRectangle (x-50*scale, y, x, y-50*scale);
     txRectangle (x+200*scale, y, x+250*scale, y-50*scale);
     txCircle (x+25*scale, y-75*scale, 25*scale);
     txCircle (x+175*scale, y-75*scale, 25*scale);
     txSetFillColor(TX_YELLOW);
     if (turn==0) {
        txRectangle (x+230*scale, y, x+250*scale, y-20*scale);
     } else {
        txRectangle (x-50*scale, y, x-30*scale, y-20*scale);
        }

    }
}





void DrawMan( int x, int y, double scale, COLORREF color, int turn, int mirror, int border)
{
     //���������
     if ( border==0 ){
     txSetColor(color);
     }
     else
     {
        txSetColor(TX_RED);
     }
     txSetFillColor (color);
     if ( mirror==0 ){

     txEllipse (x, y, x+40*scale, y-100*scale);
     txLine (x+20*scale, y, x+10*scale, y+25*scale);
     txLine (x+20*scale, y, x+30*scale, y+25*scale);
     txLine (x+10, y-75*scale, x-20*scale, y-30*scale);
     txLine (x+30*scale, y-75*scale, x+60*scale, y-30*scale);
     txCircle(x+20*scale,y-120*scale, 20*scale);
     txSetColor(TX_BLACK);
     txArc(x+15*scale, y-110*scale, x+25*scale, y-100*scale, 0, 180);
     if (turn==0){
         txCircle(x+10*scale,y-120*scale, 5*scale);
         txCircle(x+30*scale,y-120*scale, 5*scale);
         txCircle(x+10*scale,y-120*scale, 1*scale);
         txCircle(x+30*scale,y-120*scale, 1*scale);
    }
    else
    {
        txLine(x+5*scale, y-120*scale, x+15*scale, y-120*scale);
        txCircle(x+30*scale,y-120*scale, 5*scale);
        txCircle(x+30*scale,y-120*scale, 1*scale);
    }
   }
   else
   {  txEllipse (x, y-15*scale, x+40*scale, y-115*scale);
     txLine (x+20*scale, y-115*scale, x+10*scale, y-140*scale);
     txLine (x+20*scale, y-115*scale, x+30*scale, y-140*scale);
     txLine (x+10, y-65*scale, x-20*scale, y-110*scale);
     txLine (x+30*scale, y-65*scale, x+60*scale, y-110*scale);
     txCircle(x+20*scale,y+5*scale, 20*scale);
     txSetColor(TX_BLACK);
     txArc(x+15*scale, y-5*scale, x+25*scale, y-15*scale, 180, 180);
     if (turn==0){
         txCircle(x+10*scale,y+5*scale, 5*scale);
         txCircle(x+30*scale,y+5*scale, 5*scale);
         txCircle(x+10*scale,y+5*scale, 1*scale);
         txCircle(x+30*scale,y+5*scale, 1*scale);
    }
    else
    {
        txLine(x+5*scale, y+5*scale, x+15*scale, y+5*scale);
        txCircle(x+30*scale,y+5*scale, 5*scale);
        txCircle(x+30*scale,y+5*scale, 1*scale);
    }
   }

}



void DrawBag(int x, int y, double scale, COLORREF color, int turn, int mirror, int border)
{

     //�����
     if ( border==0 ){
     txSetColor(color);
     }
     else
     {
     txSetColor(TX_WHITE);
     }
     txSetFillColor (color);
     if ( mirror==0 ){
     txRectangle(x, y, x+50*scale, y-75*scale);
     txArc(x+10*scale, y, x+40*scale, y-100*scale, 0, 180);
     if (turn==1){
     txSetColor(TX_BLACK);
        txTextOut(x+12*scale, y-50*scale, "GUCCI");

    }
   }
   else
   {
    txRectangle(x, y-25, x+50*scale, y-100*scale);
     txArc(x+10*scale, y, x+40*scale, y-100*scale, 180, 180);
     if (turn==1){
     txSetColor(TX_BLACK);
        txTextOut(x+12*scale, y-50*scale, "GUCCI");
  }
  }
}


void DrawCircle(int x,int y, double scale, COLORREF color, int turn, int mirror, int border)
{

     //������ ���������
     if ( border==0 ){
     txSetColor(color);
     }
     else
     {
        txSetColor(TX_WHITE);
     }
     txSetFillColor (color);
     if ( mirror==0 )
     {
        txCircle(x, y, 20*scale);
        if (turn==0){
     txSetFillColor (TX_PINK);
        txCircle(x,y, 10*scale);
    }
        else{
            txSetColor (TX_BLUE);
     txRectangle (x-5*scale, y+5*scale, x+5*scale, y-5*scale);
     }

    }
     else{
      txCircle(x, y, 20*scale);
     if (turn==0){
     txSetFillColor (TX_PINK);
        txCircle(x,y, 10*scale);
     }
     else
     { txSetColor (TX_BLUE);}

  }
}
