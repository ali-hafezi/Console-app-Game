#include "iostream"
#include "windows.h"
#include "conio.h"
#include < time.h >

using namespace std;
HANDLE Console;



    enum COLORS { black, blue, green, cyan,red, magenta, brown, lightgray,darkgray, 
		lightblue, lightgreen, lightcyan, lightred, lightmagenta, yellow, white};
	
void setconsole()
{
	Console = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD size;
	size.X = 80;
	size.Y = 25;
	SetConsoleScreenBufferSize(Console,size);
}
void hideCursor()
{
	CONSOLE_CURSOR_INFO cinfo;
	cinfo.bVisible = false;
	cinfo.dwSize = 1;
	SetConsoleCursorInfo(Console,&cinfo);
	setconsole();
}
void setcolor(short x,short y)
{
	x=16*x+y;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),x);
}
void setcolor(short x)
{
	x=16*x+x;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),x);
}
void gotoxy(int x, int y)

  {//start gotoxy function.

		HANDLE hConsoleOutput;
		COORD dwCursorPosition;
		cout.flush();
		dwCursorPosition.X = x;
		dwCursorPosition.Y = y;
		hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);

  }//end gotoxy function.


void stronghold()
{
	    system("cls");//remove all page.
	    system("color b0");//background color//////////
		////////////////////////cloud's/////////////////////////////////////

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),255);//color option for font(bright white).
     //---------------------------------------------------------------////////
	/////////////////////first cloud////////////////////////////

	 //set the position.
	 gotoxy(6,3);
	 cout<<"      ";//print.
	 //set the position.
	 gotoxy(5,4);
	 cout<<"         ";//print.
	 //set the position.
	 gotoxy(7,5);
	 cout<<"      ";//print.
	 
	 ////////////////////second cloud//////////////////
	 
	 //set the position.
	 gotoxy(70,3);
	 cout<<"    ";//print
	 //set the position.
     gotoxy(68,4);
	 cout<<"        ";//print
	 //set the position.
	 gotoxy(69,5);
	 cout<<"        ";//print
	 //set the position.
	 gotoxy(70,6);
	 cout<<"     ";//print

	 ///////////////**************************************************//////////////

	 /////////////////////sun//////////////
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),238);//color option for font(light yello).
	//////////////-----------------------------------////////////////

	 //set the position.	
     gotoxy(40,2);
	 cout<<"     ";//print
	 //set the position.
	 gotoxy(40,3);
	 cout<<"     ";//print
	 //set the position.
	 gotoxy(40,4);
	 cout<<"     ";//print

	 /////////////////////////////////////

	 ///////////////////////ground////////////////////
	 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),170);//color option for font(light green).
	//////-------------------------------------------------/////////////////

	 //set the position.
     gotoxy(0,16);
	 cout<<"                                                                                ";//print
	 //set the position.
     gotoxy(0,17);
	 cout<<"                                                                                ";//print
	 //set the position.
     gotoxy(0,18);
	 cout<<"                                                                                ";//print
	 //set the position.
     gotoxy(0,19);
	 cout<<"                                                                                ";//print
	 //set the position.
     gotoxy(0,20);
	 cout<<"                                                                                ";//print
	 //set the position.
     gotoxy(0,21);
	 cout<<"                                                                                ";//print
	 //set the position.
     gotoxy(0,22);
	 cout<<"                                                                                ";//print
	 //set the position.
     gotoxy(0,23);
	 cout<<"                                                                                ";//print
	 //set the position.
	 gotoxy(0,24);
	 cout<<"                                                                                ";//print

	 gotoxy(0,0);//get the screen.

	 /////////////////column's///////////////
	 
	 {//start of column part.
		 
		 char x = 0 ;//char datatype

		 //for order for change the postion of drawing.
		for(char i = 0 ; i < 2 ; i ++ )
		{//for start order.
			
		char shap[9]={178,222,201,187,204,185,200,188,64};//char arraye variable
			 //////////////////body//////////////////////////////

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),67);//color option for font.
     ////---------------------------------------------////////////
	 //set the position.
	 gotoxy(17+x,12);
	 cout<<"  "<<shap[2]<<shap[3]<<"  ";//print
	 //set the position.
     gotoxy(17+x,13);
	 cout<<"  "<<shap[4]<<shap[5]<<"  ";//print
	 //set the position.
     gotoxy(17+x,14);
	 cout<<"  "<<shap[4]<<shap[5]<<"  ";//print
	 //set the position.
     gotoxy(17+x,15);
	 cout<<"  "<<shap[4]<<shap[5]<<"  ";//print
	 //set the position.
     gotoxy(17+x,16);
	 cout<<"  "<<shap[4]<<shap[5]<<"  ";//print
	 //set the position.
     gotoxy(17+x,17);
	 cout<<"  "<<shap[4]<<shap[5]<<"  ";//print
	 //set the position.
     gotoxy(17+x,18);
	 cout<<"  "<<shap[4]<<shap[5]<<"  ";//print
	 //set the position.
     gotoxy(17+x,19);
     cout<<"  "<<shap[4]<<shap[5]<<"  ";//print
	 //set the position.
     gotoxy(17+x,20);
     cout<<"  "<<shap[4]<<shap[5]<<"  ";//print
	 //set the position.
     gotoxy(17+x,21);
	 cout<<"  "<<shap[6]<<shap[7]<<"  ";//print
	 //set the position.
     gotoxy(17+x,22);
	 cout<<"      ";//print

	 ////////////////////depth/////////////////////////////
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),72);//color option for font.

     //set the position.
     gotoxy(23+x,12);
	 cout<<shap[0];//print
	 //set the position.
     gotoxy(23+x,13);
     cout<<shap[0];//print
	 //set the position.
     gotoxy(23+x,14);
	 cout<<shap[0];//print
	 //set the position.
     gotoxy(23+x,15);
	 cout<<shap[0];//print
	 //set the position.
     gotoxy(23+x,16);
	 cout<<shap[0];//print
	 //set the position.
     gotoxy(23+x,17);
	 cout<<shap[0];//print
	 //set the position.
     gotoxy(23+x,18);
	 cout<<shap[0];//print
	 //set the position.
     gotoxy(23+x,19);
	 cout<<shap[0];//print
	 //set the position.
     gotoxy(23+x,20);
	 cout<<shap[0];//print
	 //set the position.
     gotoxy(23+x,21);
	 cout<<shap[0];//print
	 //set the position.
     gotoxy(23+x,22);
	 cout<<shap[0];//print
	

	 //////////////////////////lit.column//////////////////////////////

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),68);//color option for font.
   
	//set the position.
	gotoxy(18+x,11);
	 cout<<" ";//print
	 //set the position.
     gotoxy(18+x,10);
	 cout<<" ";//print
	 //set the position.
     gotoxy(21+x,11);
	 cout<<" ";//print
	 //set the position.
     gotoxy(21+x,10);
	 cout<<" ";//print
	 ///////////////////////////depth/////////////
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),72);//color option for font.
    
	//set the position.
	gotoxy(19+x,11);
	  cout<<shap[0];//print
	  //set the position.
     gotoxy(19+x,10);
	  cout<<shap[0];//print
	  //set the position.
     gotoxy(22+x,11);
	  cout<<shap[0];//print
	  //set the position.
     gotoxy(22+x,10);
	  cout<<shap[0];//print

	  //////head/////////////////////////
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);//color option for font.
     
	 //set the position.
	 gotoxy(16+x,9);
	 cout<<"        ";//print
	 //set the position.
     gotoxy(18+x,8);
	 cout<<" "<<char(putch(shap[8]))<<" ";//print
	 //set the position.
     gotoxy(19+x,7);
	 cout<<"  ";//print

	 /////////////////depth//////////////////////////////
	 	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),216);//color option for font.
    
		//set the position.
		gotoxy(24+x,9);
	  cout<<shap[0];//print
     //set the position.
	  gotoxy(22+x,8);
	  cout<<shap[0];//print
    //set the position.
	  gotoxy(21+x,7);
	  cout<<shap[0];//print

	  /////////////////bar///////////////
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),184);//color option for font.
	  
	//set the position.
	gotoxy(19+x,6);
	  cout<<shap[1];//print
	  //set the position.
     gotoxy(19+x,5);
	  cout<<shap[1];//print
	  //set the position.
     gotoxy(19+x,4);
	  cout<<shap[1];//print
	  //set the position.
	   gotoxy(19+x,3);
	  cout<<shap[1];//print
	  
	  ////////////////////////parcham///////////////
	  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),204);//color option for font.

	  //set the position.
	 gotoxy(20+x,3);
	 cout<<"         ";//print
	 //set the position.
	 gotoxy(20+x,4);
	 cout<<"         ";//print
	 //set the position.
	 gotoxy(20+x,5);
	 cout<<"         ";//print


	  x = 43 ;//change the position.

	  }//end of for order.

	  }//end of column part
	  //////////////////////////////////*************************************************/////////

	  /////////////////////////////body/////////////////////////////////////////////////////////////
	  {//start of body .

		  char shap[]={210,5,202,203};//char arraye variable

		  ///////////////////////kongereh////////////////////////////////////

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),184);//color option for font.
	///////////////---------------------------------------------//////////////
	//set the position.
     gotoxy(24,13);
	 cout<<shap[0]<<shap[0]<<shap[0]<<shap[0]<<shap[0]<<shap[0]<<shap[0];
	 	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),72);//color option for font.
	 cout<<shap[0]<<shap[0]<<shap[0]<<shap[0]<<shap[0]<<shap[0]<<shap[0]<<shap[0]<<shap[0]<<shap[0]<<shap[0]<<shap[0]<<shap[0]<<shap[0]<<shap[0]<<shap[0]<<shap[0]<<shap[0]<<shap[0]<<shap[0]<<shap[0]<<shap[0]<<shap[0]<<shap[0]<<shap[0]<<shap[0]<<shap[0]<<shap[0];
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),184);//color option for font.
	 cout<<shap[0];
	/////////***********************************************//////
	 ////////////////////main////////////////////////////////////////////
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),86);//color option for font.

	/////////////--------------------------------------/////////////////////
	 //set the position.
	 gotoxy(24,14);
     cout<<"   "<<shap[1]<<" "<<shap[1]<<" "<<shap[1]<<" "<<shap[1]<<" "<<shap[1]<<" "<<shap[1]<<" "<<shap[1]<<" "<<shap[1]<<" "<<shap[1]<<" "<<shap[1]<<" "<<shap[1]<<" "<<shap[1]<<" "<<shap[1]<<" "<<shap[1]<<" "<<shap[1]<<"    ";
	 //set the position.
	 gotoxy(24,15);
     cout<<"  "<<shap[2]<<shap[3]<<shap[2]<<shap[3]<<shap[2]<<shap[3]<<shap[2]<<shap[3]<<shap[2]<<shap[3]<<shap[2]<<shap[3]<<shap[2]<<shap[3]<<shap[2]<<shap[3]<<shap[2]<<shap[3]<<shap[2]<<shap[3]<<shap[2]<<shap[3]<<shap[2]<<shap[3]<<shap[2]<<shap[3]<<shap[2]<<shap[3]<<shap[2]<<shap[3]<<shap[2]<<shap[3]<<"  ";
	//set the position.
	 gotoxy(24,16);
     cout<<"                                    ";//print
	 //set the position.
	 gotoxy(24,17);
     cout<<"  "<<shap[2]<<shap[3]<<shap[2]<<shap[3]<<shap[2]<<shap[3]<<"                     "<<shap[2]<<shap[3]<<shap[2]<<shap[3]<<shap[2]<<"  ";//print
	 //set the position.
	 gotoxy(24,18); 
     cout<<"                                    ";//print
	 //set the position.
	 gotoxy(24,19);
	 cout<<"  "<<shap[2]<<shap[3]<<shap[2]<<shap[3]<<shap[2]<<shap[3]<<"                     "<<shap[2]<<shap[3]<<shap[2]<<shap[3]<<shap[2]<<"  ";//print
	 //set the position.
	 gotoxy(24,20);
     cout<<"                                    ";//print
	 //set the position.
	 gotoxy(24,21); 
     cout<<"                                    ";//print

	  }//end of body part.
	  ////////////////////////********************************////////////////////////

	  //////////////////////////door///////////////////////////////////////////////////////////////
	  {//start of door part.

		  char shap[]={178,220,206,223,215,15,221};//char arraye variable

		  ////////////////////////depth///////////////////
		 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),88);//color option for font.
			/////////////////---------------------------------//////////////////

	 //set the position.
	 gotoxy(33,17);
	 cout<<shap[0];//print
	 //set the position.
	 gotoxy(33,18);
	 cout<<shap[0];//print
	 //set the position.
	 gotoxy(33,19);
	 cout<<shap[0];//print
	 //set the position.
	 gotoxy(33,20);
	 cout<<shap[0];//print
	 //set the position.
	 gotoxy(33,21);
	 cout<<shap[0];//print

	 /////////////head///////////////////////
	 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),92);//color option for font.\
	 //////////////////-------------------------------------------//////
	 //set the position.
	 gotoxy(32,16);
	 cout<<shap[1]<<shap[1]<<shap[1]<<shap[1]<<shap[1]<<shap[1]<<shap[1]<<shap[1]<<shap[1]<<shap[1]<<shap[1]<<shap[1]<<shap[1]<<shap[1]<<shap[1]<<shap[1]<<shap[1]<<shap[1]<<shap[1]<<shap[1]<<shap[1];
	
	 ///////////////////////////the body of door//////////////////////////////////////
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),206);//color option for font.
	//////////////-----------------------////
	//set the position.
	 gotoxy(34,17);
	 cout<<shap[6]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2];//print
	 //set the position.
	 gotoxy(34,18);
	 cout<<shap[6]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2];//print
	 //set the position.
	 gotoxy(34,19);
	 cout<<shap[6]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2];//print
	 //set the position.
	 gotoxy(34,20);
	 cout<<shap[6]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2]<<shap[2];//print
	
	 ///////the down /////////
	 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);//color option for font.
	 /////////////////////////--------------------////////////////////
	 //set the position.
	 gotoxy(34,21);
	 cout<<shap[3]<<shap[3]<<shap[3]<<shap[3]<<shap[3]<<shap[3]<<shap[3]<<shap[3]<<shap[3]<<shap[3]<<shap[3]<<shap[3]<<shap[3]<<shap[3]<<shap[3]<<shap[3]<<shap[3];//print

	 /////////mid//////////////////
	 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),198);//color option for font.
	 //////////////------------------------////////////////////////////
	 //set the position.
	 gotoxy(42,17);
	 cout<<shap[4];//print
	 //set the position.
	 gotoxy(42,18);
	 cout<<shap[4];//print
	 //set the position.
	 gotoxy(42,19);
	 cout<<shap[4];//print
	 //set the position.
	 gotoxy(42,20);
	 cout<<shap[4];//print

	 ////////////////////////////dastgireh/////////////////
	 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),207);//color option for font.
	 ////////////////------------------------//////////////////////
	 //set the position.
	 gotoxy(38,19);
	 cout<<shap[5];//print
	 //set the position.
	 gotoxy(46,19);
	 cout<<shap[5];//print

	  }//end of door part.
	  /////////////********************************************************////
	  ////////////////////////depth of stronghold//////////////////////////
	  {//start of part

		  char shap=210;//char variable.
		  //////////////////////////////kongereh/////////////////////////////////////
	  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),184);//color option for font.

	 //set the position.
	 gotoxy(67,12);
	 cout<<shap;//print
	//set the position.
	 gotoxy(68,13);
	 cout<<shap;//print
	 //set the position.
	 gotoxy(69,14);
	 cout<<shap;//print
	 //set the position.
	 gotoxy(70,15);
	 cout<<shap;//print

	 ////////////////main///////////////////////////////////////////////////
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),68);//color option for font.

     //set the position.
	 gotoxy(67,13);
	 cout<<" ";//print
	 //set the position.
	 gotoxy(67,14);
	 cout<<"  ";//print
	 //set the position.
	 gotoxy(67,15);
	 cout<<"   ";//print
     //set the position.
	 gotoxy(67,16);
	 cout<<"    ";//print
	 //set the position.
	 gotoxy(67,17);
	 cout<<"    ";//print
	 //set the position.
	 gotoxy(67,18);
	 cout<<"    ";//print
	 //set the position.
	 gotoxy(67,19);
	 cout<<"   ";//print
	 //set the position.
	 gotoxy(67,20);
	 cout<<"  ";//print
	 //set the position.
	 gotoxy(67,21);
	 cout<<" ";//print
	  
	  }//end of part.

	  /////////////////*-*98*///////////////////
	   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),68);//color option for font.
	 gotoxy(31,9);
	 cout<<"                        ";//print
	  gotoxy(31,12);
	 cout<<"                        ";//print
	  gotoxy(31,11);
	 cout<<"                        ";//print
	  gotoxy(31,10);
	 cout<<"                        ";//print
	 	  gotoxy(31,8);
	 cout<<"                        ";//print

	 char g=178;
	 
	 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),72);//color option for font.
	 gotoxy(54,9);
	 cout<<g;//print
	  gotoxy(54,12);
	 cout<<g;//print
	  gotoxy(54,11);
	 cout<<g;//print
	  gotoxy(54,10);
	 cout<<g;//print
	  gotoxy(54,8);
	 cout<<g;//print	 	  
	 gotoxy(55,9);
	 cout<<" ";
	 gotoxy(55,10);
	 cout<<"  ";
	 gotoxy(55,11);
	 cout<<"   ";
	 gotoxy(55,12);
	 cout<<"    ";
	 //gotoxy(55,13);
	 //cout<<"     ";
	 /////////////////////////////////////////////////////////////////////////////
	 ////////////////////////////
	    gotoxy(31,6);                
	    //cout<<"  "<<g;            
	    gotoxy(31,7);
	    cout<<"  "<<g;//print
	    gotoxy(41,6);
		//cout<<"  "<<g;
		gotoxy(41,7);
		cout<<"  "<<g;
		gotoxy(51,6);
		//cout<<"  "<<g;
		gotoxy(51,7);
		cout<<"  "<<g;
		gotoxy(36,6);
		//cout<<"  "<<g;
		gotoxy(36,7);
		cout<<"  "<<g;
		gotoxy(46,6);
		//cout<<"  "<<g;
		gotoxy(46,7);
		cout<<"  "<<g;
		///////////////////////
////////////////////////////////////////////////////////////////////////////

	   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);//color option for font.
		////////////////////////////////////////////////////////////////////////////
			gotoxy(33,9);
		     cout<<g;
			gotoxy(33,10);
		     cout<<g;
			 gotoxy(46,9);
		     cout<<g;
			gotoxy(46,10);
		     cout<<g;
	   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),253);//color option for font.
		gotoxy(34,9);
		cout<<"EXIT ";
		gotoxy(34,10);
		cout<<"Esc  ";
		gotoxy(47,9);
		cout<<"ENTER";
		gotoxy(47,10);
		cout<<"Enter";

			   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),67);//color option for font
		char f[]={204,188,201,203,204,206,187,185,200,186};
		gotoxy(32,12);
		cout<<f[0]<<f[1]<<f[4]<<f[5]<<f[5]<<f[5]<<f[5]<<f[7];
		gotoxy(33,11);
		cout<<f[2]<<f[3]<<f[3]<<f[3]<<f[3]<<f[3]<<f[3]<<f[1];
		gotoxy(40,10);
		cout<<f[0]<<f[1];
		gotoxy(40,9);
		cout<<f[0]<<f[6];



		gotoxy(45,12);
		cout<<f[0]<<f[5]<<f[5]<<f[5]<<f[5]<<f[7]<<f[8]<<f[7];
		gotoxy(44,11);
		cout<<f[8]<<f[3]<<f[3]<<f[3]<<f[3]<<f[3]<<f[3]<<f[6];
		gotoxy(43,10);
		cout<<f[8]<<f[7];
			gotoxy(43,9);
		cout<<f[2]<<f[7];

		gotoxy(32,9);
		cout<<f[9];
		gotoxy(32,10);
		cout<<f[9];
		gotoxy(32,11);
		cout<<f[9];
		
		gotoxy(52,9);
		cout<<f[9];
		gotoxy(52,10);
		cout<<f[9];
		gotoxy(52,11);
		cout<<f[9];

		gotoxy(42,9);
		cout<<f[9];
		gotoxy(42,10);
		cout<<f[9];

		char c[]={203,205,203,201,187,157,234,206,6};
			  // SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),70);//color option for font
			   gotoxy(32,8);
			   cout<<c[3]<<c[1]<<c[1]<<c[1]<<c[1]<<c[1]<<c[1]<<c[1]<<c[0]<<c[1]<<c[2]<<c[1]<<c[0]<<c[1]<<c[1]<<c[1]<<c[1]<<c[1]<<c[1]<<c[1]<<c[4];
			   gotoxy(42,11);
			   cout<<c[7];
			   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),70);//color option for font
			   gotoxy(41,11);
			   cout<<c[5];
			   gotoxy(43,11);
			   cout<<c[5];
			   gotoxy(40,12);
			   cout<<c[8]<<" "<<c[6]<<" "<<c[8];
///////////////////////////////////////////jolkkluu
}

char homepage()
{
		 	hideCursor(); 
	stronghold();
		char shap[2]={175,174};
		char ch;
		/////////////////movement//////
		 while( ! kbhit ( ) )//cheking keyboard in every 140ml second
	   
		 {//start while order

////////////////////////////////////print movement near the door////////////////////////////////////////
	 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),92);//color option for font.
	 //set the position.
	 gotoxy(25,20);
	 cout<<shap[0];//print
	 //set the position.
	 gotoxy(29,20);
	 cout<<shap[0];//print
	 
	 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),95);//color option for font.
	 //set the position.
	 gotoxy(27,20);
	 cout<<shap[0];//print
	 //set the position.	 
	 gotoxy(31,20);
	 cout<<shap[0];//print

	 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),92);//color option for font.
	 //set the position.	 
	 gotoxy(54,20);
	 cout<<shap[1];//print
	 //set the position.	 
	 gotoxy(58,20);
	 cout<<shap[1];//print

	 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),95);//color option for font.
	 //set the position.	
	 gotoxy(52,20);
	 cout<<shap[1];//print
	 //set the position.	
	 gotoxy(56,20);
	 cout<<shap[1];//print
	///////*******************************************////////////////////////////////
	 //////////////////////////print shiny sun////////////////////////////
	 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),190);//color option for font.
	 //set the position.	 
	 gotoxy(46,1);
	 cout<<"/";//print
	 //set the position.	
	 gotoxy(38,1);
	 cout<<"\\";//print
	 //set the position.
	 gotoxy(38,5);
	 cout<<"/";//print
	 //set the position.	 
	 gotoxy(46,5);
	 cout<<"\\";//print
	 //set the position.
	 gotoxy(37,3);
	 cout<<"_";//print
	 //set the position.
	 gotoxy(46,3);
	 cout<<"_";//print
	 //*/////////////////****************************************************////////
	 ////////////////////////////////////remove////////////////////////////////////////
	 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),187);//color option for font.
	 //set the position.	 	
	 gotoxy(47,0);
	 cout<<"/";//print
	 //set the position.
	 gotoxy(37,0);
	 cout<<"\\";//print
	 //set the position.
	 gotoxy(47,6);
	 cout<<"\\";//print
	 //set the position.	
	 gotoxy(37,6);
	 cout<<"/";//print
	 //set the position.
	 gotoxy(36,3);
	 cout<<"_";//print
	 //set the position.	 
	 gotoxy(47,3);
	 cout<<"_";//print

	 ////////////*********************************************///////

	 Sleep(70);//stop order

	 ////////////////////////print movement near the door/////////////////////////////////
	 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),95);//color option for font.
	 //set the position.
	 gotoxy(25,20);
	 cout<<shap[0];//print
	 //set the position.
	 gotoxy(29,20);
	 cout<<shap[0];//print
	 
	 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),92);//color option for font.
	 //set the position.
	 gotoxy(27,20);
	 cout<<shap[0];//print
	 //set the position.
	 gotoxy(31,20);
	 cout<<shap[0];//print

	 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),95);//color option for font.
	 //set the position.
	 gotoxy(54,20);
	 cout<<shap[1];//print
	 //set the position.
	 gotoxy(58,20);
	 cout<<shap[1];//print
	
	 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),92);//color option for font.
	 //set the position.
	 gotoxy(52,20);
	 cout<<shap[1];//print
	 //set the position.
	 gotoxy(56,20);
	 cout<<shap[1];//print

	 //////////////////////******************************************/////////////////
	 ////////////////////////////////////remove shiny sun/////////////////
	 
	 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),187);//color option for font.
	 //set the position.
	 gotoxy(46,1);
	 cout<<"/";//print
	//set the position.
	 gotoxy(38,1);
	 cout<<"\\";//print
	 //set the position.
	 gotoxy(38,5);
	 cout<<"/";//print
	 //set the position.
	 gotoxy(46,5);
	 cout<<"\\";//print
	 //set the position.
	 gotoxy(37,3);
	 cout<<"_";//print
	 //set the position.
	 gotoxy(46,3);
	 cout<<"_";//print

	 ///////////////////******************************/////////////
	 /////////////////////print shini sun////////////////////
	 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),190);//color option for font.
	 //set the position.
	 gotoxy(47,0);
	 cout<<"/";//print
	 //set the position.
	 gotoxy(37,0);
	 cout<<"\\";//print
	 //set the position.
	 gotoxy(47,6);
	 cout<<"\\";//print
	 //set the position.
	 gotoxy(37,6);
	 cout<<"/";//print
	 //set the position.
	 gotoxy(36,3);
	 cout<<"_";//print
	 //set the position.
	 gotoxy(47,3);
	 cout<<"_";//print
	 ////////////****************************////////////////

	 Sleep(70);//stop order

	 } //snd of while.

	 ch=getch();
	 return ch;
}
int menu()
{
	

	char x=40;
	char y=12;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),255);//color option for font.
		gotoxy(x,y);
		cout<<" ";
		Sleep(1000);
		for(char i=40,x=39;x>15;x--)
		{
			Sleep(30);
					
			    gotoxy(x,y);
				cout<<" ";

				gotoxy(++i,y);
				cout<<" ";
		}
				char shap=178;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),248);//color option for font.
				cout<<shap;
		Sleep(100);

		for(char i=12,x=16,y=11;y>4;y--)
		{
						Sleep(50);
					
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),255);//color option for font.
			    gotoxy(x,y); 
				cout<<"                                                 ";
				
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),248);//color option for font.
				cout<<shap;
				
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),255);//color option for font.
				gotoxy(x,++i);
				cout<<"                                                 ";
				
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),248);//color option for font.
				cout<<shap;

		}
		setcolor(white,darkgray);
		gotoxy(38,4);
		cout<<" MENU "<<shap;

		bool controler=1;
		char ch;
		int i=0;
		int s[4]={cyan,white,white,white};
		
		   setcolor(white,lightred);
		gotoxy(18,18);
		cout<<"Back=BackSpace";

		setcolor(white,lightred);
		gotoxy(40,18);  
		cout<<"HOME";

		setcolor(white,lightred);
		gotoxy(55,18);
		cout<<"Exit=Esc";        
      do
	   {
		   setcolor(s[0],black);
		gotoxy(30,7);
		cout<<"Program                ";

		setcolor(s[1],black);
		gotoxy(30,9);  
		cout<<"Game                   ";

		setcolor(s[2],black);
		gotoxy(30,11);
		cout<<"Help                   ";
		
		setcolor(s[3],black);
		gotoxy(30,13);
		cout<<"About Me               ";
		ch=getch();
		while (ch!=80 && ch!=72 && ch!=13 && ch!=27 && ch!=8 && ch!=71)
		ch=getch();

		switch(ch)

		{
		case 72:
			if(i!=0)
			{
				s[i]=white;
				i--;
				s[i]=cyan;
			}

			break;
		case 80:
			if(i!=3)
			{
				s[i]=white;
				i++;
				s[i]=cyan;
					
			}
			break;

		case 71:
			i=4;
			controler=0;
			break;

		case 8:
			i=5;
			controler=0;
			break;

		case 27:
			return 0;
			break;
		};

		if(ch==13)
			controler=0;
		

	   }while(controler);


	   return i;


}
void study1(short x_0,short x_1,short y,char *find,char *health)
{

	if ( (((x_0 >=x_1 && x_0<=x_1 + 11) && (y+1>=16 && y+1<=20)) || ((x_0+1 >=x_1 && x_0+1<=x_1 + 11) && (y+1>=16 && y+1<=20))) || (((x_0 >=x_1 && x_0<=x_1 + 11) && (y+3>=16 && y+3<=20)) || ((x_0+1 >=x_1 && x_0+1<=x_1 + 11) && (y+3>=16 && y+3<=20))) )
	{
		*find=0;
		*health=*health-1;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),51);//color option for font.
     gotoxy ( x_0,16 ) ;
      cout<<"   ";
     gotoxy ( x_0,17 ) ;
      cout<<"   ";
     gotoxy (  x_0,18 ) ;
      cout<<"   ";
     gotoxy ( x_0,19 ) ;
      cout<<"   ";
     gotoxy ( x_0,20 ) ;
      cout<<"   ";
	}

}

void study2(short x_0,short x_1,short y)
{

	if ( (((x_0 >=x_1 && x_0<=x_1 + 11) && (y+1>=10 && y+1<=20)) || ((x_0+1 >=x_1 && x_0+1<=x_1 + 11) && (y+1>=10 && y+1<=20))) || (((x_0 >=x_1 && x_0<=x_1 + 11) && (y+3>=10 && y+3<=20)) || ((x_0+1 >=x_1 && x_0+1<=x_1 + 11) && (y+3>=10 && y+3<=20))) )
	{
		
	}

}

void study3(short x_0,short x_1,short y)
{

	if ( (((x_0 >=x_1 && x_0<=x_1 + 11) && (y+1>=10 && y+1<=15)) || ((x_0+1 >=x_1 && x_0+1<=x_1 + 11) && (y+1>=10 && y+1<=15))) || (((x_0 >=x_1 && x_0<=x_1 + 11) && (y+3>=10 && y+3<=15)) || ((x_0+1 >=x_1 && x_0+1<=x_1 + 11) && (y+3>=10 && y+3<=15))) )
	{
		
	}

}

void study4(short x_0,short x_1,short y)
{

	if ( (((x_0 >=x_1 && x_0<=x_1 + 11) && ((y+1>=4 && y+1<=9)||(y+1>=16 && y+1<=20))) || ((x_0+1 >=x_1 && x_0+1<=x_1 + 11) && ((y+1>=4 && y+1<=9)||(y+1>=16 && y+1<=20)))) || (((x_0 >=x_1 && x_0<=x_1 + 11) && ((y+3>=4 && y+3<=9)||(y+3>=16 && y+3<=20))) || ((x_0+1 >=x_1 && x_0+1<=x_1 + 11) && ((y+3>=4 && y+3<=9)||(y+3>=16 && y+3<=20)))) )
	{
		
	}

}

void study5(short x_0,short x_1,short y)
{

	if ( (((x_0 >=x_1 && x_0<=x_1 + 11) && (y+1>=4 && y+1<=9)) || ((x_0+1 >=x_1 && x_0+1<=x_1 + 11) && (y+1>=4 && y+1<=9))) || (((x_0 >=x_1 && x_0<=x_1 + 11) && (y+3>=4 && y+3<=9)) || ((x_0+1 >=x_1 && x_0+1<=x_1 + 11) && (y+3>=4 && y+3<=9))) )
	{
		
	}

}

void study6(short x_0,short x_1,short y)
{

	if ( (((x_0 >=x_1 && x_0<=x_1 + 11) && (y+1>=4 && y+1<=15)) || ((x_0+1 >=x_1 && x_0+1<=x_1 + 11) && (y+1>=4 && y+1<=15))) || (((x_0 >=x_1 && x_0<=x_1 + 11) && (y+3>=4 && y+3<=15)) || ((x_0+1 >=x_1 && x_0+1<=x_1 + 11) && (y+3>=4 && y+3<=15))) )
	{
		
	}

}
void printCar(short x,short y)
{
//////////////////////****************************///////////////

  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),64);//color option for font.
	  gotoxy ( x,y+1 ) ;
      cout<<"   ";
      gotoxy (x,y+2 ) ;
      cout<<"   ";
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),221);//color option for font.
	  cout<<"  ";
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),34);//color option for font.
	  cout<<"  ";
 
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),51);//color option for font.
      gotoxy ( x+3,y+1 ) ;
      cout<<"  ";
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),64);//color option for font.
      gotoxy ( x,y+3 ) ;
       cout<<"   ";

  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);//color option for font.
      gotoxy ( x+6,y ) ;
      cout<<" ";
      gotoxy ( x+9,y ) ;
      cout<<" ";
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),34);//color option for font.
      gotoxy ( x+5,y+1 ) ;
      cout<<"      ";
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),187);//color option for font.
      gotoxy ( x+7,y+2 ) ;
      cout<<"   ";
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),34);//color option for font.
      cout<<" ";
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),204);//color option for font.
      cout<<" ";

  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),34);//color option for font.
      gotoxy ( x+5,y+3 ) ;
      cout<<"      ";
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);//color option for font.
      gotoxy ( x+6,y+4 ) ;
      cout<<" ";
      gotoxy ( x+9,y+4 ) ;
      cout<<" ";
 
/////////////////////////////////////////////////////////////////////////////////////////////
}

void removeCar(short x,short y)
{
//////////////////////****************************///////////////

  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),51);//color option for font.
	  gotoxy ( x,y+1 ) ;
      cout<<"   ";
      gotoxy (x,y+2 ) ;
      cout<<"   ";
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),51);//color option for font.
	  cout<<"  ";
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),51);//color option for font.
	  cout<<"  ";

  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),51);//color option for font.
      gotoxy ( x+3,y+1 ) ;
      cout<<"  ";
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),51);//color option for font.
      gotoxy ( x,y+3 ) ;
       cout<<"   ";
 
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),51);//color option for font.
      gotoxy ( x+6,y ) ;
      cout<<" ";
      gotoxy ( x+9,y ) ;
      cout<<" ";
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),51);//color option for font.
      gotoxy ( x+5,y+1 ) ;
      cout<<"      ";
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),51);//color option for font.
      gotoxy (x+7,y+2 ) ;
      cout<<"   ";
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),51);//color option for font.
      cout<<" ";
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),51);//color option for font.
      cout<<" ";

  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),51);//color option for font.
      gotoxy ( x+5,y+3 ) ;
      cout<<"      ";
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),51);//color option for font.
      gotoxy ( x+6,y+4 ) ;
      cout<<" ";
      gotoxy ( x+9,y+4 ) ;
      cout<<" ";

/////////////////////////////////////////////////////////////////////////////////////////////



}



int game()
{
	
	int score=0;
	short level=0;
	register short x[5]={55,55,55,6,56};
	register short y[5]={4,10,16,9,4};
	bool cont[7][3]={{0,0,0},{0,0,1},{0,1,1},{0,1,0},{1,0,1},{1,0,0},{1,1,0}};
	char find[2]={0};
	char ch;
	char hart=3;
	char health=65;
	bool make[3][4]={0};
	int controler=1;
	bool control[3]={0};
	srand(time(0));
	find [ 1 ] = rand() % 7;
	        system("color 37");         
			
	int count=0;
	int check[3][3]={0};
	  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),102);//color option for font.
   x[2]=3;
  for( char i = 0 ; i < 55 ; i ++ )
  {  
	  x[2] ++ ;
	  gotoxy ( x[2] , 3 ) ;
      cout << "." ;
      gotoxy ( x[2] , 21 ) ;
      cout << "." ;
   
	 if ( x[2] > 21 )
		 continue;

      gotoxy ( 4 , x[2] ) ;
      cout << "." ;
      gotoxy ( 58 , x[2] ) ;
      cout << "." ;
  }
	do{

		
		count++;
		if( x[1]==30 && count<33)
		{
	find [ 0 ] = rand() % 7;
          x[0]=55;
         
		}

	check[0][0]=check[0][1];
/////////////controling part/////////////////
             while(kbhit())
                  {

	                   ch=getch();
                    
					   check[0][1]=count;
	
					   check[0][2]=check[0][1]-check[0][0];

	
					   switch(ch)
	
					   {
	
					   case 72:
		
						   removeCar(x[3],y[3]);
		
						   if(y[3]>5)
			
							   if(check[0][2]==1)
			
								   y[3]-=2;
			
							   else
            
								   y[3]--;
			
		
						   break;
	
					   case 80:
		
						   removeCar(x[3],y[3]);
           
						   if(y[3]<15)
			
							   if(check[0][2]==1)
             
								   y[3]+=2;
	
			
							   else
				
			
								   y[3]++;
			
		
						   break;

	
					   case 77:
		
						   removeCar(x[3],y[3]);
		
						   if(x[3]<45)

			
							   if(check[0][2]==1)
			
								   x[3]+=2;
			
							   else
            
								   x[3]++;
		
						   break;
	
					   case 75:
		
						   removeCar(x[3],y[3]);
		
						   if(x[3]>6)
		
							   if(check[0][2]==1)
		
								   x[3]-=2;

			
							   else		
		 
								   x[3]--;
		
						   break;
	
					   }

			 }
////////////////////////////end///////////////
////////////////////////print the car///////////////////////////

printCar(x[3],y[3]);
/////////////////////////////****************************************///////////////////
  
	  ///////////////////////////////////////obstacle///////////////////


if(cont[find[0]][0])
{
	  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),255);//color option for font.
     gotoxy ( x[0],y[0] ) ;
      cout<<"  ";
     gotoxy ( x[0],y[0]+1 ) ;
      cout<<"  ";
     gotoxy ( x[0],y[0]+2 ) ;
      cout<<"  ";
     gotoxy ( x[0],y[0]+3 ) ;
      cout<<"  ";
     gotoxy ( x[0],y[0]+4 ) ;
      cout<<"  ";

	  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),51);//color option for font.
     gotoxy ( x[0]+2,y[0] ) ;
      cout<<" ";
     gotoxy ( x[0]+2,y[0]+1 ) ;
      cout<<" ";
     gotoxy ( x[0]+2,y[0]+2 ) ;
      cout<<" ";
     gotoxy ( x[0]+2,y[0]+3 ) ;
      cout<<" ";
     gotoxy ( x[0]+2,y[0]+4 ) ;
      cout<<" ";
}
if(cont[find[0]][1])
{
	  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),255);//color option for font.
     gotoxy ( x[0],y[1] ) ;
      cout<<"  ";
     gotoxy ( x[0],y[1]+1 ) ;
      cout<<"  ";
     gotoxy ( x[0],y[1]+2 ) ;
      cout<<"  ";
     gotoxy ( x[0],y[1]+3 ) ;
      cout<<"  ";
     gotoxy ( x[0],y[1]+4 ) ;
      cout<<"  ";

	  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),51);//color option for font.
     gotoxy ( x[0]+2,y[1] ) ;
      cout<<" ";
     gotoxy ( x[0]+2,y[1]+1 ) ;
      cout<<" ";
     gotoxy ( x[0]+2,y[1]+2 ) ;
      cout<<" ";
     gotoxy ( x[0]+2,y[1]+3 ) ;
      cout<<" ";
     gotoxy ( x[0]+2,y[1]+4 ) ;
      cout<<" ";
}
if(cont[find[0]][2])
{
	  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),255);//color option for font.
     gotoxy ( x[0],y[2] ) ;
      cout<<"  ";
     gotoxy ( x[0],y[2]+1 ) ;
      cout<<"  ";
     gotoxy ( x[0],y[2]+2 ) ;
      cout<<"  ";
     gotoxy ( x[0],y[2]+3 ) ;
      cout<<"  ";
     gotoxy ( x[0],y[2]+4 ) ;
 cout<<"  ";

	  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),51);//color option for font.
     gotoxy ( x[0]+2,y[2] ) ;
      cout<<" ";
     gotoxy ( x[0]+2,y[2]+1 ) ;
      cout<<" ";
     gotoxy ( x[0]+2,y[2]+2 ) ;
      cout<<" ";
     gotoxy ( x[0]+2,y[2]+3 ) ;
      cout<<" ";
     gotoxy ( x[0]+2,y[2]+4 ) ;
      cout<<" ";
}




if(cont[find[1]][0])

{
	  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),255);//color option for font.
     gotoxy ( x[1],y[0] ) ;
      cout<<"  ";
     gotoxy ( x[1],y[0]+1 ) ;
      cout<<"  ";
     gotoxy ( x[1],y[0]+2 ) ;
      cout<<"  ";
     gotoxy ( x[1],y[0]+3 ) ;
      cout<<"  ";
     gotoxy ( x[1],y[0]+4 ) ;
      cout<<"  ";

	  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),51);//color option for font.
     gotoxy ( x[1]+2,y[0] ) ;
      cout<<" ";
     gotoxy ( x[1]+2,y[0]+1 ) ;
      cout<<" ";
     gotoxy ( x[1]+2,y[0]+2 ) ;
      cout<<" ";
     gotoxy ( x[1]+2,y[0]+3 ) ;
      cout<<" ";
     gotoxy ( x[1]+2,y[0]+4 ) ;
      cout<<" ";
}
if(cont[find[1]][1])
{
	  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),255);//color option for font.
     gotoxy ( x[1],y[1] ) ;
      cout<<"  ";
     gotoxy ( x[1],y[1]+1 ) ;
      cout<<"  ";
     gotoxy ( x[1],y[1]+2 ) ;
      cout<<"  ";
     gotoxy ( x[1],y[1]+3 ) ;
      cout<<"  ";
     gotoxy ( x[1],y[1]+4 ) ;
      cout<<"  ";

	  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),51);//color option for font.
     gotoxy ( x[1]+2,y[1] ) ;
      cout<<" ";
     gotoxy ( x[1]+2,y[1]+1 ) ;
      cout<<" ";
     gotoxy ( x[1]+2,y[1]+2 ) ;
      cout<<" ";
     gotoxy ( x[1]+2,y[1]+3 ) ;
      cout<<" ";
     gotoxy ( x[1]+2,y[1]+4 ) ;
      cout<<" ";
}
if(cont[find[1]][2])
{
	  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),255);//color option for font.
     gotoxy ( x[1],y[2] ) ;
      cout<<"  ";
     gotoxy ( x[1],y[2]+1 ) ;
      cout<<"  ";
     gotoxy ( x[1],y[2]+2 ) ;
      cout<<"  ";
     gotoxy ( x[1],y[2]+3 ) ;
      cout<<"  ";
     gotoxy ( x[1],y[2]+4 ) ;
      cout<<"  ";

	  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),51);//color option for font.
     gotoxy ( x[1]+2,y[2] ) ;
      cout<<" ";
     gotoxy ( x[1]+2,y[2]+1 ) ;
      cout<<" ";
     gotoxy ( x[1]+2,y[2]+2 ) ;
      cout<<" ";
     gotoxy ( x[1]+2,y[2]+3 ) ;
      cout<<" ";
     gotoxy ( x[1]+2,y[2]+4 ) ;
      cout<<" ";
}
///////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////ostacle movement///////////////////
				for( register char i = 0 ; i < 2 ; i ++ )
					{
						x [ i ] --;
						if( x [ i ] < 5 )
						{
                         
							x [ i ] = 55;
                           find [ i ] = rand() % 7;
							for( register char i=4;i<21;i++)
							{

	  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),51);//color option for font.
							gotoxy ( 5 , i );
							cout<<"  ";

							}

						}
					}
/////////////////////////////////////////////////////

SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),52);//color option for font.

for (register char j=0;j<4;j++)
make[0][j]=rand() %2;

		check[1][0]=check[1][1];

   if(make[0][0] && count>200 && count %2)
	   if(make[0][1] && count %3)
		   if(make[0][2] && count %5 && count %7)
			   if(make[0][3]  )
			   {
				   check[1][1]=count;
				   check[1][2]=check[1][1]-check[1][0];
				   
				   if(check[1][2]>100)
				   {
				   control[0]=1;
			       y[4]=rand()%13+6;
			      } 
			   }
			   if(control[0])
			   {
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),52);//color option for font.
                  gotoxy(x[4],y[4]);
				   cout<<hart;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),51);//color option for font.
				   cout<<" ";


				   for(register char i=1;i<4;i++)
					   for(register char j=0;j<11;j++)
					   {
				   if((x[4]==x[3]+j && y[4]==y[3]+i ))
				   {
					   if(health<74)
					   health++;

					   i=5;
					   j=12;
					   
				       x[4]=5;
					   break;
				   }
					   }
								  

				   x[4]--;
				   if(x[4]<5)
				   {
					   gotoxy(x[4]+1,y[4]);
                      cout<<" ";
					   x[4]=56;
					   control[0]=0;
					  
				   }
			   }
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),52);//color option for font.
gotoxy(62,4);
cout<<"score : "<<score;

gotoxy(62,6);
cout<<"level : "<<level<<" / 5 ";

gotoxy(62,10);
cout<<"health : ";
for( register char i=62 ; i < health ; i++) 
{

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),52);//color option for font.
		gotoxy(i,12);
		cout<<hart;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),51);//color option for font.
		cout<<" ";                           

}
		if(health==62)
			gotoxy(62,12);
		{
		     cout<<" ";
		}
score +=10;
if(score%10000==0)
level++;
if(count>1000)
count=31;


       switch(find[0])
	   {

       case 1:
		   
		   study1(x[0],x[3],y[3],&find[0],&health);

		   break;

		case 2:
			study2(x[0],x[3],y[3]);
		   break;

	   case 3:
		   study3(x[0],x[3],y[3]);
		   break;

	   case 4:
		  study4(x[0],x[3],y[3]);
		   break;

	   case 5:
		   study5(x[0],x[3],y[3]);
		   break;

	    case 6:
			study6(x[0],x[3],y[3]);
		   break;

	   }

		
       switch(find[1])
	   {

       case 1:
		   study1(x[0],x[3],y[3],&find[1],&health);
		   break;

		case 2:
			study2(x[0],x[3],y[3]);
		   break;

	   case 3:
		   study3(x[0],x[3],y[3]);
		   break;

	   case 4:
		  study4(x[0],x[3],y[3]);
		   break;

	   case 5:
		   study5(x[0],x[3],y[3]);
		   break;

	    case 6:
			study6(x[0],x[3],y[3]);
		   break;

	   }
			   
			   if(health<62)
				   controler=0;
Sleep(20);
	}while(controler);
	return 0;
}