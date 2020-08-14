//Car
#include <windows.h>
#include <GL/glut.h>
#include <math.h>

#define PI 3.1416

//u and f added with all the vertices that make the car so that all parts of the car are moving equally together in a particular direction

float u= 0.0; //a variable to control x-values of coordinates so that the car can move in X-axis. Initially to keep the car still, set u=0
float f= 0.0;



void init()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glOrtho(0.0, 3000.0, 0.0, 3000.0, 0.0, 3000.0);
}



void circle(float radius_x, float radius_y)
{
	int i=0;
	float angle = 0.0;

	glBegin(GL_POLYGON);

		for(i = 0; i < 100; i++)
		{
			angle = 2 * PI * i / 100;
			glVertex2f (cos(angle) * radius_x +u, sin(angle) * radius_y+f);// u and f added with x and y values respectively to control the movement in respective directions
		}

	glEnd();
}


void circle2(float radius_x, float radius_y)
{
	int i=0;
	float angle = 0.0;

	glBegin(GL_POLYGON);

		for(i = 0; i < 100; i++)
		{
			angle = 2 * PI * i / 100;
			glVertex2f (cos(angle) * radius_x, sin(angle) * radius_y);// u and f added with x and y values respectively to control the movement in respective directions
		}

	glEnd();
}

void inner_body()
{
      glPushMatrix();
     glTranslatef(0.0,40.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
      glBegin(GL_POLYGON);
      glColor3f(0.8627450980392157, 0.8627450980392157, 0.8627450980392157);
      //glColor3f(0.9607843137254902, 0.7411764705882353, 0.1215686274509804);

      glVertex2f (672+u,955+f);
glVertex2f (664+u,955+f);
glVertex2f (656+u,953+f);
glVertex2f (648+u,951+f);
glVertex2f (641+u,949+f);
glVertex2f (635+u,949+f);
glVertex2f (631+u,947+f);
glVertex2f (629+u,945+f);
glVertex2f (625+u,943+f);
glVertex2f (621+u,941+f);
glVertex2f (617+u,939+f);
glVertex2f (613+u,937+f);
glVertex2f (609+u,935+f);
glVertex2f (607+u,933+f);
glVertex2f (603+u,930+f);
glVertex2f (601+u,928+f);
glVertex2f (598+u,926+f);
glVertex2f (592+u,922+f);
glVertex2f (590+u,920+f);
glVertex2f (588+u,918+f);
glVertex2f (586+u,918+f);
glVertex2f (584+u,916+f);
glVertex2f (584+u,914+f);
glVertex2f (582+u,912+f);
glVertex2f (582+u,912+f);
glVertex2f (578+u,910+f);
glVertex2f (576+u,910+f);
glVertex2f (574+u,908+f);
glVertex2f (572+u,906+f);
glVertex2f (570+u,904+f);
glVertex2f (568+u,902+f);
glVertex2f (564+u,898+f);
glVertex2f (564+u,896+f);
glVertex2f (562+u,894+f);
glVertex2f (560+u,894+f);
glVertex2f (560+u,892+f);
glVertex2f (558+u,890+f);
glVertex2f (556+u,890+f);
glVertex2f (556+u,888+f);
glVertex2f (553+u,886+f);
glVertex2f (553+u,883+f);
glVertex2f (551+u,881+f);
glVertex2f (549+u,879+f);
glVertex2f (547+u,879+f);
glVertex2f (547+u,877+f);
glVertex2f (545+u,873+f);
glVertex2f (543+u,873+f);
glVertex2f (543+u,871+f);
glVertex2f (541+u,869+f);
glVertex2f (539+u,865+f);
glVertex2f (537+u,861+f);
glVertex2f (537+u,859+f);
glVertex2f (535+u,855+f);
glVertex2f (535+u,853+f);
glVertex2f (535+u,849+f);
glVertex2f (533+u,847+f);
glVertex2f (533+u,845+f);
glVertex2f (529+u,841+f);
glVertex2f (527+u,832+f);
glVertex2f (525+u,826+f);
glVertex2f (525+u,822+f);
glVertex2f (523+u,816+f);
glVertex2f (521+u,808+f);
glVertex2f (523+u,796+f);
glVertex2f (519+u,781+f);
glVertex2f (519+u,744+f);
glVertex2f (517+u,706+f);
glVertex2f (519+u,659+f);
glVertex2f (517+u,646+f);
glVertex2f (517+u,638+f);
glVertex2f (517+u,632+f);
glVertex2f (517+u,624+f);
glVertex2f (515+u,618+f);
glVertex2f (515+u,612+f);
glVertex2f (515+u,610+f);
glVertex2f (515+u,607+f);
glVertex2f (515+u,605+f);
glVertex2f (515+u,605+f);
glVertex2f (515+u,603+f);
glVertex2f (515+u,597+f);
glVertex2f (515+u,589+f);
glVertex2f (515+u,583+f);
glVertex2f (513+u,577+f);
glVertex2f (513+u,569+f);
glVertex2f (513+u,563+f);
glVertex2f (513+u,550+f);
glVertex2f (513+u,540+f);
glVertex2f (513+u,530+f);
glVertex2f (513+u,520+f);
glVertex2f (515+u,507+f);
glVertex2f (515+u,499+f);
glVertex2f (517+u,491+f);
glVertex2f (521+u,481+f);
glVertex2f (525+u,468+f);
glVertex2f (529+u,458+f);
glVertex2f (533+u,448+f);
glVertex2f (537+u,440+f);
glVertex2f (543+u,432+f);
glVertex2f (551+u,424+f);
glVertex2f (558+u,417+f);
glVertex2f (566+u,411+f);
glVertex2f (576+u,407+f);
glVertex2f (586+u,403+f);
glVertex2f (596+u,399+f);
glVertex2f (607+u,397+f);
glVertex2f (619+u,393+f);
glVertex2f (629+u,391+f);
glVertex2f (639+u,389+f);
glVertex2f (650+u,389+f);
glVertex2f (660+u,389+f);
glVertex2f (672+u,387+f);
glVertex2f (684+u,389+f);
glVertex2f (697+u,389+f);
glVertex2f (707+u,391+f);
glVertex2f (717+u,391+f);
glVertex2f (727+u,393+f);
glVertex2f (740+u,395+f);
glVertex2f (752+u,397+f);
glVertex2f (762+u,401+f);
glVertex2f (772+u,403+f);
glVertex2f (782+u,409+f);
glVertex2f (793+u,415+f);
glVertex2f (801+u,421+f);
glVertex2f (809+u,428+f);
glVertex2f (815+u,438+f);
glVertex2f (821+u,444+f);
glVertex2f (829+u,452+f);
glVertex2f (834+u,460+f);
glVertex2f (840+u,471+f);
glVertex2f (846+u,481+f);
glVertex2f (848+u,491+f);
glVertex2f (850+u,499+f);
glVertex2f (854+u,507+f);
glVertex2f (856+u,518+f);
glVertex2f (858+u,526+f);
glVertex2f (860+u,538+f);
glVertex2f (862+u,548+f);
glVertex2f (860+u,560+f);
glVertex2f (860+u,573+f);
glVertex2f (860+u,583+f);
glVertex2f (858+u,593+f);
glVertex2f (858+u,603+f);
glVertex2f (856+u,612+f);
glVertex2f (854+u,622+f);
glVertex2f (852+u,634+f);
glVertex2f (850+u,644+f);
glVertex2f (846+u,655+f);
glVertex2f (846+u,667+f);
glVertex2f (844+u,677+f);
glVertex2f (842+u,685+f);
glVertex2f (840+u,695+f);
glVertex2f (840+u,704+f);
glVertex2f (836+u,712+f);
glVertex2f (836+u,720+f);
glVertex2f (836+u,726+f);
glVertex2f (836+u,730+f);
glVertex2f (834+u,736+f);
glVertex2f (834+u,738+f);
glVertex2f (832+u,749+f);
glVertex2f (832+u,757+f);
glVertex2f (829+u,767+f);
glVertex2f (829+u,777+f);
glVertex2f (827+u,789+f);
glVertex2f (827+u,800+f);
glVertex2f (827+u,810+f);
glVertex2f (823+u,818+f);
glVertex2f (823+u,828+f);
glVertex2f (821+u,838+f);
glVertex2f (817+u,847+f);
glVertex2f (815+u,855+f);
glVertex2f (811+u,865+f);
glVertex2f (807+u,873+f);
glVertex2f (803+u,881+f);
glVertex2f (797+u,892+f);
glVertex2f (791+u,900+f);
glVertex2f (780+u,908+f);
glVertex2f (772+u,916+f);
glVertex2f (766+u,922+f);
glVertex2f (758+u,928+f);
glVertex2f (750+u,935+f);
glVertex2f (740+u,939+f);
glVertex2f (731+u,943+f);
glVertex2f (723+u,947+f);
glVertex2f (715+u,949+f);
glVertex2f (709+u,951+f);
glVertex2f (701+u,953+f);
glVertex2f (693+u,955+f);
glVertex2f (682+u,955+f);


      glEnd();
      glPopMatrix();


}

void outer_sceleton()
{
      glPushMatrix();
     glTranslatef(15.0,10.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
      glBegin(GL_POLYGON);
      glColor3f(0.607843137254902, 0.8549019607843137, 0.9137254901960784);
glVertex2f(468+u,916+f);
glVertex2f(468+u,904+f);
glVertex2f(468+u,896+f);
glVertex2f(464+u,886+f);
glVertex2f(464+u,873+f);
glVertex2f(462+u,867+f);
glVertex2f(459+u,857+f);
glVertex2f(457+u,847+f);
glVertex2f(457+u,836+f);
glVertex2f(453+u,826+f);
glVertex2f(451+u,818+f);
glVertex2f(451+u,806+f);
glVertex2f(449+u,796+f);
glVertex2f(449+u,787+f);
glVertex2f(447+u,775+f);
glVertex2f(443+u,767+f);
glVertex2f(443+u,757+f);
glVertex2f(443+u,751+f);
glVertex2f(439+u,740+f);
glVertex2f(441+u,732+f);
glVertex2f(439+u,722+f);
glVertex2f(435+u,714+f);
glVertex2f(435+u,706+f);
glVertex2f(433+u,693+f);
glVertex2f(433+u,685+f);
glVertex2f(431+u,679+f);
glVertex2f(431+u,673+f);
glVertex2f(429+u,665+f);
glVertex2f(429+u,659+f);
glVertex2f(429+u,650+f);
glVertex2f(429+u,642+f);
glVertex2f(425+u,636+f);
glVertex2f(427+u,628+f);
glVertex2f(427+u,622+f);
glVertex2f(425+u,610+f);
glVertex2f(423+u,601+f);
glVertex2f(423+u,591+f);
glVertex2f(423+u,585+f);
glVertex2f(423+u,573+f);
glVertex2f(423+u,569+f);
glVertex2f(423+u,558+f);
glVertex2f(419+u,546+f);
glVertex2f(419+u,540+f);
glVertex2f(419+u,528+f);
glVertex2f(419+u,522+f);
glVertex2f(419+u,515+f);
glVertex2f(417+u,507+f);
glVertex2f(417+u,495+f);
glVertex2f(419+u,489+f);
glVertex2f(419+u,485+f);
glVertex2f(417+u,477+f);
glVertex2f(417+u,471+f);
glVertex2f(417+u,462+f);
glVertex2f(414+u,456+f);
glVertex2f(414+u,450+f);
glVertex2f(414+u,444+f);
glVertex2f(414+u,436+f);
glVertex2f(414+u,430+f);
glVertex2f(412+u,424+f);
glVertex2f(412+u,413+f);
glVertex2f(410+u,405+f);
glVertex2f(408+u,393+f);
glVertex2f(406+u,385+f);
glVertex2f(406+u,376+f);
glVertex2f(406+u,368+f);
glVertex2f(406+u,362+f);
glVertex2f(406+u,352+f);
glVertex2f(406+u,346+f);
glVertex2f(402+u,336+f);
glVertex2f(402+u,327+f);
glVertex2f(402+u,321+f);
glVertex2f(402+u,313+f);
glVertex2f(400+u,301+f);
glVertex2f(402+u,295+f);
glVertex2f(402+u,282+f);
glVertex2f(402+u,270+f);
glVertex2f(402+u,260+f);
glVertex2f(404+u,250+f);
glVertex2f(404+u,244+f);
glVertex2f(404+u,231+f);
glVertex2f(406+u,219+f);
glVertex2f(406+u,205+f);
glVertex2f(406+u,186+f);
glVertex2f(410+u,168+f);
glVertex2f(558+u,156+f);
glVertex2f(558+u,162+f);
glVertex2f(558+u,168+f);
glVertex2f(560+u,174+f);
glVertex2f(560+u,180+f);
glVertex2f(562+u,186+f);
glVertex2f(562+u,195+f);
glVertex2f(564+u,203+f);
glVertex2f(564+u,209+f);
glVertex2f(566+u,217+f);
glVertex2f(568+u,225+f);
glVertex2f(570+u,233+f);
glVertex2f(570+u,244+f);
glVertex2f(572+u,250+f);
glVertex2f(574+u,258+f);
glVertex2f(576+u,266+f);
glVertex2f(576+u,274+f);
glVertex2f(578+u,282+f);
glVertex2f(580+u,291+f);
glVertex2f(582+u,299+f);
glVertex2f(582+u,305+f);
glVertex2f(584+u,313+f);
glVertex2f(586+u,319+f);
glVertex2f(586+u,323+f);
glVertex2f(588+u,327+f);
glVertex2f(590+u,332+f);
glVertex2f(592+u,342+f);
glVertex2f(594+u,350+f);
glVertex2f(594+u,356+f);
glVertex2f(598+u,362+f);
glVertex2f(598+u,370+f);
glVertex2f(613+u,370+f);
glVertex2f(619+u,366+f);
glVertex2f(629+u,364+f);
glVertex2f(635+u,362+f);
glVertex2f(645+u,360+f);
glVertex2f(658+u,358+f);
glVertex2f(668+u,358+f);
glVertex2f(676+u,358+f);
glVertex2f(686+u,358+f);
glVertex2f(695+u,358+f);
glVertex2f(703+u,358+f);
glVertex2f(709+u,360+f);
glVertex2f(719+u,360+f);
glVertex2f(727+u,362+f);
glVertex2f(735+u,364+f);
glVertex2f(744+u,366+f);
glVertex2f(750+u,366+f);
glVertex2f(756+u,368+f);
glVertex2f(766+u,372+f);
glVertex2f(772+u,366+f);
glVertex2f(774+u,360+f);
glVertex2f(776+u,354+f);
glVertex2f(778+u,348+f);
glVertex2f(780+u,344+f);
glVertex2f(787+u,334+f);
glVertex2f(791+u,321+f);
glVertex2f(791+u,313+f);
glVertex2f(793+u,303+f);
glVertex2f(797+u,293+f);
glVertex2f(799+u,284+f);
glVertex2f(801+u,274+f);
glVertex2f(803+u,266+f);
glVertex2f(807+u,256+f);
glVertex2f(809+u,246+f);
glVertex2f(811+u,240+f);
glVertex2f(813+u,231+f);
glVertex2f(815+u,225+f);
glVertex2f(815+u,217+f);
glVertex2f(819+u,209+f);
glVertex2f(823+u,203+f);
glVertex2f(823+u,195+f);
glVertex2f(825+u,184+f);
glVertex2f(829+u,176+f);
glVertex2f(834+u,164+f);
glVertex2f(834+u,154+f);
glVertex2f(838+u,148+f);
glVertex2f(840+u,137+f);
glVertex2f(844+u,129+f);
glVertex2f(846+u,121+f);
glVertex2f(848+u,111+f);
glVertex2f(850+u,101+f);
glVertex2f(993+u,174+f);
glVertex2f(991+u,178+f);
glVertex2f(989+u,182+f);
glVertex2f(985+u,190+f);
glVertex2f(987+u,201+f);
glVertex2f(985+u,209+f);
glVertex2f(983+u,217+f);
glVertex2f(983+u,223+f);
glVertex2f(983+u,231+f);
glVertex2f(983+u,235+f);
glVertex2f(981+u,242+f);
glVertex2f(981+u,250+f);
glVertex2f(981+u,256+f);
glVertex2f(981+u,266+f);
glVertex2f(979+u,272+f);
glVertex2f(977+u,282+f);
glVertex2f(975+u,295+f);
glVertex2f(973+u,307+f);
glVertex2f(971+u,319+f);
glVertex2f(971+u,325+f);
glVertex2f(968+u,332+f);
glVertex2f(968+u,338+f);
glVertex2f(968+u,346+f);
glVertex2f(968+u,352+f);
glVertex2f(968+u,358+f);
glVertex2f(968+u,364+f);
glVertex2f(968+u,372+f);
glVertex2f(968+u,381+f);
glVertex2f(968+u,387+f);
glVertex2f(968+u,395+f);
glVertex2f(966+u,405+f);
glVertex2f(966+u,417+f);
glVertex2f(964+u,424+f);
glVertex2f(960+u,436+f);
glVertex2f(958+u,448+f);
glVertex2f(958+u,456+f);
glVertex2f(958+u,464+f);
glVertex2f(956+u,473+f);
glVertex2f(954+u,485+f);
glVertex2f(952+u,497+f);
glVertex2f(952+u,501+f);
glVertex2f(950+u,511+f);
glVertex2f(948+u,518+f);
glVertex2f(944+u,530+f);
glVertex2f(944+u,538+f);
glVertex2f(942+u,544+f);
glVertex2f(940+u,554+f);
glVertex2f(940+u,565+f);
glVertex2f(938+u,577+f);
glVertex2f(938+u,583+f);
glVertex2f(936+u,591+f);
glVertex2f(934+u,599+f);
glVertex2f(934+u,605+f);
glVertex2f(930+u,616+f);
glVertex2f(926+u,624+f);
glVertex2f(930+u,630+f);
glVertex2f(930+u,632+f);
glVertex2f(930+u,638+f);
glVertex2f(930+u,642+f);
glVertex2f(928+u,648+f);
glVertex2f(928+u,650+f);
glVertex2f(928+u,659+f);
glVertex2f(926+u,667+f);
glVertex2f(926+u,675+f);
glVertex2f(921+u,687+f);
glVertex2f(919+u,699+f);
glVertex2f(919+u,710+f);
glVertex2f(919+u,718+f);
glVertex2f(919+u,726+f);
glVertex2f(919+u,732+f);
glVertex2f(917+u,744+f);
glVertex2f(917+u,751+f);
glVertex2f(915+u,761+f);
glVertex2f(915+u,769+f);
glVertex2f(913+u,781+f);
glVertex2f(913+u,789+f);
glVertex2f(911+u,798+f);
glVertex2f(911+u,812+f);
glVertex2f(911+u,816+f);



      glEnd();
      glPopMatrix();


}


void left_leg()
{
     glPushMatrix();
      glTranslatef(10.0,5.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
      glBegin(GL_POLYGON);
      //glColor3f(0.21f, 0.12f, 0.14f);
      glColor3f(0.607843137254902, 0.8549019607843137, 0.9137254901960784);

      glVertex2f (408+u,174+f);
glVertex2f (404+u,166+f);
glVertex2f (396+u,160+f);
glVertex2f (388+u,158+f);
glVertex2f (378+u,154+f);
glVertex2f (370+u,150+f);
glVertex2f (357+u,143+f);
glVertex2f (345+u,139+f);
glVertex2f (331+u,133+f);
glVertex2f (327+u,133+f);
glVertex2f (322+u,131+f);
glVertex2f (310+u,125+f);
glVertex2f (302+u,123+f);
glVertex2f (292+u,119+f);
glVertex2f (284+u,113+f);
glVertex2f (280+u,109+f);
glVertex2f (275+u,105+f);
glVertex2f (273+u,96+f);
glVertex2f (273+u,92+f);
glVertex2f (273+u,80+f);
glVertex2f (273+u,76+f);
glVertex2f (278+u,68+f);
glVertex2f (278+u,60+f);
glVertex2f (284+u,53+f);
glVertex2f (288+u,43+f);
glVertex2f (294+u,37+f);
glVertex2f (302+u,35+f);
glVertex2f (306+u,35+f);
glVertex2f (310+u,41+f);
glVertex2f (314+u,51+f);
glVertex2f (314+u,60+f);
glVertex2f (312+u,70+f);
glVertex2f (312+u,78+f);
glVertex2f (312+u,88+f);
glVertex2f (318+u,96+f);
glVertex2f (320+u,41+f);
glVertex2f (331+u,35+f);
glVertex2f (339+u,31+f);
glVertex2f (347+u,29+f);
glVertex2f (365+u,27+f);
glVertex2f (370+u,29+f);
glVertex2f (376+u,35+f);
glVertex2f (384+u,43+f);
glVertex2f (396+u,35+f);
glVertex2f (402+u,29+f);
glVertex2f (406+u,27+f);
glVertex2f (412+u,25+f);
glVertex2f (427+u,23+f);
glVertex2f (435+u,23+f);
glVertex2f (441+u,25+f);
glVertex2f (451+u,27+f);
glVertex2f (466+u,29+f);
glVertex2f (478+u,35+f);
glVertex2f (490+u,39+f);
glVertex2f (496+u,41+f);
glVertex2f (502+u,45+f);
glVertex2f (509+u,49+f);
glVertex2f (517+u,51+f);
glVertex2f (525+u,56+f);
glVertex2f (531+u,62+f);
glVertex2f (537+u,68+f);
glVertex2f (541+u,74+f);
glVertex2f (545+u,80+f);
glVertex2f (549+u,86+f);
glVertex2f (551+u,92+f);
glVertex2f (551+u,101+f);
glVertex2f (553+u,107+f);
glVertex2f (553+u,113+f);
glVertex2f (553+u,121+f);
glVertex2f (556+u,129+f);
glVertex2f (558+u,139+f);
glVertex2f (558+u,150+f);
glVertex2f (558+u,158+f);


      glEnd();
      glPopMatrix();

}
void tail()
{
      glPushMatrix();
      glTranslatef(-5.0,-5.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
      glBegin(GL_POLYGON);
     // glColor3f(0.21f, 0.12f, 0.14f);
     //glColor3f(0.607843137254902, 0.8549019607843137, 0.9137254901960784);
      glColor3f(0.8627450980392157, 0.8627450980392157, 0.8627450980392157);

      glVertex2f (981+u,319+f);
glVertex2f (987+u,315+f);
glVertex2f (997+u,311+f);
glVertex2f (1003+u,307+f);
glVertex2f (1013+u,303+f);
glVertex2f (1020+u,301+f);
glVertex2f (1030+u,297+f);
glVertex2f (1042+u,297+f);
glVertex2f (1050+u,297+f);
glVertex2f (1058+u,297+f);
glVertex2f (1069+u,299+f);
glVertex2f (1079+u,299+f);
glVertex2f (1085+u,301+f);
glVertex2f (1095+u,307+f);
glVertex2f (1103+u,311+f);
glVertex2f (1107+u,317+f);
glVertex2f (1112+u,323+f);
glVertex2f (1118+u,327+f);
glVertex2f (1122+u,332+f);
glVertex2f (1124+u,340+f);
glVertex2f (1126+u,346+f);
glVertex2f (1130+u,352+f);
glVertex2f (1130+u,356+f);
glVertex2f (1130+u,360+f);
glVertex2f (1130+u,364+f);
glVertex2f (1130+u,372+f);
glVertex2f (1128+u,376+f);
glVertex2f (1126+u,383+f);
glVertex2f (1126+u,385+f);
glVertex2f (1124+u,391+f);
glVertex2f (1118+u,399+f);
glVertex2f (1110+u,403+f);
glVertex2f (1107+u,411+f);
glVertex2f (1101+u,415+f);
glVertex2f (1095+u,419+f);
glVertex2f (1091+u,421+f);
glVertex2f (1087+u,424+f);
glVertex2f (1079+u,426+f);
glVertex2f (1071+u,430+f);
glVertex2f (1063+u,434+f);
glVertex2f (1054+u,436+f);
glVertex2f (1046+u,438+f);
glVertex2f (1038+u,440+f);
glVertex2f (1032+u,442+f);
glVertex2f (1024+u,442+f);
glVertex2f (1015+u,444+f);
glVertex2f (1007+u,448+f);
glVertex2f (997+u,450+f);
glVertex2f (993+u,452+f);
glVertex2f (985+u,458+f);
glVertex2f (979+u,460+f);
glVertex2f (973+u,466+f);


      glEnd();
      glPopMatrix();

}

void f_tail()
{
      glPushMatrix();
      //glTranslatef(-5.0,-5.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
      glBegin(GL_POLYGON);
     // glColor3f(0.21f, 0.12f, 0.14f);
        glColor3f(0.607843137254902, 0.8549019607843137, 0.9137254901960784);
      glVertex2f(275+u,54+f);
glVertex2f(282+u,54+f);
glVertex2f(289+u,55+f);
glVertex2f(292+u,61+f);
glVertex2f(296+u,65+f);
glVertex2f(300+u,65+f);
glVertex2f(304+u,65+f);
glVertex2f(311+u,67+f);
glVertex2f(315+u,68+f);
glVertex2f(321+u,69+f);
glVertex2f(325+u,70+f);
glVertex2f(328+u,72+f);
glVertex2f(330+u,73+f);
glVertex2f(332+u,75+f);
glVertex2f(333+u,79+f);
glVertex2f(333+u,81+f);
glVertex2f(334+u,82+f);
glVertex2f(334+u,85+f);
glVertex2f(334+u,88+f);
glVertex2f(334+u,91+f);
glVertex2f(333+u,94+f);
glVertex2f(333+u,96+f);
glVertex2f(332+u,99+f);
glVertex2f(331+u,100+f);
glVertex2f(329+u,102+f);
glVertex2f(329+u,102+f);
glVertex2f(327+u,102+f);
glVertex2f(323+u,103+f);
glVertex2f(321+u,103+f);
glVertex2f(318+u,103+f);
glVertex2f(316+u,103+f);
glVertex2f(315+u,103+f);
glVertex2f(314+u,104+f);
glVertex2f(311+u,103+f);
glVertex2f(306+u,103+f);
glVertex2f(304+u,103+f);
glVertex2f(302+u,103+f);
glVertex2f(296+u,103+f);
glVertex2f(295+u,103+f);
glVertex2f(293+u,103+f);
glVertex2f(286+u,102+f);
glVertex2f(280+u,101+f);
glVertex2f(277+u,101+f);
glVertex2f(275+u,102+f);
glVertex2f(273+u,102+f);
glVertex2f(271+u,101+f);
glVertex2f(267+u,101+f);
glVertex2f(264+u,101+f);



      glEnd();
      glPopMatrix();

}


void right_leg()
{
     glPushMatrix();
      glTranslatef(8.0,15.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
      glBegin(GL_POLYGON);
      //glColor3f(0.21f, 0.12f, 0.14f);
      glColor3f(0.607843137254902, 0.8549019607843137, 0.9137254901960784);
      glVertex2f (856+u,88+f);
glVertex2f (862+u,84+f);
glVertex2f (866+u,78+f);
glVertex2f (870+u,74+f);
glVertex2f (879+u,66+f);
glVertex2f (883+u,62+f);
glVertex2f (887+u,60+f);
glVertex2f (895+u,53+f);
glVertex2f (899+u,49+f);
glVertex2f (903+u,45+f);
glVertex2f (909+u,41+f);
glVertex2f (919+u,35+f);
glVertex2f (928+u,27+f);
glVertex2f (936+u,23+f);
glVertex2f (948+u,15+f);
glVertex2f (954+u,11+f);
glVertex2f (962+u,9+f);
glVertex2f (971+u,6+f);
glVertex2f (979+u,6+f);
glVertex2f (983+u,6+f);
glVertex2f (989+u,11+f);
glVertex2f (995+u,15+f);
glVertex2f (999+u,19+f);
glVertex2f (1003+u,25+f);
glVertex2f (1005+u,31+f);
glVertex2f (1009+u,39+f);
glVertex2f (1013+u,47+f);
glVertex2f (1013+u,58+f);
glVertex2f (1013+u,35+f);
glVertex2f (1022+u,33+f);
glVertex2f (1030+u,31+f);
glVertex2f (1042+u,29+f);
glVertex2f (1050+u,31+f);
glVertex2f (1058+u,37+f);
glVertex2f (1063+u,43+f);
glVertex2f (1067+u,53+f);
glVertex2f (1067+u,60+f);
glVertex2f (1069+u,68+f);
glVertex2f (1069+u,76+f);
glVertex2f (1075+u,62+f);
glVertex2f (1083+u,62+f);
glVertex2f (1091+u,64+f);
glVertex2f (1095+u,70+f);
glVertex2f (1099+u,78+f);
glVertex2f (1099+u,84+f);
glVertex2f (1095+u,92+f);
glVertex2f (1091+u,101+f);
glVertex2f (1089+u,105+f);
glVertex2f (1085+u,111+f);
glVertex2f (1079+u,115+f);
glVertex2f (1075+u,121+f);
glVertex2f (1069+u,125+f);
glVertex2f (1063+u,131+f);
glVertex2f (1058+u,135+f);
glVertex2f (1050+u,137+f);
glVertex2f (1046+u,141+f);
glVertex2f (1040+u,143+f);
glVertex2f (1034+u,150+f);
glVertex2f (1030+u,152+f);
glVertex2f (1026+u,154+f);
glVertex2f (1018+u,158+f);
glVertex2f (1009+u,162+f);
glVertex2f (1003+u,164+f);
glVertex2f (995+u,170+f);
glVertex2f (993+u,178+f);




      glEnd();
      glPopMatrix();

}
void outer_head()
{

      glPushMatrix();
      glTranslatef(0.0,5.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
      glBegin(GL_POLYGON);
     // glColor3f(0.607843137254902, 0.8549019607843137, 0.9137254901960784);

      glColor3f(0.68, 0.90, 0.90);

      glVertex2f(676+u,1617+f);
glVertex2f(666+u,1617+f);
glVertex2f(658+u,1617+f);
glVertex2f(648+u,1617+f);
glVertex2f(639+u,1617+f);
glVertex2f(633+u,1617+f);
glVertex2f(627+u,1617+f);
glVertex2f(621+u,1617+f);
glVertex2f(617+u,1623+f);
glVertex2f(617+u,1628+f);
glVertex2f(615+u,1630+f);
glVertex2f(613+u,1632+f);
glVertex2f(611+u,1636+f);
glVertex2f(607+u,1638+f);
glVertex2f(603+u,1640+f);
glVertex2f(601+u,1640+f);
glVertex2f(598+u,1642+f);
glVertex2f(596+u,1642+f);
glVertex2f(594+u,1642+f);
glVertex2f(588+u,1642+f);
glVertex2f(582+u,1640+f);
glVertex2f(580+u,1640+f);
glVertex2f(574+u,1638+f);
glVertex2f(568+u,1636+f);
glVertex2f(564+u,1636+f);
glVertex2f(560+u,1634+f);
glVertex2f(553+u,1632+f);
glVertex2f(549+u,1632+f);
glVertex2f(545+u,1630+f);
glVertex2f(541+u,1628+f);
glVertex2f(537+u,1626+f);
glVertex2f(531+u,1623+f);
glVertex2f(527+u,1621+f);
glVertex2f(523+u,1619+f);
glVertex2f(519+u,1615+f);
glVertex2f(515+u,1613+f);
glVertex2f(511+u,1611+f);
glVertex2f(506+u,1609+f);
glVertex2f(500+u,1603+f);
glVertex2f(494+u,1599+f);
glVertex2f(488+u,1599+f);
glVertex2f(482+u,1599+f);
glVertex2f(480+u,1599+f);
glVertex2f(476+u,1599+f);
glVertex2f(472+u,1601+f);
glVertex2f(468+u,1601+f);
glVertex2f(464+u,1603+f);
glVertex2f(462+u,1605+f);
glVertex2f(459+u,1605+f);
glVertex2f(453+u,1607+f);
glVertex2f(451+u,1607+f);
glVertex2f(447+u,1607+f);
glVertex2f(441+u,1609+f);
glVertex2f(437+u,1611+f);
glVertex2f(431+u,1611+f);
glVertex2f(423+u,1611+f);
glVertex2f(419+u,1611+f);
glVertex2f(414+u,1613+f);
glVertex2f(410+u,1615+f);
glVertex2f(402+u,1615+f);
glVertex2f(396+u,1613+f);
glVertex2f(390+u,1613+f);
glVertex2f(386+u,1615+f);
glVertex2f(382+u,1615+f);
glVertex2f(378+u,1615+f);
glVertex2f(376+u,1615+f);
glVertex2f(370+u,1617+f);
glVertex2f(363+u,1617+f);
glVertex2f(357+u,1617+f);
glVertex2f(351+u,1617+f);
glVertex2f(345+u,1615+f);
glVertex2f(337+u,1615+f);
glVertex2f(327+u,1615+f);
glVertex2f(335+u,1609+f);
glVertex2f(343+u,1605+f);
glVertex2f(347+u,1601+f);
glVertex2f(357+u,1597+f);
glVertex2f(359+u,1595+f);
glVertex2f(365+u,1593+f);
glVertex2f(372+u,1591+f);
glVertex2f(378+u,1589+f);
glVertex2f(382+u,1585+f);
glVertex2f(390+u,1583+f);
glVertex2f(394+u,1579+f);
glVertex2f(402+u,1576+f);
glVertex2f(408+u,1574+f);
glVertex2f(414+u,1570+f);
glVertex2f(421+u,1566+f);
glVertex2f(425+u,1562+f);
glVertex2f(429+u,1556+f);
glVertex2f(431+u,1550+f);
glVertex2f(435+u,1546+f);
glVertex2f(439+u,1542+f);
glVertex2f(443+u,1534+f);
glVertex2f(447+u,1527+f);
glVertex2f(449+u,1523+f);
glVertex2f(449+u,1515+f);
glVertex2f(451+u,1511+f);
glVertex2f(453+u,1507+f);
glVertex2f(455+u,1501+f);
glVertex2f(455+u,1493+f);
glVertex2f(455+u,1487+f);
glVertex2f(457+u,1480+f);
glVertex2f(457+u,1470+f);
glVertex2f(455+u,1466+f);
glVertex2f(453+u,1458+f);
glVertex2f(453+u,1454+f);
glVertex2f(449+u,1446+f);
glVertex2f(447+u,1437+f);
glVertex2f(443+u,1431+f);
glVertex2f(441+u,1427+f);
glVertex2f(437+u,1419+f);
glVertex2f(435+u,1415+f);
glVertex2f(433+u,1409+f);
glVertex2f(429+u,1401+f);
glVertex2f(425+u,1395+f);
glVertex2f(423+u,1390+f);
glVertex2f(421+u,1386+f);
glVertex2f(419+u,1380+f);
glVertex2f(417+u,1370+f);
glVertex2f(410+u,1362+f);
glVertex2f(406+u,1354+f);
glVertex2f(406+u,1352+f);
glVertex2f(404+u,1343+f);
glVertex2f(400+u,1337+f);
glVertex2f(392+u,1327+f);
glVertex2f(390+u,1317+f);
glVertex2f(386+u,1311+f);
glVertex2f(382+u,1300+f);
glVertex2f(380+u,1292+f);
glVertex2f(378+u,1284+f);
glVertex2f(380+u,1278+f);
glVertex2f(378+u,1270+f);
glVertex2f(376+u,1262+f);
glVertex2f(376+u,1256+f);
glVertex2f(376+u,1247+f);
glVertex2f(374+u,1241+f);
glVertex2f(376+u,1235+f);
glVertex2f(378+u,1231+f);
glVertex2f(382+u,1225+f);
glVertex2f(384+u,1221+f);
glVertex2f(386+u,1213+f);
glVertex2f(388+u,1209+f);
glVertex2f(392+u,1202+f);
glVertex2f(396+u,1196+f);
glVertex2f(398+u,1192+f);
glVertex2f(404+u,1182+f);
glVertex2f(408+u,1176+f);
glVertex2f(412+u,1170+f);
glVertex2f(417+u,1166+f);
glVertex2f(423+u,1157+f);
glVertex2f(427+u,1151+f);
glVertex2f(435+u,1145+f);
glVertex2f(441+u,1141+f);
glVertex2f(443+u,1139+f);
glVertex2f(449+u,1133+f);
glVertex2f(455+u,1129+f);
glVertex2f(459+u,1127+f);
glVertex2f(466+u,1123+f);
glVertex2f(474+u,1119+f);
glVertex2f(478+u,1114+f);
glVertex2f(484+u,1112+f);
glVertex2f(492+u,1108+f);
glVertex2f(498+u,1106+f);
glVertex2f(502+u,1102+f);
glVertex2f(513+u,1096+f);
glVertex2f(517+u,1096+f);
glVertex2f(523+u,1092+f);
glVertex2f(533+u,1086+f);
glVertex2f(539+u,1082+f);
glVertex2f(543+u,1080+f);
glVertex2f(549+u,1076+f);
glVertex2f(558+u,1069+f);
glVertex2f(562+u,1065+f);
glVertex2f(568+u,1063+f);
glVertex2f(576+u,1061+f);
glVertex2f(584+u,1055+f);
glVertex2f(590+u,1051+f);
glVertex2f(596+u,1049+f);
glVertex2f(605+u,1045+f);
glVertex2f(609+u,1043+f);
glVertex2f(619+u,1037+f);
glVertex2f(627+u,1033+f);
glVertex2f(635+u,1033+f);
glVertex2f(641+u,1031+f);
glVertex2f(648+u,1029+f);
glVertex2f(652+u,1027+f);
glVertex2f(658+u,1027+f);
glVertex2f(664+u,1027+f);
glVertex2f(670+u,1029+f);
glVertex2f(674+u,1029+f);
glVertex2f(678+u,1029+f);
glVertex2f(682+u,1029+f);
glVertex2f(688+u,1031+f);
glVertex2f(693+u,1031+f);
glVertex2f(695+u,1031+f);
glVertex2f(701+u,1033+f);
glVertex2f(707+u,1035+f);
glVertex2f(719+u,1037+f);
glVertex2f(723+u,1039+f);
glVertex2f(727+u,1039+f);
glVertex2f(733+u,1041+f);
glVertex2f(735+u,1043+f);
glVertex2f(744+u,1045+f);
glVertex2f(748+u,1047+f);
glVertex2f(756+u,1049+f);
glVertex2f(762+u,1053+f);
glVertex2f(768+u,1055+f);
glVertex2f(774+u,1059+f);
glVertex2f(780+u,1063+f);
glVertex2f(784+u,1065+f);
glVertex2f(791+u,1067+f);
glVertex2f(797+u,1069+f);
glVertex2f(805+u,1072+f);
glVertex2f(807+u,1074+f);
glVertex2f(811+u,1078+f);
glVertex2f(815+u,1080+f);
glVertex2f(819+u,1082+f);
glVertex2f(825+u,1084+f);
glVertex2f(832+u,1084+f);
glVertex2f(834+u,1086+f);
glVertex2f(840+u,1088+f);
glVertex2f(842+u,1090+f);
glVertex2f(848+u,1094+f);
glVertex2f(852+u,1096+f);
glVertex2f(860+u,1102+f);
glVertex2f(868+u,1104+f);
glVertex2f(872+u,1108+f);
glVertex2f(881+u,1110+f);
glVertex2f(883+u,1112+f);
glVertex2f(887+u,1112+f);
glVertex2f(891+u,1117+f);
glVertex2f(893+u,1119+f);
glVertex2f(899+u,1121+f);
glVertex2f(905+u,1125+f);
glVertex2f(909+u,1127+f);
glVertex2f(915+u,1131+f);
glVertex2f(919+u,1133+f);
glVertex2f(924+u,1137+f);
glVertex2f(930+u,1145+f);
glVertex2f(934+u,1147+f);
glVertex2f(938+u,1151+f);
glVertex2f(942+u,1155+f);
glVertex2f(946+u,1159+f);
glVertex2f(948+u,1161+f);
glVertex2f(954+u,1166+f);
glVertex2f(956+u,1170+f);
glVertex2f(958+u,1174+f);
glVertex2f(960+u,1178+f);
glVertex2f(964+u,1182+f);
glVertex2f(966+u,1184+f);
glVertex2f(968+u,1188+f);
glVertex2f(973+u,1192+f);
glVertex2f(975+u,1196+f);
glVertex2f(977+u,1200+f);
glVertex2f(979+u,1204+f);
glVertex2f(979+u,1206+f);
glVertex2f(979+u,1211+f);
glVertex2f(981+u,1215+f);
glVertex2f(981+u,1215+f);
glVertex2f(983+u,1217+f);
glVertex2f(983+u,1219+f);
glVertex2f(983+u,1221+f);
glVertex2f(983+u,1223+f);
glVertex2f(985+u,1225+f);
glVertex2f(985+u,1227+f);
glVertex2f(985+u,1229+f);
glVertex2f(985+u,1231+f);
glVertex2f(985+u,1233+f);
glVertex2f(987+u,1235+f);
glVertex2f(987+u,1241+f);
glVertex2f(987+u,1245+f);
glVertex2f(987+u,1251+f);
glVertex2f(987+u,1258+f);
glVertex2f(987+u,1262+f);
glVertex2f(987+u,1266+f);
glVertex2f(987+u,1270+f);
glVertex2f(987+u,1274+f);
glVertex2f(985+u,1276+f);
glVertex2f(983+u,1278+f);
glVertex2f(983+u,1282+f);
glVertex2f(983+u,1284+f);
glVertex2f(983+u,1288+f);
glVertex2f(981+u,1292+f);
glVertex2f(981+u,1294+f);
glVertex2f(979+u,1298+f);
glVertex2f(977+u,1303+f);
glVertex2f(977+u,1305+f);
glVertex2f(975+u,1309+f);
glVertex2f(971+u,1313+f);
glVertex2f(968+u,1317+f);
glVertex2f(966+u,1323+f);
glVertex2f(964+u,1327+f);
glVertex2f(962+u,1335+f);
glVertex2f(956+u,1339+f);
glVertex2f(954+u,1343+f);
glVertex2f(948+u,1350+f);
glVertex2f(946+u,1354+f);
glVertex2f(942+u,1360+f);
glVertex2f(940+u,1364+f);
glVertex2f(938+u,1368+f);
glVertex2f(938+u,1372+f);
glVertex2f(936+u,1376+f);
glVertex2f(930+u,1380+f);
glVertex2f(924+u,1388+f);
glVertex2f(921+u,1395+f);
glVertex2f(919+u,1399+f);
glVertex2f(917+u,1403+f);
glVertex2f(915+u,1407+f);
glVertex2f(913+u,1411+f);
glVertex2f(913+u,1417+f);
glVertex2f(911+u,1421+f);
glVertex2f(909+u,1425+f);
glVertex2f(909+u,1431+f);
glVertex2f(907+u,1435+f);
glVertex2f(905+u,1442+f);
glVertex2f(905+u,1446+f);
glVertex2f(905+u,1450+f);
glVertex2f(905+u,1452+f);
glVertex2f(905+u,1456+f);
glVertex2f(905+u,1462+f);
glVertex2f(907+u,1466+f);
glVertex2f(907+u,1470+f);
glVertex2f(907+u,1476+f);
glVertex2f(907+u,1478+f);
glVertex2f(909+u,1484+f);
glVertex2f(911+u,1489+f);
glVertex2f(913+u,1493+f);
glVertex2f(919+u,1497+f);
glVertex2f(928+u,1503+f);
glVertex2f(932+u,1507+f);
glVertex2f(938+u,1511+f);
glVertex2f(946+u,1517+f);
glVertex2f(950+u,1519+f);
glVertex2f(960+u,1523+f);
glVertex2f(971+u,1527+f);
glVertex2f(981+u,1529+f);
glVertex2f(989+u,1531+f);
glVertex2f(997+u,1531+f);
glVertex2f(1007+u,1536+f);
glVertex2f(1015+u,1538+f);
glVertex2f(1030+u,1538+f);
glVertex2f(1036+u,1542+f);
glVertex2f(1040+u,1542+f);
glVertex2f(1044+u,1544+f);
glVertex2f(1050+u,1544+f);
glVertex2f(1054+u,1546+f);
glVertex2f(1060+u,1548+f);
glVertex2f(1067+u,1550+f);
glVertex2f(1075+u,1552+f);
glVertex2f(1077+u,1556+f);
glVertex2f(1073+u,1560+f);
glVertex2f(1065+u,1562+f);
glVertex2f(1056+u,1564+f);
glVertex2f(1048+u,1564+f);
glVertex2f(1040+u,1566+f);
glVertex2f(1032+u,1566+f);
glVertex2f(1024+u,1566+f);
glVertex2f(1015+u,1568+f);
glVertex2f(1009+u,1568+f);
glVertex2f(1003+u,1570+f);
glVertex2f(997+u,1570+f);
glVertex2f(993+u,1570+f);
glVertex2f(987+u,1570+f);
glVertex2f(981+u,1570+f);
glVertex2f(979+u,1570+f);
glVertex2f(971+u,1570+f);
glVertex2f(968+u,1570+f);
glVertex2f(966+u,1570+f);
glVertex2f(958+u,1570+f);
glVertex2f(952+u,1570+f);
glVertex2f(948+u,1570+f);
glVertex2f(944+u,1570+f);
glVertex2f(940+u,1570+f);
glVertex2f(938+u,1570+f);
glVertex2f(936+u,1570+f);
glVertex2f(930+u,1570+f);
glVertex2f(928+u,1570+f);
glVertex2f(924+u,1568+f);
glVertex2f(921+u,1568+f);
glVertex2f(919+u,1568+f);
glVertex2f(915+u,1568+f);
glVertex2f(911+u,1566+f);
glVertex2f(905+u,1566+f);
glVertex2f(903+u,1566+f);
glVertex2f(899+u,1564+f);
glVertex2f(891+u,1562+f);
glVertex2f(883+u,1562+f);
glVertex2f(883+u,1562+f);
glVertex2f(874+u,1560+f);
glVertex2f(868+u,1562+f);
glVertex2f(862+u,1566+f);
glVertex2f(856+u,1572+f);
glVertex2f(854+u,1576+f);
glVertex2f(852+u,1581+f);
glVertex2f(846+u,1585+f);
glVertex2f(840+u,1589+f);
glVertex2f(836+u,1593+f);
glVertex2f(832+u,1597+f);
glVertex2f(827+u,1601+f);
glVertex2f(821+u,1605+f);
glVertex2f(815+u,1609+f);
glVertex2f(807+u,1613+f);
glVertex2f(801+u,1615+f);
glVertex2f(795+u,1621+f);
glVertex2f(789+u,1623+f);
glVertex2f(780+u,1628+f);
glVertex2f(768+u,1630+f);
glVertex2f(760+u,1630+f);
glVertex2f(748+u,1630+f);
glVertex2f(742+u,1628+f);
glVertex2f(733+u,1623+f);
glVertex2f(725+u,1617+f);
glVertex2f(721+u,1611+f);
glVertex2f(715+u,1613+f);
glVertex2f(711+u,1613+f);
glVertex2f(699+u,1613+f);
glVertex2f(690+u,1617+f);



      glEnd();
      glPopMatrix();
}

void full_body()
{


     glPushMatrix();
     // glTranslatef(100.0,350.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
      glBegin(GL_POLYGON);
      glColor3f(0.2f, 0.2f, 0.44f);
      glVertex2f(139+u,313+f);
glVertex2f(135+u,311+f);
glVertex2f(131+u,309+f);
glVertex2f(128+u,306+f);
glVertex2f(125+u,304+f);
glVertex2f(122+u,301+f);
glVertex2f(119+u,299+f);
glVertex2f(116+u,296+f);
glVertex2f(114+u,294+f);
glVertex2f(112+u,292+f);
glVertex2f(108+u,288+f);
glVertex2f(104+u,284+f);
glVertex2f(102+u,281+f);
glVertex2f(99+u,276+f);
glVertex2f(97+u,273+f);
glVertex2f(95+u,268+f);
glVertex2f(95+u,264+f);
glVertex2f(93+u,261+f);
glVertex2f(93+u,257+f);
glVertex2f(93+u,253+f);
glVertex2f(93+u,250+f);
glVertex2f(93+u,247+f);
glVertex2f(93+u,244+f);
glVertex2f(93+u,242+f);
glVertex2f(93+u,238+f);
glVertex2f(93+u,236+f);
glVertex2f(93+u,233+f);
glVertex2f(93+u,228+f);
glVertex2f(94+u,223+f);
glVertex2f(95+u,221+f);
glVertex2f(95+u,220+f);
glVertex2f(96+u,216+f);
glVertex2f(96+u,215+f);
glVertex2f(97+u,213+f);
glVertex2f(99+u,211+f);
glVertex2f(101+u,206+f);
glVertex2f(102+u,202+f);
glVertex2f(103+u,198+f);
glVertex2f(104+u,194+f);
glVertex2f(104+u,190+f);
glVertex2f(104+u,185+f);
glVertex2f(104+u,180+f);
glVertex2f(105+u,175+f);
glVertex2f(104+u,170+f);
glVertex2f(104+u,168+f);
glVertex2f(103+u,165+f);
glVertex2f(103+u,161+f);
glVertex2f(103+u,156+f);
glVertex2f(103+u,152+f);
glVertex2f(103+u,149+f);
glVertex2f(103+u,146+f);
glVertex2f(103+u,143+f);
glVertex2f(103+u,141+f);
glVertex2f(104+u,138+f);
glVertex2f(104+u,135+f);
glVertex2f(104+u,133+f);
glVertex2f(103+u,130+f);
glVertex2f(103+u,128+f);
glVertex2f(102+u,125+f);
glVertex2f(102+u,122+f);
glVertex2f(102+u,116+f);
glVertex2f(103+u,114+f);
glVertex2f(104+u,110+f);
glVertex2f(106+u,108+f);
glVertex2f(108+u,104+f);
glVertex2f(111+u,100+f);
glVertex2f(112+u,95+f);
glVertex2f(113+u,90+f);
glVertex2f(114+u,86+f);
glVertex2f(115+u,84+f);
glVertex2f(116+u,81+f);
glVertex2f(117+u,77+f);
glVertex2f(119+u,73+f);
glVertex2f(119+u,68+f);
glVertex2f(120+u,65+f);
glVertex2f(122+u,63+f);
glVertex2f(123+u,61+f);
glVertex2f(124+u,59+f);
glVertex2f(125+u,56+f);
glVertex2f(127+u,54+f);
glVertex2f(129+u,51+f);
glVertex2f(133+u,47+f);
glVertex2f(122+u,50+f);
glVertex2f(118+u,47+f);
glVertex2f(116+u,45+f);
glVertex2f(115+u,42+f);
glVertex2f(114+u,40+f);
glVertex2f(114+u,36+f);
glVertex2f(113+u,32+f);
glVertex2f(112+u,25+f);
glVertex2f(113+u,20+f);
glVertex2f(116+u,18+f);
glVertex2f(120+u,19+f);
glVertex2f(122+u,22+f);
glVertex2f(125+u,25+f);
glVertex2f(126+u,22+f);
glVertex2f(126+u,20+f);
glVertex2f(127+u,16+f);
glVertex2f(129+u,13+f);
glVertex2f(135+u,12+f);
glVertex2f(138+u,13+f);
glVertex2f(141+u,15+f);
glVertex2f(142+u,18+f);
glVertex2f(143+u,21+f);
glVertex2f(144+u,25+f);
glVertex2f(144+u,27+f);
glVertex2f(146+u,20+f);
glVertex2f(149+u,18+f);
glVertex2f(153+u,15+f);
glVertex2f(158+u,13+f);
glVertex2f(162+u,13+f);
glVertex2f(166+u,14+f);
glVertex2f(170+u,19+f);
glVertex2f(173+u,24+f);
glVertex2f(176+u,28+f);
glVertex2f(179+u,33+f);
glVertex2f(180+u,40+f);
glVertex2f(180+u,45+f);
glVertex2f(180+u,50+f);
glVertex2f(179+u,53+f);
glVertex2f(179+u,57+f);
glVertex2f(178+u,61+f);
glVertex2f(178+u,66+f);
glVertex2f(179+u,71+f);
glVertex2f(179+u,75+f);
glVertex2f(179+u,80+f);
glVertex2f(179+u,83+f);
glVertex2f(179+u,87+f);
glVertex2f(179+u,91+f);
glVertex2f(179+u,95+f);
glVertex2f(181+u,97+f);
glVertex2f(184+u,97+f);
glVertex2f(186+u,96+f);
glVertex2f(188+u,96+f);
glVertex2f(191+u,95+f);
glVertex2f(194+u,95+f);
glVertex2f(198+u,95+f);
glVertex2f(202+u,96+f);
glVertex2f(205+u,96+f);
glVertex2f(206+u,92+f);
glVertex2f(206+u,87+f);
glVertex2f(206+u,83+f);
glVertex2f(205+u,79+f);
glVertex2f(205+u,75+f);
glVertex2f(205+u,71+f);
glVertex2f(205+u,68+f);
glVertex2f(205+u,64+f);
glVertex2f(205+u,62+f);
glVertex2f(205+u,59+f);
glVertex2f(206+u,55+f);
glVertex2f(206+u,51+f);
glVertex2f(206+u,48+f);
glVertex2f(206+u,42+f);
glVertex2f(206+u,38+f);
glVertex2f(208+u,35+f);
glVertex2f(210+u,32+f);
glVertex2f(210+u,28+f);
glVertex2f(213+u,24+f);
glVertex2f(214+u,23+f);
glVertex2f(217+u,21+f);
glVertex2f(219+u,20+f);
glVertex2f(222+u,19+f);
glVertex2f(226+u,17+f);
glVertex2f(228+u,16+f);
glVertex2f(233+u,15+f);
glVertex2f(236+u,14+f);
glVertex2f(240+u,15+f);
glVertex2f(243+u,18+f);
glVertex2f(244+u,23+f);
glVertex2f(245+u,18+f);
glVertex2f(251+u,18+f);
glVertex2f(256+u,18+f);
glVertex2f(261+u,18+f);
glVertex2f(263+u,19+f);
glVertex2f(267+u,22+f);
glVertex2f(267+u,24+f);
glVertex2f(266+u,28+f);
glVertex2f(265+u,31+f);
glVertex2f(264+u,36+f);
glVertex2f(262+u,39+f);
glVertex2f(270+u,28+f);
glVertex2f(272+u,32+f);
glVertex2f(275+u,35+f);
glVertex2f(276+u,41+f);
glVertex2f(275+u,44+f);
glVertex2f(273+u,49+f);
glVertex2f(272+u,52+f);
glVertex2f(269+u,57+f);
glVertex2f(266+u,61+f);
glVertex2f(262+u,64+f);
glVertex2f(259+u,67+f);
glVertex2f(253+u,71+f);
glVertex2f(250+u,73+f);
glVertex2f(252+u,78+f);
glVertex2f(254+u,83+f);
glVertex2f(257+u,90+f);
glVertex2f(257+u,97+f);
glVertex2f(257+u,102+f);
glVertex2f(258+u,106+f);
glVertex2f(259+u,108+f);
glVertex2f(259+u,110+f);
glVertex2f(259+u,114+f);
glVertex2f(259+u,116+f);
glVertex2f(259+u,121+f);
glVertex2f(259+u,126+f);
glVertex2f(259+u,132+f);
glVertex2f(259+u,137+f);
glVertex2f(258+u,143+f);
glVertex2f(258+u,147+f);
glVertex2f(258+u,150+f);
glVertex2f(258+u,156+f);
glVertex2f(258+u,159+f);
glVertex2f(258+u,162+f);
glVertex2f(258+u,163+f);
glVertex2f(258+u,166+f);
glVertex2f(258+u,168+f);
glVertex2f(258+u,170+f);
glVertex2f(257+u,173+f);
glVertex2f(257+u,175+f);
glVertex2f(257+u,177+f);
glVertex2f(257+u,180+f);
glVertex2f(257+u,181+f);
glVertex2f(257+u,184+f);
glVertex2f(257+u,186+f);
glVertex2f(257+u,190+f);
glVertex2f(257+u,192+f);
glVertex2f(257+u,194+f);
glVertex2f(257+u,196+f);
glVertex2f(257+u,199+f);
glVertex2f(257+u,201+f);
glVertex2f(257+u,204+f);
glVertex2f(257+u,206+f);
glVertex2f(257+u,207+f);
glVertex2f(257+u,208+f);
glVertex2f(257+u,209+f);
glVertex2f(257+u,210+f);
glVertex2f(257+u,210+f);
glVertex2f(257+u,211+f);
glVertex2f(257+u,215+f);
glVertex2f(257+u,216+f);
glVertex2f(257+u,221+f);
glVertex2f(258+u,222+f);
glVertex2f(259+u,225+f);
glVertex2f(261+u,227+f);
glVertex2f(263+u,229+f);
glVertex2f(263+u,230+f);
glVertex2f(265+u,233+f);
glVertex2f(267+u,236+f);
glVertex2f(269+u,240+f);
glVertex2f(270+u,243+f);
glVertex2f(271+u,245+f);
glVertex2f(272+u,247+f);
glVertex2f(272+u,249+f);
glVertex2f(272+u,252+f);
glVertex2f(272+u,253+f);
glVertex2f(272+u,254+f);
glVertex2f(272+u,256+f);
glVertex2f(272+u,260+f);
glVertex2f(272+u,261+f);
glVertex2f(272+u,265+f);
glVertex2f(272+u,267+f);
glVertex2f(271+u,270+f);
glVertex2f(270+u,274+f);
glVertex2f(269+u,276+f);
glVertex2f(269+u,277+f);
glVertex2f(267+u,280+f);
glVertex2f(265+u,284+f);
glVertex2f(263+u,288+f);
glVertex2f(262+u,291+f);
glVertex2f(261+u,293+f);
glVertex2f(260+u,294+f);
glVertex2f(258+u,296+f);
glVertex2f(257+u,297+f);
glVertex2f(256+u,299+f);
glVertex2f(255+u,300+f);
glVertex2f(253+u,302+f);
glVertex2f(252+u,304+f);
glVertex2f(249+u,306+f);
glVertex2f(246+u,308+f);
glVertex2f(244+u,310+f);
glVertex2f(241+u,312+f);
glVertex2f(240+u,313+f);
glVertex2f(236+u,315+f);
glVertex2f(234+u,316+f);
glVertex2f(232+u,318+f);
glVertex2f(229+u,320+f);
glVertex2f(227+u,321+f);


      glEnd();
      glPopMatrix();
}


void f_head()
{

     glPushMatrix();
       //glTranslatef(-5.0,-5.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
       glBegin(GL_POLYGON);
       glColor3f(0.2f, 0.0f, 0.74f);
       glVertex2f(187+u,483+f);
glVertex2f(182+u,482+f);
glVertex2f(179+u,482+f);
glVertex2f(176+u,482+f);
glVertex2f(174+u,482+f);
glVertex2f(171+u,481+f);
glVertex2f(168+u,479+f);
glVertex2f(162+u,477+f);
glVertex2f(160+u,476+f);
glVertex2f(157+u,474+f);
glVertex2f(154+u,473+f);
glVertex2f(151+u,472+f);
glVertex2f(148+u,470+f);
glVertex2f(145+u,469+f);
glVertex2f(140+u,465+f);
glVertex2f(136+u,461+f);
glVertex2f(135+u,457+f);
glVertex2f(133+u,455+f);
glVertex2f(130+u,449+f);
glVertex2f(130+u,446+f);
glVertex2f(129+u,441+f);
glVertex2f(128+u,437+f);
glVertex2f(128+u,432+f);
glVertex2f(128+u,429+f);
glVertex2f(126+u,425+f);
glVertex2f(125+u,421+f);
glVertex2f(124+u,418+f);
glVertex2f(123+u,412+f);
glVertex2f(120+u,407+f);
glVertex2f(116+u,401+f);
glVertex2f(113+u,398+f);
glVertex2f(110+u,396+f);
glVertex2f(105+u,391+f);
glVertex2f(103+u,387+f);
glVertex2f(100+u,383+f);
glVertex2f(99+u,378+f);
glVertex2f(99+u,374+f);
glVertex2f(98+u,367+f);
glVertex2f(98+u,363+f);
glVertex2f(99+u,358+f);
glVertex2f(101+u,353+f);
glVertex2f(104+u,348+f);
glVertex2f(106+u,343+f);
glVertex2f(110+u,337+f);
glVertex2f(112+u,334+f);
glVertex2f(115+u,329+f);
glVertex2f(119+u,327+f);
glVertex2f(125+u,323+f);
glVertex2f(129+u,320+f);
glVertex2f(134+u,317+f);
glVertex2f(140+u,315+f);
glVertex2f(146+u,314+f);
glVertex2f(152+u,313+f);
glVertex2f(158+u,313+f);
glVertex2f(165+u,313+f);
glVertex2f(170+u,313+f);
glVertex2f(177+u,313+f);
glVertex2f(183+u,312+f);
glVertex2f(188+u,312+f);
glVertex2f(192+u,313+f);
glVertex2f(195+u,314+f);
glVertex2f(200+u,316+f);
glVertex2f(205+u,319+f);
glVertex2f(209+u,320+f);
glVertex2f(213+u,321+f);
glVertex2f(216+u,323+f);
glVertex2f(220+u,324+f);
glVertex2f(223+u,325+f);
glVertex2f(225+u,327+f);
glVertex2f(228+u,328+f);
glVertex2f(232+u,329+f);
glVertex2f(234+u,331+f);
glVertex2f(237+u,332+f);
glVertex2f(239+u,334+f);
glVertex2f(241+u,335+f);
glVertex2f(242+u,337+f);
glVertex2f(245+u,339+f);
glVertex2f(248+u,343+f);
glVertex2f(251+u,346+f);
glVertex2f(254+u,350+f);
glVertex2f(256+u,354+f);
glVertex2f(257+u,357+f);
glVertex2f(258+u,364+f);
glVertex2f(259+u,367+f);
glVertex2f(259+u,370+f);
glVertex2f(259+u,373+f);
glVertex2f(259+u,376+f);
glVertex2f(259+u,380+f);
glVertex2f(258+u,382+f);
glVertex2f(257+u,387+f);
glVertex2f(256+u,389+f);
glVertex2f(255+u,393+f);
glVertex2f(254+u,395+f);
glVertex2f(253+u,398+f);
glVertex2f(250+u,401+f);
glVertex2f(249+u,404+f);
glVertex2f(247+u,406+f);
glVertex2f(245+u,410+f);
glVertex2f(244+u,413+f);
glVertex2f(242+u,418+f);
glVertex2f(242+u,425+f);
glVertex2f(242+u,427+f);
glVertex2f(241+u,431+f);
glVertex2f(240+u,433+f);
glVertex2f(239+u,437+f);
glVertex2f(239+u,440+f);
glVertex2f(238+u,442+f);
glVertex2f(237+u,444+f);
glVertex2f(237+u,446+f);
glVertex2f(236+u,448+f);
glVertex2f(234+u,452+f);
glVertex2f(233+u,455+f);
glVertex2f(231+u,459+f);
glVertex2f(230+u,461+f);
glVertex2f(228+u,465+f);
glVertex2f(227+u,466+f);
glVertex2f(225+u,469+f);
glVertex2f(221+u,472+f);
glVertex2f(219+u,474+f);
glVertex2f(215+u,477+f);
glVertex2f(212+u,480+f);
glVertex2f(209+u,482+f);
glVertex2f(205+u,482+f);
glVertex2f(202+u,483+f);
glVertex2f(198+u,484+f);
glVertex2f(196+u,484+f);
glVertex2f(194+u,484+f);



       glEnd();
      glPopMatrix();
}


void right_ear()
{

     glPushMatrix();
       glTranslatef(0.0,-25.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
       glBegin(GL_POLYGON);
       glColor3f(0.9529411764705882, 0.6470588235294118, 0.596078431372549);
glVertex2f(325+u,1641+f);
glVertex2f(325+u,1623+f);
glVertex2f(327+u,1604+f);
glVertex2f(329+u,1580+f);
glVertex2f(331+u,1553+f);
glVertex2f(335+u,1527+f);
glVertex2f(341+u,1506+f);
glVertex2f(351+u,1480+f);
glVertex2f(359+u,1463+f);
glVertex2f(374+u,1445+f);
glVertex2f(390+u,1431+f);
glVertex2f(406+u,1418+f);
glVertex2f(421+u,1410+f);
glVertex2f(433+u,1418+f);
glVertex2f(439+u,1427+f);
glVertex2f(447+u,1439+f);
glVertex2f(449+u,1451+f);
glVertex2f(451+u,1459+f);
glVertex2f(453+u,1467+f);
glVertex2f(457+u,1480+f);
glVertex2f(459+u,1488+f);
glVertex2f(462+u,1500+f);
glVertex2f(462+u,1512+f);
glVertex2f(462+u,1521+f);
glVertex2f(457+u,1533+f);
glVertex2f(457+u,1541+f);
glVertex2f(451+u,1551+f);
glVertex2f(447+u,1557+f);
glVertex2f(445+u,1564+f);
glVertex2f(439+u,1570+f);
glVertex2f(433+u,1578+f);
glVertex2f(427+u,1590+f);
glVertex2f(421+u,1596+f);
glVertex2f(408+u,1606+f);
glVertex2f(400+u,1611+f);
glVertex2f(392+u,1615+f);
glVertex2f(384+u,1619+f);
glVertex2f(380+u,1623+f);
glVertex2f(372+u,1625+f);
glVertex2f(365+u,1627+f);
glVertex2f(361+u,1631+f);
glVertex2f(351+u,1635+f);
glVertex2f(343+u,1639+f);
glVertex2f(335+u,1643+f);



       glEnd();
      glPopMatrix();
}

void left_ear()
{

     glPushMatrix();
       glTranslatef(-34,-5.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
       glBegin(GL_POLYGON);
       glColor3f(0.9529411764705882, 0.6470588235294118, 0.596078431372549);
       glVertex2f( 1073+u,1592+f);
glVertex2f( 1063+u,1590+f);
glVertex2f( 1052+u,1588+f);
glVertex2f( 1046+u,1586+f);
glVertex2f( 1038+u,1584+f);
glVertex2f( 1032+u,1582+f);
glVertex2f( 1028+u,1580+f);
glVertex2f( 1024+u,1580+f);
glVertex2f( 1018+u,1576+f);
glVertex2f( 1013+u,1572+f);
glVertex2f( 1009+u,1572+f);
glVertex2f( 1005+u,1572+f);
glVertex2f( 1001+u,1570+f);
glVertex2f( 993+u,1566+f);
glVertex2f( 991+u,1564+f);
glVertex2f( 987+u,1561+f);
glVertex2f( 985+u,1561+f);
glVertex2f( 979+u,1559+f);
glVertex2f( 973+u,1557+f);
glVertex2f( 968+u,1553+f);
glVertex2f( 962+u,1551+f);
glVertex2f( 954+u,1547+f);
glVertex2f( 948+u,1545+f);
glVertex2f( 942+u,1541+f);
glVertex2f( 936+u,1537+f);
glVertex2f( 930+u,1533+f);
glVertex2f( 926+u,1529+f);
glVertex2f( 919+u,1525+f);
glVertex2f( 915+u,1519+f);
glVertex2f( 913+u,1514+f);
glVertex2f( 909+u,1506+f);
glVertex2f( 905+u,1498+f);
glVertex2f( 905+u,1488+f);
glVertex2f( 907+u,1480+f);
glVertex2f( 907+u,1472+f);
glVertex2f( 909+u,1459+f);
glVertex2f( 913+u,1453+f);
glVertex2f( 915+u,1445+f);
glVertex2f( 919+u,1439+f);
glVertex2f( 924+u,1431+f);
glVertex2f( 930+u,1418+f);
glVertex2f( 932+u,1410+f);
glVertex2f( 936+u,1402+f);
glVertex2f( 940+u,1396+f);
glVertex2f( 948+u,1390+f);
glVertex2f( 952+u,1382+f);
glVertex2f( 956+u,1378+f);
glVertex2f( 962+u,1378+f);
glVertex2f( 966+u,1382+f);
glVertex2f( 971+u,1384+f);
glVertex2f( 973+u,1388+f);
glVertex2f( 977+u,1390+f);
glVertex2f( 981+u,1394+f);
glVertex2f( 985+u,1398+f);
glVertex2f( 987+u,1400+f);
glVertex2f( 991+u,1406+f);
glVertex2f( 995+u,1410+f);
glVertex2f( 997+u,1412+f);
glVertex2f( 1001+u,1418+f);
glVertex2f( 1005+u,1422+f);
glVertex2f( 1013+u,1431+f);
glVertex2f( 1020+u,1437+f);
glVertex2f( 1024+u,1441+f);
glVertex2f( 1028+u,1447+f);
glVertex2f( 1030+u,1451+f);
glVertex2f( 1030+u,1455+f);
glVertex2f( 1034+u,1459+f);
glVertex2f( 1036+u,1461+f);
glVertex2f( 1038+u,1465+f);
glVertex2f( 1040+u,1472+f);
glVertex2f( 1042+u,1476+f);
glVertex2f( 1044+u,1482+f);
glVertex2f( 1046+u,1484+f);
glVertex2f( 1050+u,1490+f);
glVertex2f( 1052+u,1494+f);
glVertex2f( 1054+u,1500+f);
glVertex2f( 1056+u,1504+f);
glVertex2f( 1058+u,1510+f);
glVertex2f( 1058+u,1514+f);
glVertex2f( 1058+u,1519+f);
glVertex2f( 1060+u,1521+f);
glVertex2f( 1060+u,1527+f);
glVertex2f( 1063+u,1531+f);
glVertex2f( 1063+u,1535+f);
glVertex2f( 1065+u,1545+f);
glVertex2f( 1069+u,1551+f);
glVertex2f( 1069+u,1553+f);
glVertex2f( 1071+u,1559+f);
glVertex2f( 1073+u,1566+f);
glVertex2f( 1075+u,1570+f);
glVertex2f( 1075+u,1578+f);
glVertex2f( 1075+u,1582+f);





       glEnd();
      glPopMatrix();
}

void left_hand()
{

     glPushMatrix();
       //glTranslatef(-5.0,-5.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
       glBegin(GL_POLYGON);
       glColor3f(0.607843137254902, 0.8549019607843137, 0.9137254901960784);
       glVertex2f(541+u,1078+f);
glVertex2f(529+u,1082+f);
glVertex2f(521+u,1082+f);
glVertex2f(504+u,1084+f);
glVertex2f(494+u,1084+f);
glVertex2f(488+u,1086+f);
glVertex2f(476+u,1090+f);
glVertex2f(464+u,1094+f);
glVertex2f(453+u,1096+f);
glVertex2f(443+u,1100+f);
glVertex2f(435+u,1104+f);
glVertex2f(431+u,1106+f);
glVertex2f(423+u,1110+f);
glVertex2f(417+u,1112+f);
glVertex2f(406+u,1117+f);
glVertex2f(402+u,1121+f);
glVertex2f(396+u,1125+f);
glVertex2f(386+u,1131+f);
glVertex2f(380+u,1137+f);
glVertex2f(370+u,1143+f);
glVertex2f(359+u,1151+f);
glVertex2f(351+u,1159+f);
glVertex2f(343+u,1166+f);
glVertex2f(337+u,1170+f);
glVertex2f(333+u,1174+f);
glVertex2f(329+u,1176+f);
glVertex2f(327+u,1180+f);
glVertex2f(322+u,1182+f);
glVertex2f(318+u,1186+f);
glVertex2f(312+u,1192+f);
glVertex2f(310+u,1196+f);
glVertex2f(306+u,1200+f);
glVertex2f(302+u,1204+f);
glVertex2f(296+u,1211+f);
glVertex2f(292+u,1217+f);
glVertex2f(284+u,1223+f);
glVertex2f(271+u,1233+f);
glVertex2f(259+u,1243+f);
glVertex2f(255+u,1251+f);
glVertex2f(247+u,1258+f);
glVertex2f(241+u,1264+f);
glVertex2f(247+u,1270+f);
glVertex2f(251+u,1280+f);
glVertex2f(251+u,1284+f);
glVertex2f(255+u,1288+f);
glVertex2f(257+u,1294+f);
glVertex2f(261+u,1300+f);
glVertex2f(263+u,1305+f);
glVertex2f(267+u,1311+f);
glVertex2f(269+u,1315+f);
glVertex2f(271+u,1319+f);
glVertex2f(275+u,1325+f);
glVertex2f(278+u,1329+f);
glVertex2f(280+u,1335+f);
glVertex2f(282+u,1341+f);
glVertex2f(284+u,1345+f);
glVertex2f(284+u,1352+f);
glVertex2f(284+u,1362+f);
glVertex2f(284+u,1368+f);
glVertex2f(282+u,1374+f);
glVertex2f(275+u,1378+f);
glVertex2f(269+u,1384+f);
glVertex2f(265+u,1388+f);
glVertex2f(261+u,1390+f);
glVertex2f(253+u,1392+f);
glVertex2f(247+u,1392+f);
glVertex2f(239+u,1395+f);
glVertex2f(235+u,1395+f);
glVertex2f(231+u,1392+f);
glVertex2f(228+u,1388+f);
glVertex2f(224+u,1386+f);
glVertex2f(222+u,1384+f);
glVertex2f(220+u,1382+f);
glVertex2f(218+u,1380+f);
glVertex2f(216+u,1378+f);
glVertex2f(214+u,1372+f);
glVertex2f(212+u,1366+f);
glVertex2f(210+u,1362+f);
glVertex2f(208+u,1356+f);
glVertex2f(204+u,1352+f);
glVertex2f(204+u,1348+f);
glVertex2f(202+u,1341+f);
glVertex2f(200+u,1335+f);
glVertex2f(196+u,1335+f);
glVertex2f(192+u,1335+f);
glVertex2f(188+u,1337+f);
glVertex2f(179+u,1341+f);
glVertex2f(175+u,1348+f);
glVertex2f(171+u,1356+f);
glVertex2f(167+u,1364+f);
glVertex2f(167+u,1370+f);
glVertex2f(167+u,1378+f);
glVertex2f(167+u,1382+f);
glVertex2f(165+u,1390+f);
glVertex2f(161+u,1395+f);
glVertex2f(157+u,1403+f);
glVertex2f(151+u,1413+f);
glVertex2f(147+u,1419+f);
glVertex2f(141+u,1425+f);
glVertex2f(134+u,1427+f);
glVertex2f(126+u,1427+f);
glVertex2f(118+u,1429+f);
glVertex2f(114+u,1427+f);
glVertex2f(110+u,1425+f);
glVertex2f(110+u,1421+f);
glVertex2f(108+u,1415+f);
glVertex2f(106+u,1411+f);
glVertex2f(106+u,1409+f);
glVertex2f(106+u,1405+f);
glVertex2f(106+u,1399+f);
glVertex2f(106+u,1395+f);
glVertex2f(106+u,1386+f);
glVertex2f(108+u,1382+f);
glVertex2f(108+u,1378+f);
glVertex2f(108+u,1366+f);
glVertex2f(110+u,1360+f);
glVertex2f(110+u,1350+f);
glVertex2f(112+u,1343+f);
glVertex2f(112+u,1335+f);
glVertex2f(106+u,1327+f);
glVertex2f(96+u,1327+f);
glVertex2f(85+u,1331+f);
glVertex2f(77+u,1335+f);
glVertex2f(71+u,1339+f);
glVertex2f(65+u,1343+f);
glVertex2f(61+u,1345+f);
glVertex2f(55+u,1350+f);
glVertex2f(49+u,1350+f);
glVertex2f(47+u,1350+f);
glVertex2f(42+u,1352+f);
glVertex2f(34+u,1352+f);
glVertex2f(32+u,1352+f);
glVertex2f(28+u,1352+f);
glVertex2f(26+u,1350+f);
glVertex2f(24+u,1348+f);
glVertex2f(22+u,1348+f);
glVertex2f(18+u,1339+f);
glVertex2f(16+u,1335+f);
glVertex2f(14+u,1329+f);
glVertex2f(14+u,1317+f);
glVertex2f(14+u,1309+f);
glVertex2f(18+u,1300+f);
glVertex2f(20+u,1294+f);
glVertex2f(26+u,1290+f);
glVertex2f(34+u,1288+f);
glVertex2f(44+u,1286+f);
glVertex2f(53+u,1282+f);
glVertex2f(63+u,1280+f);
glVertex2f(67+u,1276+f);
glVertex2f(75+u,1270+f);
glVertex2f(77+u,1268+f);
glVertex2f(77+u,1264+f);
glVertex2f(73+u,1262+f);
glVertex2f(61+u,1262+f);
glVertex2f(55+u,1262+f);
glVertex2f(47+u,1258+f);
glVertex2f(40+u,1253+f);
glVertex2f(32+u,1251+f);
glVertex2f(28+u,1247+f);
glVertex2f(26+u,1239+f);
glVertex2f(22+u,1235+f);
glVertex2f(20+u,1225+f);
glVertex2f(20+u,1213+f);
glVertex2f(24+u,1209+f);
glVertex2f(30+u,1200+f);
glVertex2f(38+u,1192+f);
glVertex2f(42+u,1188+f);
glVertex2f(51+u,1190+f);
glVertex2f(59+u,1192+f);
glVertex2f(69+u,1192+f);
glVertex2f(81+u,1198+f);
glVertex2f(87+u,1198+f);
glVertex2f(100+u,1200+f);
glVertex2f(112+u,1196+f);
glVertex2f(130+u,1192+f);
glVertex2f(143+u,1192+f);
glVertex2f(151+u,1190+f);
glVertex2f(165+u,1190+f);
glVertex2f(171+u,1190+f);
glVertex2f(179+u,1192+f);
glVertex2f(186+u,1192+f);
glVertex2f(198+u,1182+f);
glVertex2f(206+u,1168+f);
glVertex2f(210+u,1159+f);
glVertex2f(216+u,1153+f);
glVertex2f(220+u,1149+f);
glVertex2f(228+u,1137+f);
glVertex2f(233+u,1131+f);
glVertex2f(235+u,1125+f);
glVertex2f(237+u,1119+f);
glVertex2f(243+u,1112+f);
glVertex2f(247+u,1108+f);
glVertex2f(251+u,1102+f);
glVertex2f(255+u,1096+f);
glVertex2f(261+u,1090+f);
glVertex2f(269+u,1076+f);
glVertex2f(273+u,1069+f);
glVertex2f(280+u,1065+f);
glVertex2f(288+u,1057+f);
glVertex2f(298+u,1049+f);
glVertex2f(306+u,1039+f);
glVertex2f(318+u,1027+f);
glVertex2f(322+u,1025+f);
glVertex2f(325+u,1020+f);
glVertex2f(335+u,1010+f);
glVertex2f(343+u,1002+f);
glVertex2f(345+u,998+f);
glVertex2f(357+u,992+f);
glVertex2f(365+u,982+f);
glVertex2f(374+u,975+f);
glVertex2f(388+u,963+f);
glVertex2f(400+u,955+f);
glVertex2f(412+u,947+f);
glVertex2f(421+u,939+f);
glVertex2f(433+u,933+f);
glVertex2f(445+u,928+f);
glVertex2f(459+u,922+f);
glVertex2f(468+u,916+f);
glVertex2f(470+u,908+f);
glVertex2f(470+u,902+f);
glVertex2f(468+u,890+f);
glVertex2f(907+u,826+f);


       glEnd();
      glPopMatrix();
}


void right_hand()
{

     glPushMatrix();
       //glTranslatef(-5.0,-5.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
       glBegin(GL_POLYGON);
      glColor3f(0.607843137254902, 0.8549019607843137, 0.9137254901960784);
       glVertex2f(907+u,828+f);
glVertex2f(915+u,822+f);
glVertex2f(921+u,818+f);
glVertex2f(928+u,816+f);
glVertex2f(934+u,812+f);
glVertex2f(940+u,810+f);
glVertex2f(942+u,806+f);
glVertex2f(946+u,804+f);
glVertex2f(952+u,800+f);
glVertex2f(954+u,798+f);
glVertex2f(960+u,794+f);
glVertex2f(964+u,791+f);
glVertex2f(968+u,785+f);
glVertex2f(975+u,781+f);
glVertex2f(977+u,777+f);
glVertex2f(981+u,773+f);
glVertex2f(987+u,771+f);
glVertex2f(989+u,767+f);
glVertex2f(995+u,761+f);
glVertex2f(997+u,759+f);
glVertex2f(1001+u,755+f);
glVertex2f(1005+u,753+f);
glVertex2f(1007+u,751+f);
glVertex2f(1009+u,749+f);
glVertex2f(1013+u,747+f);
glVertex2f(1015+u,744+f);
glVertex2f(1018+u,742+f);
glVertex2f(1018+u,740+f);
glVertex2f(1024+u,736+f);
glVertex2f(1026+u,734+f);
glVertex2f(1030+u,730+f);
glVertex2f(1032+u,726+f);
glVertex2f(1036+u,724+f);
glVertex2f(1040+u,720+f);
glVertex2f(1044+u,718+f);
glVertex2f(1044+u,716+f);
glVertex2f(1050+u,714+f);
glVertex2f(1050+u,712+f);
glVertex2f(1052+u,708+f);
glVertex2f(1052+u,704+f);
glVertex2f(1052+u,699+f);
glVertex2f(1052+u,693+f);
glVertex2f(1050+u,691+f);
glVertex2f(1050+u,687+f);
glVertex2f(1048+u,679+f);
glVertex2f(1048+u,675+f);
glVertex2f(1046+u,673+f);
glVertex2f(1046+u,669+f);
glVertex2f(1046+u,665+f);
glVertex2f(1044+u,657+f);
glVertex2f(1044+u,650+f);
glVertex2f(1044+u,644+f);
glVertex2f(1044+u,640+f);
glVertex2f(1044+u,630+f);
glVertex2f(1044+u,626+f);
glVertex2f(1044+u,624+f);
glVertex2f(1046+u,616+f);
glVertex2f(1048+u,614+f);
glVertex2f(1050+u,612+f);
glVertex2f(1052+u,607+f);
glVertex2f(1054+u,603+f);
glVertex2f(1058+u,599+f);
glVertex2f(1060+u,597+f);
glVertex2f(1065+u,595+f);
glVertex2f(1071+u,593+f);
glVertex2f(1073+u,591+f);
glVertex2f(1079+u,591+f);
glVertex2f(1083+u,593+f);
glVertex2f(1089+u,597+f);
glVertex2f(1095+u,601+f);
glVertex2f(1097+u,607+f);
glVertex2f(1099+u,614+f);
glVertex2f(1101+u,622+f);
glVertex2f(1101+u,626+f);
glVertex2f(1101+u,630+f);
glVertex2f(1101+u,636+f);
glVertex2f(1103+u,640+f);
glVertex2f(1105+u,642+f);
glVertex2f(1112+u,644+f);
glVertex2f(1118+u,642+f);
glVertex2f(1120+u,638+f);
glVertex2f(1120+u,632+f);
glVertex2f(1122+u,626+f);
glVertex2f(1126+u,618+f);
glVertex2f(1128+u,614+f);
glVertex2f(1128+u,607+f);
glVertex2f(1128+u,603+f);
glVertex2f(1130+u,597+f);
glVertex2f(1134+u,593+f);
glVertex2f(1136+u,589+f);
glVertex2f(1140+u,585+f);
glVertex2f(1142+u,579+f);
glVertex2f(1146+u,577+f);
glVertex2f(1148+u,575+f);
glVertex2f(1152+u,573+f);
glVertex2f(1157+u,571+f);
glVertex2f(1161+u,571+f);
glVertex2f(1165+u,573+f);
glVertex2f(1173+u,577+f);
glVertex2f(1177+u,579+f);
glVertex2f(1179+u,583+f);
glVertex2f(1183+u,587+f);
glVertex2f(1183+u,589+f);
glVertex2f(1183+u,591+f);
glVertex2f(1183+u,595+f);
glVertex2f(1185+u,599+f);
glVertex2f(1185+u,603+f);
glVertex2f(1185+u,607+f);
glVertex2f(1185+u,614+f);
glVertex2f(1183+u,618+f);
glVertex2f(1183+u,620+f);
glVertex2f(1181+u,624+f);
glVertex2f(1181+u,626+f);
glVertex2f(1181+u,630+f);
glVertex2f(1179+u,634+f);
glVertex2f(1179+u,638+f);
glVertex2f(1177+u,642+f);
glVertex2f(1177+u,648+f);
glVertex2f(1177+u,655+f);
glVertex2f(1181+u,657+f);
glVertex2f(1185+u,655+f);
glVertex2f(1189+u,652+f);
glVertex2f(1195+u,648+f);
glVertex2f(1197+u,644+f);
glVertex2f(1202+u,638+f);
glVertex2f(1206+u,634+f);
glVertex2f(1210+u,630+f);
glVertex2f(1214+u,628+f);
glVertex2f(1218+u,626+f);
glVertex2f(1222+u,624+f);
glVertex2f(1228+u,624+f);
glVertex2f(1234+u,624+f);
glVertex2f(1238+u,624+f);
glVertex2f(1242+u,628+f);
glVertex2f(1242+u,634+f);
glVertex2f(1242+u,638+f);
glVertex2f(1242+u,642+f);
glVertex2f(1242+u,648+f);
glVertex2f(1242+u,650+f);
glVertex2f(1240+u,657+f);
glVertex2f(1240+u,659+f);
glVertex2f(1240+u,661+f);
glVertex2f(1238+u,663+f);
glVertex2f(1238+u,667+f);
glVertex2f(1236+u,671+f);
glVertex2f(1234+u,673+f);
glVertex2f(1232+u,675+f);
glVertex2f(1230+u,679+f);
glVertex2f(1228+u,681+f);
glVertex2f(1226+u,685+f);
glVertex2f(1224+u,689+f);
glVertex2f(1218+u,695+f);
glVertex2f(1216+u,699+f);
glVertex2f(1212+u,702+f);
glVertex2f(1204+u,710+f);
glVertex2f(1208+u,712+f);
glVertex2f(1214+u,708+f);
glVertex2f(1220+u,708+f);
glVertex2f(1226+u,706+f);
glVertex2f(1234+u,708+f);
glVertex2f(1236+u,712+f);
glVertex2f(1238+u,716+f);
glVertex2f(1240+u,720+f);
glVertex2f(1238+u,726+f);
glVertex2f(1234+u,732+f);
glVertex2f(1232+u,738+f);
glVertex2f(1232+u,740+f);
glVertex2f(1226+u,747+f);
glVertex2f(1220+u,753+f);
glVertex2f(1218+u,757+f);
glVertex2f(1212+u,759+f);
glVertex2f(1210+u,761+f);
glVertex2f(1206+u,761+f);
glVertex2f(1202+u,763+f);
glVertex2f(1197+u,763+f);
glVertex2f(1193+u,765+f);
glVertex2f(1193+u,765+f);
glVertex2f(1191+u,765+f);
glVertex2f(1191+u,767+f);
glVertex2f(1189+u,767+f);
glVertex2f(1185+u,767+f);
glVertex2f(1181+u,769+f);
glVertex2f(1177+u,771+f);
glVertex2f(1171+u,771+f);
glVertex2f(1169+u,773+f);
glVertex2f(1161+u,773+f);
glVertex2f(1159+u,775+f);
glVertex2f(1148+u,779+f);
glVertex2f(1146+u,779+f);
glVertex2f(1144+u,779+f);
glVertex2f(1142+u,781+f);
glVertex2f(1138+u,781+f);
glVertex2f(1138+u,781+f);
glVertex2f(1136+u,783+f);
glVertex2f(1132+u,785+f);
glVertex2f(1130+u,785+f);
glVertex2f(1124+u,787+f);
glVertex2f(1122+u,789+f);
glVertex2f(1116+u,791+f);
glVertex2f(1114+u,791+f);
glVertex2f(1112+u,791+f);
glVertex2f(1107+u,796+f);
glVertex2f(1103+u,798+f);
glVertex2f(1101+u,802+f);
glVertex2f(1099+u,802+f);
glVertex2f(1099+u,804+f);
glVertex2f(1093+u,808+f);
glVertex2f(1091+u,810+f);
glVertex2f(1089+u,810+f);
glVertex2f(1087+u,814+f);
glVertex2f(1085+u,816+f);
glVertex2f(1081+u,820+f);
glVertex2f(1081+u,822+f);
glVertex2f(1077+u,824+f);
glVertex2f(1075+u,826+f);
glVertex2f(1075+u,826+f);
glVertex2f(1075+u,828+f);
glVertex2f(1071+u,830+f);
glVertex2f(1069+u,832+f);
glVertex2f(1067+u,832+f);
glVertex2f(1067+u,834+f);
glVertex2f(1067+u,836+f);
glVertex2f(1065+u,836+f);
glVertex2f(1063+u,838+f);
glVertex2f(1060+u,841+f);
glVertex2f(1056+u,847+f);
glVertex2f(1054+u,847+f);
glVertex2f(1052+u,851+f);
glVertex2f(1052+u,851+f);
glVertex2f(1050+u,853+f);
glVertex2f(1048+u,855+f);
glVertex2f(1044+u,859+f);
glVertex2f(1044+u,859+f);
glVertex2f(1042+u,861+f);
glVertex2f(1040+u,865+f);
glVertex2f(1036+u,869+f);
glVertex2f(1032+u,871+f);
glVertex2f(1030+u,875+f);
glVertex2f(1028+u,877+f);
glVertex2f(1026+u,879+f);
glVertex2f(1024+u,881+f);
glVertex2f(1024+u,881+f);
glVertex2f(1022+u,883+f);
glVertex2f(1020+u,883+f);
glVertex2f(1018+u,888+f);
glVertex2f(1018+u,890+f);
glVertex2f(1013+u,892+f);
glVertex2f(1013+u,894+f);
glVertex2f(1011+u,896+f);
glVertex2f(1007+u,900+f);
glVertex2f(1005+u,902+f);
glVertex2f(1005+u,902+f);
glVertex2f(1003+u,904+f);
glVertex2f(1001+u,906+f);
glVertex2f(999+u,908+f);
glVertex2f(997+u,908+f);
glVertex2f(997+u,908+f);
glVertex2f(995+u,910+f);
glVertex2f(991+u,914+f);
glVertex2f(991+u,916+f);
glVertex2f(989+u,918+f);
glVertex2f(985+u,920+f);
glVertex2f(985+u,920+f);
glVertex2f(983+u,922+f);
glVertex2f(979+u,926+f);
glVertex2f(977+u,928+f);
glVertex2f(975+u,930+f);
glVertex2f(973+u,930+f);
glVertex2f(973+u,933+f);
glVertex2f(968+u,937+f);
glVertex2f(966+u,939+f);
glVertex2f(964+u,941+f);
glVertex2f(962+u,943+f);
glVertex2f(958+u,945+f);
glVertex2f(956+u,947+f);
glVertex2f(954+u,949+f);
glVertex2f(952+u,953+f);
glVertex2f(948+u,957+f);
glVertex2f(946+u,959+f);
glVertex2f(944+u,959+f);
glVertex2f(944+u,961+f);
glVertex2f(942+u,963+f);
glVertex2f(940+u,965+f);
glVertex2f(938+u,967+f);
glVertex2f(938+u,967+f);
glVertex2f(934+u,969+f);
glVertex2f(932+u,973+f);
glVertex2f(930+u,975+f);
glVertex2f(926+u,978+f);
glVertex2f(924+u,980+f);
glVertex2f(921+u,980+f);
glVertex2f(919+u,982+f);
glVertex2f(917+u,984+f);
glVertex2f(915+u,986+f);
glVertex2f(911+u,988+f);
glVertex2f(909+u,988+f);
glVertex2f(907+u,990+f);
glVertex2f(903+u,992+f);
glVertex2f(901+u,994+f);
glVertex2f(899+u,996+f);
glVertex2f(895+u,998+f);
glVertex2f(893+u,998+f);
glVertex2f(891+u,1000+f);
glVertex2f(889+u,1002+f);
glVertex2f(885+u,1006+f);
glVertex2f(883+u,1008+f);
glVertex2f(881+u,1010+f);
glVertex2f(876+u,1014+f);
glVertex2f(874+u,1014+f);
glVertex2f(872+u,1016+f);
glVertex2f(868+u,1018+f);
glVertex2f(864+u,1020+f);
glVertex2f(858+u,1025+f);
glVertex2f(856+u,1027+f);
glVertex2f(852+u,1029+f);
glVertex2f(848+u,1031+f);
glVertex2f(846+u,1033+f);
glVertex2f(842+u,1035+f);
glVertex2f(836+u,1037+f);
glVertex2f(832+u,1039+f);
glVertex2f(825+u,1041+f);
glVertex2f(823+u,1041+f);
glVertex2f(819+u,1045+f);
glVertex2f(815+u,1049+f);
glVertex2f(809+u,1051+f);
glVertex2f(807+u,1053+f);
glVertex2f(801+u,1057+f);
glVertex2f(793+u,1059+f);
glVertex2f(784+u,1061+f);
glVertex2f(400+u,955+f);



       glEnd();
      glPopMatrix();
}

void left_eye()
{

     glPushMatrix();
       glTranslatef(0.0,-5.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
       glBegin(GL_POLYGON);
       //glColor3f(0.8627450980392157, 0.8627450980392157, 0.8627450980392157);
        //glColor3f(0.88, 0.88, 0.88);
        glColor3f(0.9529411764705882, 0.6470588235294118, 0.596078431372549);
       glVertex2f( 605+u,1356+f);
glVertex2f( 611+u,1364+f);
glVertex2f( 613+u,1370+f);
glVertex2f( 615+u,1378+f);
glVertex2f( 615+u,1386+f);
glVertex2f( 617+u,1401+f);
glVertex2f( 617+u,1405+f);
glVertex2f( 619+u,1411+f);
glVertex2f( 619+u,1417+f);
glVertex2f( 621+u,1423+f);
glVertex2f( 623+u,1431+f);
glVertex2f( 623+u,1442+f);
glVertex2f( 623+u,1448+f);
glVertex2f( 623+u,1456+f);
glVertex2f( 623+u,1458+f);
glVertex2f( 623+u,1464+f);
glVertex2f( 625+u,1470+f);
glVertex2f( 625+u,1478+f);
glVertex2f( 621+u,1487+f);
glVertex2f( 619+u,1493+f);
glVertex2f( 615+u,1497+f);
glVertex2f( 609+u,1499+f);
glVertex2f( 605+u,1503+f);
glVertex2f( 601+u,1505+f);
glVertex2f( 596+u,1505+f);
glVertex2f( 590+u,1507+f);
glVertex2f( 582+u,1509+f);
glVertex2f( 578+u,1509+f);
glVertex2f( 574+u,1509+f);
glVertex2f( 568+u,1509+f);
glVertex2f( 564+u,1509+f);
glVertex2f( 553+u,1507+f);
glVertex2f( 543+u,1503+f);
glVertex2f( 539+u,1503+f);
glVertex2f( 531+u,1499+f);
glVertex2f( 527+u,1493+f);
glVertex2f( 525+u,1489+f);
glVertex2f( 517+u,1482+f);
glVertex2f( 509+u,1474+f);
glVertex2f( 504+u,1470+f);
glVertex2f( 500+u,1466+f);
glVertex2f( 498+u,1462+f);
glVertex2f( 494+u,1456+f);
glVertex2f( 494+u,1452+f);
glVertex2f( 492+u,1446+f);
glVertex2f( 488+u,1442+f);
glVertex2f( 488+u,1437+f);
glVertex2f( 486+u,1433+f);
glVertex2f( 482+u,1423+f);
glVertex2f( 482+u,1421+f);
glVertex2f( 482+u,1415+f);
glVertex2f( 482+u,1407+f);
glVertex2f( 480+u,1403+f);
glVertex2f( 480+u,1399+f);
glVertex2f( 480+u,1397+f);
glVertex2f( 478+u,1390+f);
glVertex2f( 474+u,1380+f);
glVertex2f( 474+u,1374+f);
glVertex2f( 476+u,1366+f);
glVertex2f( 476+u,1354+f);
glVertex2f( 478+u,1350+f);
glVertex2f( 484+u,1350+f);
glVertex2f( 500+u,1350+f);
glVertex2f( 511+u,1348+f);
glVertex2f( 523+u,1348+f);
glVertex2f( 539+u,1345+f);
glVertex2f( 551+u,1345+f);
glVertex2f( 564+u,1350+f);
glVertex2f( 572+u,1350+f);
glVertex2f( 580+u,1348+f);
glVertex2f( 592+u,1348+f);




       glEnd();
      glPopMatrix();
}


void right_eye()
{

     glPushMatrix();
       glTranslatef(0.0,-5.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
       glBegin(GL_POLYGON);
       //glColor3f(0.88, 0.88, 0.88);
       glColor3f(0.9529411764705882, 0.6470588235294118, 0.596078431372549);
       glVertex2f( 733+u,1339+f);
glVertex2f( 729+u,1345+f);
glVertex2f( 725+u,1354+f);
glVertex2f( 725+u,1360+f);
glVertex2f( 723+u,1368+f);
glVertex2f( 721+u,1374+f);
glVertex2f( 719+u,1382+f);
glVertex2f( 719+u,1390+f);
glVertex2f( 719+u,1399+f);
glVertex2f( 719+u,1411+f);
glVertex2f( 719+u,1417+f);
glVertex2f( 719+u,1423+f);
glVertex2f( 719+u,1429+f);
glVertex2f( 719+u,1435+f);
glVertex2f( 719+u,1442+f);
glVertex2f( 719+u,1450+f);
glVertex2f( 719+u,1458+f);
glVertex2f( 721+u,1464+f);
glVertex2f( 723+u,1468+f);
glVertex2f( 725+u,1474+f);
glVertex2f( 727+u,1482+f);
glVertex2f( 729+u,1487+f);
glVertex2f( 733+u,1491+f);
glVertex2f( 740+u,1495+f);
glVertex2f( 744+u,1499+f);
glVertex2f( 748+u,1501+f);
glVertex2f( 758+u,1503+f);
glVertex2f( 764+u,1505+f);
glVertex2f( 772+u,1505+f);
glVertex2f( 787+u,1505+f);
glVertex2f( 793+u,1505+f);
glVertex2f( 803+u,1501+f);
glVertex2f( 813+u,1497+f);
glVertex2f( 819+u,1493+f);
glVertex2f( 825+u,1489+f);
glVertex2f( 832+u,1482+f);
glVertex2f( 838+u,1474+f);
glVertex2f( 844+u,1468+f);
glVertex2f( 846+u,1464+f);
glVertex2f( 852+u,1456+f);
glVertex2f( 854+u,1446+f);
glVertex2f( 856+u,1437+f);
glVertex2f( 860+u,1429+f);
glVertex2f( 860+u,1423+f);
glVertex2f( 860+u,1415+f);
glVertex2f( 860+u,1411+f);
glVertex2f( 862+u,1405+f);
glVertex2f( 862+u,1395+f);
glVertex2f( 862+u,1384+f);
glVertex2f( 862+u,1372+f);
glVertex2f( 858+u,1362+f);
glVertex2f( 856+u,1350+f);
glVertex2f( 854+u,1339+f);
glVertex2f( 846+u,1335+f);
glVertex2f( 836+u,1337+f);
glVertex2f( 823+u,1337+f);
glVertex2f( 813+u,1339+f);
glVertex2f( 801+u,1339+f);
glVertex2f( 791+u,1341+f);
glVertex2f( 778+u,1341+f);
glVertex2f( 768+u,1341+f);
glVertex2f( 754+u,1341+f);
glVertex2f( 746+u,1339+f);



       glEnd();
      glPopMatrix();
}
void left_eye_ball()
{

    glPushMatrix();
       glTranslatef(550,1420.0,0);
       glColor3f(0.4156862745098039, 0.4235294117647059, 0.4274509803921569);
       circle(24,50);
       glPopMatrix();
}

void right_eye_ball()
{

    glPushMatrix();
       glTranslatef(780,1420.0,0);
       glColor3f(0.4156862745098039, 0.4235294117647059, 0.4274509803921569);
       circle(24,50);
       glPopMatrix();
}


void mouth()
{

    glPushMatrix();
     // glTranslatef(100.0,350.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
      glBegin(GL_POLYGON);
      glColor3f(0.8627450980392157, 0.8627450980392157, 0.8627450980392157);


glVertex2f( 666+u,1206+f);
glVertex2f( 660+u,1211+f);
glVertex2f( 656+u,1211+f);
glVertex2f( 652+u,1211+f);
glVertex2f( 645+u,1209+f);
glVertex2f( 643+u,1209+f);
glVertex2f( 635+u,1204+f);
glVertex2f( 629+u,1202+f);
glVertex2f( 627+u,1202+f);
glVertex2f( 613+u,1198+f);
glVertex2f( 611+u,1198+f);
glVertex2f( 601+u,1196+f);
glVertex2f( 594+u,1200+f);
glVertex2f( 586+u,1198+f);
glVertex2f( 580+u,1198+f);
glVertex2f( 572+u,1200+f);
glVertex2f( 568+u,1202+f);
glVertex2f( 560+u,1204+f);
glVertex2f( 553+u,1206+f);
glVertex2f( 549+u,1209+f);
glVertex2f( 545+u,1211+f);
glVertex2f( 541+u,1213+f);
glVertex2f( 535+u,1217+f);
glVertex2f( 533+u,1221+f);
glVertex2f( 529+u,1223+f);
glVertex2f( 525+u,1227+f);
glVertex2f( 523+u,1229+f);
glVertex2f( 517+u,1235+f);
glVertex2f( 517+u,1235+f);
glVertex2f( 515+u,1237+f);
glVertex2f( 515+u,1237+f);
glVertex2f( 570+u,1190+f);
glVertex2f( 576+u,1184+f);
glVertex2f( 578+u,1178+f);
glVertex2f( 584+u,1174+f);
glVertex2f( 586+u,1170+f);
glVertex2f( 588+u,1164+f);
glVertex2f( 594+u,1155+f);
glVertex2f( 596+u,1149+f);
glVertex2f( 601+u,1145+f);
glVertex2f( 605+u,1137+f);
glVertex2f( 609+u,1129+f);
glVertex2f( 611+u,1123+f);
glVertex2f( 627+u,1112+f);
glVertex2f( 621+u,1117+f);
glVertex2f( 637+u,1110+f);
glVertex2f( 639+u,1108+f);
glVertex2f( 643+u,1104+f);
glVertex2f( 645+u,1104+f);
glVertex2f( 654+u,1102+f);
glVertex2f( 656+u,1102+f);
glVertex2f( 666+u,1102+f);
glVertex2f( 668+u,1102+f);
glVertex2f( 670+u,1104+f);
glVertex2f( 676+u,1104+f);
glVertex2f( 678+u,1104+f);
glVertex2f( 684+u,1108+f);
glVertex2f( 697+u,1112+f);
glVertex2f( 697+u,1112+f);
glVertex2f( 699+u,1112+f);
glVertex2f( 705+u,1119+f);
glVertex2f( 713+u,1123+f);
glVertex2f( 719+u,1131+f);
glVertex2f( 729+u,1143+f);
glVertex2f( 727+u,1137+f);
glVertex2f( 735+u,1147+f);
glVertex2f( 742+u,1155+f);
glVertex2f( 746+u,1157+f);
glVertex2f( 748+u,1164+f);
glVertex2f( 750+u,1166+f);
glVertex2f( 756+u,1176+f);
glVertex2f( 764+u,1188+f);
glVertex2f( 764+u,1186+f);
glVertex2f( 772+u,1196+f);
glVertex2f( 782+u,1206+f);
glVertex2f( 787+u,1213+f);

      glEnd();
      glPopMatrix();
}

void left_1()
{
    glPushMatrix();
       //glTranslatef(0.0,-5.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
       glBegin(GL_POLYGON);
       //glColor3f(0.8627450980392157, 0.8627450980392157, 0.8627450980392157);
        //glColor3f(0.88, 0.88, 0.88);
        glColor3f(0.9607843137254902, 0.7411764705882353, 0.1215686274509804);
glVertex2f( 392+u,1319+f);
glVertex2f( 402+u,1323+f);
glVertex2f( 412+u,1327+f);
glVertex2f( 419+u,1327+f);
glVertex2f( 427+u,1327+f);
glVertex2f( 433+u,1327+f);
glVertex2f( 437+u,1327+f);
glVertex2f( 439+u,1327+f);
glVertex2f( 445+u,1327+f);
glVertex2f( 449+u,1327+f);
glVertex2f( 455+u,1325+f);
glVertex2f( 459+u,1323+f);
glVertex2f( 464+u,1321+f);
glVertex2f( 466+u,1317+f);
glVertex2f( 466+u,1315+f);
glVertex2f( 466+u,1311+f);
glVertex2f( 466+u,1305+f);
glVertex2f( 464+u,1303+f);
glVertex2f( 459+u,1300+f);
glVertex2f( 455+u,1298+f);
glVertex2f( 451+u,1296+f);
glVertex2f( 447+u,1294+f);
glVertex2f( 443+u,1292+f);
glVertex2f( 441+u,1290+f);
glVertex2f( 437+u,1288+f);
glVertex2f( 435+u,1286+f);
glVertex2f( 431+u,1286+f);
glVertex2f( 429+u,1284+f);
glVertex2f( 427+u,1282+f);
glVertex2f( 423+u,1280+f);
glVertex2f( 421+u,1280+f);
glVertex2f( 417+u,1276+f);
glVertex2f( 414+u,1274+f);
glVertex2f( 410+u,1272+f);
glVertex2f( 406+u,1272+f);
glVertex2f( 404+u,1268+f);
glVertex2f( 400+u,1264+f);
glVertex2f( 398+u,1264+f);
glVertex2f( 392+u,1262+f);
glVertex2f( 390+u,1260+f);
glVertex2f( 386+u,1260+f);
glVertex2f( 382+u,1260+f);
glVertex2f( 380+u,1260+f);
glVertex2f( 376+u,1262+f);
glVertex2f( 376+u,1268+f);
glVertex2f( 378+u,1272+f);
glVertex2f( 380+u,1274+f);
glVertex2f( 378+u,1278+f);
glVertex2f( 378+u,1282+f);
glVertex2f( 380+u,1286+f);
glVertex2f( 380+u,1292+f);
glVertex2f( 382+u,1294+f);
glVertex2f( 382+u,1298+f);
glVertex2f( 386+u,1305+f);
glVertex2f( 388+u,1309+f);
glEnd();
glPopMatrix();
}


void left_2()
{
    glPushMatrix();
       //glTranslatef(0.0,-5.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
       glBegin(GL_POLYGON);
       //glColor3f(0.8627450980392157, 0.8627450980392157, 0.8627450980392157);
        //glColor3f(0.88, 0.88, 0.88);
        glColor3f(0.9607843137254902, 0.7411764705882353, 0.1215686274509804);
        glVertex2f( 388+u,1229+f);
glVertex2f( 396+u,1231+f);
glVertex2f( 402+u,1235+f);
glVertex2f( 408+u,1237+f);
glVertex2f( 417+u,1241+f);
glVertex2f( 425+u,1243+f);
glVertex2f( 431+u,1243+f);
glVertex2f( 437+u,1243+f);
glVertex2f( 445+u,1239+f);
glVertex2f( 447+u,1233+f);
glVertex2f( 447+u,1227+f);
glVertex2f( 443+u,1223+f);
glVertex2f( 443+u,1219+f);
glVertex2f( 439+u,1217+f);
glVertex2f( 439+u,1213+f);
glVertex2f( 435+u,1209+f);
glVertex2f( 433+u,1206+f);
glVertex2f( 431+u,1202+f);
glVertex2f( 427+u,1200+f);
glVertex2f( 425+u,1196+f);
glVertex2f( 423+u,1190+f);
glVertex2f( 417+u,1184+f);
glVertex2f( 410+u,1178+f);
glVertex2f( 406+u,1184+f);
glVertex2f( 402+u,1190+f);
glVertex2f( 400+u,1192+f);
glVertex2f( 396+u,1198+f);
glVertex2f( 396+u,1202+f);
glVertex2f( 392+u,1206+f);
glVertex2f( 392+u,1213+f);
glVertex2f( 390+u,1219+f);


        glEnd();
        glPopMatrix();
}


void left_3()
{
    glPushMatrix();
       //glTranslatef(0.0,-5.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
       glBegin(GL_POLYGON);
       //glColor3f(0.8627450980392157, 0.8627450980392157, 0.8627450980392157);
       // glColor3f(0.88, 0.88, 0.88);
       glColor3f(0.9607843137254902, 0.7411764705882353, 0.1215686274509804);
        glVertex2f(419+u,1159+f);
glVertex2f(423+u,1166+f);
glVertex2f(431+u,1172+f);
glVertex2f(441+u,1176+f);
glVertex2f(449+u,1180+f);
glVertex2f(459+u,1182+f);
glVertex2f(466+u,1182+f);
glVertex2f(468+u,1178+f);
glVertex2f(468+u,1174+f);
glVertex2f(468+u,1166+f);
glVertex2f(468+u,1161+f);
glVertex2f(468+u,1157+f);
glVertex2f(466+u,1149+f);
glVertex2f(466+u,1145+f);
glVertex2f(464+u,1141+f);
glVertex2f(464+u,1133+f);
glVertex2f(464+u,1127+f);
glVertex2f(455+u,1127+f);
glVertex2f(453+u,1129+f);
glVertex2f(449+u,1129+f);
glVertex2f(447+u,1131+f);
glVertex2f(443+u,1133+f);
glVertex2f(441+u,1137+f);
glVertex2f(435+u,1141+f);
glVertex2f(427+u,1149+f);


        glEnd();
        glPopMatrix();
}

void right_1()
{
    glPushMatrix();
       //glTranslatef(0.0,-5.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
       glBegin(GL_POLYGON);
       //glColor3f(0.8627450980392157, 0.8627450980392157, 0.8627450980392157);
        //glColor3f(0.88, 0.88, 0.88);
        glColor3f(0.9607843137254902, 0.7411764705882353, 0.1215686274509804);
        glVertex2f(985+u,1274+f);
glVertex2f(979+u,1276+f);
glVertex2f(975+u,1276+f);
glVertex2f(971+u,1278+f);
glVertex2f(964+u,1278+f);
glVertex2f(960+u,1278+f);
glVertex2f(954+u,1278+f);
glVertex2f(950+u,1280+f);
glVertex2f(942+u,1280+f);
glVertex2f(934+u,1280+f);
glVertex2f(926+u,1282+f);
glVertex2f(915+u,1282+f);
glVertex2f(909+u,1282+f);
glVertex2f(901+u,1280+f);
glVertex2f(891+u,1276+f);
glVertex2f(889+u,1272+f);
glVertex2f(887+u,1266+f);
glVertex2f(891+u,1260+f);
glVertex2f(895+u,1256+f);
glVertex2f(905+u,1249+f);
glVertex2f(911+u,1243+f);
glVertex2f(921+u,1239+f);
glVertex2f(928+u,1233+f);
glVertex2f(934+u,1227+f);
glVertex2f(942+u,1223+f);
glVertex2f(950+u,1219+f);
glVertex2f(956+u,1215+f);
glVertex2f(962+u,1211+f);
glVertex2f(971+u,1202+f);
glVertex2f(979+u,1204+f);
glVertex2f(979+u,1211+f);
glVertex2f(983+u,1215+f);
glVertex2f(983+u,1221+f);
glVertex2f(985+u,1227+f);
glVertex2f(987+u,1231+f);
glVertex2f(987+u,1239+f);
glVertex2f(987+u,1245+f);
glVertex2f(987+u,1251+f);
glVertex2f(987+u,1262+f);


        glEnd();
        glPopMatrix();
}


void right_2()
{
    glPushMatrix();
       //glTranslatef(0.0,-5.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
       glBegin(GL_POLYGON);
       //glColor3f(0.8627450980392157, 0.8627450980392157, 0.8627450980392157);
        //glColor3f(0.88, 0.88, 0.88);
        glColor3f(0.9607843137254902, 0.7411764705882353, 0.1215686274509804);
        glVertex2f(954+u,1176+f);
glVertex2f(944+u,1178+f);
glVertex2f(938+u,1178+f);
glVertex2f(928+u,1180+f);
glVertex2f(919+u,1180+f);
glVertex2f(913+u,1180+f);
glVertex2f(903+u,1182+f);
glVertex2f(897+u,1184+f);
glVertex2f(891+u,1180+f);
glVertex2f(891+u,1176+f);
glVertex2f(891+u,1168+f);
glVertex2f(895+u,1161+f);
glVertex2f(897+u,1155+f);
glVertex2f(901+u,1153+f);
glVertex2f(903+u,1145+f);
glVertex2f(909+u,1141+f);
glVertex2f(915+u,1135+f);
glVertex2f(921+u,1139+f);
glVertex2f(928+u,1143+f);
glVertex2f(934+u,1147+f);
glVertex2f(940+u,1149+f);
glVertex2f(944+u,1155+f);
glVertex2f(948+u,1161+f);


        glEnd();
        glPopMatrix();
}


void right_3()
{
    glPushMatrix();
       //glTranslatef(0.0,-5.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
       glBegin(GL_POLYGON);
       //glColor3f(0.8627450980392157, 0.8627450980392157, 0.8627450980392157);
        //glColor3f(0.88, 0.88, 0.88);
        glColor3f(0.9607843137254902, 0.7411764705882353, 0.1215686274509804);
        glVertex2f(897+u,1123+f);
glVertex2f(891+u,1127+f);
glVertex2f(887+u,1127+f);
glVertex2f(883+u,1129+f);
glVertex2f(876+u,1131+f);
glVertex2f(872+u,1133+f);
glVertex2f(864+u,1137+f);
glVertex2f(858+u,1137+f);
glVertex2f(854+u,1135+f);
glVertex2f(852+u,1131+f);
glVertex2f(850+u,1129+f);
glVertex2f(848+u,1127+f);
glVertex2f(848+u,1121+f);
glVertex2f(846+u,1112+f);
glVertex2f(846+u,1104+f);
glVertex2f(846+u,1100+f);
glVertex2f(854+u,1098+f);
glVertex2f(858+u,1102+f);
glVertex2f(862+u,1104+f);
glVertex2f(868+u,1106+f);
glVertex2f(874+u,1108+f);
glVertex2f(879+u,1114+f);
glVertex2f(887+u,1119+f);


        glEnd();
        glPopMatrix();
}


void nose()
{
    glPushMatrix();
       //glTranslatef(0.0,-5.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
       glBegin(GL_POLYGON);
       //glColor3f(0.8627450980392157, 0.8627450980392157, 0.8627450980392157);
        glColor3f(0.9529411764705882, 0.6470588235294118, 0.596078431372549);

glVertex2f(572+u,1317+f);
glVertex2f(570+u,1313+f);
glVertex2f(568+u,1303+f);
glVertex2f(572+u,1292+f);
glVertex2f(576+u,1290+f);
glVertex2f(584+u,1282+f);
glVertex2f(594+u,1274+f);
glVertex2f(598+u,1270+f);
glVertex2f(609+u,1262+f);
glVertex2f(613+u,1258+f);
glVertex2f(621+u,1253+f);
glVertex2f(627+u,1249+f);
glVertex2f(633+u,1247+f);
glVertex2f(637+u,1245+f);
glVertex2f(641+u,1245+f);
glVertex2f(648+u,1243+f);
glVertex2f(658+u,1243+f);
glVertex2f(664+u,1243+f);
glVertex2f(672+u,1247+f);
glVertex2f(678+u,1249+f);
glVertex2f(684+u,1249+f);
glVertex2f(695+u,1253+f);
glVertex2f(699+u,1258+f);
glVertex2f(707+u,1260+f);
glVertex2f(711+u,1266+f);
glVertex2f(721+u,1268+f);
glVertex2f(725+u,1270+f);
glVertex2f(729+u,1274+f);
glVertex2f(731+u,1276+f);
glVertex2f(737+u,1282+f);
glVertex2f(742+u,1288+f);
glVertex2f(744+u,1296+f);
glVertex2f(744+u,1305+f);
glVertex2f(744+u,1311+f);
glVertex2f(731+u,1311+f);
glVertex2f(723+u,1311+f);
glVertex2f(711+u,1311+f);
glVertex2f(705+u,1311+f);
glVertex2f(697+u,1311+f);
glVertex2f(690+u,1311+f);
glVertex2f(682+u,1311+f);
glVertex2f(674+u,1311+f);
glVertex2f(670+u,1311+f);
glVertex2f(662+u,1311+f);
glVertex2f(658+u,1311+f);
glVertex2f(650+u,1311+f);
glVertex2f(641+u,1311+f);
glVertex2f(633+u,1311+f);
glVertex2f(629+u,1311+f);
glVertex2f(621+u,1311+f);
glVertex2f(615+u,1313+f);
glVertex2f(609+u,1313+f);
glVertex2f(603+u,1315+f);
glVertex2f(596+u,1317+f);
glVertex2f(584+u,1319+f);
glVertex2f(576+u,1321+f);

        glEnd();
        glPopMatrix();
}

void nose_left()
{
    glPushMatrix();
       //glTranslatef(0.0,-5.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
       glBegin(GL_POLYGON);
       //glColor3f(0.8627450980392157, 0.8627450980392157, 0.8627450980392157);
        glColor3f(0, 0, 0);

glVertex2f(623+u,1366+f);
glVertex2f(624+u,1367+f);

glVertex2f(617+u,1362+f);
glVertex2f(618+u,1363+f);

glVertex2f(613+u,1358+f);
glVertex2f(614+u,1359+f);

glVertex2f(609+u,1354+f);

glVertex2f(605+u,1348+f);
glVertex2f(598+u,1343+f);
glVertex2f(590+u,1333+f);
glVertex2f(588+u,1327+f);
glVertex2f(582+u,1323+f);

        glEnd();
        glPopMatrix();
}

void nose_right()
{
    glPushMatrix();
       //glTranslatef(0.0,-5.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
       glBegin(GL_POLYGON);
       //glColor3f(0.8627450980392157, 0.8627450980392157, 0.8627450980392157);
        glColor3f(0, 0, 0);

        glVertex2f(686+u,1374+f);
glVertex2f(690+u,1370+f);
glVertex2f(697+u,1366+f);
glVertex2f(701+u,1362+f);
glVertex2f(707+u,1356+f);
glVertex2f(713+u,1350+f);
glVertex2f(717+u,1343+f);
glVertex2f(723+u,1337+f);
glVertex2f(729+u,1329+f);
glVertex2f(737+u,1319+f);
glVertex2f(744+u,1309+f);

        glEnd();
        glPopMatrix();
}


void left_spike1()
{
    glPushMatrix();
       //glTranslatef(0.0,-5.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
       glBegin(GL_POLYGON);

        glColor3f(0, 0, 0);
        glVertex2f(556+u,1280+f);
glVertex2f(339+u,1321+f);

        glEnd();
        glPopMatrix();
}

void left_spike2()
{
    glPushMatrix();
       //glTranslatef(0.0,-5.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
       glBegin(GL_LINE);
       //glColor3f(0.8627450980392157, 0.8627450980392157, 0.8627450980392157);
        glColor3f(0, 0, 0);
        glVertex2f(339+u,1321+f);
glVertex2f(539+u,1260+f);
        glEnd();
        glPopMatrix();
}

void right_spike1()
{
    glPushMatrix();
       //glTranslatef(0.0,-5.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
       glBegin(GL_POLYGON);
       //glColor3f(0.8627450980392157, 0.8627450980392157, 0.8627450980392157);
        glColor3f(0.9529411764705882, 0.6470588235294118, 0.596078431372549);

        glEnd();
        glPopMatrix();
}

void right_spike2()
{
    glPushMatrix();
       //glTranslatef(0.0,-5.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
       glBegin(GL_POLYGON);
       //glColor3f(0.8627450980392157, 0.8627450980392157, 0.8627450980392157);
        glColor3f(0.9529411764705882, 0.6470588235294118, 0.596078431372549);

        glEnd();
        glPopMatrix();
}


void land()
{
    glPushMatrix();
       //glTranslatef(0.0,-5.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
       glBegin(GL_POLYGON);
       //glColor3f(0.8627450980392157, 0.8627450980392157, 0.8627450980392157);
        glColor3f(0.1490196078431373, 0.4156862745098039, 0.1803921568627451);

        glVertex2f(0,1000);
        glVertex2f(0,0);
        glVertex2f(3000,0);
        glVertex2f(3000,1000);



        glEnd();
        glPopMatrix();
}

void water()
{
    glPushMatrix();
       //glTranslatef(0.0,-5.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
       glBegin(GL_POLYGON);
       //glColor3f(0.8627450980392157, 0.8627450980392157, 0.8627450980392157);


        glColor3f(0, 0.4117647058823529, 0.5803921568627451);
        glVertex2f(0,2000);
        glVertex2f(0,1000);
        glVertex2f(3000,1000);
        glVertex2f(3000,2000);



        glEnd();
        glPopMatrix();
}

void sky()
{
    glPushMatrix();
       //glTranslatef(0.0,-5.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
       glBegin(GL_POLYGON);
       //glColor3f(0.8627450980392157, 0.8627450980392157, 0.8627450980392157);


        glColor3f(0.5294117647058824, 0.807843137254902, 0.9215686274509804);
        glVertex2f(0,3000);
        glVertex2f(0,2000);
        glVertex2f(3000,2000);
        glVertex2f(3000,3000);



        glEnd();
        glPopMatrix();
}

void ball()
{

    glPushMatrix();
       glTranslatef(270,2720.0,0);
       glColor3f(0.9607843137254902, 0.7411764705882353, 0.1215686274509804);
       circle2(200,200);
       glPopMatrix();
}



void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);



glColor3f(0.2f, 0.0f, 0.74f);
land();
water();
sky();
left_hand();
outer_sceleton();

left_leg();
right_leg();
tail();
outer_head();
right_hand();
inner_body();
left_ear();
right_ear();
left_eye();
right_eye();
left_eye_ball();
right_eye_ball();
mouth();
left_1();
left_2();
left_3();
right_1();
right_2();
right_3();
nose();
//nose_left();
//nose_right();
left_spike1();
left_spike2();
right_spike1();
right_spike2();
ball();
//full_body();
//f_head();
 //f_tail();
 //left_ear();

      //  //CAR BODY

      // glPushMatrix();
      // glTranslatef(-5.0,-5.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
      // glBegin(GL_POLYGON);
      // glColor3f(0.2f, 0.0f, 0.74f);
      // glVertex2f(0.0f+u, 0.0f+f);// u and f added with x and y values respectively to control the movement in respective directions
      // glColor3f(0.5f, 0.0f, 0.92f);
      // glVertex2f( 12.0f+u, 0.0+f);
      // glColor3f(0.3f, 0.02f, 0.55f);
      // glVertex2f( 12.0+u,  6.0f+f);
      // glColor3f(0.1f, 0.22f, 0.44f);
      // glVertex2f( 0.0f+u,  6.0f+f);
      // glEnd();
      // glPopMatrix();

      // //CAR HEAD

      // glPushMatrix();
      // glTranslatef(-6.0,-2.0,0);
      // glBegin(GL_POLYGON);
      // glColor3f(0.9f, 0.0f, 0.3f);
      // glVertex2f(10.0f+u, 7.0f);
      // glColor3f(0.9f, 0.0f, 0.92f);
      // glVertex2f(4.0f+u, 7.0f);
      // glColor3f(0.7f, 0.02f, 0.55f);
      // glVertex2f( 3.0+u,  3.0f);
      // glColor3f(0.1f, 0.22f, 0.44f);
      // glVertex2f( 11.0f+u,  3.0f);
      // glEnd();
      // glPopMatrix();


      // //Wheels

      // glPushMatrix();
      // glTranslatef(-1.5,-4.0,0);
      // glColor3f(1.0, 0.2, 0.5);
      // circle(2,2);
      // glPopMatrix();

      // glPushMatrix();
      // glTranslatef(3.5,-4.0,0);
      // glColor3f(1.0, 0.2, 0.5);
      // circle(2,2);
      // glPopMatrix();



    glFlush();
}




void spe_key(int key, int x, int y)
{

	switch (key) {

		case GLUT_KEY_LEFT:
				u -=15; //to move the car left when left key pressed. To make movement faster or slower, try changing values of u
				glutPostRedisplay();
				break;

		case GLUT_KEY_RIGHT:
				u +=15;
				glutPostRedisplay();
				break;


	  default:
			break;
	}
}


int main()
{
    glutInitWindowSize(1200,650);
    glutInitWindowPosition(50,10);
    glutCreateWindow("Talking Tom");
    init();
    glutDisplayFunc(myDisplay);
    glutSpecialFunc(spe_key);
    glutMainLoop();
    return 0;
}
