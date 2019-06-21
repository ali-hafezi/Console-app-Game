// hafezi.cpp : main project file.

#include "stdafx.h"
#include "edit.h"
#include "page.h"
using namespace std;

	class iranian
{

	const unsigned __int64 cod;
public:
	
	char *name;
	char *lastname;
	void getcodinf(iranian x);
	iranian(unsigned __int64 x);

protected:
	char *fathername;
	unsigned short bornyear;
	char *bornarea;
	bool status;
};

iranian::iranian(unsigned __int64 x):cod(x)
{
}
void iranian::getcodinf(iranian x)
{
	cout<<x.cod<<"\n";
}


	class score
	{
	private:
		char *lessonname;
		unsigned short lessoncod;
		unsigned short num;

	public:
		 float mark[10];
		 float avrage;
		 int first;
		 void setscore(score x[10]);
		 void prints(score x[10]);
		 	friend void check(score x[10]);
	};

	void score::setscore(score x[10])
	{
		x[0].lessonname="math";
		x[1].lessonname="physics";
		x[2].lessonname="programing";
		x[3].lessonname="aljebra";
		x[4].lessonname="logic";
		x[5].lessonname="english";
		x[6].lessonname="history";
		x[7].lessonname="geometry";
		x[8].lessonname="electronic";
		x[9].lessonname="camputer";

		x[0].lessoncod=2564;
		x[1].lessoncod=4852;
		x[2].lessoncod=1254;
		x[3].lessoncod=8965;
		x[4].lessoncod=7512;
		x[5].lessoncod=7865;
		x[6].lessoncod=6862;
		x[7].lessoncod=6636;
		x[8].lessoncod=8985;
		x[9].lessoncod=5623;

		x[0].num=2;
		x[1].num=4;
		x[2].num=1;
		x[3].num=4;
		x[4].num=2;
		x[5].num=1;
		x[6].num=2;
		x[7].num=3;
		x[8].num=3;
		x[9].num=3;

	}

	void check(score x[10])
	{
		for(int i=0;i<10;i++)
			cout<<x[i].mark;

	}
class student: public iranian ,private score
{
private:

	const unsigned int stcod;
	char *major;
	unsigned short enyear;
	int number;
public:
	student(unsigned __int64  x,unsigned  y);
	void setinformation(student x[10]);
	 void setmark(student x[10]);
	 void print(student x[10]);
protected:

		friend void check(score x[10],student y[10]);
};
void student::setmark(student x[10])
{
	short y,z;
	for(char i=0;i<10;i++)
		for(char j=0;j<10;j++)
		{
			y=rand()%20;
			z=rand()%101;

			x[i].mark[j]=y+float(z)/100;
		}
		float sum=0;
		int k=0;
	for(char i=0;i<10;i++)
	{
		sum=0;
		k=0;
		for(char j=0;j<10;j++)
		{
			if(x[i].mark[j]>10)
			{
				sum=sum+x[i].mark[j];
				k++;
			}

		}
		x[i].number=k;
		x[i].avrage=sum/k;
	}

	float fe=0;
	float ma=0;
	sum=0;
	k=0;
	for(char i=0;i<10;i++)
	{
		if(x[i].status)
		{
			ma=ma+x[i].avrage;
			sum++;
		}
		else
		{
			fe=fe+x[i].avrage;
			k++;
		}
	}
	fe=fe/k;
	ma=ma/sum;
	setcolor(2,black);
	gotoxy(72,4);
		cout<<"woman";
	gotoxy(72,6);
	cout<<fe;

	
	gotoxy(72,8);
		cout<<"man";
	gotoxy(72,10);
	cout<<ma;

	
	
		float av[10];
		int find[3]={0};
		float max=0;
		for(char i=0;i<10;i++)
		
			av[i]=x[i].avrage;
		short u=3;
		do
		{
		for(char i=0;i<10;i++)
			if(av[i]>max)
				max=av[i];

		for(int i=0;i<10;i++)
			if(av[i]==max)
			{
				av[i]=0;
				find[3-u]=i;
			}

			max=0;
	      u--;
		}while(u);

		gotoxy(72,13);
		cout<<"firsts";
		for(int i=0;i<3;i++)
		{
			gotoxy(72,16+i);
			cout<<i+1<<x[find[i]].lastname;
		}

}
void student::print(student x[10])
{
	setcolor(2,lightred);
	gotoxy(3,2);
	cout<<"lastname";

	gotoxy(15,2);
	cout<<"name";

	gotoxy(25,2);
	cout<<"studentcod";

	gotoxy(40,2);
	cout<<"major";

		gotoxy(55,2);
		cout<<"avrage";

		gotoxy(65,2);
		cout<<"pass";
	char y=4;
	setcolor(2,black);
	for(char i=0;i<10;i++)
	{
		gotoxy(3,y);
		cout<<x[i].lastname;

		gotoxy(15,y);
		cout<<x[i].name;

		gotoxy(25,y);
		cout<<x[i].stcod;

		gotoxy(40,y);
		cout<<x[i].major;

		gotoxy(55,y);
		cout<<x[i].avrage<<"  ";
		
		gotoxy(65,y);
		cout<<x[i].number<<"less";
		y+=2;
	}
}

void student::setinformation(student x[10])
{
	x[0].fathername="abolfazle";
	x[1].fathername="manojehr";
	x[2].fathername="ghasem";
	x[3].fathername="abas";
	x[4].fathername="akbar";
	x[5].fathername="farid";
	x[6].fathername="faramarz";
	x[7].fathername="aslan";
	x[8].fathername="naser";
	x[9].fathername="gholi";


    x[0].name="ali";
	x[1].name="samin";
	x[2].name="ahmad";
	x[3].name="nakisa";
	x[4].name="sahar";
	x[5].name="mohammad";
	x[6].name="negin";
	x[7].name="setayesh";
	x[8].name="marziye";
	x[9].name="jafar";

	x[0].lastname="abedini";
	x[1].lastname="mohamadi";
	x[2].lastname="dindost";
	x[3].lastname="zibamanesh";
	x[4].lastname="rajabi";
	x[5].lastname="vafaee";
	x[6].lastname="jafary";
	x[7].lastname="rezaee";
	x[8].lastname="sadeghi";
	x[9].lastname="razmjoo";

	x[0].bornyear=1370;
    x[1].bornyear=1370;
	x[2].bornyear=1365;
	x[3].bornyear=1368;
	x[4].bornyear=1369;
	x[5].bornyear=1366;
	x[6].bornyear=1370;
	x[7].bornyear=1365;
	x[8].bornyear=1370;
	x[9].bornyear=1370;

	x[0].status=1;
    x[1].status=0;
	x[2].status=1;
	x[3].status=0;
	x[4].status=0;
	x[5].status=1;
	x[6].status=0;
	x[7].status=0;
	x[8].status=0;
	x[9].status=1;

	x[0].bornarea="tehran";
    x[1].bornarea="tehran";
	x[2].bornarea="tabriz";
	x[3].bornarea="shiraz";
	x[4].bornarea="tabriz";
	x[5].bornarea="tehran";
	x[6].bornarea="tehran";
	x[7].bornarea="esfehan";
	x[8].bornarea="mashhad";
	x[9].bornarea="shiraz";

	x[0].major="camputer";
    x[1].major="camputer";
	x[2].major="math";
	x[3].major="phyzik";
	x[4].major="electronic";
	x[5].major="math";
	x[6].major="electronic";
	x[7].major="camputer";
	x[8].major="math";
	x[9].major="camputer";

	x[0].enyear=1389;
    x[1].enyear=1389;
	x[2].enyear=1384;
	x[3].enyear=1387;
	x[4].enyear=1388;
	x[5].enyear=1386;
	x[6].enyear=1389;
	x[7].enyear=1384;
	x[8].enyear=1389;
	x[9].enyear=1389;



}

student::student(unsigned __int64 x, unsigned y):stcod(y),iranian(x)
{
}

class  design
{
	
void help()
{
	setcolor(white,black);
	gotoxy(25,15);
	cout<<"sorry its not ready yet";
	Sleep(3000);
	gotoxy(25,15);
	setcolor(white);
	cout<<"sorry its not ready yet";
	men();
}

	int men()
	{
		int i;
		i=menu();
	
	   switch(i)
	   {
	   case 0:

         break;
	   case 1:
		   system("cls");
		   game();
		   break;
	   case 2:
		   help();
		   break;
	   case 3:
		   help();
		   break;

	   case 4:
		   home();
		   break;

	   case 5:
		   home();
		   break;
	   };


	   return 0;

	}

public:
	int home()
	{
		char ch;
		ch=homepage();
		while(ch!=esc  && ch!=enter)	
		ch=homepage();
		
	    if(ch==esc)
		return 0;

		men();
	}

};



int main()
{
	design p;
	p.home();

	system("color 25");
	system("cls");
	
	student person[10]={student(4900132046,890123115),student(13902564,890123066),student(4965235987,845674258),student(235988741,870123569),student(1563249898,880117654),student(22335656,865923842),student(7539516548,890123457),student(258965896,845632701),student(4862539710,890123569),student(6969858523,890123756)};

	person->setinformation(person);
	person->setmark(person);
	score *lesson=new score[10];
	lesson->setscore(lesson);
	
	person->print(person);

	delete []lesson;
	cout<<"\n";
	system("pause");
    return 0;
}
