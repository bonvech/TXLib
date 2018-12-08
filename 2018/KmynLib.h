//{---------------------------------------------------------------------------------------
//! @file    KmynLib.h
//! @brief   ���������� ����� (The �myn's Library, KmynLib).
//!
//!          $Version: 1.0 $
//!          $Copyright: (C) Kmyn (Orekhov Nikolay) <www.fuper@gmail.com> $
//!          $Date: 2018-30-11 10:38 +0400 $
//!
//!          Kmyn Library - ��� ����� ��� �������� � ����������� ������ � �����������
//}-----------------------------------------------------------------------------------------

//{-------------------------------------------------------------------------------------------
//! @brief   ������ ���������.
//!
//! @param   x ����������
//! @param   y ����������
//! @param   scale  ������ ������
//! @param   col    ���� ������ ������
//! @param   floor  ���-�� ������
//! @param   pal    ���� �����
//! @param   mario  ��� �������� = 2, ��� ��������� �����
//!
//!          ���� �� ���������.
//! \warning ����� ���� �� ������, �.�. �� �� ���������� �.
//! \warning ������� ��������� �������������� �����
//! @code
//! draw_twin(649,400, 1, TX_BLUE, 50, TX_YELLOW, 1);
//! @endcode
//}-------------------------------------------------------------------------------------------

void draw_twin(int x, int y, double scale, COLORREF col, double floor, COLORREF pal, short mario);

//{-------------------------------------------------------------------------------------------
//! @brief   ������ �����.
//!
//! @param   x ����������
//! @param   y ����������
//! @param   scale ������ �����
//! @param   col ���� ������ �����
//! @param   armL ��������� ����� ������ �� x
//! @param   armR ��������� ������ ������ �� x
//! @param   legL ��������� ����� ���� �� �
//! @param   legR ��������� ������ ���� �� �
//! @param   eye ���������� ����� �� �
//! @param   claws ��������� �������, ���� = 2, �� ��� �����
//!
//!          ���� ������������
//! \warning ����� �� �������� ��������� �����
//! @code
//! draw_krabik(600,100, 1, TX_RED, 1.02, 1, 1.5, 1, 600, 2);
//! @endcode
//}-------------------------------------------------------------------------------------------

void draw_krabik(int x, int y, double scale, COLORREF col, double armL, double armR, double legL, double legR, double eye, short claws);

//{-------------------------------------------------------------------------------------------
//! @brief   ������ �����.
//!
//! @param   x ����������
//! @param   y ����������
//! @param   scale ������ �����
//! @param   col ���� ����� �����
//! @param   lenth ����� �����
//! @param   colkr ���� ������
//! @param   bah ���������� ��� �������� �� ������ 1
//!
//!          ���� �� ���������.
//! \warning ����� ���� �����
//! \warning ����� �� 50 �������� ������ ��� �
//! @code
//! draw_bomb(1000,675, 0.6, TX_PINK, 3.5, TX_MAGENTA, 1);
//! @endcode
//}-------------------------------------------------------------------------------------------

void draw_bomb(int x, int y, double scale, COLORREF col, double lenth, COLORREF colkr, short bah);

//{-------------------------------------------------------------------------------------------
//! @brief   ������ �����������.
//!
//! @param   x ����������
//! @param   y ����������
//! @param   scale ������ �����������
//! @param   col ���� ������ �����������
//! @param   colcab ���� ������
//! @param   coleng ���� ���������
//! @param   lentheng ����� ���������
//! @param   heat ��������� ����������� � ���������� �������
//!
//!          ���������� ������ ���������� ������.
//! \warning � ������ �� 10 �������, � ���������� ������������
//! @code
//! draw_destroyer(1000,50, 1, TX_LIGHTBLUE, TX_YELLOW, TX_YELLOW, 1.2, 1);
//! @endcode
//}-------------------------------------------------------------------------------------------

void draw_destroyer(int x, int y, double scale, COLORREF col,COLORREF colcab, COLORREF coleng, double lentheng, short heat);

//{-------------------------------------------------------------------------------------------
//! @brief   ������ �����������.
//!
//! @param   x ����������
//! @param   y ����������
//! @param   scale ������ ��������
//! @param   col ���� ������ ��������
//! @param   colcabine ���� ������
//! @param   lenthcab ����� ������
//! @param   terrorism ���� �� ����� 0, ������� ����������
//!
//!          ������� �����������, ������� ������� �������
//!  \warning ����� �� 25 ����� �������� ��������� ��������������
//!  @code
//!  draw_plane(100,300, 2, TX_BLACK, TX_GREEN, 1, 0);
//! @endcode
//}-------------------------------------------------------------------------------------------

void draw_plane(int x, int y, double scale, COLORREF col, COLORREF colcabine, double lenthcab, short terrorism);

void draw_twin(int x, int y,double scale, COLORREF col, double floor, COLORREF pal, short mario)
{

    double lu = x-100*scale;
    double ld = y-floor*(5*scale);
    if(mario == 1)
    {
        txSetFillColor(col);
        txSetColor(col);
        txRectangle(x-100*scale,y+floor*(5*scale),x+100*scale,y-floor*(5*scale));
        txRectangle(x-10*scale,y-floor*(5*scale),x+10*scale,(y-floor*(5*scale))-100*scale);
        while(lu <= x+100*scale)
        {
            txSetColor(pal);
            txLine(lu,y+floor*(5*scale),lu,y-floor*(5*scale));
            lu += 10*scale;
        }

        while(ld <= y+floor*(5*scale))
        {
            txSetColor(pal);
            txLine(x-100*scale,ld,x+100*scale,ld);
            ld += 10*scale;
        }
    }
    else
    {
        txSetFillColor(TX_WHITE);
        txSetColor(TX_WHITE);
        txRectangle(x-100*scale,y+floor*(5*scale),x+100*scale,y-floor*(5*scale));
        txRectangle(x-10*scale,y-floor*(5*scale),x+10*scale,(y-floor*(5*scale))-100*scale);
    }
}


void draw_krabik(int x, int y, double scale, COLORREF col, double armL, double armR, double legL, double legR, double eye, short claws)
{
    double kr = 30*scale;
    if( claws == 1)
    {
        txSetColor(col,5*scale);
        txSetFillColor(col);
        txCircle(x,y,75*scale);
        txLine(x-100*scale*legL,y+100*scale,x,y);
        txLine(x-190*scale*armL,y,x-75*scale,y);
        txRectangle(x-190*scale*armL,y,x-240*scale*armL,y-20*scale*armL);
        txRectangle(x-190*scale*armL,y,x-170*scale*armL,y+50*scale*armL);
        txLine(x+190*scale*armR,y,x+75*scale,y);
        txLine(x,y,x+100*scale*legR,y+100*scale);
        txRectangle(x+190*scale*armR,y,x+240*scale*armR,y-20*scale*armR);
        txRectangle(x+190*scale*armR,y,x+170*scale*armR,y+50*scale*armR);
        txSetColor(TX_WHITE);
        while(kr >= 20*scale)
        {
             txCircle(eye,y,kr);
             kr -= 1*scale;
         }
        txSetFillColor(TX_WHITE);
        txCircle(eye,y,10*scale);
     }
     else
    {
        txSetColor(col,5*scale);
        txSetFillColor(col);
        txCircle(x,y,75*scale);
        txLine(x-100*scale*legL,y+100*scale,x,y);
        txLine(x-190*scale*armL,y,x-75*scale,y);
        txRectangle(x-190*scale*armL,y,x-240*scale*armL,y+50*scale*armL);
        txRectangle(x-190*scale*armL,y,x-260*scale*armL,y+50*scale*armL);
        txLine(x+190*scale*armR,y,x+75*scale,y);
        txLine(x,y,x+100*scale*legR,y+100*scale);
        txRectangle(x+190*scale*armR,y,x+240*scale*armR,y+50*scale*armR);
        txRectangle(x+190*scale*armR,y,x+260*scale*armR,y+50*scale*armR);
        txSetColor(TX_WHITE);
        while(kr >= 20*scale)
        {
             txCircle(eye,y,kr);
             kr -= 1*scale;
        }
        txSetFillColor(TX_WHITE);
        txCircle(eye,y,10*scale);
     }
}

void draw_bomb(int x, int y, double scale, COLORREF col, double lenth, COLORREF colkr, short bah)
{

    POINT tr[3] = {{x+ int(80*scale*lenth), y}, {int(x+120*scale*lenth), y-int(25*scale)}, {int(x+ 120*scale*lenth), int(y+ 25*scale)}};
    POINT babah[16] = {{ x+100, y}, {x+60, y+5}, {x+100, y+50}, {x+55, y+10}, {x+50 , y+50}, { x+45, y+5}, {x, y+50}, {x+40, y+5}, {x , y}, {x+40 , y-5}, {x , y-50}, {x+45 , y-10}, {x+50 , y-50}, {x+55 , y-10}, {x+100 , y-50}, {x+60 , y-5}};

    if( bah == 1)
    {
        txSetColor(col);
        txSetFillColor(col);
        txEllipse(x,y+25*scale,x+100*scale*lenth,y-25*scale);
        txPolygon(tr, 3);
        txSetColor(colkr,2.5*scale);
        txSetFillColor(col);
        txCircle(x+50*scale*lenth,y,20*scale);
        txCircle(x+50*scale*lenth,y,15*scale);
        txCircle(x+50*scale*lenth,y,10*scale);
        txCircle(x+50*scale*lenth,y,5*scale);
    }
    else
    {
        txSetFillColor(RGB(250, 255, 0));
        txSetColor(TX_RED,5);
        txPolygon(babah, 16);
    }
}

void draw_destroyer(int x, int y,double scale, COLORREF col, COLORREF colcab, COLORREF coleng, double lentheng, short heat)
{
    POINT tr2[3] = {{int(x-100*scale), int(y+10*scale)}, {int(x+100*scale), int(y+40*scale)}, {int(x+100*scale), int(y-20*scale)}};

    txSetFillColor(colcab);
    txSetColor(colcab);
    txCircle(x-50*scale,y+5*scale,13*scale);
    txSetColor(col);
    txSetFillColor(col);
    txPolygon(tr2, 3);
    txSetColor(coleng);
    txSetFillColor(coleng);
    if( heat == 1)
    {
        txSetColor(coleng);
        txSetFillColor(coleng);
        txRectangle(x+100*scale,y+35*scale,x+125*scale*lentheng,y+25*scale);
        txRectangle(x+100*scale,y-15*scale,x+125*scale*lentheng,y-5*scale);
    }
    else
    {
        txSetColor(RGB(207 , 16, 32));
        txSetFillColor(RGB(207 , 16, 32));
        txRectangle(x+100*scale,y+35*scale,x+125*scale*lentheng,y+25*scale);
        txRectangle(x+100*scale,y-15*scale,x+125*scale*lentheng,y-5*scale);
    }
}

void draw_plane(int x, int y, double scale, COLORREF col, COLORREF colcabine, double lenthcab,  short terrorism)
{
    POINT tr3[3] = {{x+int(100*scale), y+int(75*scale)}, {x+int(100*scale), y+int(100*scale)}, {x+int(150*scale*lenthcab), y+int(100*scale)}};
    POINT tr4[3] = {{x+int(100*scale), y+int(80*scale)}, {x+int(100*scale), y+int(95*scale)}, {x+int(140*scale*lenthcab), y+int(99*scale)}};
    POINT ch[4] = {{x-int(50*scale), y+int(50*scale)}, {x-int(50*scale), y+int(75*scale)}, {x-int(25*scale), y+int(75*scale)}, {x-int(35*scale), y+int(50*scale)}};
    POINT ch2[4] = {{x+int(75*scale), y+int(75*scale)}, {x+int(50*scale), y+int(75*scale)}, {x+int(25*scale), y+int(25*scale)}, {x+int(50*scale), y+int(25*scale)}};
    POINT babah[16] = {{ x+100, y}, {x+60, y+5}, {x+100, y+50}, {x+55, y+10}, {x+50 , y+50}, { x+45, y+5}, {x, y+50}, {x+40, y+5}, {x , y}, {x+40 , y-5}, {x , y-50}, {x+45 , y-10}, {x+50 , y-50}, {x+55 , y-10}, {x+100 , y-50}, {x+60 , y-5}};

    if( terrorism == 0)
    {
        txSetColor(col);
        txSetFillColor(col);
        txRectangle(x+100*scale,y+100*scale,x-50*scale,y+75*scale);
        txPolygon(tr3, 3);
        txSetFillColor(colcabine);
        txPolygon(tr4, 3);
        txSetFillColor(col);
        txPolygon(ch, 4);
        txPolygon(ch2, 4);
    }
    else
    {
        txSetColor(TX_RED, 5);
        txSetFillColor(RGB(250, 255, 0));
        txPolygon(babah, 16);
    }
}
