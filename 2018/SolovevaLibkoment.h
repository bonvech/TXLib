/// \file SolovevaLibkoment.h
//! @brief  ����������  ������� � ���������(��������� �����)

//! @brief   ������ ���
//! @param   x               ���������� ������ ����
//! @param   y               ���������� ������ ����
//! @param   scale           ������ ����
//! @param   color           ���� ����
//! @param   width           ������ ����
//! @param   height          ������ ����
//! @code
/// draw_home(175,140,1.1,RGB(97,226,166),1.0,1.3);
/// @endcode

void draw_home(int x,int y,double scale,COLORREF color,double width,double height);


//! @brief   ������ ����
//! @param   x               ���������� ������ ���
//! @param   y               ���������� ������ ���
//! @param   scale           ������ ����
//! @param   color           ���� ����
//! @param   eyes            ������ ����
//! @param   ears            �������� ����
//! @param   mirroring       ���������
//! @code       draw_cat(465,440,1.0,TX_ORANGE,2,7.0,1);
/// @endcode
void draw_cat(int x,int y,double scale,COLORREF color,int eyes,double ears,int mirroring);

//! @brief   ������ �����
//! @param   x               ���������� ������ ������
//! @param   y               ���������� ������ ������
//! @param   scale           ������ �����
//! @param   color           ���� �����
//! @param   tail            ������ ������
//! @param   ears            ������ ����
//! @param   mirroring       ���������
//! @code         draw_rabbit(550,420,1.0,TX_LIGHTGRAY,2,1.5,1);
/// @endcode
void draw_rabbit(int x,int y,double scale,COLORREF color,int tail,double ears,int mirroring);

//! @brief   ������ ��������
//! @param   x               ���������� ������ ������
//! @param   y               ���������� ������ ������
//! @param   scale           ������ ��������
//! @param   color           ���� ��������
//! @param   legs            ����� ���
//! @param   smile           ������ ������
//! @code       draw_man(300,340,0.8,RGB(236,81,81),1.2,1);
/// @endcode
void draw_man(int x,int y,double scale,COLORREF color,double legs,int smile);


//! @brief   ������ �������
//! @param   x               ���������� ������ ������
//! @param   y               ���������� ������ ������
//! @param   scale           ������ �������
//! @param   color           ���� �������
//! @param   ears            ������ ����
//! @param   height          ���������� �����
//! @code       draw_bear(700,340,1.0,RGB(189,183,183),1.4,1.08);
/// @endcode
void draw_bear(int x,int y,double scale,COLORREF color,double ears,double height);




void draw_home(int x,int y,double scale,COLORREF color,double width,double height)
{
    //���
    txSetColor(RGB(151,85,9));
    txSetFillColor(color);
    POINT home[5] = {{x-int(125*scale/height),y+int(240*scale)}, {x-int(125*scale/height),y+int(40*scale)},
    {x+int(125*scale/height),y+int(40*scale)},{x+int(125*scale/height),y+int(40*scale)},
    {x+int(125*scale/height),y+int(240*scale)}};
    txPolygon (home, 5);

    //�����
    txSetColor(TX_ORANGE);
    txSetFillColor(RGB(228,163,90));
    POINT kr[4] = {{x-int(125*scale/width),y+int(40*scale/width)}, {x,y-int(60*scale/width)},{x+int(125*scale/width),y+int(40*scale/width)},
    {x-int(125*scale/width),y+int(40*scale/width)}};
    txPolygon (kr, 4);
    txRectangle (x+int(25*scale/height),y+160*scale,x+int(75*scale/height),y+240*scale);

    txSetColor(TX_BLACK);             //�����
    txSetFillColor(TX_LIGHTBLUE);
    txCircle (x+int(65*scale/height),y+200*scale,4*scale/height);
    txRectangle(x-int(100*scale/height),y+int(140*scale/height),x/height,y+int(140*scale/height));
                                    //����
    txCircle (x,y,20*scale);
    txLine (x,y-20*scale,x,y+20*scale);
    txLine (x-20*scale,y,x+20*scale,y);

    txSetColor(TX_WHITE);           //�������
    txLine (x+100*scale,y+240*scale,x+150*scale,y+300*scale);
    txLine (x+100*scale,y+360*scale,x,y+240*scale);
    txLine (x+150*scale,y+300*scale,x+825*scale,y+300*scale);
}

void draw_cat(int x,int y,double scale,COLORREF color,int eyes,double ears,int mirroring)
{
    //���
    txSetColor (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txSetFillColor (color);
    txCircle (x-90*scale*mirroring,y-40*scale,30*scale);         //������
    txSetFillColor (TX_BLACK);
    txCircle (x-100*scale*mirroring,y-45*scale,4*scale*eyes);          //�����
    txCircle (x-75*scale*mirroring,y-45*scale,4*scale*eyes);
    txSetColor (TX_BLACK);
    txLine (x-80*scale*mirroring,y-35*scale,x-100*scale*mirroring,y-15*scale);    //��c � ���
    txLine (x-100*scale*mirroring,y-35*scale,x-80*scale*mirroring,y-15*scale);
    txLine (x-100*scale*mirroring,y-35*scale,x-80*scale*mirroring,y-35*scale);
    txSetColor (color,5*scale);        //���
    txLine (x-120*scale*mirroring,y-50*scale,x-(120*scale-ears)*mirroring,y-75*scale-ears);
    txLine (x-(120*scale-ears)*mirroring,y-75*scale-ears,x-100*scale*mirroring,y-65*scale);
    txLine (x-60*scale*mirroring,y-50*scale,x-(60*scale-ears)*mirroring,y-75*scale-ears);
    txLine (x-(60*scale-ears)*mirroring,y-75*scale-ears,x-80*scale*mirroring,y-65*scale);
    txSetColor (color,20*scale);       //���
    txLine (x-90*scale*mirroring,y-10*scale,x-90*scale*mirroring,y+20*scale);
    txSetColor(color,30*scale);        //����
    txLine (x-90*scale*mirroring,y+10*scale,x-10*scale*mirroring,y+10*scale);
    txSetColor (color,15*scale);       //����
    txLine (x-100*scale*mirroring,y-5*scale,x-100*scale*mirroring,y+50*scale);
    txLine (x,y,x,y+50*scale);
    txLine (x-20*scale*mirroring,y+20*scale,x-20*scale*mirroring,y+50*scale);
    txLine (x-80*scale*mirroring,y+20*scale,x-80*scale*mirroring,y+50*scale);
    txLine (x+10*scale*mirroring,y-40*scale,x,y);
    txLine (x+10*scale*mirroring,y-40*scale,x-25*scale*mirroring,y-60*scale);
}

void draw_rabbit(int x,int y,double scale,COLORREF color,int tail,double ears,int mirroring)
{
    //����
    txSetColor (TX_BLACK);
    txSetFillColor (color);
    txCircle (x,y,20*scale); //������
    txCircle (x-5*scale*mirroring,y-5*scale,2*scale);  //�����
    txCircle (x+5*scale*mirroring,y-5*scale,2*scale);
    txLine (x-5*scale*mirroring,y+5*scale,x+5*scale*mirroring,y+15*scale);   //��c � ���
    txLine (x+5*scale*mirroring,y+5*scale,x-5*scale*mirroring,y+15*scale);
    txLine (x+5*scale*mirroring,y+5*scale,x-5*scale*mirroring,y+5*scale);
    txSetColor (color);
    txLine (x+5*scale*mirroring,y-20*scale,x+15*scale*mirroring,y-50*scale);  //���
    txLine (x,y-20*scale,x+10*scale*mirroring,y-50*scale);
    txLine (x+10*scale*mirroring,y-50*scale,x+35*scale*ears*mirroring,y-10*scale*ears);
    txLine (x+15*scale*mirroring,y-45*scale,x+50*scale*ears*mirroring,y-20*scale*ears);
    txLine (x+35*scale*ears*mirroring,y-10*scale*ears,x+50*scale*ears*mirroring,y-20*scale*ears);
    txLine (x-5*scale*mirroring,y-20*scale,x-15*scale*mirroring,y-50*scale);
    txLine (x-10*scale*mirroring,y-20*scale,x-20*scale*mirroring,y-55*scale);
    txLine (x-20*scale*mirroring,y-55*scale,x-50*scale*ears*mirroring,y-20*scale*ears);
    txLine (x-15*scale*mirroring,y-50*scale,x-30*scale*ears*mirroring,y-10*scale*ears);
    txLine (x-50*scale*ears*mirroring,y-20*scale*ears,x-30*scale*ears*mirroring,y-10*scale*ears);
    txSetColor (color,10*scale);
    txLine (x,y+20*scale,x,y+40*scale);        //���
    txSetColor (color,7);
    txLine (x,y+40*scale,x,y+70*scale);        //����
    txLine (x+10*scale*mirroring,y+40*scale,x+10*scale*mirroring,y+70*scale);
    txLine (x+25*scale*mirroring,y+50*scale,x+25*scale*mirroring,y+70*scale);
    txLine (x+35*scale*mirroring,y+50*scale,x+35*scale*mirroring,y+70*scale);
    txSetColor(color,25*scale);
    txLine (x+5*scale*mirroring,y+40*scale,x+30*scale*mirroring,y+50*scale);     //����
    txSetColor (color,5*scale);
    txCircle (x+40*scale*mirroring,y+40*scale,5*scale*tail);
}

void draw_bear(int x,int y,double scale,COLORREF color,double ears,double height)
{
    //�������,
    txSetColor (color);
    txSetFillColor (color);
    txCircle (x,y,25*scale);  //������
    txCircle (x-20*scale,y-10*scale,10*scale*ears); //���
    txCircle (x+20*scale,y-10*scale,10*scale*ears);
    txSetColor (TX_BLACK);
    txCircle (x-15*scale,y-5*scale,3*scale);  //�����
    txCircle (x+10*scale,y-5*scale,3*scale);
    txLine (x-10*scale,y+5*scale,x+10*scale,y+20*scale); //��� � ���
    txLine (x+10*scale,y+5*scale,x-10*scale,y+20*scale);
    txLine (x-10*scale,y+5*scale,x+10*scale,y+5*scale);
    txSetColor (color,40*scale);  //����
    txLine (x,y+35*scale*height,x,y+115*scale*height);
    txSetColor (color,20*scale);  //����
    txLine (x-20*scale,y+40*scale,x-50*scale,y+80*scale);
    txLine (x+25*scale,y+40*scale,x+50*scale,y+80*scale);
    txLine (x-20*scale,y+120*scale,x-20*scale,y+150*scale);  //����
    txLine (x+20*scale,y+120*scale,x+20*scale,y+150*scale);
    txLine (x-20*scale,y+150*scale,x-35*scale,y+150*scale);
    txLine (x+20*scale,y+150*scale,x+35*scale,y+150*scale);
}

void draw_man(int x,int y,double scale,COLORREF color,double legs,int smile)
{
    //�������
    txSetColor(TX_BLACK);
    txSetFillColor(RGB(242,219,199));
    txCircle (x,y,25*scale);
    txCircle (x-10*scale,y-5*scale,5*scale);
    txCircle (x+10*scale,y-5*scale,5*scale);
    txLine (x-10*scale*smile,y+5*scale*smile,x,y+15*scale);
    txLine (x+10*scale*smile,y+5*scale*smile,x,y+15*scale);
    txSetColor(color,5);
    txLine (x,y+25*scale,x,y+100*scale);
    txLine (x-15*scale,y+35*scale,x+15*scale,y+35*scale);
    txLine (x-15*scale,y+35*scale,x-20*scale,y+100*scale);
    txLine (x+15*scale,y+35*scale,x+20*scale,y+100*scale);
    txLine (x,y+100*scale,x-25*scale*legs,y+150*scale*legs);
    txLine (x,y+100*scale,x+25*scale*legs,y+150*scale*legs);
}

