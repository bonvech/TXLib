///@file CatLib.h
/**
\brief ������ �����
\param x x-���������� ������� ����� x
\param y y-���������� ������� ����� y
\param color-���� �����
\param double scale  double scale-������
\param dir dir-�����������
\param tail tail-������ ������� ������
\param ears ears-������ ����
\������ �������������
\code
    draw_cat(900,100,RGB(204,204,153),0.5,20,10,1)
\endcode
*/
void draw_cat(int x,int y,COLORREF color,double scale,int tail,int ears,int dir);
/**
\brief ������ ������
\param x x-���������� ������� ����� x
\param y y-���������� ������� ����� y
\param color-���� �����
\param scale  double scale-������
\param dir-�����������
\param height height-������ ������� �����
\param wheel wheel-������ �����
\������ �������������
\code
    draw_car(150,800,RGB(20,60,244),1,0,0,1);
\endcode

*/
void draw_car(int x,int y,COLORREF color,double scale,int wheel,int height,int dir);
/**
\brief ������ ���
\param x x-���������� ������� ����� x
\param y y-���������� ������� ����� y
\param color-���� �����
\param scale  double scale-������
\param dir-�����������
\param thickness thickness-������ ����
\param elevation elevation-������ ����
\������ �������������
\code
    draw_sharik(700,300,RGB(255,0,0),1,0,0,1);
\endcode

*/
void draw_sharik(int x,int y,COLORREF color,double scale,int thickness,int elevation,int dir);
/**
\brief ������ ���������
\param x x-���������� ������� ����� x
\param y y-���������� ������� ����� y
\param color-���� �����
\param scale  double scale-������
\param dir-�����������
\param foot foot-������ ������� ���
\param hand hand-������ ������� ���
\������ �������������
\code
    draw_man(300,500,RGB(158,243,98),1,-20,-30,-1);
\endcode


*/
void draw_man(int x,int y,COLORREF color,double scale,int foot,int hand,int dir);
/**
\brief ������ ������
\param x x-���������� ������� ����� x
\param y y-���������� ������� ����� y
\param color-���� �����
\param scale  double scale-������
\param dir-�����������
\param leg leg-������ ������� ���, �� ��� ������
\param beak beak-������ �����
\������ �������������
\code
    draw_bird(1456,658,RGB(255,0,0),1,100,-5,-1);
\endcode

*/
void draw_bird(int x,int y,COLORREF color,double scale,int leg,int beak,int dir);



void draw_cat(int x,int y,COLORREF color, double scale,int tail,int ears,int dir)
{
    txSetFillColor(color);
    txSetColor(TX_ORANGE,int(10*scale));
    if(dir==1)
    {    dir=1;
        txCircle(x,y+int(200*dir*scale),int(150*scale));
        txCircle(x,y,int(100*dir*scale));
        txLine(x-int(35*scale),y-int(100*dir*scale),x-70*scale,y-130*dir*scale-ears);
        txLine(x-70*scale,y-130*dir*scale-ears,x-70*scale,y-70*dir*scale);
        txLine(x+35*scale,y-100*dir*scale,x+70*scale,y-130*dir*scale-ears);
        txLine(x+70*scale,y-130*dir*scale-ears,x+70*scale,y-70*dir*scale);
        txLine(x+150*scale,y+170*dir*scale,x+220*scale,y+100*dir*scale-tail);
        txLine(x+30*scale,y+20*dir*scale,x-10*scale,y-30*dir*scale);
        txLine(x-30*scale,y+20*dir*scale,x+10*scale,y-30*dir*scale);
        txSetColor(TX_GREEN,5*scale);
        txCircle(x-30*scale,y-50*dir*scale,10*scale);
        txCircle(x+30*scale,y-50*dir*scale,10*scale);
        txSetColor(TX_BLUE,2*scale);
        txCircle(x-30*scale,y-50*dir*scale,2*scale);
        txCircle(x+30*scale,y-50*dir*scale,2*scale);
    }
    else
    {
        txCircle(x,y+int(200*dir*scale),int(150*scale));
        txCircle(x,y,int(100*dir*scale));
        txLine(x-int(35*scale),y-int(100*dir*scale),x-70*scale,y-130*dir*scale-ears);
        txLine(x-70*scale,y-130*dir*scale-ears,x-70*scale,y-70*dir*scale);
        txLine(x+35*scale,y-100*dir*scale,x+70*scale,y-130*dir*scale-ears);
        txLine(x+70*scale,y-130*dir*scale-ears,x+70*scale,y-70*dir*scale);
        txLine(x+150*scale,y+170*dir*scale,x+220*scale,y+100*dir*scale-tail);
        txLine(x+30*scale,y+20*dir*scale,x-10*scale,y-30*dir*scale);
        txLine(x-30*scale,y+20*dir*scale,x+10*scale,y-30*dir*scale);
        txSetColor(TX_GREEN,5*scale);
        txCircle(x-30*scale,y-50*dir*scale,10*scale);
        txCircle(x+30*scale,y-50*dir*scale,10*scale);
        txSetColor(TX_BLUE,2*scale);
        txCircle(x-30*scale,y-50*dir*scale,2*scale);
        txCircle(x+30*scale,y-50*dir*scale,2*scale);
    }
}

void draw_car(int x,int y,COLORREF color,double scale,int wheel,int height,int dir)
{
    txSetColor(color,2*scale);
    txSetFillColor(color);
    if(dir==1)
    {    dir=1;
         POINT car[4]{{x*dir,y+int(30*scale)},{int(115*scale)+x,y+int(30*scale)},{int(115*scale)+x,y},{x,y}};
         txPolygon(car,4);
         txSetFillColor(TX_WHITE);
         POINT window[4]{{int(25*scale+x)*dir,y},{int(45*scale+x)*dir,y-int(20*scale)},{int(115*scale+x)*dir,y-int(20*scale)},{int(115*scale+x)*dir,y}};
         txPolygon(window,4);
         txLine(int(75*scale)+x,y-int(20*scale),x+int(75*scale),y);
         txCircle(int(15*scale)+x,y+int(30*scale+height),int(20*scale+wheel));
         txCircle(int(100*scale)+x,y+int(30*scale+height),int(20*scale+wheel));                          //�������
    }
    else
    {
         POINT car[4]{{x,y+int(30*scale)},{int(115*scale)*dir+x,y+int(30*scale)},{int(115*scale*dir)+x,y},{x,y}};
         txPolygon(car,4);
         txSetFillColor(TX_WHITE);
         POINT window[4]{{int(25*scale*dir)+x,y},{int(45*scale*dir)+x,y-int(20*scale)},{int(115*scale*dir)+x,y-int(20*scale)},{int(115*scale*dir)+x,y}};
         txPolygon(window,4);
         txLine(int(75*scale*dir)+x,y-int(20*scale),x+75*scale*dir,y);
         txCircle(int(15*scale*dir)+x,y+int(30*scale+height),int(20*scale+wheel));
         txCircle(int(100*scale*dir)+x,y+int(30*scale+height),int(20*scale+wheel));
    }

}

void draw_sharik(int x,int y,COLORREF color,double scale,int thickness,int elevation,int dir)
{
    txSetFillColor(color);
    txSetColor(color);
    if(dir==1)
    {   dir=1;                    //��������� ���
        txEllipse(x-100*scale-thickness,y-100*dir*scale-elevation,x+100*scale+thickness,y+100*dir*scale+elevation);
        txSetColor(TX_WHITE,5*scale);
        txLine(x-100*scale,y,x-50*scale,y+220*dir*scale);
        txLine(x+100*scale,y,x+50*scale,y+220*dir*scale);
        txLine(x,y,x,y+150*dir*scale);
        txLine(x-100*scale,y,x+100*scale,y);
        txLine(x-64*scale,y+150*dir*scale,x+64*scale,y+150*dir*scale);
        txLine(x-50*scale,y+220*dir*scale,x+50*scale,y+220*dir*scale);
    }
     else
    {
        txEllipse(x-100*scale-thickness,y-100*dir*scale-elevation,x+100*scale+thickness,y+100*scale*dir+elevation);
        txSetColor(TX_WHITE,5*scale);
        txLine(x-100*scale,y,x-50*scale,y+220*dir*scale);
        txLine(x+100*scale,y,x+50*scale,y+220*dir*scale);
        txLine(x,y,x,y+150*dir*scale);
        txLine(x-100*scale,y,x+100*scale,y);
        txLine(x-64*scale,y+150*dir*scale,x+64*scale,y+150*scale*dir);
        txLine(x-50*scale,y+220*dir*scale,x+50*scale,y+220*scale*dir);
    }
}

void draw_man(int x,int y, COLORREF color,double scale,int foot,int hand,int dir)
{
    txSetFillColor(color);
    txSetColor(color,3*scale);
    if(dir==1)
    {   dir=1;            //���������
        txCircle(x-80*scale,y-30*scale*dir,30*scale);
        txLine(x-80*scale,y+70*scale*dir,x-80*scale,y);
        txLine(x-80*scale,y+70*scale*dir,x-100*scale-foot,y+150*scale*dir);
        txLine(x-80*scale,y+10*scale*dir,x,y+hand);
        txLine(x-80*scale,y+10*scale*dir,x-140*scale,y+70*scale*dir);
        txLine(x-80*scale,y+70*scale*dir,x-40*scale+foot,y+150*scale*dir);
    }
     else
    {   txCircle(x-80*scale,y-30*scale*dir,30*scale);
        txLine(x-80*scale,y+70*scale*dir,x-80*scale,y);
        txLine(x-80*scale,y+70*scale*dir,x-100*scale-foot,y+150*scale*dir);
        txLine(x-80*scale,y+10*scale*dir,x,y+hand);
        txLine(x-80*scale,y+10*scale*dir,x-140*scale,y+70*scale*dir);
        txLine(x-80*scale,y+70*scale*dir,x-40*scale+foot,y+150*scale*dir);
    }
}

void draw_bird(int x,int y,COLORREF color,double scale,int leg,int beak,int dir)
{
    txSetFillColor(color);
    if(dir==1)
    {   dir=1;
    txSetColor(TX_ORANGE,4*scale);
    txCircle(x+100*dir*scale,y+100*scale,100*scale);
    txCircle(x,y,50*scale);
    txLine(x+100*scale*dir,y+200*scale,x+60*scale*dir+leg,y+280*scale);  //����
    txLine(x+100*scale*dir,y+200*scale,x+140*scale*dir-leg,y+280*scale);
    txLine(x+70*scale*dir,y+130*scale,x+140*scale*dir,y+100*scale);  //��������
    txLine(x+70*scale*dir,y+70*scale,x+140*scale*dir,y+100*scale);
    txLine(x-80*scale*dir,y,x-47*scale*dir,y+15*scale+beak);              //����
    txLine(x-80*scale*dir,y,x-47*scale*dir,y-15*scale-beak);
    txLine(x+170*scale*dir,y+30*scale,x+220*scale*dir,y-50*scale);
    txSetColor(TX_BLUE,3*scale);
    txCircle(x-20*scale*dir,y-25*scale,7*scale);
    txCircle(x-20*scale*dir,y-25*scale,2*scale);
    }
    else
    {
        txSetColor(TX_ORANGE,4*scale);
        txCircle(x+100*dir*scale,y+100*scale,100*scale);
        txCircle(x,y,50*scale);
        txLine(x+100*scale*dir,y+200*scale,x+60*scale*dir+leg,y+280*scale);  //����
        txLine(x+100*scale*dir,y+200*scale,x+140*scale*dir-leg,y+280*scale);
        txLine(x+70*scale*dir,y+130*scale,x+140*scale*dir,y+100*scale);  //��������
        txLine(x+70*scale*dir,y+70*scale,x+140*scale*dir,y+100*scale);
        txLine(x-80*scale*dir,y,x-47*scale*dir,y+15*scale+beak);              //����
        txLine(x-80*scale*dir,y,x-47*scale*dir,y-15*scale-beak);
        txLine(x+170*scale*dir,y+30*scale,x+220*scale*dir,y-50*scale);
        txSetColor(TX_BLUE,3*scale);
        txCircle(x-20*scale*dir,y-25*scale,7*scale);
        txCircle(x-20*scale*dir,y-25*scale,2*scale);
     }
}



