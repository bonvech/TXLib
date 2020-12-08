#include "TXLib.h"

/**
 \brief   ������� ��� (�������) ���������� ������� ���!

� ������ ���������� ������ ����� ����������, ����� ��� �������, �������, ��������� �����, �������, ������ ������ � ����.
 \warning ����� (���������) ���������� ������ ������ (����� ����)!!!\n
          ����� �� ������������� �������� �� ������� ��������� ������� �����!!!
 \author  ���� ������
 \file    RomaPersLib.h
*/

//{=========�����˨�=====================================================================================================================================================================================/**
/**
 \brief   ������  �������
 \param   x, y    ����������
 \param   scale   ������
 \param   color   ���� �������� (����� ������)
 \param   dcolor  ���� ������ (����) ��������
 \param   gear    ����� ��������� �� 0 �� 27
 \param   lopasti ������� ����������� �� 0 �� -99
 \param   zerkalo (-1) - ������� ������� �����,    1 - ������
 \warning ������� �������� ������ ������!!!

 \code
 DrawHelicopter(150, 75, 0.5, TX_GREEN, TX_GRAY, 27, 99, -1);
 \endcode
*/
void DrawHelicopter(int x, int y, double scale, COLORREF color, COLORREF dcolor, double gear, double lopasti, double zerkalo); //�������

//{=========����˨�=====================================================================================================================================================================================

/**
 \brief   ������  ������
 \param   x, y    ����������
 \param   scale   ������
 \param   color   ���� ������� (����� ������)
 \param   dcolor  ���� ������ (����) �������
 \param   plami   ����� ������������� �� 80 �� -�������������
 \param   zerkalo (-1) - ������ ������� �����,    1 - ������
 \warning ���� ������� �� ��������!!!

 \code
 DrawPlane(50, 425, 0.5, TX_GRAY, RGB(0,127,157), 0, -1);
 \endcode
*/
void DrawPlane(int x, int y, double scale, COLORREF color, COLORREF dcolor, double plami, double zerkalo); //������

//{=========���������=�����====================================================================================================================================================================================

/**
 \brief   ������  ��������� �����
 \param   x, y    ����������
 \param   scale   ������
 \param   color   ���� ��������� �����
 \param   vint    ���� ����������� �� 0 �� 45
 \param   antena  ������ ����������� �� 0 �� -75
 \param   zerkalo (-1) - ��������� ����� ������� �����,    1 - ������
 \warning ���� ����� ������ ������!!!

 \code
 DrawSubmarine(750, 100, 0.5, RGB(82,85,94), 0, 0, -1);
 \endcode
*/
void DrawSubmarine(int x, int y, double scale, COLORREF color, double vint, double antena, double zerkalo); //��������� �����

//{=========�������=====================================================================================================================================================================================

/**
 \brief   ������  �������
 \param   x, y    ����������
 \param   scale   ������
 \param   color   ���� ��������� �������
 \param   dcolor  ���� ����� �������
 \param   turel   ������ ��������� �� 0 �� 45
 \param   gun     ����� ���������� �� 0 �� 20
 \param   dead    1 - �������� ����, 0 - �������� ���
 \param   radar   1 - ����� ���������, 0 - ����� �����
 \param   zerkalo (-1) - ����   1 - �����
 \warning ���� ������ ������ ������!!!

 \code
 DrawShip(700, 450, 0.5, RGB(82,85,94), TX_GRAY, 0, 20, 1, 1, 1);
 \endcode
*/
void DrawShip(int x, int y, double scale, COLORREF color, COLORREF dcolor, double turel, double gun, int dead, int radar, double zerkalo); //�������

//{=========������=====================================================================================================================================================================================

/**
 \brief   ������ ������
 \param   x, y    ����������
 \param   scale   ������
 \param   color   ���� ������
 \param   fire    1 - ����� ����, 0 - ������� ���
 \param   krillo  ������ ����������� �� 0 �� 10
 \param   feri    ����� ����������� �� 0 �� 20 (���� zerkalo = 1) / ����������� �� 20 �� 0 (���� zerkalo = -1)
 \param   zerkalo (-1) - ������ ������� �����,    1 - ������
 \warning ���� ������� �� ��������!!!

 \code
 DrawMissle(215, 550, 0.5, TX_GRAY, 2, 0, 20, 1);
 \endcode
*/
void DrawMissle(int x, int y, double scale, COLORREF color, int fire, double krillo, double feri, double zerkalo); //������

//{=========����=====================================================================================================================================================================================

/**
 \brief   ������  ����
 \param   x, y    ����������
 \param   scale   ������
 \param   color   ���� ����
 \param   dcolor  ���� ����
 \param   e       ���������� ������ ���� �� ����������� (���� ����� ����� ������� x = 200; y = 300)

 \code
 draw_more(600, 100, 0.5, RGB(0,128,128), RGB(0,82,82), 1);
 \endcode
*/
void draw_more(int x, int y, double scale, COLORREF color, COLORREF dcolor, int e);//����

//{==============================================================================================================================================================================================

void DrawHelicopter(int x, int y, double scale, COLORREF color, COLORREF dcolor, double gear, double lopasti, double zerkalo) //225, 75
{
    double xscale = scale * zerkalo;
    txSetColor(TX_BLACK, 5*scale); //�����
    txSetFillColor(RGB(82,85,94));
    txLine(x+90*xscale, y+(100-gear)*scale, x+90*xscale, y+(120-gear)*scale);
    txCircle(x+90*xscale, y+(120-gear)*scale, 8*scale);
    txLine(x-25*xscale, y+(100-gear)*scale, x-25*xscale, y+(120-gear)*scale);
    txCircle(x-25*xscale, y+(120-gear)*scale, 8*scale);
    txLine(x-35*xscale, y+(100-gear)*scale, x-35*xscale, y+(120-gear)*scale);
    txCircle(x-35*xscale, y+(120-gear)*scale, 8*scale);
    txSetFillColor(color);  //�������
    POINT helicopter[9] = {{int(x-175*xscale), int(y-25*scale)}, {int(x-145*xscale), int(y+25*scale)},
                           {int(x-125*xscale), int(y+50*scale)}, {int(x-75*xscale), int(y+50*scale)},
                           {int(x-25*xscale), y}, {int(x+25*xscale), y}, {int(x+125*xscale), int(y+100*scale)},
                           {int(x-75*xscale), int(y+100*scale)}, {int(x-175*xscale), int(y+75*scale)}};
    txPolygon (helicopter, 9);
    txLine(x-100*xscale-lopasti*xscale, y-25*scale, x+100*xscale+lopasti*xscale, y-25*scale); //�������
    txLine(x, y, x, y-25*scale);
    txSetFillColor(dcolor);
    POINT cabin[4] = {{int(x+75*xscale), int(y+50*scale)},
                      {int(x+25*xscale), int(y+50*scale)},
                      {int(x+25*xscale), int(y+75*scale)},
                      {int(x+100*xscale),int(y+75*scale)}};
    txPolygon (cabin, 4);
}
void DrawPlane(int x, int y, double scale, COLORREF color, COLORREF dcolor, double plami, double zerkalo) //350, 425
{
    double xscale = scale * zerkalo;
    txSetColor(RGB(57,8,200), 5*scale);
    txSetFillColor(RGB(170,8,200));
    POINT plamia [3] = {{int(x-100*xscale), int(y-15*scale)}, {int(x-325*xscale+plami*xscale), int(y-10*scale)}, {int(x-175*xscale), y}}; //������
    txPolygon (plamia, 3);
    txSetFillColor(color); //�������
    txSetColor(TX_BLACK, 5*scale);
    POINT plane[7] = {{int(x-310*xscale), int(y-100*scale)}, {int(x-270*xscale), int(y-100*scale)},
                      {int(x-250*xscale), int(y-50*scale)}, {int(x-60*xscale), int(y-50*scale)},
                      {x, y}, {int(x-200*xscale), y}, {int(x-300*xscale), int(y-25*scale)}};
    txPolygon (plane, 7);
    txSetFillColor(dcolor);
    POINT kabin[4] = {{int(x-30*xscale), int(y-25*scale)}, {int(x-100*xscale), int(y-25*scale)},
                      {int(x-100*xscale), int(y-50*scale)}, {int(x-60*xscale), int(y-50*scale)}};
    txPolygon (kabin, 4);
    txLine(x-200*xscale, y-25*scale, x-190*xscale, y-8*scale);
    txLine(x-190*xscale, y-8*scale, x-145*xscale, y-8*scale);
    txLine(x-145*xscale, y-8*scale, x-115*xscale, y-25*scale);
}
void DrawSubmarine(int x, int y, double scale, COLORREF color, double vint, double antena, double zerkalo) //1150, 140
{
    double xscale = scale * zerkalo;
    txSetFillColor(color); //��������� �����
    txSetColor(TX_BLACK, 7*scale);
    txLine(x-50*xscale, y, x-50*xscale, y-(75+antena)*scale);
    txLine(x-75*xscale, y, x-75*xscale, y-(50+antena)*scale);
    txLine(x-100*xscale, y, x-100*xscale, y-(45+antena)*scale);
    txSetColor(TX_BLACK, 5*scale);
    POINT rubka[4] = {{int(x-280*xscale), int(y+159*scale)}, {int(x-200*xscale), y}, {x, y}, //�����
                      {int(x+50*xscale), int(y+159*scale)}};
    txPolygon (rubka, 4);
    txSetColor(TX_BLACK, 5*scale);
    txEllipse(x-500*xscale, y+60*scale, x+200*xscale, y+184*scale);
    txSetColor(TX_BLACK, 10*scale);
    txLine(x-500*xscale, y+122*scale, x-525*xscale, y+122*scale);
    txLine(x-520*xscale, y+(80+vint)*scale, x-520*xscale, y+(164-vint)*scale); //����
}
void DrawShip(int x, int y, double scale, COLORREF color, COLORREF dcolor, double turel, double gun, int dead, int radar, double zerkalo) //900, 495
{
    double yscale = scale * zerkalo;
    txSetFillColor(dcolor);
    txSetColor(TX_BLACK, 5*scale);
    POINT gan[4] = {{int(x-200*scale), int(y+217*yscale+turel*yscale)}, {int(x-180*scale), int(y+175*yscale+turel*yscale)}, // �����
                    {int(x-145*scale), int(y+180*yscale+turel*yscale)}, {int(x-140*scale), int(y+225*yscale+turel*yscale)}};
    txPolygon (gan, 4);
    txSetColor(TX_BLACK, 6*scale);
    txLine(x-190*scale, y+195*yscale+turel*yscale, x-225*scale, y+175*yscale+(gun+turel)*yscale); //�����
    txSetColor(TX_BLACK, 5*scale); //�������
    txSetFillColor(color);
    POINT ship[7] = {{int(x-300*scale), int(y+205*yscale)}, {int(x-100*scale), int(y+230*yscale)},
                     {int(x+300*scale), int(y+230*yscale)}, {int(x+300*scale), int(y+265*yscale)},
                     {int(x+450*scale), int(y+265*yscale)}, {int(x+425*scale), int(y+330*yscale)},
                     {int(x-200*scale), int(y+330*yscale)}};
    txPolygon (ship, 7);
    txSetFillColor(dcolor);
    POINT rubca[6] = {{int(x-100*scale), int(y+230*yscale)}, {int(x-50*scale), int(y+105*yscale)},
                      {int(x+100*scale), int(y+105*yscale)}, {int(x+150*scale), int(y+180*yscale)},
                      {int(x+250*scale), int(y+180*yscale)}, {int(x+250*scale), int(y+230*yscale)}};
    txPolygon (rubca, 6);
    if(radar == 1) //����� 1 - ����� ���������, ���. �����
    {
        txLine(x-10*scale, y+105*yscale, x, y+55*yscale);
        txLine(x+10*scale, y+105*yscale, x, y+55*yscale);
        txLine(x, y+55*yscale, x+40*scale, y+20*yscale);
        txLine(x+25*scale, y+10*yscale, x+50*scale, y+35*yscale);
        txLine(x-15*scale, y+50*yscale, x+15*scale, y+65*yscale);
    }
    else
    {
        txLine(x-10*scale, y+105*yscale, x, y+55*yscale);
        txLine(x+10*scale, y+105*yscale, x, y+55*yscale);
        txLine(x, y+55*yscale, x, y);
        txLine(x-15*scale, y+5*yscale, x+15*scale, y+5*yscale);
        txLine(x-15*scale, y+55*yscale, x+15*scale, y+55*yscale);
    }
    if(dead == 1) //�������� 1 - �������� ����, ���. ���
    {
        txSetFillColor(RGB(38,38,38));
        POINT probitie[9] = {{int(x-150*scale), int(y+315*yscale)}, {int(x-175*scale), int(y+275*yscale)},
                             {int(x-165*scale), int(y+255*yscale)}, {int(x-130*scale), int(y+255*yscale)},
                             {int(x-100*scale), int(y+245*yscale)}, {int(x-75*scale), int(y+265*yscale)},
                             {int(x-80*scale), int(y+275*yscale)}, {int(x-70*scale), int(y+290*yscale)},
                             {int(x-100*scale), int(y+325*yscale)}};
        txPolygon (probitie, 9);
    }
}
void DrawMissle(int x, int y, double scale, COLORREF color, int fire, double krillo, double feri, double zerkalo) //215, 670
{
    double xscale = scale * zerkalo;
    txSetColor(TX_BLACK, 2*scale); //������
    txSetFillColor(color);
    POINT krilo[3] = {{int(x-105*xscale), int(y-5*scale)}, {int(x-95*xscale), int(y-15*scale+krillo)},
                      {int(x-80*xscale), int(y-5*scale)}};
    txPolygon (krilo, 3);
    POINT crilo[3] = {{int(x-105*xscale), int(y+5*scale)}, {int(x-95*xscale), int(y+15*scale-krillo)},
                      {int(x-80*xscale), int(y+5*scale)}};
    txPolygon (crilo, 3);
    POINT missile[5] = {{x, y}, {int(x-40*xscale), int(y+5*scale)}, {int(x-115*xscale), int(y+5*scale)},
                        {int(x-115*xscale), int(y-5*scale)}, {int(x-40*xscale), int(y-5*scale)}};
    txPolygon (missile, 5);
    if(fire == 1) //����� 1 - ����� ����, ���. ���
    {
        txSetColor(TX_ORANGE, 1*scale);
        txSetFillColor(TX_ORANGE);
        POINT ogon[5] = {{int(x-115*xscale), int(y-3*scale)}, {int(x-135*xscale), int(y-5*scale)},
                         {int(x-165*xscale-feri*xscale), y},{int(x-135*xscale), int(y+7*scale)},
                         {int(x-115*xscale), int(y+4*scale)}};
        txPolygon (ogon, 5);
    }
 }
void draw_more(int x, int y, double scale, COLORREF color, COLORREF dcolor, int e)//0, 350
{
        for(int i=0; i<e; i++)
        {
            txSetColor(color, 1*scale);
            txSetFillColor(color);
            txRectangle(x*scale, y*scale, (x+200)*scale, (y+300)*scale);
            txSetColor(dcolor, 5*scale);
            txLine((x+10)*scale, (y+20)*scale, (x+60)*scale, (y+20)*scale);
            txLine((x+120)*scale, (y+40)*scale, (x+170)*scale, (y+40)*scale);
            txLine((x+40)*scale, (y+70)*scale, (x+90)*scale, (y+70)*scale);
            txLine((x+20)*scale, (y+115)*scale, (x+70)*scale, (y+115)*scale);
            txLine((x+140)*scale, (y+95)*scale, (x+190)*scale, (y+95)*scale);
            txLine((x+80)*scale, (y+145)*scale, (x+130)*scale, (y+145)*scale);
            txLine((x+5)*scale, (y+165)*scale, (x+55)*scale, (y+165)*scale);
            txLine((x+120)*scale, (y+185)*scale, (x+170)*scale, (y+185)*scale);
            txLine((x+60)*scale, (y+215)*scale, (x+110)*scale, (y+215)*scale);
            txLine((x+7)*scale, (y+245)*scale, (x+57)*scale, (y+245)*scale);
            txLine((x+115)*scale, (y+250)*scale, (x+165)*scale, (y+250)*scale);
            txLine((x+50)*scale, (y+275)*scale, (x+100)*scale, (y+275)*scale);
            x=x+200;
        }
}
