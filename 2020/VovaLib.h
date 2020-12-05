//======================================================================================================================
//{
///    \author Плотников Владимир
///
///    \file   VovaLib.h
//}

//======================================================================================================================
//{
///    \brief Рисует самолет
///
///    \param  x       координата по оси x верхней точки хвоста самолета
///    \param  y       координата по оси y верхней точки хвоста самолета
///    \param  scale   коэффициент увеличения размера
///    \param  color   цвет корпуса
///    \param  color2  цвет стекол
///    \param  zombie  номер окна в котором находится зомби
///    \param  xmirror коэффициент отражения по оси x
///
///    \warning Параметр zombie от 0 до 4. Параметр xmirror равен либо 1 либо -1
///
///    \code
///        xplain=100;
///        colorplain=RGB(rand()%256,rand()%256,rand()%256);
///        color2plain=RGB(rand()%256,rand()%256,rand()%256);
///        zombieplain=rand()%5;
///        xmirrorplain=rand()%2;
///        if (xmirrorplain==0)
///        {
///            xmirrorplain=-1;
///        }
///       DrawPlain( xplain,  100,  1,  colorplain,  color2plain,  zombieplain,  xmirrorplain) ;
///    \endcode
///
///     \note Рекомендуемый цвет корпуса - RGB(120,160,180), стекла - RGB(120,160,220)
//}===========================================================================================================================

void DrawPlain(double x, double y, double scale, COLORREF color, COLORREF color2, int zombie, int xmirror);

//======================================================================================================================
//{
///    \brief Рисует 1 этаж небоскреба
///
///    \param  x       координата по оси x верхнего левого угла
///    \param  y       координата по оси y верхнего левого угла
///    \param  scale   коэффициент увеличения размера
///    \param  color   цвет стекла
///    \param  xmirror коэффициент отражения по оси x
///
///    \warning Параметр xmirror равен либо 1 либо -1
///
///    \code
///        DrawLevel(100, 200, 1, RGB(123,123,123), 1);
///    \endcode
///
///     \note Рекомендуемый цвет стекла - RGB(120,160,220)
//}=====================================================================================================================

void DrawLevel(double x, double y,double scale, COLORREF color,int xmirror);

//======================================================================================================================
//{
///    \brief Рисует небоскреб
///
///    \param  x       координата по оси x верхнего левого угла
///    \param  y       координата по оси y верхнего левого угла
///    \param  scale   коэффициент увеличения размера
///    \param  color   цвет стекла
///    \param  xmirror коэффициент отражения по оси x
///    \param  flat    число этажей
///
///    \warning Параметр xmirror равен либо 1 либо -1
///
///    \code
///        DrawSky(100, 200, 1, RGB(123,123,123), 1,5);
///    \endcode
///
///     \note Рекомендуемый цвет стекла - RGB(120,160,220)
//}=====================================================================================================================

void DrawSky(double x, double y,double scale, COLORREF color, int xmirror, int flat);

//======================================================================================================================
//{
///     \brief  Рисует огонь
///
///     Прошу не кидайте помидорами, я знаю что он ужасен
///
///     \param  x       координата по оси x центра нижней стороны огня
///     \param  y       координата по оси x центра нижней стороны огня
///     \param  scale   коэффициент увеличения размера
///     \param  color   цвет огня
///     \param  dim     показывает в какой позиции будет дым
///
///     \warning Параметр dim от 0 до 3
///
///     \code
///        dimfaer=rand()%4;
///        colorfaer=RGB(rand()%256,rand()%256,rand()%256);
///        xfaer=100;
///
///        DrawFaer(xfaer, 100, 1, colorfaer, dimfaer);
///     \endcode
///
///     \note Рекомендуемый цвет огня - RGB(245,100,0)
//}=====================================================================================================================

void DrawFaer(double x, double y,double scale,COLORREF color,int dim);

//======================================================================================================================
//{
///     \brief Рисует машину
///
///     \param  x       координата по оси x левого верхнего угла
///     \param  y       координата по оси y левого верхнего угла
///     \param  scale   коэффициент увеличения размера
///     \param  color   цвет корпуса
///     \param  color2  цвет стекол
///     \param  man     параметр, показывающий есть ли в машине человек
///     \param  xmirror коэффициент отражения по оси x
///     \param  ymirror коэффициент отражения по оси y
///
///     \warning Параметр xmirror и ymirror равен либо 1 либо -1. Man бинарный параметр, равен либо 1 либо 0
///
///     \code
///         xcar=100;
///         colorcar=RGB(rand()%256,rand()%256,rand()%256);
///         color2car=RGB(rand()%256,rand()%256,rand()%256);
///         xmirrorcar=rand()%2;
///         if (xmirrorcar==0)
///         {
///         xmirrorcar=-1;
///         }
///         ymirrorcar=rand()%2;
///         if (ymirrorcar==0)
///         {
///         ymirrorcar=-1;
///         }
///         mancar=rand()%2;
///
///         DrawCar(xcar, 200, 1, colorcar, color2car, mancar, xmirrorcar, ymirrorcar);
///     \endcode
///
///     \note Рекомендуемый цвет корпуса - RGB(255, 0 ,0), стекла - RGB(120,160,220)
//}=====================================================================================================================

void DrawCar(double x, double y, double scale, COLORREF color, COLORREF color2, int man, int xmirror, int ymirror);

//======================================================================================================================
//{
///     \brief
///
///     \param  x               координата по оси x центра головы
///     \param  y               координата по оси y центра головы
///     \param  scale           коэффициент увеличения размера
///     \param  color           цвет зомби
///     \param  zombie          номер скина для зомби
///     \param  leftlegangle    угол подъема левой ноги
///     \param  rightlegangle   угол подъема правой ноги
///     \param  leftarmangle    угол подъема левой руки
///     \param  rightarmangle   угол подъема правой руки
///
///
///     \warning Параметр zombie от 0 до 3
///
///     \note Угол подъема выражается в градусах.
///
///     \note Если параметр zombie равен 0 то рисуется обычный человек.
///           Если параметр zombie равен 1 то рисуется зомби с кровавыми потеками на губах и пробитой
///           выстрелом дробовика головой. Если параметр zombie равен 2 то рисуется зомби с кровавыми
///           потеками на губах и отстреленной правой рукой. Если параметр zombie равен 3 то рисуется
///           зомби с кровавыми потеками на губах.
///
///     \code
///         xman=200*i+100;
///         colorman=RGB(rand()%256,rand()%256,rand()%256);
///         zombieman=rand()%4;
///         leftlegangleman=rand()%90;
///         rightlegangleman=rand()%90;
///         leftarmangleman=rand()%90;
///         rightarmangleman=rand()%90;
///
///         DrawMan(xman, yman, scaleman, colorman, zombieman, leftlegangleman, rightlegangleman, leftarmangleman, rightarmangleman);
///     \endcode
///
///     \note Рекомендуемый цвет зомби - RGB(100,200,150), человечка - RGB(213, 172 ,129)
//}=====================================================================================================================

void DrawMan(double x,double y, double scale, COLORREF color, int zombie, int leftlegangle,int rightlegangle, int leftarmangle, int rightarmangle);

void DrawLevel(double x, double y,double scale, COLORREF color, int xmirror)
{
     double xscale=scale*xmirror;
    txSetColor( TX_BLACK ,5*scale);
    txSetFillColor(color);
    txRectangle(x+50*xscale,y,x+250*xscale,y+200*scale);
    txSetColor( TX_BLACK,1*scale );
    txLine(x+100*xscale,y,x+100*xscale,y+200*scale);
    txLine(x+150*xscale,y,x+150*xscale,y+200*scale);
    txLine(x+200*xscale,y,x+200*xscale,y+200*scale);
    txLine(x+250*xscale,y,x+250*xscale,y+200*scale);
    txLine(x+50*xscale,y+100*scale,x+250*xscale,y+100*scale) ;
    txSetColor( TX_BLACK ,5*scale);
    txRectangle(x,y,x+50*xscale,y+200*scale);
    txSetColor( TX_BLACK,1*scale );
    txLine(x+39*xscale,y,x+39*xscale,y+200*scale);
    txLine(x+13*xscale,y,x+13*xscale,y+200*scale);
    txLine(x+26*xscale,y,x+26*xscale,y+200*scale);
    txLine(x,y+100*scale,x+250*xscale,y+100*scale) ;
}

void DrawSky(double x, double y,double scale, COLORREF color, int xmirror, int flat)
{
    for (int i=0;i<=flat; i++)
    {
    DrawLevel(x, y+i*200*scale,scale,color,xmirror);
    }
}

void DrawFaer(double x, double y,double scale,COLORREF color, int dim)
{
    txSetColor(TX_BLACK,1*scale);
    txSetFillColor(color);
    POINT faer[7] = {{int(x),int(y-100*scale)},{int(x-15*scale),int(y-50*scale)},{int(x-12*scale),int(y-34*scale)},
                    {int(x-10*scale),int(y)},{int(x+10*scale),int(y)},
                    {int(x+12*scale),int(y-34*scale)},{int(x+15*scale),int(y-50*scale)}};
    txPolygon (faer, 7);
    if (dim==1)
    {
        txSetColor(RGB(180,180,180));
        txSetFillColor(RGB(180,180,180));
        txEllipse(x,y-150*scale,x+55*scale,y-115*scale) ;
    }
    else if(dim==2)
    {
        txSetColor(RGB(180,180,180));
        txSetFillColor(RGB(180,180,180));
        txEllipse(x+55*scale-50*scale,y-170*scale,x+105*scale-50*scale,y-195*scale) ;
    }
    else if(dim==3)
    {
        txSetColor(RGB(180,180,180));
        txSetFillColor(RGB(180,180,180));
        txEllipse(x+105*scale-50*scale,y-150*scale,x+155*scale-50*scale,y-175*scale) ;
    }
}

void DrawMan(double x, double y, double scale, COLORREF color, int zombie, int leftlegangle,int rightlegangle, int leftarmangle, int rightarmangle)
{
    double PI= 3.14159265;
    double large=120*scale-64*scale;
    double leftlegxpos =sin(leftlegangle * PI / 180)*large;
    double leftlegypos =cos(leftlegangle * PI / 180)*large+64*scale;
    double rightlegxpos =sin(rightlegangle * PI / 180)*large;
    double rightlegypos =cos(rightlegangle * PI / 180)*large+64*scale;
    double leftarmxpos =sin(leftarmangle * PI / 180)*large;
    double leftarmypos =cos(leftarmangle * PI / 180)*large+14*scale;
    double rightarmxpos =sin(rightarmangle * PI / 180)*large;
    double rightarmypos =cos(rightarmangle * PI / 180)*large+14*scale;

    if(zombie==2)
    {
    txSetColor(RGB(255,0,0),15*scale);
    txArc(x-40*scale,y+14*scale,x+40*scale,y+214*scale,90,90);
    }

    else
    {
        txSetColor(color,15*scale) ;
        txSetFillColor(color) ;
        txLine(x,y+14*scale,x-leftarmxpos,y+leftarmypos) ;
    }
    txSetColor(color,15*scale) ;
    txSetFillColor(color) ;
    txLine(x,y+64*scale,x-leftlegxpos,y+leftlegypos) ;
    txLine(x,y+64*scale,x+rightlegxpos,y+rightlegypos);
    txLine(x,y+14*scale,x+rightarmxpos,y+rightarmypos);
    txLine(x,y+14*scale,x,y+64*scale) ;
    txCircle(x,y,13*scale);
    txSetColor( RGB(0,0,0), 1.0*scale);
    txSetFillColor(RGB(0,0,0));
    txCircle(x-8*scale,y-2*scale,3*scale);
    txCircle(x+8*scale,y-2*scale,3*scale);
    txSetColor( RGB(255,100,100),5*scale);
    txArc( x-13*scale,y+11*scale,x+13*scale,y-1*scale,180,180) ;
    if(zombie==1)
    {
        txSetColor( RGB(255,00,00),10*scale);
        txArc(x+13*scale,y-15*scale,x-13*scale,y+5*scale,5,170) ;

    }
    if(zombie>0)
    {
        txSetColor( RGB(255,100,100),5*scale);
        txLine(x+5*scale,y+10*scale,x+5*scale,y+13*scale);
        txLine(x+2*scale,y+10*scale,x+0*scale,y+13*scale );
    }
}

void DrawCar(double x, double y, double scale, COLORREF color, COLORREF color2, int man, int xmirror, int ymirror)
{
    double xscale=scale*xmirror;
    double yscale=scale*ymirror;
    POINT car [7] = {{int(x+0),int(y+0)},{int(x+0),int(y+100*yscale)},{int(x+25*xscale),int(y+150*yscale)},
                    {int(x+400*xscale),int(y+150*yscale)},{int(x+375*xscale),int(y+75*yscale)},
                    {int(x+300*xscale),int(y+75*yscale)},{int(x+225*xscale),int(y+0)}} ;
    txSetColor( TX_BLACK,1*scale);
    txSetFillColor(color);
    txPolygon(  car,7) ;
    txSetFillColor(TX_LIGHTGRAY );
    txSetColor(TX_BLACK,15*scale) ;
    txCircle(x+100*xscale,y+150*yscale,25*scale) ;
    txCircle(x+275*xscale,y+150*yscale,25*scale) ;
    txSetFillColor(color2);
    txSetColor( TX_BLACK,1*scale);
    POINT steclo [3] = {{int(x+225*xscale),int(y+0)},{int(x+300*xscale),int(y+75*yscale)},{int(x+250*xscale),int(y+75*yscale)}};
    txPolygon(steclo,3) ;
    if ((ymirror==-1)& (xmirror==-1))
    {
        txPie (x+50*xscale, y+5*yscale,x+ 240*xscale, y+150*yscale, 180, 90);
    }
    else
    {
        txPie (x+50*xscale, y+5*yscale,x+ 240*xscale, y+150*yscale, ymirror*45-xmirror*45, 90);
    }
    if ((ymirror==-1)& (xmirror==-1))
    {
        xmirror-=4;
    }
    txRectangle(x+25*xscale,y+5*yscale,x+140*xscale,y+75*yscale);
    if (man)
    {
        txSetColor(RGB(213, 172 ,129))     ;
        txSetFillColor(RGB(213, 172 ,129));
        txCircle(x+200*xscale,y+50*yscale,25*scale  ) ;
        txSetColor(RGB(0,0,0));
        txSetFillColor(RGB(0,0,0));
        txPie(x+176*xscale,y+35*yscale,x+196*xscale,y+50*yscale,0,360);
        txPie(x+201*xscale,y+35*yscale,x+221*xscale,y+50*yscale,0,360);
        txArc(x+190*xscale,y+50*yscale,x+207*xscale,y+40*yscale,90-yscale*90,180);
        txSetColor( RGB(255,100,100),5*scale);
        txLine(x+197*xscale,y+57*yscale,x+208*xscale,y+57*yscale);


    }

}

void DrawPlain(double x, double y, double scale, COLORREF color, COLORREF color2, int zombie, int xmirror)
{
    double xscale=scale*xmirror;
    double yscale=scale;
    y+=100*scale;
    x+=50*xscale;
    txSetColor(RGB(245,100,0),1*scale);
    txSetFillColor(RGB(245,100,0));
    POINT faer[7] = {{int(x-100*xscale*2),int(y)},{int(x-50*xscale*2),int(y-15*scale*2)},
                     {int(x-34*xscale*2),int(y-12*scale*2)},{int(x),int(y-10*scale*2)},{int(x),int(y+10*scale*2)},
                     {int(x-34*xscale*2),int(y+12*scale*2)},{int(x-50*xscale*2),int(y+15*scale*2)}};
    txPolygon (faer, 7);
    y-=100*scale;
    x-=50*xscale  ;
    txSetColor( TX_BLACK,1 *scale );
    txSetFillColor(color);
    POINT ving1[3]={{int(x+50*xscale),int(y+0*yscale)},{int(x+100*xscale),int(y+100*yscale)},{int(x+200*xscale),int(y+100*yscale)}};
    txPolygon(ving1,3);
    POINT plain[8] = {{int(x), int(y)}, {int(x), int(y+75*yscale)}, {int(x+50*xscale), int(y+125*yscale)},
                      {int(x+250*xscale),int(y+125*yscale)},
                      {int(x+350*xscale),int(y+100*yscale)},{int(x+275*xscale),int(y+100*yscale)},
                      {int(x+275*xscale),int(y+50*yscale)},
                      {int(x+50*xscale),int(y+50*yscale)}};
    txPolygon (plain, 8);
    txSetColor( TX_BLACK,1*scale  );
    POINT ving[3]={{int(x+50*xscale),int(y+200*yscale)},{int(x+100*xscale),int(y+100*yscale)},
                   {int(x+200*xscale),int(y+100*yscale)}};
    txPolygon(ving,3);
    txSetColor( TX_BLACK,1*scale );
    txSetFillColor(color2);
    txPie (x+200*xscale, y+50*yscale, x+350*xscale, y+150*yscale, 45-xmirror*45, 90);
    txSetColor( TX_BLACK ,5*scale);
    txCircle  (x+75*xscale,y+75*yscale,13*scale)   ;
    txCircle  (x+125*xscale,y+75*yscale,13*scale)  ;
    txCircle  (x+175*xscale,y+75*yscale,13*scale) ;
    txCircle  (x+225*xscale,y+75*yscale,13*scale);
    y=y+75*scale;
    if (zombie==1)
    {
        x=x+75*xscale ;


    }
    else if (zombie==2)
    {
        x=x+125*xscale ;

    }

    else if(zombie==3)
    {
        x=x+175*xscale ;
    }
    else if(zombie==4)
    {
        x=x+225*xscale  ;
    }
    if (zombie>0)
    {
        xscale=xscale*0.7;
        yscale=yscale*0.7 ;
        scale=scale*0.7;
        txSetColor(RGB(100,200,150),15*scale) ;
        txSetFillColor(RGB(100,200,150)) ;
        txCircle(x,y,13*scale);
        txSetColor( RGB(0,0,0), 1.0*scale);
        txSetFillColor(RGB(0,0,0));
        txCircle(x-8*xscale,y-2*yscale,3*scale);
        txCircle(x+8*xscale,y-2*yscale,3*scale);
        txSetColor( RGB(255,100,100),5*scale);
        txArc( x-13*xscale,y+11*yscale,x+13*xscale,y-1*yscale,180,180) ;
        txSetColor( RGB(255,00,00),10*scale);
        txArc(x+13*xscale,y-15*yscale,x-13*xscale,y+5*yscale,5,170) ;
    }

}
