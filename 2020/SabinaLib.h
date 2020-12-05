//======================================================================================================================================================================
//{
/// \author Сабина Насирова
///
/// \file SabinaLib.h
//}

//======================================================================================================================================================================
//{
/// \brief рисует свинку
///
/// \param xpig      координаты по оси x
/// \param ypig      координаты по оси y
/// \param scalepig  коэффицент размера
/// \param mirrorpig коэффицент отражения
/// \param crown     рисования короны
/// \param body      цвет тела свинки
/// \param face      цвет морды
///
/// \code
///        xpig = i*200 + 100;
///        ypig=300;
///        scalepig=1;
///        body = RGB(rand()%256, rand()%256, rand()%256);
///        face = RGB(rand()%256, rand()%256, rand()%256);
///        crown = i*200;
///        if(crown > 200)
///        {
///             //crown
///             txSetColor(TX_YELLOW, 8);
///             txLine(xpig-40*mirrorpig*scalepig, ypig-170*mirrorpig*scalepig, xpig-60*mirrorpig*scalepig, ypig-210*mirrorpig*scalepig);
///             txLine(xpig-60*mirrorpig*scalepig, ypig-210*mirrorpig*scalepig, xpig-30*mirrorpig*scalepig, ypig-200*mirrorpig*scalepig);
///             txLine(xpig-30*mirrorpig*scalepig, ypig-200*mirrorpig*scalepig, xpig-20*mirrorpig*scalepig, ypig-230*mirrorpig*scalepig);
///             txLine(xpig-20*mirrorpig*scalepig, ypig-230*mirrorpig*scalepig, xpig,                       ypig-200*mirrorpig*scalepig);
///             txLine(xpig,                       ypig-200*mirrorpig*scalepig, xpig+20*mirrorpig*scalepig, ypig-230*mirrorpig*scalepig);
///             txLine(xpig+20*mirrorpig*scalepig, ypig-230*mirrorpig*scalepig, xpig+20*mirrorpig*scalepig, ypig-180*mirrorpig*scalepig);
///             txLine(xpig+20*mirrorpig*scalepig, ypig-180*mirrorpig*scalepig, xpig-40*mirrorpig*scalepig, ypig-170*mirrorpig*scalepig);
///        }
///        mirrorpig = rand()%2;
///        if(mirrorpig==0)
///        {
///                mirrorpig=-1;
///        }
///        draw_pig(xpig, ypig, mirrorpig, scalepig, body, face, crown);
/// \endcode
//}=====================================================================================================================================================================

void draw_pig(int xpig, int ypig, int mirrorpig, double scalepig, COLORREF body, COLORREF face, int crown);

//======================================================================================================================================================================
//{
/// \brief рисует самолет
///
/// \param xplane      координаты по оси x
/// \param yplane      координаты по оси y
/// \param scaleplane  коэффицент размера
/// \param mirrorplane коэффицент отражения
/// \param plane1      цвет самолета
///
/// \code
///        xplane=i*100+100;
///        yplane=i*100+100;
///        scaleplane=1;
///        plane1=RGB(rand()%256, rand()%256, rand()%256);
///        mirrorplane=rand()%2;
///        if(mirrorplane==0)
///        {
///                mirrorplane=-1;
///        }
///        draw_plane(xplane, yplane, mirrorplane, scaleplane, plane1);
/// \endcode
//}=====================================================================================================================================================================

void draw_plane(int xplane, int yplane, int mirrorplane, double scaleplane, COLORREF plane1);

//======================================================================================================================================================================
//{
/// \brief рисует елку
///
/// \param xtree    координаты по оси x
/// \param ytree     координаты по оси y
/// \param scaletree коэффицент размера
/// \param n         количество треугольников
/// \param compress  расстояние между треугольниками
///
/// \code
///        xtree=1000;
///        ytree=1120;
///        christmas_tree(xtree, ytree, n, compress, scaletree)
/// \endcode
//}=====================================================================================================================================================================

void christmas_tree(int xtree, int ytree, int n, double compress, double scaletree);

//======================================================================================================================================================================
void draw_pig(int xpig, int ypig, int mirrorpig, double scalepig, COLORREF body, COLORREF face, int crown)
{
     //pig
     txSetColor(face, 5);
     txSetFillColor(body);
     txCircle(xpig, ypig-90*mirrorpig*scalepig, 90*mirrorpig*scalepig);
     //nose
     txCircle(xpig,                       ypig-90*mirrorpig*scalepig, 40*mirrorpig*scalepig);
     txCircle(xpig-20*mirrorpig*scalepig, ypig-90*mirrorpig*scalepig, 10*mirrorpig*scalepig);
     txCircle(xpig+20*mirrorpig*scalepig, ypig-90*mirrorpig*scalepig, 10*mirrorpig*scalepig);
     //eyes
     txCircle(xpig-60*mirrorpig*scalepig, ypig-90*mirrorpig*scalepig, 20*mirrorpig*scalepig);
     txCircle(xpig+60*mirrorpig*scalepig, ypig-90*mirrorpig*scalepig, 20*mirrorpig*scalepig);
     txCircle(xpig-60*mirrorpig*scalepig, ypig-90*mirrorpig*scalepig, 5*mirrorpig*scalepig);
     txCircle(xpig+60*mirrorpig*scalepig, ypig-90*mirrorpig*scalepig, 5*mirrorpig*scalepig);
     //mouth
     txLine(xpig-30*mirrorpig*scalepig, ypig-60*mirrorpig*scalepig, xpig-20*mirrorpig*scalepig, ypig-40*mirrorpig*scalepig);
     txLine(xpig-20*mirrorpig*scalepig, ypig-40*mirrorpig*scalepig, xpig+20*mirrorpig*scalepig, ypig-40*mirrorpig*scalepig);
     txLine(xpig+20*mirrorpig*scalepig, ypig-40*mirrorpig*scalepig, xpig+30*mirrorpig*scalepig, ypig-60*mirrorpig*scalepig);
}

void draw_plane(int xplane, int yplane, int mirrorplane, double scaleplane, COLORREF plane1)
{
     //plane
     txSetColor(plane1);
     txSetFillColor(plane1);
     POINT plane [5] = {{xplane+40*mirrorplane*scaleplane, yplane+40*mirrorplane*scaleplane}, {xplane-70*mirrorplane*scaleplane, xplane+40*mirrorplane*scaleplane}, {xplane-100*mirrorplane*scaleplane, yplane+50*mirrorplane*scaleplane}, {xplane-70*mirrorplane*scaleplane, yplane+60*mirrorplane*scaleplane}, {xplane+40*mirrorplane*scaleplane, yplane+60*mirrorplane*scaleplane}};
     txPolygon (plane, 5); // Я кривой самолет
     //wing1
     POINT wing1 [4] = {{xplane-30*mirrorplane*scaleplane, yplane+60*mirrorplane*scaleplane}, {xplane, yplane+100*mirrorplane*scaleplane}, {xplane+30*mirrorplane*scaleplane, yplane+100*mirrorplane*scaleplane}, {xplane, yplane+60*mirrorplane*scaleplane}};
     txPolygon (wing1, 4); // Я кривое крыло
     //wing2
     POINT wing2 [4] = {{xplane+20*mirrorplane*scaleplane, yplane+60*mirrorplane*scaleplane}, {xplane+40*mirrorplane*scaleplane, yplane+80*mirrorplane*scaleplane}, {xplane+60*mirrorplane*scaleplane, yplane+80*mirrorplane*scaleplane}, {xplane+40*mirrorplane*scaleplane, yplane+50*mirrorplane*scaleplane}};
     txPolygon (wing2, 4); // Я кривое крыло
     //wing3
     POINT wing3 [4] = {{xplane-40*mirrorplane*scaleplane, yplane+50*mirrorplane*scaleplane}, {xplane, yplane+50*mirrorplane*scaleplane}, {xplane+40*mirrorplane*scaleplane, yplane}, {xplane, yplane}};
     txPolygon (wing3, 4); // Я кривое крыло
     //glass
     POINT glass [4] = {{xplane-70*mirrorplane*scaleplane, yplane+60*mirrorplane*scaleplane}, {xplane-60*mirrorplane*scaleplane, yplane+70*mirrorplane*scaleplane}, {xplane-40*mirrorplane*scaleplane, yplane+70*mirrorplane*scaleplane}, {xplane-30*mirrorplane*scaleplane, yplane+60*mirrorplane*scaleplane}};
     txPolygon (glass, 4); // Я кривое стекло
}
void christmas_tree(int xtree, int ytree, int n, double compress, double scaletree)

{
    int r = 20;
    txSetColor(TX_GREEN);
    txSetFillColor(RGB(rand()%256, rand()%256, rand()%256));

    for(int j = 0; j < 1; j++)
    {
        txSetFillColor(RGB(rand()%256, rand()%256, rand()%256));
        for(int i = 0; i < n; i++)
        {
            POINT christmas_tree [3]={{xtree*scaletree+j*(compress*r),  ytree*scaletree+i*(compress*r)}, {(xtree+130)*scaletree+j*(compress*r), ytree*scaletree+i*(compress*r)}, {(xtree+60)*scaletree+j*(compress*r), (ytree-80)*scaletree+i*(compress*r)}};
            txPolygon (christmas_tree, 3);// я кривая елка
        }
    }
}


