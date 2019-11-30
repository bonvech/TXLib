/** \file "MKLib.h"
*   \author ��� ��������
*   \date 2019-11-26
*/


/**
 *\param x ������������ ���� �� �������������� ����������
 *\param y ������������ ���� �� ������������ ����������
 *\param scale ������ ����
 *\param color ���� ����
 *\param color2 ���� ���������
 *\param mov ��������� ��������� ���� (0 - 10)
 *\param dir ���������� ���� (������� ������� ��� ������)
 *> ������ �������������:
 *\code
  draw_Fish(115,50,1.,RGB(186,148,255),RGB(102,102,255),0,0,1);
 *\endcode
 */
void draw_Fish(int x, int y,double scale,COLORREF color,COLORREF color2,int mov,int dir);

/**
 *\param x ������������ �� �������������� ����������
 *\param y ������������ �� ������������ ����������
 *\param scale ������
 *\param color ���� ����
 *\param color2 ���� ������
 *\param rohand ��������� ����� ������ ���� �� ����
 *\param rthand ��������� ����� ������ ���� � ������� (������ �����)
 *> ������ �������������:
 *\code
  draw_Robot(120,790,1.,RGB(255,0,0),RGB(30,30,30),0,0);
 *\endcode
 */
void draw_Robot(int x, int y,double scale,COLORREF color,COLORREF color2,int rohand,int rthand);

/**
 *\param x ������������ �� �������������� ����������
 *\param y ������������ �� ������������ ����������
 *\param scale ������
 *\param color ���� ������
 *\param color2 �������� �� ���� ����
 *\param rhand ��������� ����� ������ ����
 *\param lhand ��������� ����� ����� ����
 *> ������ �������������:
 *\code
  draw_Human(700,320,0.5,RGB(20,20,20),RGB(255,255,255),0,0);
 *\endcode
 */
void draw_Human(int x,int y,double scale,COLORREF color,COLORREF color2,int rhand,int lhand);

/**
 *\param x ������������ �� �������������� ����������
 *\param y ������������ �� ������������ ����������
 *\param scale ������
 *\param color ���� ������� ������
 *\param color2 ���� ��������� ������
 *\param stcircle ��������� ������� �����
 *\param ndcircle ��������� ������� �����
 *\param dir ���������� (������� ������� ��� ������)
 *> ������ �������������:
 *\code
  draw_Caterpillar(850,50,1.,RGB(153,255,102),RGB(255,255,102),2,-2,1);
 *\endcode
 */
void draw_Caterpillar(int x,int y,double scale,COLORREF color,COLORREF color2,int stcircle,int ndcircle,int dir);

/**
 *\param x ������������ �� �������������� ����������
 *\param y ������������ �� ������������ ����������
 *\param scale ������
 *\param color ����
 *\param roeyebrow ������ ������� ����� ������ ����� (� ����� �������)
 *\param rteyebrow ������ ������ ����� ������ ����� (� ����� �������)
 *\param loeyebrow ������ ������ ����� ����� ����� (� ����� �������)
 *\param lteyebrow ������ ������� ����� ����� ����� (� ����� �������)
 *\param omouth ������ ������ ����� ��� (� ����� �������)
 *\param tmouth ������ ������� ����� ��� (� ����� �������)
 *\param reye ������ ������ ����� � ����� �������)
 *\param leye ������ ������� ����� (� ����� �������)
 *> ������ �������������:
 *\code
  draw_Colobok(1000,700,1.5,RGB(255,255,153),9,4,7,2,0,0,0,0);
 *\endcode
 */
void draw_Colobok(int x,int y,double scale,COLORREF color,int roeyebrow,int rteyebrow,int loeyebrow,int lteyebrow,int omouth,int tmouth,int reye,int leye);

/**
 *\param x ������������ �� �������������� ����������
 *\param y ������������ �� ������������ ����������
 *\param scale ������
 *\param color ����
 *\param rhand ������ ������ ���� (� ����� �������)
 *\param lhand ������ ������ ���� (� ����� �������)
 *\param mod ���������� ��������
 *> ������ �������������:
 *\code
  draw_Pig(360,600,1.,RGB(255,153,153),2,-1,1);
 *\endcode
 */
void draw_Pig(int x,int y,double scale,COLORREF color,int rhand,int lhand,int mod);

void draw_Fish(int x, int y,double scale,COLORREF color,COLORREF color2,int mov,int dir)
{

    POINT fish[9]={  {x-int(85*scale*dir),y},              {x-int(66*scale*dir),         y-int(19*scale)},{x-int(19*scale*dir),y-int(19*scale)},
                     {x- int(1*scale*dir),y},              {x -int(1*scale*dir),                       y},{x-int(19*scale*dir),y+int(19*scale)},
                     {x-int(66*scale*dir),y+int(19*scale)},{x-int(85*scale*dir),                       y},{x-int(85*scale*dir),              y}};

    POINT finone[3]={{x-int(49*scale*dir),y-int(19*scale)},{x-int((29-1*mov)*scale*dir),y-int(39*scale)},{x-int(29*scale*dir),y-int(19*scale)}};

    POINT fintwo[3]={{x-int(49*scale*dir),y+int(19*scale)},{x-int((29-1*mov)*scale*dir),y+int(39*scale)},{x-int(29*scale*dir),y+int(19*scale)}};

    POINT tail[4]={  {x-int(1*scale*dir),y},               {x+int(19*scale*dir),         y-int(19*scale)},{x+int(19*scale*dir),y+int(19*scale)},{x-int(1*scale*dir),y}};

    txSetFillColor(color);
    txSetColor(color);
    txPolygon(fish,9);
    txSetColor(color2);
    txSetFillColor(color2);
    txPolygon(finone,3);
    txPolygon(fintwo,3);
    txPolygon(tail,4);

    txSetColor(TX_BLACK,5*scale);    //����
    txLine(x-66*scale*dir,y-11*scale,x-70*scale*dir,y-7*scale);
    txSetFillColor(TX_WHITE);
}

void draw_Robot(int x, int y,double scale,COLORREF color,COLORREF color2,int rohand,int rthand)
{
    txSetColor(color2,5*scale);
    txLine(x-37*scale,y-180*scale,x+37*scale,y-180*scale);  //����
    txLine(x+37*scale,y-180*scale,x+37*scale,y-105*scale);
    txLine(x+37*scale,y-105*scale,x-37*scale,y-105*scale);
    txLine(x-37*scale,y-105*scale,x-37*scale,y-180*scale);
    txLine(x-22*scale,y-180*scale,x-22*scale,y-200*scale);  //������
    txLine(x-22*scale,y-200*scale,x+23*scale,y-200*scale);
    txLine(x+23*scale,y-200*scale,x+23*scale,y-180*scale);
    txLine(x+37*scale,y-(160+5*rohand)*scale,x+113*scale,y-(85+5*rthand)*scale);  //����
    txLine(x-37*scale,y-160*scale,x-113*scale,y-85*scale);
    txLine(x+18*scale,y-105*scale,x+18*scale,y);  //����
    txLine(x-18*scale,y-105*scale,x-18*scale,y);
    txSetFillColor(color2);  //������� ���� � ������
    txFloodFill(x,y-190*scale);
    txFloodFill(x,y-150*scale);
    txSetColor(color,4*scale);  //�����
    txLine(x-14*scale,y-193*scale,x+15*scale,y-193*scale);
}

void draw_Human(int x,int y,double scale,COLORREF color,COLORREF color2,int rhand,int lhand)
{
    txSetColor(color,22*scale);
    txLine(x,y,x+200*scale,y+(120+5*rhand)*scale);  //����
    txLine(x,y,x-200*scale,y+(120+5*lhand)*scale);
    txLine(x,y,x,y+300*scale);
    txLine(x,y+300*scale,x+150*scale,y+470*scale);
    txLine(x,y+300*scale,x-150*scale,y+470*scale);
    txSetFillColor(RGB (255,232,153));  //������
    txSetColor(color,10*scale);
    txCircle(x,y-50*scale,50*scale);
    txSetColor(color2,3*scale);  //�����
    txLine(x+10*scale,y-70*scale,x+30*scale,y-75*scale);
    txLine(x-10*scale,y-70*scale,x-30*scale,y-75*scale);
    txSetColor(color2,3*scale);  //�����
    txLine(x+15*scale,y-60*scale,x+25*scale,y-60*scale);
    txLine(x-15*scale,y-60*scale,x-25*scale,y-60*scale);
    txSetFillColor(color);  //�����
    txSetColor(color,1*scale);
    txPie(x-50*scale,y-100*scale,x+50*scale,y,180,180);
}

void draw_Caterpillar(int x,int y,double scale,COLORREF color,COLORREF color2,int stcircle,int ndcircle,int dir)
{
    txSetColor(color,17*scale);     //������� �����
    txSetFillColor(color);
    txCircle(x-1*scale*dir,y,30*scale);
    txCircle(x-46*scale*dir,y+(5*stcircle)*scale,30*scale);
    txCircle(x-91*scale*dir,y+(5*ndcircle)*scale,30*scale);
    txCircle(x-136*scale*dir,y,30*scale);
    txCircle(x-181*scale*dir,y,30*scale);
    txCircle(x-226*scale*dir,y,30*scale);
    txCircle(x-271*scale*dir,y,30*scale);
    txCircle(x-316*scale*dir,y,30*scale);
    txSetColor(color2,17*scale);      //��������� �����
    txSetFillColor(color2);
    txCircle(x-1*scale*dir,y,17*scale);
    txCircle(x-46*scale*dir,y+(5*stcircle)*scale,17*scale);
    txCircle(x-91*scale*dir,y+(5*ndcircle)*scale,17*scale);
    txCircle(x-136*scale*dir,y,17*scale);
    txCircle(x-181*scale*dir,y,17*scale);
    txCircle(x-226*scale*dir,y,17*scale);
    txCircle(x-271*scale*dir,y,17*scale);
    txCircle(x-316*scale*dir,y,17*scale);
    txSetColor(TX_BLACK,3*scale);           //����
    txArc(x-24*scale*dir,y-20*scale,x+22*scale*dir,y+20*scale,103,35);     //�����
    txArc(x-24*scale*dir,y-20*scale,x+22*scale*dir,y+20*scale,43,35);
    txArc(x-24*scale*dir,y-20*scale,x+22*scale*dir,y+20*scale,190,160);    //���
    txArc(x-24*scale*dir,y,x+22*scale*dir,y+10*scale,180,180);
    txSetFillColor(TX_WHITE);    //����
    txFloodFill(x-1*dir,y+14*scale);
    txSetColor(TX_BLACK,1*scale);
    txLine(x-1*scale*dir,y+10*scale,x-1*scale*dir,y+20*scale);
    txLine(x+4*scale*dir,y+10*scale,x+5*scale*dir,y+20*scale);
    txLine(x-6*scale*dir,y+10*scale,x-6*scale*dir,y+20*scale);
    txLine(x+9*scale*dir,y+10*scale,x+9*scale*dir,y+18*scale);
    txLine(x-11*scale*dir,y+10*scale,x-11*scale*dir,y+18*scale);
    txLine(x+14*scale*dir,y+10*scale,x+14*scale*dir,y+16*scale);
    txLine(x-16*scale*dir,y+10*scale,x-16*scale*dir,y+16*scale);
    txLine(x-18*scale*dir,y+13*scale,x+16*scale*dir,y+13*scale);
    txSetColor(RGB(255,0,0),3*scale);   //�����
    txLine(x+9*scale*dir,y-13*scale,x+9*scale*dir,y-8*scale);
    txLine(x-11*scale*dir,y-13*scale,x-11*scale*dir,y-8*scale);
}

void draw_Colobok(int x,int y,double scale,COLORREF color,int roeyebrow,int rteyebrow,int loeyebrow,int lteyebrow,int omouth,int tmouth,int reye,int leye)
{
    txSetColor(color);
    txSetFillColor(color);
    txCircle(x,y,50*scale);
    txSetColor(TX_BLACK,2*scale);  //�����
    txLine(x-27*scale,y-(5+1*loeyebrow)*scale,x-17*scale,y-(5+1*lteyebrow)*scale);
    txLine(x+7*scale,y-(5+1*roeyebrow)*scale,x-3*scale,y-(5+1*rteyebrow)*scale);
    txSetColor(TX_RED,3*scale);  //�����
    txLine(x-23*scale,y-(2+1*reye)*scale,x-21*scale,y-(2+1*reye)*scale);
    txLine(x+3*scale,y-(2+1*leye)*scale,x+1*scale,y-(2+1*leye)*scale);
    txSetColor(TX_BLACK,3*scale);  //���
    txLine(x-28*scale,y+(18+1*omouth)*scale,x+8*scale,y+(18+1*tmouth)*scale);
}

void draw_Pig(int x,int y,double scale,COLORREF color,int rhand,int lhand,int mod)
{
    txSetColor(color,1*scale);
    txSetFillColor(color);
    txEllipse(x-45*scale,y-35*scale,x+45*scale,y+35*scale);   //������
    txEllipse(x-50*scale,y+25*scale,x+50*scale,y+125*scale);  //����
    txSetColor(color,8*scale);
    txLine(x+25*scale,y+40*scale,x+(75+5*rhand)*scale,y+(120-5*rhand)*scale);     //����
    txLine(x-25*scale,y+40*scale,x-(75+5*lhand)*scale,y+(120-5*lhand)*scale);
    txLine(x-25*scale,y+100*scale,x-25*scale,y+175*scale);    //����
    txLine(x+25*scale,y+100*scale,x+25*scale,y+175*scale);
    if(mod==1)   //����� � ���
    {
        txSetFillColor(TX_WHITE);
        txSetColor(TX_WHITE,2*scale);
        txCircle(x+25*scale,y,4*scale);
        txCircle(x-25*scale,y,4*scale);
        txLine(x-10*scale,y+10*scale,x+10*scale,y+10*scale);
    }
    else if(mod==2)
    {
        txSetFillColor(TX_BLACK);
        txSetColor(TX_BLACK,2*scale);
        txCircle(x+25*scale,y,4*scale);
        txCircle(x-25*scale,y,4*scale);
        txSetColor(TX_WHITE,2*scale);
        txSetFillColor(TX_WHITE);
        txCircle(x+23*scale,y-2*scale,1*scale);
        txCircle(x-27*scale,y-2*scale,1*scale);
        txLine(x-10*scale,y+10*scale,x+10*scale,y+10*scale);
    }
    else if(mod==3)
    {
        txSetFillColor(TX_BLACK);
        txSetColor(TX_BLACK,2*scale);
        txCircle(x+25*scale,y,4*scale);
        txCircle(x-25*scale,y,4*scale);
        txSetFillColor(TX_WHITE);
        txCircle(x+25*scale,y,3*scale);
        txCircle(x-25*scale,y,3*scale);
        txSetColor(TX_WHITE,2*scale);
        txLine(x-10*scale,y+10*scale,x+10*scale,y+10*scale);
    }
    else if(mod==4)
    {

        txSetFillColor(TX_BLACK);
        txSetColor(TX_BLACK,2*scale);
        txCircle(x+25*scale,y,4*scale);
        txCircle(x-25*scale,y,4*scale);
        txSetFillColor(RGB(255,0,0));
        txCircle(x+25*scale,y,3*scale);
        txCircle(x-25*scale,y,3*scale);
        txSetColor(RGB(255,0,0),2*scale);
        txLine(x-10*scale,y+10*scale,x+10*scale,y+10*scale);
        txSetColor(RGB(255,0,0),1*scale);
        txLine(x-8*scale,y+10*scale,x-8*scale,y+20*scale);
        txLine(x+6*scale,y+10*scale,x+6*scale,y+30*scale);
    }
    else if(mod==5)
    {
        txSetFillColor(TX_BLACK);
        txSetColor(TX_BLACK,2*scale);
        txCircle(x+25*scale,y,4*scale);
        txCircle(x-25*scale,y,4*scale);
        txSetFillColor(RGB(255,0,0));
        txCircle(x+25*scale,y,3*scale);
        txCircle(x-25*scale,y,3*scale);
        txArc(x-20*scale,y+5*scale,x+20*scale,y+15*scale,180,180);
        txArc(x-20*scale,y-5*scale,x+20*scale,y+25*scale,180,180);
        txSetFillColor(RGB(255,0,0));
        txFloodFill(x,y+20*scale);
        txSetColor(TX_BLACK,1*scale);
        txLine(x,y+25*scale,x+3*scale,y+15*scale);
        txLine(x,y+25*scale,x-3*scale,y+15*scale);
        txLine(x+3*scale,y+15*scale,x+6*scale,y+25*scale);
        txLine(x-3*scale,y+15*scale,x-6*scale,y+25*scale);
        txLine(x+6*scale,y+25*scale,x+8*scale,y+15*scale);
        txLine(x-6*scale,y+25*scale,x-8*scale,y+15*scale);
        txLine(x+8*scale,y+15*scale,x+12*scale,y+22*scale);
        txLine(x-8*scale,y+15*scale,x-12*scale,y+22*scale);
        txLine(x+12*scale,y+22*scale,x+13*scale,y+13*scale);
        txLine(x-12*scale,y+22*scale,x-13*scale,y+13*scale);
        txLine(x+13*scale,y+13*scale,x+17*scale,y+18*scale);
        txLine(x-13*scale,y+13*scale,x-17*scale,y+18*scale);
    }
}
