/// \file TkachenkoLib1.h
//!@brief ���������� ����������� �������� (�������� ���������).

//! @brief �������� �������
//! @param x     ���������� �� ��� x
//! @param y     ���������� �� ��� y
//! @param color ��������� ���� �����
//! @code  draw_ground(-100, 600, TX_WHITE);
/// @endcode
void draw_ground(int x, int y, COLORREF color);

//! @brief ������ ���������.
//! @param x     ���������� �� ��� �
//! @param y     ���������� �� ��� y
//! @param scale ������ ���������
//! @param color ���� ���������
//! @param arm   ������, �� ������� ����������� ����
//! @param d     � ����������� ����� �������� ����� ��������, ��� �������� ����
//! @param l     ������������
//! @param arms  ��������, �� �������� �������� ��������� ���
//! @code  draw_snowman(300,700, 1.0, TX_WHITE, 50, 2.5, 1, 1);
//! @endcode
void draw_snowman(int x, int y, double scale, COLORREF color, int arm, double d, int l, short int arms);

//! @brief ������ ������.
//! @param x     ���������� �� ��� �
//! @param y     ���������� �� ��� y
//! @param scale ������ ����
//! @param color ���� ����
//! @param high  ������ ������
//! @param r     ������ ����� 1
//! @param r2    ������ ����� 2
//! @param l     ������������
//! @code  draw_tree(950, 680, 0.7, TX_GREEN, 2.1, 1.5 , 2, -1, 1);
//! @endcode
void draw_tree(int x, int y, double scale, COLORREF color, double high, double r, double r2, int l);

//! @brief ������ ����.
//! @param x     ���������� �� ��� �
//! @param y     ���������� �� ��� y
//! @param scale ������ ����
//! @param color ���� ����
//! @param ear   ������ ����
//! @param gl    ������ ����
//! @param s     ������������
//! @param phase ������� ������� ���� � ����
//! @code  draw_owl(400, 300, 1.0, TX_PINK, 15, 1.5, 1, 4);
//! @endcode
void draw_owl(int x, int y, double scale, COLORREF color, int  ear, double gl, int s, short int phase);

//! @brief ������ ���.
//! @param x     ���������� �� ��� �
//! @param y     ���������� �� ��� y
//! @param scale ������ ����
//! @param color ���� ����
//! @param blind ��������� ����������� ������
//! @code  draw_house(850, 700, 1.0, TX_MAGENTA, 20);
//! @endcode
void draw_house(int x, int y, double scale, COLORREF color, int blind);

//! @brief ������ ��������.
//! @param x      ���������� �� ��� �
//! @param y      ���������� �� ��� y
//! @param scale  ������ ��������
//! @param color1 ���� �������� �������
//! @param color2 ���� ������ �������
//! @param color3 ���� ����
//! @param h      ������, �� ������� ����� ������
//! @code  draw_garland(850, 535, 1.0, TX_RED, TX_YELLOW, TX_MAGENTA, 0.95);
//! @endcode
void draw_garland(int x, int y, double scale, COLORREF color1, COLORREF color2, COLORREF color3, double h);

//! @brief ������ ������.
//! @param x     ���������� �� ��� �
//! @param y     ���������� �� ��� y
//! @param scale ������ ������
//! @param color ���� ������
//! @param sk    ������������
//! @code  draw_snow(300, 100, 1.0, RGB(186, 210, 238), 20);
//! @endcode
void draw_snow(int x, int y, double scale, COLORREF color, int sk);

//! @brief ������ c���.
//! @param x     ���������� �� ��� �
//! @param y     ���������� �� ��� y
//! @code  draw_snow2(0, 300);
//! @endcode
void draw_snow2(int x, int y);

//! @brief ������ ������ ��������� � ����.
//! @param x     ���������� �� ��� �
//! @param y     ���������� �� ��� y
//! @code  draw_hair(850, 615);
//! @endcode
void draw_hair(int x, int y);


void draw_ground(int x, int y, COLORREF color)
{
    txSetColor(color);
    txSetFillColor(color);
    txEllipse(x,y,x+1400,y+400);
}

void draw_snowman(int x, int y, double scale, COLORREF color, int arm, double d, int l, short int arms)
{
    //�������� ����� ������
    txSetColor(TX_BLACK);
    txSetFillColor(color);
    txCircle(x,y-50*scale,50*scale);
    txCircle(x,(y-120*scale)+int (d*10),35*scale);
    txCircle(x,(y-170*scale)+int (d*15),25*scale);      //������
    txSetColor(TX_BLACK);   //�����
    txSetFillColor(TX_BLACK);
    txCircle(x+5*scale,y-170*scale+int (d*15),3*scale);
    txCircle(x-5*scale,y-170*scale+int (d*15),3*scale);
    txSetColor(TX_ORANGE);    //���
    txSetFillColor(TX_ORANGE);
    txCircle(x,y-160*scale+int (d*15),3*scale);
    txCircle(x+4*scale*l,y-160*scale+int (d*15),2*scale);
    txCircle(x+6*scale*l,y-160*scale+int (d*15),int (1.5*scale));
    txSetColor(TX_GRAY, 5);     //����
    txSetFillColor(TX_GRAY);


    if (arms==1)
    {
    txLine(x-35*scale,y-120*scale+int (d*10),x-70*scale,y-90*scale- int (1.5*arm));
    txLine(x+35*scale,y-120*scale+int (d*10),x+75*scale,y-70*scale);
    }
    else
    {
    txLine(x+35*scale*l,y-120*scale+int (d*10),x+75*scale*l,y-90*scale- int (0.1*arm));
    txLine(x-35*scale*l,y-120*scale+int (d*10),x-75*scale*l,y-70*scale);
    }
}

void draw_tree(int x, int y, double scale, COLORREF color, double high, double r, double r2, int l)
{

    //x=950 y=700
    //� ���� ������ �����
    txSetColor(RGB(150, 75,	0));
    txSetFillColor(RGB(150, 75,	0));

    txSetColor(color);
    txSetFillColor(color);
    POINT tree[8] = {{x-int (145*scale),y-int (75*scale)+ int (high*20)},
    {x+int (145*scale),y-int (75*scale)+ int (high*20)},
    {x+int (55*scale), y-int (200*scale)- int (high*25)},
    {x+int (115*scale),y-int (200*scale)- int (high*25)},
    {x,y-int (325*scale)- int (high*30)},
    {x-int (115*scale),y-int (200*scale)- int (high*25)},
    {x-int (55*scale),y-int (200*scale)- int (high*25)},
    {x-int (145*scale),y-int (75*scale)+ int (high*20)}};
    txPolygon (tree, 8);
    txSetColor(RGB(150, 75,	0));
    txSetFillColor(RGB(150, 75,	0));
    txCircle(x-50*scale*l,y-210*scale,10*scale*r);  //�����
    txCircle(x-20*scale*l,y-210*scale,10*scale*r2);
    txCircle(x-25*scale*l,y-140*scale,10*scale);
    txCircle(x+50*scale*l,y-200*scale,10*scale*r);
    txCircle(x+55*scale*l,y-110*scale,10*scale*r2);
    txCircle(x+35*scale*l,y-200*scale,10*scale);
    txCircle(x+25*scale*l,y-160*scale,10*scale*r);
}

void draw_owl(int x, int y, double scale, COLORREF color, int  ear, double gl, int s, short int phase)
{
    //���� ����� ��������
    //x=980 y=450
    txSetColor(TX_GRAY);
    txSetFillColor(TX_GRAY);
    if (phase == 1)
    {POINT trn[4] = {{x+int (20*scale),y-int (110*scale)},
    {x+int (30*scale),y-int (130*scale)+int (1*ear)},
    {x+int (30*scale),y-int (90*scale)},
    {x+int (20*scale),y-int (90*scale)}};  //���
    txPolygon (trn, 4);
    POINT trnl[4] = {{x-int (20*scale),y-int (110*scale)},
    {x-int (30*scale),y-int (130*scale)+int (1*ear)},
    {x-int (30*scale),y-int (90*scale)},
    {x-int (20*scale),y-int (90*scale)}};
    txPolygon (trnl, 4);
    };

    if (phase == 2)
    {POINT trn[4] = {{x+int (20*scale),y-int (110*scale)},
    {x+int (30*scale),y-int (130*scale)+int (0.5*ear)},
    {x+int (30*scale),y-int (90*scale)},
    {x+int (20*scale),y-int (90*scale)}};  //���
    txPolygon (trn, 4);
    POINT trnl[4] = {{x-int (20*scale),y-int (110*scale)},
    {x-int (30*scale),y-int (130*scale)+int (1*ear)},
    {x-int (30*scale),y-int (90*scale)},
    {x-int (20*scale),y-int (90*scale)}};
    txPolygon (trnl, 4);
    }

    if (phase == 3)
    {POINT trn[4] = {{x+int (20*scale),y-int (110*scale)},
    {x+int (30*scale),y-int (130*scale)+int (1*ear)},
    {x+int (30*scale),y-int (90*scale)},
    {x+int (20*scale),y-int (90*scale)}};  //���
    txPolygon (trn, 4);
    POINT trnl[4] = {{x-int (20*scale),y-int (110*scale)},
    {x-int (30*scale),y-int (130*scale)+int (0.5*ear)},
    {x-int (30*scale),y-int (90*scale)},
    {x-int (20*scale),y-int (90*scale)}};
    txPolygon (trnl, 4);
    };

    if (phase == 4)
    {POINT trn[4] = {{x+int (20*scale),y-int (110*scale)},
    {x+int (30*scale),y-int (130*scale)+ int (0.5*ear)},
    {x+int (30*scale),y-int (90*scale)},
    {x+int (20*scale),y-int (90*scale)}};  //���
    txPolygon (trn, 4);
    POINT trnl[4] = {{x-int (20*scale),y-int (110*scale)},
    {x-int (30*scale),y-int (130*scale)+int (0.5*ear)},
    {x-int (30*scale),y-int (90*scale)},
    {x-int (20*scale),y-int (90*scale)}};
    txPolygon (trnl, 4);
    };

    txSetColor(color);
    txSetFillColor(color);
    txCircle(x,y-40*scale,40*scale);        //����
    txCircle(x,y-90*scale,30*scale);         //������
    txSetColor(TX_BLACK);
    txSetFillColor(TX_BLACK);
    txCircle(x-10*scale*s,y-95*scale,4*scale*gl);     //����� � ����
    txCircle(x+10*scale*s,y-95*scale,4*scale);
    txCircle(x,y-75*scale,3*scale);
    txSetColor(TX_GRAY);
    txSetFillColor(TX_GRAY);

    txEllipse(x+20*scale,y-70*scale,x+40*scale,y-15*scale);
    txEllipse(x-20*scale,y-70*scale,x-40*scale,y-15*scale);
}

void draw_garland(int x, int y, double scale, COLORREF color1,COLORREF color2, COLORREF color3, double h)
{
    //x=600, y=535
    //�������� ������
    txSetColor(TX_BLACK, 5*scale);
    txSetFillColor(color3);

    POINT line[5] = {{x-int (100*scale),y-int (35*scale)},
    {x-int (50*scale),y-int (10*scale)},
    {x,int (y*h)},
    {x+int (50*scale),y-int (10*scale)},
    {x+int (100*scale),y-int (35*scale)}};
    txPolygon (line, 5);

    txSetColor(color1);
    txSetFillColor(color1);
    txCircle(x-100*scale,y-35*scale,15*scale);
    txSetColor(color2);
    txSetFillColor(color2);
    txCircle(x-50*scale,y-10*scale,15*scale);
    txSetColor(color1);
    txSetFillColor(color1);
    txCircle(x,int (y*h),15*scale);
    txSetColor(color2);
    txSetFillColor(color2);
    txCircle(x+50*scale,y-10*scale,15*scale);
    txSetColor(color1);
    txSetFillColor(color1);
    txCircle(x+100*scale,y-35*scale,15*scale);
}

void draw_snow(int x, int y, double scale, COLORREF color, int sk)
{
    txSetColor(color);
    txSetFillColor(color);
    txCircle(x,y,50*scale);
    txCircle(x+35*scale+sk,y,40*scale);
    txCircle(x-35*scale-sk,y,40*scale);
}

void draw_hair(int x, int y)
{
    txSetColor(TX_BLACK);
    txSetFillColor(TX_WHITE);
    txCircle(x,y,25);
    txSetColor(TX_BLACK);   //�����
    txSetFillColor(TX_BLACK);
    txCircle(x+5,y-5, 3);
    txCircle(x-5,y-5, 3);
    txSetColor(TX_ORANGE);    //���
    txSetFillColor(TX_ORANGE);
    txCircle(x,y+5, 3);
    txCircle(x+3,y+5, 2);
    txCircle(x+2,y+5, 1);
}

void draw_snow2(int x, int y)
{
    txSetColor(TX_WHITE);
    txSetFillColor(TX_WHITE);
    txCircle(x,y, 2);
    txCircle(x+100,y+270, 2);
    txCircle(x+215,y+100, 2);
    txCircle(x+160,y+450, 2);
    txCircle(x+290, y+50, 2);
    txCircle(x+370,y+170, 2);
    txCircle(x+480,y+370, 2);
    txCircle(x+590,y+200, 2);
    txCircle(x+700,y+500, 2);
    txCircle(x+810,y+400, 2);
    txCircle(x+950,y+340, 2);
    txCircle(x+1100,y+250, 2);
    txCircle(x+1170,y+190, 2);
}

void draw_house(int x, int y, double scale, COLORREF color,int blind)
{
    txSetColor(TX_BLACK, 5*scale);
    txSetFillColor(color);
    txRectangle(x-100*scale,y-200*scale,x+100*scale,y);
    txSetColor(TX_BLACK, 5*scale);
    txSetFillColor(TX_BLUE);
    txRectangle(x-50*scale,y-150*scale,x+50*scale,y-50*scale);
    txSetColor(TX_BLACK, 5*scale);
    txSetFillColor(color);
    POINT kr[4] = {{x-int (100*scale),y-int (200*scale)}, {x,y-int (300*scale)}, {x+int (100*scale), y-int (200*scale)}, {x-int (100*scale),y-int (200*scale)}};
    txPolygon (kr, 4);
    txSetFillColor(TX_YELLOW);
    POINT sh[5] = {{x,y-int (150*scale)},
    {x+int (50*scale),y-int (150*scale)},
    {x+int (50*scale),y-int  (50*scale)},
    {x+int (50*scale)-blind,y-int  (50*scale)},
    {x,y-int (150*scale)}};
    txPolygon (sh, 4);
    POINT sh2[5] = {{x,y-int (150*scale)},
    {x-int (50*scale),y-int (150*scale)},
    {x-int (50*scale),y-int (50*scale)},
    {x-int (50*scale)+blind,y-int (50*scale)},
    {x,y-int (150*scale)}};
    txPolygon (sh2, 4);

}



