//Car
#include <windows.h>
#include <GL/glut.h>
#include <math.h>
#include<stdio.h>
#define PI 3.1416
using namespace std;
//u and f added with all the vertices that make the car so that all parts of the car are moving equally together in a particular direction

float u= 0.0; //a variable to control x-values of coordinates so that the car can move in X-axis. Initially to keep the car still, set u=0
float f= 0.0;
float p=0;
int flag=0;
int sound=0;
int cloud_actifvation=0;
int h=0;
int ball_position=0;
float spin = 0.0;


void init()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glOrtho(0.0, 2850.0, 0.0, 3000.0, 0.0, 3000.0);
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

void circle3(float radius_x, float radius_y)
{
	int i=0;
	float angle = 0.0;

	glBegin(GL_POLYGON);

		for(i = 0; i < 100; i++)
		{
			angle = 2 * PI * i / 100;
			glVertex2f (cos(angle) * radius_x, sin(angle) * radius_y+h);// u and f added with x and y values respectively to control the movement in respective directions
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
      //glColor3f(0.607843137254902, 0.8549019607843137, 0.9137254901960784);
       glColor3f(0.25098039215686274509803921568627, 0.47843137254901960784313725490196, 0.66666666666666666666666666666667);
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
      glTranslatef(10.0,7.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
      glBegin(GL_POLYGON);
      //glColor3f(0.21f, 0.12f, 0.14f);
    //  glColor3f(0.607843137254902, 0.8549019607843137, 0.9137254901960784);
       glColor3f(0.25098039215686274509803921568627, 0.47843137254901960784313725490196, 0.66666666666666666666666666666667);

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
      glTranslatef(8.0,20.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
      glBegin(GL_POLYGON);
      //glColor3f(0.21f, 0.12f, 0.14f);
     // glColor3f(0.607843137254902, 0.8549019607843137, 0.9137254901960784);
    // glColor3f(0.25098039215686274509803921568627, 0.47843137254901960784313725490196, 0.66666666666666666666666666666667);
       glColor3f(0.25098039215686274509803921568627, 0.47843137254901960784313725490196, 0.66666666666666666666666666666667);
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

      //glColor3f(0.68, 0.90, 0.90);
       //glColor3f(0.25098039215686274509803921568627, 0.47843137254901960784313725490196, 0.66666666666666666666666666666667);
glColor3f(0.32, 0.55, 0.75);
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
        glColor3f(0.25098039215686274509803921568627, 0.47843137254901960784313725490196, 0.66666666666666666666666666666667);
       //glColor3f(0.607843137254902, 0.8549019607843137, 0.9137254901960784);
      // glColor3f(0.64, 0.89, 0.96);
       glVertex2f(600+u,1100+f);
// glVertex2f(560+u,1060+f);
// glVertex2f(535+u,1040+f);

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
      glColor3f(0.25098039215686274509803921568627, 0.47843137254901960784313725490196, 0.66666666666666666666666666666667);
      //glColor3f(0.607843137254902, 0.8549019607843137, 0.9137254901960784);
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

    glRotatef(spin, 0.0, 1.0, 0.0);
     // glTranslate(100.0,350.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
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
        glVertex2f(2900,0);
        glVertex2f(2900,1000);



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
        glVertex2f(2900,1000);
        glVertex2f(2900,2000);



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
        glVertex2f(2900,2000);
        glVertex2f(2900,3000);



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

void tal_cloud()
{
	if (cloud_actifvation==1)
	{
		 glPushMatrix();
       glTranslatef(1050.0,1240.0,0);
       glBegin(GL_POLYGON);
        glColor3f(0.84, 0.84, 0.85);
		glVertex2f (1050+u,441+f);
		glVertex2f (1053+u,447+f);
		glVertex2f (1055+u,452+f);
		glVertex2f (1061+u,461+f);
		glVertex2f (1061+u,469+f);
		glVertex2f (1061+u,474+f);
		glVertex2f (1059+u,480+f);
		glVertex2f (1059+u,487+f);
		glVertex2f (1053+u,493+f);
		glVertex2f (1050+u,498+f);
		glVertex2f (1044+u,502+f);
		glVertex2f (1041+u,507+f);
		glVertex2f (1033+u,511+f);
		glVertex2f (1030+u,515+f);
		glVertex2f (1028+u,516+f);
		glVertex2f (1017+u,518+f);
		glVertex2f (1008+u,522+f);
		glVertex2f (1000+u,522+f);
		glVertex2f (995+u,522+f);
		glVertex2f (987+u,522+f);
		glVertex2f (976+u,518+f);
		glVertex2f (971+u,518+f);
		glVertex2f (969+u,524+f);
		glVertex2f (969+u,527+f);
		glVertex2f (965+u,537+f);
		glVertex2f (962+u,542+f);
		glVertex2f (956+u,546+f);
		glVertex2f (953+u,551+f);
		glVertex2f (949+u,557+f);
		glVertex2f (942+u,564+f);
		glVertex2f (938+u,564+f);
		glVertex2f (934+u,568+f);
		glVertex2f (931+u,571+f);
		glVertex2f (923+u,573+f);
		glVertex2f (918+u,575+f);
		glVertex2f (910+u,577+f);
		glVertex2f (903+u,577+f);
		glVertex2f (898+u,581+f);
		glVertex2f (888+u,582+f);
		glVertex2f (881+u,582+f);
		glVertex2f (874+u,584+f);
		glVertex2f (870+u,584+f);
		glVertex2f (855+u,586+f);
		glVertex2f (850+u,586+f);
		glVertex2f (844+u,586+f);
		glVertex2f (837+u,586+f);
		glVertex2f (824+u,586+f);
		glVertex2f (819+u,586+f);
		glVertex2f (811+u,586+f);
		glVertex2f (802+u,584+f);
		glVertex2f (797+u,582+f);
		glVertex2f (791+u,579+f);
		glVertex2f (778+u,575+f);
		glVertex2f (773+u,571+f);
		glVertex2f (764+u,566+f);
		glVertex2f (756+u,562+f);
		glVertex2f (751+u,562+f);
		glVertex2f (745+u,568+f);
		glVertex2f (742+u,570+f);
		glVertex2f (734+u,573+f);
		glVertex2f (731+u,575+f);
		glVertex2f (723+u,577+f);
		glVertex2f (720+u,577+f);
		glVertex2f (714+u,581+f);
		glVertex2f (709+u,584+f);
		glVertex2f (700+u,584+f);
		glVertex2f (687+u,588+f);
		glVertex2f (678+u,588+f);
		glVertex2f (668+u,588+f);
		glVertex2f (661+u,588+f);
		glVertex2f (652+u,588+f);
		glVertex2f (639+u,588+f);
		glVertex2f (628+u,584+f);
		glVertex2f (619+u,581+f);
		glVertex2f (608+u,577+f);
		glVertex2f (602+u,573+f);
		glVertex2f (593+u,570+f);
		glVertex2f (588+u,566+f);
		glVertex2f (580+u,562+f);
		glVertex2f (575+u,555+f);
		glVertex2f (569+u,549+f);
		glVertex2f (566+u,551+f);
		glVertex2f (557+u,557+f);
		glVertex2f (551+u,559+f);
		glVertex2f (546+u,562+f);
		glVertex2f (540+u,562+f);
		glVertex2f (535+u,566+f);
		glVertex2f (526+u,568+f);
		glVertex2f (516+u,571+f);
		glVertex2f (507+u,573+f);
		glVertex2f (498+u,575+f);
		glVertex2f (489+u,575+f);
		glVertex2f (480+u,575+f);
		glVertex2f (472+u,575+f);
		glVertex2f (461+u,575+f);
		glVertex2f (454+u,573+f);
		glVertex2f (449+u,573+f);
		glVertex2f (438+u,571+f);
		glVertex2f (428+u,566+f);
		glVertex2f (425+u,566+f);
		glVertex2f (406+u,562+f);
		glVertex2f (397+u,557+f);
		glVertex2f (392+u,551+f);
		glVertex2f (386+u,546+f);
		glVertex2f (381+u,540+f);
		glVertex2f (379+u,538+f);
		glVertex2f (375+u,537+f);
		glVertex2f (364+u,538+f);
		glVertex2f (357+u,540+f);
		glVertex2f (355+u,540+f);
		glVertex2f (348+u,540+f);
		glVertex2f (335+u,544+f);
		glVertex2f (322+u,546+f);
		glVertex2f (315+u,548+f);
		glVertex2f (306+u,549+f);
		glVertex2f (296+u,549+f);
		glVertex2f (287+u,549+f);
		glVertex2f (278+u,549+f);
		glVertex2f (267+u,549+f);
		glVertex2f (256+u,549+f);
		glVertex2f (247+u,549+f);
		glVertex2f (238+u,549+f);
		glVertex2f (230+u,548+f);
		glVertex2f (221+u,546+f);
		glVertex2f (212+u,542+f);
		glVertex2f (201+u,540+f);
		glVertex2f (190+u,537+f);
		glVertex2f (183+u,533+f);
		glVertex2f (170+u,526+f);
		glVertex2f (163+u,522+f);
		glVertex2f (155+u,518+f);
		glVertex2f (150+u,511+f);
		glVertex2f (141+u,504+f);
		glVertex2f (131+u,493+f);
		glVertex2f (126+u,478+f);
		glVertex2f (126+u,469+f);
		glVertex2f (126+u,456+f);
		glVertex2f (122+u,450+f);
		glVertex2f (113+u,450+f);
		glVertex2f (106+u,450+f);
		glVertex2f (95+u,450+f);
		glVertex2f (80+u,450+f);
		glVertex2f (69+u,449+f);
		glVertex2f (58+u,447+f);
		glVertex2f (53+u,445+f);
		glVertex2f (45+u,439+f);
		glVertex2f (38+u,434+f);
		glVertex2f (31+u,428+f);
		glVertex2f (27+u,423+f);
		glVertex2f (20+u,416+f);
		glVertex2f (16+u,403+f);
		glVertex2f (16+u,392+f);
		glVertex2f (20+u,386+f);
		glVertex2f (25+u,381+f);
		glVertex2f (31+u,377+f);
		glVertex2f (34+u,372+f);
		glVertex2f (42+u,366+f);
		glVertex2f (53+u,362+f);
		glVertex2f (56+u,362+f);
		glVertex2f (60+u,357+f);
		glVertex2f (73+u,353+f);
		glVertex2f (80+u,350+f);
		glVertex2f (67+u,346+f);
		glVertex2f (54+u,342+f);
		glVertex2f (54+u,329+f);
		glVertex2f (53+u,317+f);
		glVertex2f (53+u,307+f);
		glVertex2f (56+u,302+f);
		glVertex2f (60+u,295+f);
		glVertex2f (65+u,291+f);
		glVertex2f (73+u,285+f);
		glVertex2f (78+u,282+f);
		glVertex2f (84+u,276+f);
		glVertex2f (89+u,274+f);
		glVertex2f (98+u,269+f);
		glVertex2f (111+u,265+f);
		glVertex2f (120+u,265+f);
		glVertex2f (133+u,263+f);
		glVertex2f (142+u,263+f);
		glVertex2f (142+u,256+f);
		glVertex2f (150+u,245+f);
		glVertex2f (159+u,240+f);
		glVertex2f (168+u,234+f);
		glVertex2f (183+u,229+f);
		glVertex2f (192+u,227+f);
		glVertex2f (205+u,223+f);
		glVertex2f (218+u,218+f);
		glVertex2f (229+u,214+f);
		glVertex2f (238+u,214+f);
		glVertex2f (249+u,212+f);
		glVertex2f (258+u,212+f);
		glVertex2f (265+u,210+f);
		glVertex2f (276+u,208+f);
		glVertex2f (280+u,208+f);
		glVertex2f (291+u,208+f);
		glVertex2f (300+u,207+f);
		glVertex2f (311+u,207+f);
		glVertex2f (326+u,207+f);
		glVertex2f (342+u,207+f);
		glVertex2f (355+u,207+f);
		glVertex2f (366+u,210+f);
		glVertex2f (379+u,212+f);
		glVertex2f (390+u,216+f);
		glVertex2f (395+u,219+f);
		glVertex2f (410+u,219+f);
		glVertex2f (417+u,227+f);
		glVertex2f (425+u,221+f);
		glVertex2f (434+u,216+f);
		glVertex2f (447+u,212+f);
		glVertex2f (456+u,208+f);
		glVertex2f (469+u,205+f);
		glVertex2f (478+u,203+f);
		glVertex2f (487+u,199+f);
		glVertex2f (496+u,194+f);
		glVertex2f (509+u,194+f);
		glVertex2f (518+u,192+f);
		glVertex2f (533+u,190+f);
		glVertex2f (548+u,188+f);
		glVertex2f (560+u,188+f);
		glVertex2f (568+u,186+f);
		glVertex2f (579+u,186+f);
		glVertex2f (580+u,186+f);
		glVertex2f (599+u,186+f);
		glVertex2f (617+u,188+f);
		glVertex2f (632+u,190+f);
		glVertex2f (645+u,192+f);
		glVertex2f (659+u,194+f);
		glVertex2f (670+u,199+f);
		glVertex2f (687+u,205+f);
		glVertex2f (701+u,216+f);
		glVertex2f (709+u,221+f);
		glVertex2f (720+u,230+f);
		glVertex2f (727+u,240+f);
		glVertex2f (734+u,245+f);
		glVertex2f (747+u,241+f);
		glVertex2f (758+u,240+f);
		glVertex2f (771+u,236+f);
		glVertex2f (789+u,236+f);
		glVertex2f (800+u,236+f);
		glVertex2f (810+u,236+f);
		glVertex2f (826+u,236+f);
		glVertex2f (843+u,238+f);
		glVertex2f (857+u,240+f);
		glVertex2f (874+u,247+f);
		glVertex2f (883+u,247+f);
		glVertex2f (888+u,249+f);
		glVertex2f (896+u,252+f);
		glVertex2f (903+u,256+f);
		glVertex2f (912+u,262+f);
		glVertex2f (920+u,271+f);
		glVertex2f (927+u,276+f);
		glVertex2f (934+u,285+f);
		glVertex2f (936+u,295+f);
		glVertex2f (936+u,304+f);
		glVertex2f (938+u,315+f);
		glVertex2f (951+u,313+f);
		glVertex2f (965+u,313+f);
		glVertex2f (976+u,313+f);
		glVertex2f (987+u,315+f);
		glVertex2f (997+u,317+f);
		glVertex2f (1006+u,320+f);
		glVertex2f (1020+u,326+f);
		glVertex2f (1039+u,333+f);
		glVertex2f (1050+u,340+f);
		glVertex2f (1057+u,346+f);
		glVertex2f (1061+u,350+f);
		glVertex2f (1070+u,359+f);
		glVertex2f (1083+u,372+f);
		glVertex2f (1085+u,386+f);
		glVertex2f (1086+u,397+f);
		glVertex2f (1086+u,406+f);
		glVertex2f (1081+u,417+f);
		glVertex2f (1075+u,425+f);
		glVertex2f (1070+u,430+f);
		glVertex2f (1063+u,436+f);

        glEnd();
        glPopMatrix();
	}

}



void tal_cloud2()
{
	if (cloud_actifvation==1)
	{
		glPushMatrix();
       glTranslatef(1200.0,1400.0,0);
       glColor3f(0.84, 0.84, 0.85);
       circle(100,60);
       glPopMatrix();
	}

}

void tal_cloud3()
{
	if (cloud_actifvation==1)
	{
		glPushMatrix();
       glTranslatef(1100.0,1300.0,0);
       glColor3f(0.84, 0.84, 0.85);
       circle(70,50);
       glPopMatrix();
	}

}

void tal_cloud4()
{
	if (cloud_actifvation==1)
	{
		glPushMatrix();
       glTranslatef(1030.0,1220.0,0);
       glColor3f(0.84, 0.84, 0.85);
       circle(40,30);
       glPopMatrix();
	}

}

void print_bitmap_string(/*void* font,*/ char* s)
{

      while (*s) {
         glutBitmapCharacter( GLUT_BITMAP_HELVETICA_18, *s);
         s++;
      }

}

void draw_stuff1()
{
   char* bitmap_font_names[10]= {"Welcome to the final presentation of 2D project!"};

   GLfloat x, y, ystep, yild, stroke_scale;

   /* Draw the strings, according to the current mode and font. */
   glPushMatrix();
   glTranslatef(120,1508.0,0);
   glColor4f(0.0, 0.0, 0.0, 0.0);
   x = 225.0;
   y = 70.0;
   ystep  = 100.0;
   yild   = 20.0;
      glRasterPos2f(1050+u, y+1.25*yild+f);
     print_bitmap_string(bitmap_font_names[0]);
     glPopMatrix();
}

void draw_stuff2()
{
   char* bitmap_font_names[10]= {"Hi, I this is Talking Tom! How are you all?"};

   GLfloat x, y, ystep, yild, stroke_scale;

   /* Draw the strings, according to the current mode and font. */
   glPushMatrix();
   glTranslatef(120,1508.0,0);
   glColor4f(0.0, 0.0, 0.0, 0.0);
   x = 225.0;
   y = 70.0;
   ystep  = 100.0;
   yild   = 20.0;
      glRasterPos2f(1050+u, y+1.25*yild+f);
     print_bitmap_string(bitmap_font_names[0]);
     glPopMatrix();
}




void talk_text()
{
     //glClear(GL_COLOR_BUFFER_BIT);
	if(flag==1)
	{
		draw_stuff1();
	}
	else if(flag==2)
	{
		draw_stuff2();
	}





}

void sky_cloud1()
{
     glPushMatrix();

       glTranslatef(p+250.0,2450.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
       glBegin(GL_POLYGON);
       //glColor3f(0.8627450980392157, 0.8627450980392157, 0.8627450980392157);
        //glColor3f(0.88, 0.88, 0.88);
        glColor3f(0.84, 0.84, 0.85);

        glVertex2f (818,244);
glVertex2f (826,244);
glVertex2f (838,246);
glVertex2f (847,250);
glVertex2f (861,258);
glVertex2f (870,265);
glVertex2f (880,275);
glVertex2f (884,283);
glVertex2f (888,291);
glVertex2f (890,298);
glVertex2f (890,310);
glVertex2f (890,318);
glVertex2f (890,327);
glVertex2f (886,337);
glVertex2f (880,345);
glVertex2f (872,352);
glVertex2f (869,352);
glVertex2f (869,364);
glVertex2f (872,372);
glVertex2f (876,379);
glVertex2f (876,383);
glVertex2f (876,391);
glVertex2f (874,403);
glVertex2f (869,412);
glVertex2f (865,422);
glVertex2f (857,431);
glVertex2f (851,437);
glVertex2f (841,441);
glVertex2f (832,441);
glVertex2f (822,441);
glVertex2f (824,445);
glVertex2f (818,455);
glVertex2f (807,466);
glVertex2f (799,476);
glVertex2f (787,482);
glVertex2f (774,487);
glVertex2f (760,489);
glVertex2f (751,491);
glVertex2f (737,491);
glVertex2f (722,491);
glVertex2f (710,491);
glVertex2f (706,484);
glVertex2f (699,474);
glVertex2f (695,472);
glVertex2f (691,474);
glVertex2f (683,480);
glVertex2f (675,484);
glVertex2f (668,484);
glVertex2f (656,487);
glVertex2f (643,489);
glVertex2f (637,489);
glVertex2f (629,489);
glVertex2f (617,487);
glVertex2f (610,484);
glVertex2f (604,482);
glVertex2f (600,478);
glVertex2f (598,474);
glVertex2f (594,472);
glVertex2f (587,460);
glVertex2f (579,468);
glVertex2f (571,472);
glVertex2f (565,474);
glVertex2f (560,476);
glVertex2f (552,478);
glVertex2f (546,478);
glVertex2f (540,478);
glVertex2f (532,478);
glVertex2f (527,478);
glVertex2f (513,478);
glVertex2f (507,476);
glVertex2f (502,474);
glVertex2f (490,468);
glVertex2f (484,462);
glVertex2f (478,453);
glVertex2f (478,445);
glVertex2f (473,447);
glVertex2f (459,449);
glVertex2f (449,453);
glVertex2f (440,457);
glVertex2f (432,457);
glVertex2f (424,457);
glVertex2f (407,457);
glVertex2f (397,459);
glVertex2f (388,457);
glVertex2f (386,457);
glVertex2f (370,453);
glVertex2f (363,445);
glVertex2f (355,439);
glVertex2f (347,431);
glVertex2f (339,418);
glVertex2f (339,414);
glVertex2f (336,406);
glVertex2f (334,399);
glVertex2f (334,391);
glVertex2f (330,379);
glVertex2f (328,370);
glVertex2f (320,370);
glVertex2f (312,372);
glVertex2f (305,368);
glVertex2f (293,360);
glVertex2f (289,360);
glVertex2f (283,354);
glVertex2f (278,348);
glVertex2f (272,343);
glVertex2f (266,331);
glVertex2f (266,323);
glVertex2f (266,314);
glVertex2f (270,306);
glVertex2f (278,300);
glVertex2f (289,298);
glVertex2f (301,294);
glVertex2f (308,292);
glVertex2f (316,289);
glVertex2f (316,287);
glVertex2f (305,281);
glVertex2f (297,275);
glVertex2f (291,265);
glVertex2f (287,258);
glVertex2f (287,244);
glVertex2f (287,240);
glVertex2f (289,233);
glVertex2f (297,225);
glVertex2f (303,217);
glVertex2f (312,211);
glVertex2f (318,209);
glVertex2f (330,209);
glVertex2f (339,209);
glVertex2f (351,209);
glVertex2f (351,209);
glVertex2f (351,202);
glVertex2f (351,186);
glVertex2f (361,175);
glVertex2f (366,173);
glVertex2f (386,165);
glVertex2f (401,161);
glVertex2f (409,159);
glVertex2f (424,159);
glVertex2f (430,159);
glVertex2f (440,159);
glVertex2f (448,159);
glVertex2f (455,159);
glVertex2f (467,163);
glVertex2f (475,167);
glVertex2f (488,179);
glVertex2f (496,190);
glVertex2f (505,171);
glVertex2f (517,163);
glVertex2f (525,155);
glVertex2f (536,146);
glVertex2f (548,142);
glVertex2f (556,140);
glVertex2f (571,136);
glVertex2f (587,136);
glVertex2f (598,136);
glVertex2f (610,136);
glVertex2f (625,142);
glVertex2f (635,146);
glVertex2f (646,151);
glVertex2f (654,159);
glVertex2f (658,163);
glVertex2f (662,169);
glVertex2f (668,177);
glVertex2f (672,182);
glVertex2f (675,188);
glVertex2f (679,198);
glVertex2f (683,190);
glVertex2f (691,188);
glVertex2f (701,182);
glVertex2f (710,182);
glVertex2f (724,182);
glVertex2f (737,182);
glVertex2f (745,182);
glVertex2f (757,182);
glVertex2f (764,186);
glVertex2f (776,190);
glVertex2f (780,194);
glVertex2f (787,202);
glVertex2f (793,209);
glVertex2f (795,215);
glVertex2f (799,225);
glVertex2f (807,236);
glVertex2f (811,242);



        glEnd();
        glPopMatrix();
}
void sky_cloud2()
{
     glPushMatrix();
       glTranslatef(p+850.0,2450.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
       glBegin(GL_POLYGON);
       //glColor3f(0.8627450980392157, 0.8627450980392157, 0.8627450980392157);
        //glColor3f(0.88, 0.88, 0.88);
        glColor3f(0.83529411764705882352941176470588, 0.83529411764705882352941176470588, 0.84705882352941176470588235294118);

glVertex2f (729,240);
glVertex2f (741,240);
glVertex2f (753,250);
glVertex2f (760,260);
glVertex2f (764,267);
glVertex2f (768,275);
glVertex2f (772,287);
glVertex2f (774,292);
glVertex2f (774,302);
glVertex2f (774,314);
glVertex2f (770,325);
glVertex2f (766,333);
glVertex2f (760,337);
glVertex2f (755,339);
glVertex2f (757,345);
glVertex2f (760,356);
glVertex2f (764,368);
glVertex2f (766,375);
glVertex2f (766,387);
glVertex2f (762,399);
glVertex2f (757,406);
glVertex2f (753,414);
glVertex2f (745,418);
glVertex2f (733,418);
glVertex2f (728,418);
glVertex2f (728,426);
glVertex2f (728,431);
glVertex2f (728,443);
glVertex2f (724,451);
glVertex2f (716,459);
glVertex2f (706,464);
glVertex2f (699,468);
glVertex2f (693,468);
glVertex2f (687,468);
glVertex2f (672,468);
glVertex2f (664,468);
glVertex2f (654,468);
glVertex2f (641,468);
glVertex2f (629,468);
glVertex2f (612,460);
glVertex2f (602,457);
glVertex2f (594,449);
glVertex2f (594,449);
glVertex2f (583,455);
glVertex2f (571,459);
glVertex2f (563,459);
glVertex2f (550,459);
glVertex2f (540,459);
glVertex2f (529,455);
glVertex2f (517,447);
glVertex2f (509,437);
glVertex2f (505,430);
glVertex2f (500,420);
glVertex2f (496,420);
glVertex2f (486,420);
glVertex2f (480,420);
glVertex2f (473,420);
glVertex2f (463,414);
glVertex2f (451,401);
glVertex2f (449,395);
glVertex2f (446,385);
glVertex2f (446,374);
glVertex2f (446,360);
glVertex2f (449,352);
glVertex2f (453,347);
glVertex2f (453,345);
glVertex2f (448,339);
glVertex2f (442,333);
glVertex2f (440,327);
glVertex2f (434,323);
glVertex2f (424,314);
glVertex2f (419,302);
glVertex2f (420,294);
glVertex2f (428,283);
glVertex2f (438,275);
glVertex2f (446,269);
glVertex2f (453,260);
glVertex2f (451,256);
glVertex2f (442,244);
glVertex2f (432,238);
glVertex2f (432,233);
glVertex2f (432,217);
glVertex2f (440,209);
glVertex2f (455,200);
glVertex2f (465,190);
glVertex2f (467,190);
glVertex2f (478,186);
glVertex2f (490,186);
glVertex2f (498,190);
glVertex2f (505,194);
glVertex2f (509,192);
glVertex2f (519,180);
glVertex2f (529,175);
glVertex2f (534,169);
glVertex2f (548,161);
glVertex2f (563,159);
glVertex2f (579,167);
glVertex2f (587,173);
glVertex2f (596,182);
glVertex2f (604,194);
glVertex2f (606,198);
glVertex2f (610,206);
glVertex2f (619,207);
glVertex2f (637,202);
glVertex2f (652,198);
glVertex2f (660,198);
glVertex2f (672,196);
glVertex2f (683,196);
glVertex2f (693,196);
glVertex2f (702,198);
glVertex2f (714,206);
glVertex2f (718,211);
glVertex2f (722,221);
glVertex2f (726,233);





        glEnd();
        glPopMatrix();
}

void sky_cloud3()
{
     glPushMatrix();
       glTranslatef(p+1400.0,2450.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
       glBegin(GL_POLYGON);
       //glColor3f(0.8627450980392157, 0.8627450980392157, 0.8627450980392157);
        //glColor3f(0.88, 0.88, 0.88);
        //glColor3f(0.45, 0.75, 0.15);
     glColor3f(0.84, 0.84, 0.85);
        glVertex2f (818,244);
glVertex2f (826,244);
glVertex2f (838,246);
glVertex2f (847,250);
glVertex2f (861,258);
glVertex2f (870,265);
glVertex2f (880,275);
glVertex2f (884,283);
glVertex2f (888,291);
glVertex2f (890,298);
glVertex2f (890,310);
glVertex2f (890,318);
glVertex2f (890,327);
glVertex2f (886,337);
glVertex2f (880,345);
glVertex2f (872,352);
glVertex2f (869,352);
glVertex2f (869,364);
glVertex2f (872,372);
glVertex2f (876,379);
glVertex2f (876,383);
glVertex2f (876,391);
glVertex2f (874,403);
glVertex2f (869,412);
glVertex2f (865,422);
glVertex2f (857,431);
glVertex2f (851,437);
glVertex2f (841,441);
glVertex2f (832,441);
glVertex2f (822,441);
glVertex2f (824,445);
glVertex2f (818,455);
glVertex2f (807,466);
glVertex2f (799,476);
glVertex2f (787,482);
glVertex2f (774,487);
glVertex2f (760,489);
glVertex2f (751,491);
glVertex2f (737,491);
glVertex2f (722,491);
glVertex2f (710,491);
glVertex2f (706,484);
glVertex2f (699,474);
glVertex2f (695,472);
glVertex2f (691,474);
glVertex2f (683,480);
glVertex2f (675,484);
glVertex2f (668,484);
glVertex2f (656,487);
glVertex2f (643,489);
glVertex2f (637,489);
glVertex2f (629,489);
glVertex2f (617,487);
glVertex2f (610,484);
glVertex2f (604,482);
glVertex2f (600,478);
glVertex2f (598,474);
glVertex2f (594,472);
glVertex2f (587,460);
glVertex2f (579,468);
glVertex2f (571,472);
glVertex2f (565,474);
glVertex2f (560,476);
glVertex2f (552,478);
glVertex2f (546,478);
glVertex2f (540,478);
glVertex2f (532,478);
glVertex2f (527,478);
glVertex2f (513,478);
glVertex2f (507,476);
glVertex2f (502,474);
glVertex2f (490,468);
glVertex2f (484,462);
glVertex2f (478,453);
glVertex2f (478,445);
glVertex2f (473,447);
glVertex2f (459,449);
glVertex2f (449,453);
glVertex2f (440,457);
glVertex2f (432,457);
glVertex2f (424,457);
glVertex2f (407,457);
glVertex2f (397,459);
glVertex2f (388,457);
glVertex2f (386,457);
glVertex2f (370,453);
glVertex2f (363,445);
glVertex2f (355,439);
glVertex2f (347,431);
glVertex2f (339,418);
glVertex2f (339,414);
glVertex2f (336,406);
glVertex2f (334,399);
glVertex2f (334,391);
glVertex2f (330,379);
glVertex2f (328,370);
glVertex2f (320,370);
glVertex2f (312,372);
glVertex2f (305,368);
glVertex2f (293,360);
glVertex2f (289,360);
glVertex2f (283,354);
glVertex2f (278,348);
glVertex2f (272,343);
glVertex2f (266,331);
glVertex2f (266,323);
glVertex2f (266,314);
glVertex2f (270,306);
glVertex2f (278,300);
glVertex2f (289,298);
glVertex2f (301,294);
glVertex2f (308,292);
glVertex2f (316,289);
glVertex2f (316,287);
glVertex2f (305,281);
glVertex2f (297,275);
glVertex2f (291,265);
glVertex2f (287,258);
glVertex2f (287,244);
glVertex2f (287,240);
glVertex2f (289,233);
glVertex2f (297,225);
glVertex2f (303,217);
glVertex2f (312,211);
glVertex2f (318,209);
glVertex2f (330,209);
glVertex2f (339,209);
glVertex2f (351,209);
glVertex2f (351,209);
glVertex2f (351,202);
glVertex2f (351,186);
glVertex2f (361,175);
glVertex2f (366,173);
glVertex2f (386,165);
glVertex2f (401,161);
glVertex2f (409,159);
glVertex2f (424,159);
glVertex2f (430,159);
glVertex2f (440,159);
glVertex2f (448,159);
glVertex2f (455,159);
glVertex2f (467,163);
glVertex2f (475,167);
glVertex2f (488,179);
glVertex2f (496,190);
glVertex2f (505,171);
glVertex2f (517,163);
glVertex2f (525,155);
glVertex2f (536,146);
glVertex2f (548,142);
glVertex2f (556,140);
glVertex2f (571,136);
glVertex2f (587,136);
glVertex2f (598,136);
glVertex2f (610,136);
glVertex2f (625,142);
glVertex2f (635,146);
glVertex2f (646,151);
glVertex2f (654,159);
glVertex2f (658,163);
glVertex2f (662,169);
glVertex2f (668,177);
glVertex2f (672,182);
glVertex2f (675,188);
glVertex2f (679,198);
glVertex2f (683,190);
glVertex2f (691,188);
glVertex2f (701,182);
glVertex2f (710,182);
glVertex2f (724,182);
glVertex2f (737,182);
glVertex2f (745,182);
glVertex2f (757,182);
glVertex2f (764,186);
glVertex2f (776,190);
glVertex2f (780,194);
glVertex2f (787,202);
glVertex2f (793,209);
glVertex2f (795,215);
glVertex2f (799,225);
glVertex2f (807,236);
glVertex2f (811,242);



        glEnd();
        glPopMatrix();
}


void sky_cloud4()
{
    glPushMatrix();
    glTranslatef(p+1950.0,2450.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
    glBegin(GL_POLYGON);
    glColor3f(0.83529411764705882352941176470588, 0.83529411764705882352941176470588, 0.84705882352941176470588235294118);
    glVertex2f (729,240);
    glVertex2f (741,240);
    glVertex2f (753,250);
    glVertex2f (760,260);
    glVertex2f (764,267);
    glVertex2f (768,275);
    glVertex2f (772,287);
    glVertex2f (774,292);
    glVertex2f (774,302);
    glVertex2f (774,314);
    glVertex2f (770,325);
    glVertex2f (766,333);
    glVertex2f (760,337);
    glVertex2f (755,339);
    glVertex2f (757,345);
    glVertex2f (760,356);
    glVertex2f (764,368);
    glVertex2f (766,375);
    glVertex2f (766,387);
    glVertex2f (762,399);
    glVertex2f (757,406);
    glVertex2f (753,414);
    glVertex2f (745,418);
    glVertex2f (733,418);
    glVertex2f (728,418);
    glVertex2f (728,426);
    glVertex2f (728,431);
    glVertex2f (728,443);
    glVertex2f (724,451);
    glVertex2f (716,459);
    glVertex2f (706,464);
    glVertex2f (699,468);
    glVertex2f (693,468);
    glVertex2f (687,468);
    glVertex2f (672,468);
    glVertex2f (664,468);
    glVertex2f (654,468);
    glVertex2f (641,468);
    glVertex2f (629,468);
    glVertex2f (612,460);
    glVertex2f (602,457);
    glVertex2f (594,449);
    glVertex2f (594,449);
    glVertex2f (583,455);
    glVertex2f (571,459);
    glVertex2f (563,459);
    glVertex2f (550,459);
    glVertex2f (540,459);
    glVertex2f (529,455);
    glVertex2f (517,447);
    glVertex2f (509,437);
    glVertex2f (505,430);
    glVertex2f (500,420);
    glVertex2f (496,420);
    glVertex2f (486,420);
    glVertex2f (480,420);
    glVertex2f (473,420);
    glVertex2f (463,414);
    glVertex2f (451,401);
    glVertex2f (449,395);
    glVertex2f (446,385);
    glVertex2f (446,374);
    glVertex2f (446,360);
    glVertex2f (449,352);
    glVertex2f (453,347);
    glVertex2f (453,345);
    glVertex2f (448,339);
    glVertex2f (442,333);
    glVertex2f (440,327);
    glVertex2f (434,323);
    glVertex2f (424,314);
    glVertex2f (419,302);
    glVertex2f (420,294);
    glVertex2f (428,283);
    glVertex2f (438,275);
    glVertex2f (446,269);
    glVertex2f (453,260);
    glVertex2f (451,256);
    glVertex2f (442,244);
    glVertex2f (432,238);
    glVertex2f (432,233);
    glVertex2f (432,217);
    glVertex2f (440,209);
    glVertex2f (455,200);
    glVertex2f (465,190);
    glVertex2f (467,190);
    glVertex2f (478,186);
    glVertex2f (490,186);
    glVertex2f (498,190);
    glVertex2f (505,194);
    glVertex2f (509,192);
    glVertex2f (519,180);
    glVertex2f (529,175);
    glVertex2f (534,169);
    glVertex2f (548,161);
    glVertex2f (563,159);
    glVertex2f (579,167);
    glVertex2f (587,173);
    glVertex2f (596,182);
    glVertex2f (604,194);
    glVertex2f (606,198);
    glVertex2f (610,206);
    glVertex2f (619,207);
    glVertex2f (637,202);
    glVertex2f (652,198);
    glVertex2f (660,198);
    glVertex2f (672,196);
    glVertex2f (683,196);
    glVertex2f (693,196);
    glVertex2f (702,198);
    glVertex2f (714,206);
    glVertex2f (718,211);
    glVertex2f (722,221);
    glVertex2f (726,233);
    glEnd();
    glPopMatrix();
}


void island()
{

    glPushMatrix();
       glTranslatef(2570,1120.0,0);
       //glColor3f(0.1490196078431373, 0.4156862745098039, 0.1803921568627451);
       glColor3f(0.45, 0.75, 0.15);
       circle2(250,570);
       glPopMatrix();
}

void island_land() // overlapped with water
{
    glPushMatrix();
       glTranslatef(1850.0,550.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
       glBegin(GL_POLYGON);
       //glColor3f(0.8627450980392157, 0.8627450980392157, 0.8627450980392157);
        glColor3f(0, 0.4117647058823529, 0.5803921568627451);


        glVertex2f(0,800);
        glVertex2f(0,0);
        glVertex2f(1000,0);
        glVertex2f(1000,800);



        glEnd();
        glPopMatrix();
}



void island_tree()
{
    glPushMatrix();
    glTranslatef(2050.0,1350.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
    glBegin(GL_POLYGON);
    // glColor3f(0.45, 0.75, 0.15);

    glColor3f(0.1490196078431373, 0.4156862745098039, 0.1803921568627451);
   glVertex2f (382,755);
glVertex2f (395,755);
glVertex2f (410,755);
glVertex2f (429,757);
glVertex2f (445,757);
glVertex2f (464,757);
glVertex2f (480,754);
glVertex2f (499,747);
glVertex2f (514,745);
glVertex2f (503,759);
glVertex2f (492,766);
glVertex2f (482,775);
glVertex2f (472,780);
glVertex2f (457,790);
glVertex2f (441,799);
glVertex2f (422,802);
glVertex2f (405,803);
glVertex2f (392,805);
glVertex2f (389,813);
glVertex2f (392,824);
glVertex2f (403,827);
glVertex2f (420,828);
glVertex2f (444,831);
glVertex2f (468,831);
glVertex2f (494,831);
glVertex2f (515,831);
glVertex2f (543,815);
glVertex2f (569,800);
glVertex2f (585,790);
glVertex2f (598,790);
glVertex2f (592,806);
glVertex2f (583,816);
glVertex2f (572,829);
glVertex2f (563,844);
glVertex2f (553,858);
glVertex2f (541,871);
glVertex2f (532,880);
glVertex2f (515,886);
glVertex2f (491,893);
glVertex2f (468,900);
glVertex2f (447,901);
glVertex2f (431,901);
glVertex2f (428,912);
glVertex2f (434,915);
glVertex2f (444,916);
glVertex2f (456,916);
glVertex2f (471,916);
glVertex2f (482,916);
glVertex2f (494,912);
glVertex2f (510,904);
glVertex2f (524,902);
glVertex2f (532,899);
glVertex2f (540,896);
glVertex2f (548,887);
glVertex2f (562,880);
glVertex2f (569,880);
glVertex2f (566,890);
glVertex2f (559,896);
glVertex2f (550,904);
glVertex2f (543,915);
glVertex2f (533,925);
glVertex2f (521,936);
glVertex2f (509,947);
glVertex2f (492,953);
glVertex2f (476,955);
glVertex2f (405,959);
glVertex2f (410,979);
glVertex2f (425,983);
glVertex2f (434,986);
glVertex2f (445,986);
glVertex2f (459,986);
glVertex2f (476,986);
glVertex2f (491,982);
glVertex2f (486,1001);
glVertex2f (473,1011);
glVertex2f (453,1015);
glVertex2f (434,1016);
glVertex2f (409,1018);
glVertex2f (425,1028);
glVertex2f (436,1034);
glVertex2f (445,1040);
glVertex2f (456,1046);
glVertex2f (467,1053);
glVertex2f (470,1060);
glVertex2f (417,1063);
glVertex2f (392,1028);
glVertex2f (378,1030);
glVertex2f (352,1053);
glVertex2f (309,1047);
glVertex2f (347,1025);
glVertex2f (348,1012);
glVertex2f (331,1012);
glVertex2f (284,1011);
glVertex2f (270,1005);
glVertex2f (256,998);
glVertex2f (242,986);
glVertex2f (229,973);
glVertex2f (222,962);
glVertex2f (242,966);
glVertex2f (260,976);
glVertex2f (286,978);
glVertex2f (309,979);
glVertex2f (319,970);
glVertex2f (319,960);
glVertex2f (291,960);
glVertex2f (264,955);
glVertex2f (235,953);
glVertex2f (219,946);
glVertex2f (205,939);
glVertex2f (190,925);
glVertex2f (177,912);
glVertex2f (170,899);
glVertex2f (160,885);
glVertex2f (152,873);
glVertex2f (176,885);
glVertex2f (198,899);
glVertex2f (215,904);
glVertex2f (237,906);
glVertex2f (321,912);
glVertex2f (321,900);
glVertex2f (286,897);
glVertex2f (260,896);
glVertex2f (238,886);
glVertex2f (224,880);
glVertex2f (207,877);
glVertex2f (189,866);
glVertex2f (180,852);
glVertex2f (168,841);
glVertex2f (155,831);
glVertex2f (145,817);
glVertex2f (138,805);
glVertex2f (135,785);
glVertex2f (151,793);
glVertex2f (165,806);
glVertex2f (184,822);
glVertex2f (196,828);
glVertex2f (218,834);
glVertex2f (241,835);
glVertex2f (268,835);
glVertex2f (289,834);
glVertex2f (314,816);
glVertex2f (310,809);
glVertex2f (283,809);
glVertex2f (256,803);
glVertex2f (238,786);
glVertex2f (228,768);
glVertex2f (230,757);
glVertex2f (256,762);
glVertex2f (271,763);
glVertex2f (303,766);
glVertex2f (324,759);
glVertex2f (376,757);

    glEnd();
    glPopMatrix();
}


void island_tree_struct()
{
    glPushMatrix();
    glTranslatef(1900.0,1500.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
    glBegin(GL_POLYGON);
    glColor3f(0.54117647058823529411764705882353, 0.25490196078431372549019607843137, 0);

glVertex2f (695,151);
glVertex2f (675,169);
glVertex2f (656,184);
glVertex2f (629,209);
glVertex2f (594,254);
glVertex2f (569,296);
glVertex2f (546,335);
glVertex2f (532,352);
glVertex2f (465,356);
glVertex2f (494,321);
glVertex2f (509,298);
glVertex2f (523,269);
glVertex2f (544,244);
glVertex2f (563,223);
glVertex2f (589,204);
glVertex2f (614,175);
glVertex2f (635,148);
glVertex2f (668,144);



    glEnd();
    glPopMatrix();
}


void island_tree_struct_top()
{
    glPushMatrix();
    glTranslatef(1900.0,1500.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
    glBegin(GL_POLYGON);
     glColor3f(0.54117647058823529411764705882353, 0.25490196078431372549019607843137, 0);


glVertex2f (535,350);
glVertex2f (527,370);
glVertex2f (521,393);
glVertex2f (521,408);
glVertex2f (521,426);
glVertex2f (521,445);
glVertex2f (521,466);
glVertex2f (531,499);
glVertex2f (534,518);
glVertex2f (534,536);
glVertex2f (538,559);
glVertex2f (538,578);
glVertex2f (538,594);
glVertex2f (540,615);
glVertex2f (502,617);
glVertex2f (459,621);
glVertex2f (457,605);
glVertex2f (457,590);
glVertex2f (457,576);
glVertex2f (457,567);
glVertex2f (457,534);
glVertex2f (455,509);
glVertex2f (455,484);
glVertex2f (455,459);
glVertex2f (455,435);
glVertex2f (455,410);
glVertex2f (457,389);
glVertex2f (457,362);
glVertex2f (469,352);
glVertex2f (490,352);
glVertex2f (511,350);



    glEnd();
    glPopMatrix();
}


void forest()
{
    glPushMatrix();
    glTranslatef(0.0,1300.0,0); //Here glTranslate is used for proper positioning of the shape on the screen. Try to change the values here and see the effect
    glBegin(GL_POLYGON);
      glColor3f(0.1490196078431373, 0.4156862745098039, 0.1803921568627451);


glVertex2f(2900,645);
glVertex2f(2896,645);
glVertex2f(2896,664);
glVertex2f(2886,684);
glVertex2f(2872,694);
glVertex2f(2832,704);
glVertex2f(2818,704);
glVertex2f(2783,704);
glVertex2f(2754,704);
glVertex2f(2724,699);
glVertex2f(2709,689);
glVertex2f(2695,684);
glVertex2f(2670,679);
glVertex2f(2636,664);
glVertex2f(2621,664);
glVertex2f(2606,659);
glVertex2f(2596,669);
glVertex2f(2586,689);
glVertex2f(2577,699);
glVertex2f(2557,718);
glVertex2f(2552,718);
glVertex2f(2513,743);
glVertex2f(2498,753);
glVertex2f(2478,758);
glVertex2f(2478,758);
glVertex2f(2473,758);
glVertex2f(2459,763);
glVertex2f(2424,763);
glVertex2f(2419,763);
glVertex2f(2409,758);
glVertex2f(2390,738);
glVertex2f(2385,728);
glVertex2f(2380,723);
glVertex2f(2375,718);
glVertex2f(2355,704);
glVertex2f(2321,689);
glVertex2f(2311,689);
glVertex2f(2306,694);
glVertex2f(2301,708);
glVertex2f(2296,718);
glVertex2f(2286,738);
glVertex2f(2277,758);
glVertex2f(2247,758);
glVertex2f(2227,743);
glVertex2f(2213,723);
glVertex2f(2198,713);
glVertex2f(2163,694);
glVertex2f(2144,679);
glVertex2f(2124,684);
glVertex2f(2095,704);
glVertex2f(2075,708);
glVertex2f(2036,723);
glVertex2f(2001,723);
glVertex2f(1967,723);
glVertex2f(1932,708);
glVertex2f(1918,699);
glVertex2f(1913,689);
glVertex2f(1888,684);
glVertex2f(1878,684);
glVertex2f(1849,704);
glVertex2f(1819,723);
glVertex2f(1790,743);
glVertex2f(1750,748);
glVertex2f(1736,748);
glVertex2f(1711,738);
glVertex2f(1696,728);
glVertex2f(1691,713);
glVertex2f(1672,699);
glVertex2f(1652,689);
glVertex2f(1618,669);
glVertex2f(1593,674);
glVertex2f(1578,704);
glVertex2f(1554,718);
glVertex2f(1534,728);
glVertex2f(1529,733);
glVertex2f(1495,733);
glVertex2f(1465,733);
glVertex2f(1436,733);
glVertex2f(1416,718);
glVertex2f(1386,694);
glVertex2f(1362,694);
glVertex2f(1357,689);
glVertex2f(1318,718);
glVertex2f(1293,733);
glVertex2f(1254,763);
glVertex2f(1200,763);
glVertex2f(1155,758);
glVertex2f(1111,728);
glVertex2f(1081,704);
glVertex2f(1047,684);
glVertex2f(1022,669);
glVertex2f(998,669);
glVertex2f(963,669);
glVertex2f(959,669);
glVertex2f(934,684);
glVertex2f(919,694);
glVertex2f(880,708);
glVertex2f(845,713);
glVertex2f(811,718);
glVertex2f(796,718);
glVertex2f(767,718);
glVertex2f(747,708);
glVertex2f(732,704);
glVertex2f(722,699);
glVertex2f(708,694);
glVertex2f(698,694);
glVertex2f(673,689);
glVertex2f(644,694);
glVertex2f(619,699);
glVertex2f(600,704);
glVertex2f(580,713);
glVertex2f(531,728);
glVertex2f(491,738);
glVertex2f(462,738);
glVertex2f(442,733);
glVertex2f(408,708);
glVertex2f(378,704);
glVertex2f(363,704);
glVertex2f(334,699);
glVertex2f(314,699);
glVertex2f(285,708);
glVertex2f(260,723);
glVertex2f(231,743);
glVertex2f(181,753);
glVertex2f(142,758);
glVertex2f(118,743);
glVertex2f(78,704);
glVertex2f(44,679);
glVertex2f(45,645);
glVertex2f(44,645);
glVertex2f(45,720);
glVertex2f(40,710);
glVertex2f(30,720);
glVertex2f(20,715);
glVertex2f(10,735);
glVertex2f(0,720);
glVertex2f(0,620);
glVertex2f(1047,645);


    glEnd();
    glPopMatrix();
}
void spinDisplay_left(void)
{
   spin = spin + 0.02; //to increase or decrease speed change the value added to spin
   if (spin > 6.0)
      spin = 0;
   //the above if block is given only for clear understanding, otherwise 370 degrees is the same as 10 degrees

   glutPostRedisplay(); //calls the display function again
}


void surface_ball()
{

    glPushMatrix();
       glTranslatef(2000,320.0,0);
       glColor3f(0.4156862745098039, 0.4235294117647059, 0.4274509803921569);
       //glColor3f(0.05882352941176470588235294117647, 0.08627450980392156862745098039216, 0.93333333333333333333333333333333);
       circle3(160,260);
       glPopMatrix();
}

void myDisplay()
{

    glClear(GL_COLOR_BUFFER_BIT);



glColor3f(0.2f, 0.0f, 0.74f);

water();
sky();

island();
island_land();

forest();
island_tree();
island_tree_struct();
island_tree_struct_top();


land();
surface_ball();
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

tal_cloud();
tal_cloud2();
tal_cloud3();
tal_cloud4();

talk_text();
sky_cloud1();
sky_cloud2();
sky_cloud3();
sky_cloud4();



    glFlush();
        if (p>=2280)
    {
    	p=-2500;

    }
    else
    {

    	p=p+0.2;
    }



     glutPostRedisplay();//calls the display func again
}




void spe_key(int key, int x, int y)
{

	switch (key) {
        case GLUT_KEY_UP:
        	cloud_actifvation=1;
            sound=1;
            flag=1;
          //  glutIdleFunc(spinDisplay_left);
            PlaySound("nafiz_welcome.wav", NULL, SND_FILENAME| SND_ASYNC);
            glutIdleFunc(spinDisplay_left);


           // bitmap_font_names={'Welcome'};
            break;
        case GLUT_KEY_DOWN:
        	cloud_actifvation=1;
            sound=2;
            flag=2;
            PlaySound("nafiz_hi.wav", NULL, SND_FILENAME| SND_ASYNC);
            glutIdleFunc(spinDisplay_left);
            //bitmap_font_names={'Hi'};
            break;

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
void my_mouse(int button, int state, int x, int y)
{
   switch (button) {
      case GLUT_LEFT_BUTTON:
         if (state == GLUT_DOWN)//mouse press detected
            PlaySound("background2.wav", NULL, SND_FILENAME| SND_ASYNC);
            cloud_actifvation=0;
            flag=0;
            glutIdleFunc(NULL);

            //glutIdleFunc(spinDisplay_left);//then call the spinDisplay_left func to spin in left direction
         break;
      case GLUT_RIGHT_BUTTON:
         if (state == GLUT_DOWN)
         {
             if(ball_position==0)
             {
                 h=h+100;
                 h=h+100;
                 h=h+100;
                 h=h+100;
                 h=h+100;
                 h=h+100;
                 h=h+100;
                 ball_position=1;
             }
             else if(ball_position==1)
             {
                 h=h-100;
                 h=h-100;
                 h=h-100;
                 h=h-100;
                 h=h-100;
                 h=h-100;
                 h=h-100;
                 ball_position=0;

             }

         }

			//glutIdleFunc(spinDisplay_right);
         break;
      default:
         break;
   }
}


int main()
{
    // if(sound==1)
    // {
    //     PlaySound("welcome.wav", NULL, SND_FILENAME| SND_ASYNC);
    // }
    // else if(sound==2)
    // {
    //     PlaySound("hi.wav", NULL, SND_FILENAME| SND_ASYNC);
    // }
    // else
    // {
    //     
    // }
    PlaySound("background.wav", NULL, SND_FILENAME| SND_ASYNC);

    //PlaySound("welcome.wav", NULL, SND_FILENAME| SND_ASYNC);
    glutInitWindowSize(1250,650);
    glutInitWindowPosition(50,10);
    glutCreateWindow("Talking Tom");
    init();
    glutDisplayFunc(myDisplay);
    glutSpecialFunc(spe_key);
    glutMouseFunc(my_mouse);
    glutMainLoop();
    return 0;
}
