#include<iostream>
#include<conio.h> //exit function
#include<windows.h> //sleep / delay function 
#include <algorithm> //to upper (transform)
#include <cstdlib> //rng
#include <ctime>
#include<stdlib.h>
int lives,q1,q2,q3,x=1,btemp,ctemp,diff;
char rule,repeat='y';
char l1,l2,l3,l4,l5,l6,l7;
using namespace std;
	
		void gs(int lives,int x,char l1,char l2,char l3,char l4,char l5,char l6){
	 
	cout<<  "\n\n\t\t\t\t\t**************************************"
	<<"\n\t\t\t\t\t**       Lives: [" << lives << "]" << " Round [" << x << "]	    **";
	cout<< "\n\t\t\t\t\t**************************************";
	cout << "\n\t\t\t\t\t\t WORD:   " << l1 << " " << l2 << " " << l3 << " " << l4 << " " << l5 << " " << l6; // word
	cout<< "\n\n\t\t\t\t\t**************************************";
	cout<< "\n\t\t\t\t\t  Input whole word? Type FULL first.";
	cout<< "\n\n\t\t\t\t\t**************************************";
	cout<< "\n\n\t\t\t\t\tINPUT : ";
			}
			
		void gs7(int lives,int x,char l1,char l2,char l3,char l4,char l5,char l6,char l7){
	 
	cout<<  "\n\n\t\t\t\t\t**************************************"
	<<"\n\t\t\t\t\t**       Lives: [" << lives << "]" << " Round [" << x << "]	    **";
	cout<< "\n\t\t\t\t\t**************************************";
	cout << "\n\t\t\t\t\t\t WORD:   " << l1 << " " << l2 << " " << l3 << " " << l4 << " " << l5 << " " << l6 << " " << l7; // word
	cout<< "\n\n\t\t\t\t\t**************************************";
	cout<< "\n\t\t\t\t\t  Input whole word? Type FULL first.";
	cout<< "\n\n\t\t\t\t\t**************************************";
	cout<< "\n\n\t\t\t\t\tINPUT : ";
			}
	//printed rules	
	void rules(){
		cout << " \n_______________________________________________________________________________________________________________________";
		cout <<"\n\t\t\tAfter choosing a difficulty, you are given how many letters are in the word"; Sleep(2000);
		cout	 <<"\n\t\t\t\tAnd you can choose to input a letter, or the whole word.";Sleep(2000);
		cout	 <<"\n\t\t\t\tEvery time you make a mistake, you lose a life."; Sleep(2000);
		cout << "\n\t\t\t\tYour lives are different per difficulty";Sleep(2000);
		cout	 <<"\n\t\t\t\tLose all your lives, and you get a game over.";Sleep(2000);
		cout << "\n\t\t\t\tThere will be 3 words to play per playthrough.";Sleep(2000);
		cout << "\n\t\t\tChoosing to input the whole word and fail, you immediately lose the game..";Sleep(2000);
		cout << " \n_______________________________________________________________________________________________________________________";
	}

	void aes(){
		cout << "\n\n\t\t\t\t\t\tP"; Sleep(150);  cout << "l" ; Sleep(150);  cout << "e" ; Sleep(150);  cout << "a" ; Sleep(150);  cout << "s" ; Sleep(150);  cout << "e" ; Sleep(150);  
	cout << " c" ; Sleep(150);  cout << "h" ; Sleep(150);  cout << "o" ; Sleep(150);  cout << "o" ; Sleep(150);  cout << "s" ; Sleep(150);  cout << "e" ; Sleep(150);  
	cout << " y" ; Sleep(150);  cout << "o" ; Sleep(150);  cout << "u" ; Sleep(150);  cout << "r" ; Sleep(150);  
	cout << " d" ; Sleep(150);  	cout << "i" ; Sleep(150);  	cout << "f" ; Sleep(150);  	cout << "f" ; Sleep(150);  	cout << "i" ; Sleep(150);  	cout << "c" ; Sleep(150);  cout << "u" ; Sleep(150);  	cout << "l" ; Sleep(150);  	cout << "t" ; Sleep(150);  	cout << "y" ; Sleep(150);  
	cout << "[" ; Sleep(150);  
	cout << "1 or 2]" ; Sleep(150);  
	}
int main(){
	//intro
	diff=4; char repeat='Y';
	string ans="";
		cout << "_______________________________________________________________________________________________________________________\n";
		cout << "\n\t\t\t|  \  |  \ /      \ |  \  |  \ /      \ |   \     /  \ /      \ |  \  |  \"";
	cout << "\n\t\t\t| $$  | $$|  $$$$$$\|  $$\ | $$|  $$$$$$\|  $$\   /  $$|  $$$$$$\|  $$\ | $$";Sleep(300);
	cout << "\n\t\t\t| $$__| $$| $$__| $$| $$$\| $$| $$ __\$$|  $$$\ /  $$$| $$__| $$| $$$\| $$";Sleep(300);
	cout << "\n\t\t\t| $$    $$| $$    $$| $$$$\ $$| $$|    \|  $$$$\  $$$$| $$    $$| $$$$\ $$";Sleep(300);
	cout << "\n\t\t\t| $$$$$$$$| $$$$$$$$| $$\$$ $$| $$ \$$$$|  $$\$$ $$ $$| $$$$$$$$| $$\$$ $$";Sleep(300);
	cout << "\n\t\t\t| $$  | $$| $$  | $$| $$ \$$$$| $$__| $$| $$ \$$$| $$| $$  | $$| $$ \$$$$";Sleep(300);
	cout << "\n\t\t\t| $$  | $$| $$  | $$| $$  \$$$  \$$    $$| $$  \$ | $$| $$  | $$| $$  \$$$";Sleep(300);
	cout << "\n\t\t\t  \$$    \$$  \$$    \$$  \$$   \$$  \$$$$$$    \$$      \$$  \$$    \$$  \$$   \$$";Sleep(300);
		cout << " \n_______________________________________________________________________________________________________________________";
	cout << "\n\n\t\t\t\t\t\tWelcome to C++ Hangman!";Sleep(500);
	cout << "\n\n\t\t\t\t\t\tDo you want to see the rules? [Y/N]";
	cin >> rule; rule=toupper(rule);
		if(rule=='Y'){
		rules();
		Sleep(4000);
		}
		while(repeat=='Y'){
			system("cls");
	aes();
		diff=2; char repeat='Y';
	do{
	
	
	cout << "\n\n\t\t\t\t\t\t [1] - Easy";
	cout << "\n\n\t\t\t\t\t\t [2] - Normal";
	cout << "\n\n\n\t\t\t\t\t\t";
	cin >> diff;
}while(diff!=1 && diff!=2);
	cout << "\t\t\t\t\tYou have chosen difficulty [" << diff << "]";
	cout << " \n_______________________________________________________________________________________________________________________";
	cout << "\n\t\t\t\t\tPlease wait a few seconds....";
	cout << "\n\t\t\t\t\t3..."; Sleep(1000);
	cout << "\n\t\t\t\t\t2..."; Sleep(1000);
	cout << "\n\t\t\t\t\t1..."; Sleep(1000);
	switch(diff){
	case 1:{
	
		cout << "\n\n\t\t\t\t\tYou have chosen : Very Easy!"; Sleep(1000);
		cout << "\n\n\t\t\t\t\tLoading Hangmen..."; Sleep(1000);
		cout << "\n\n\t\t\t\t\tMaking up words.."; Sleep(1000);
		cout << "\n\n\t\t\t\t\tLooking up on the dictionary.."; Sleep(1000);
		cout << "\n\n\t\t\t\t\tChecking urbandictionary.com..."; Sleep(1000);
		cout << "\n\n\t\t\t\t\tWords collected!";
		cout << "\n\n\n\n\n\n\n";
	
			for(x=1;x<=3;x++)
			{
			srand((int)time(0));
		int q1 = (rand() % 12) + 1;
		int q2 = (rand() % 12) + 1;
		int q3 = (rand() % 12) + 1;
		do{
		
		if (q1==q2){
		
		q1 = (rand() % 12) + 1;}
		else if(q2==q3){
		
	
		 q2 = (rand() % 12) + 1;}
		else if (q3==q1){
		
			q3 = (rand() % 12) + 1;}	
		}while(q1==q2 || q2==q3 || q1==q3);
if(x==1)
{
	btemp=q2; ctemp=q3;
	q2=0,q3=0;	
}
else if(x==2){
	q3=0;
	q2=btemp;
}
else if(x==3){
	q3=ctemp;
	q2=0;
}
			char l1='_',l2='_',l3='_',l4='_',l5='_',l6='_',l7='_'; int lives=9;
				while(q1==1 || q2==1 || q3==1){
				Sleep(1000);system("cls");
				//word = "WEIGHT";
				gs(lives,x,l1,l2,l3,l4,l5,l6);
				cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
				cout << endl;
				if(ans=="FULL")
				{
					cout << "\n\n\t\t\t\t";
					cout << "\n\n\t\t\t\tInput final answer: ";
					cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
					if(ans=="WEIGHT"){
					
					
					cout << "\n\n\t\t\t\tCorrect! Go on to the next word!";
					q1=30; q2=30;q3=30; }
					else 
					{
					cout << "Wrong answer!"; lives = 0;
					}
					}
		
				else if(ans=="W")
					l1='W';	
				else if(ans=="E")
					l2='E';
				else if(ans=="I")
					l3='I';	
				else if(ans=="G")
					l4='G';
				
				else if(ans=="H")
					l5='H';	
				else if(ans=="T")
					l6='T';
				else
				{
					cout << "Wrong answer/input! -1 life.";
					lives--;
				}
				if(lives==0){
					cout << "\n\n\t\t\t\t\tGame over!";
					q1=0; q2=0;q3=0; x=4;
				}
				if(l1=='W' && l2=='E' && l3=='I' && l4=='G' && l5=='H' && l6=='T' ){
					cout << "\n\n\t\t\t\tYou have guessed the word! Go on to the next word!";
					q1=0; q2=0;q3=0; 
					}
			}
			
			
			while(q1==2 || q2==2 || q3==2)
			{
				Sleep(1000);system("cls");
				//word = "BUZZER"; //word here
				gs(lives,x,l1,l2,l3,l4,l5,l6);
				cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
				cout << endl;
				if(ans=="FULL")
				{
					cout << "\n\n\t\t\t\t";
					cout << "\n\n\t\t\t\tInput final answer: ";
					cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
					if(ans=="BUZZER"){ //change here
					
					
					cout << "\n\n\t\t\t\tCorrect! Go on to the next word!"; 
					q1=0; q2=0;q3=0; }
					else 
					cout << "Wrong answer!"; lives = 0;
					}
			
				else if(ans=="B")
					l1='B';	
				else if(ans=="U")
					l2='U';
				else if(ans=="Z"){
				
					l3='Z';	
					l4='Z';
			}
				else if(ans=="E")
					l5='E';	
				else if(ans=="R")
					l6='R';
				else
				{
					cout << "Wrong answer/input! -1 life.";
					lives--;
				}
				if(lives==0){
					cout << "\n\n\t\t\t\t\tGame over!";
					q1=0; q2=0;q3=0; x=4;
				}
				if(l1=='B' && l2=='U' && l3=='Z' && l4=='Z' && l5=='E' && l6=='R' ){
					cout << "\n\n\t\t\t\tYou have guessed the word! Go on to the next word!";
					q1=0; q2=0;q3=0; 
					}
			}
			while(q1==3 || q2==3 || q3==3)
		{
				Sleep(1000);system("cls");
				//word = "NUZZLE"; //word here
			gs(lives,x,l1,l2,l3,l4,l5,l6);
			
				cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
				cout << endl;
				if(ans=="FULL")
				{
					cout << "\n\n\t\t\t\t";
					cout << "\n\n\t\t\t\tInput final answer: ";
					cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
					if(ans=="NUZZLE"){ //change here
					
					
					cout << "\n\n\t\t\t\tCorrect! Go on to the next word!";
					q1=0; q2=0;q3=0; }
					else {
					
					cout << "Wrong answer!"; lives = 0;}
					}
		
				else if(ans=="N")
					l1='N';	
				else if(ans=="U")
					l2='U';
				else if(ans=="Z"){
				
					l3='Z';	
					l4='Z';
			}
				else if(ans=="L")
					l5='L';	
				else if(ans=="E")
					l6='E';
				else
				{
					cout << "Wrong answer/input! -1 life.";
					lives--;
				}
				if(lives==0){
					cout << "\n\n\t\t\t\t\tGame over!";
					q1=0; q2=0;q3=0; x=4;
				}
					if(l1=='N' && l2=='U' && l3=='Z' && l4=='Z' && l5=='L' && l6=='E' ){
					cout << "\n\n\t\t\t\tYou have guessed the word! Go on to the next word!";
					q1=0; q2=0;q3=0; 
					}
			}
			while(q1==4 || q2==4 || q3==4)
			{
					Sleep(1000);system("cls");
				//word = "JUKEBOX";
			gs7(lives,x,l1,l2,l3,l4,l5,l6,l7);
				cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
				cout << endl;
				if(ans=="FULL")
				{
					cout << "\n\n\t\t\t\t";
					cout << "\n\n\t\t\t\tInput final answer: ";
					cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
					if(ans=="JUKEBOX"){
					
					
					cout << "\n\n\t\t\t\tCorrect! Go on to the next word!";
					q1=0; q2=0;q3=0; }
					else {
					
					cout << "Wrong answer!"; lives = 0;
					}
	}
				else if(ans=="J")
					l1='J';	
				else if(ans=="U")
					l2='U';
				else if(ans=="K")
					l3='K';	
				else if(ans=="E")
					l4='E';
				
				else if(ans=="B")
					l5='B';	
				else if(ans=="O")
					l6='O';
					else if(ans=="X")
					l7='X';
				else
				{
					cout << "Wrong answer/input! -1 life.";
					lives--;
				}
				if(lives==0){
					cout << "\n\n\t\t\t\t\tGame over!";
					q1=0; q2=0;q3=0; x=4;
				}
				if(l1=='J' && l2=='U' && l3=='K' && l4=='E' && l5=='B' && l6=='O' && l7=='X' ){
					cout << "\n\n\t\t\t\tYou have guessed the word! Go on to the next word!";
					q1=0; q2=0;q3=0; 
					}
			}
			while(q1==5 || q2==5 || q3==5)
				{
				Sleep(1000);system("cls");
				//word = "JACKAL"; //word here
			gs(lives,x,l1,l2,l3,l4,l5,l6);
				cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
				cout << endl;
				if(ans=="FULL")
				{
					cout << "\n\n\t\t\t\t";
					cout << "\n\n\t\t\t\tInput final answer: ";
					cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
					if(ans=="JACKAL"){ //change here
					
					
					cout << "\n\n\t\t\t\tCorrect! Go on to the next word!";
					q1=0; q2=0;q3=0; }
					else {
					cout << "Wrong answer!"; lives = 0;
					}
		}
				else if(ans=="J")
					l1='J';	
				else if(ans=="A"){
				
					l2='A';
					l5='A';	}
				else if(ans=="C")
				
					l3='C';	
				else if(ans=="K")
					l4='K';
			
				else if(ans=="A"){
				
					l5='A';	
					l2='A';}
				else if(ans=="L")
					l6='L';
				else
				{
					cout << "Wrong answer/input! -1 life.";
					lives--;
				}
				if(lives==0){
					cout << "\n\n\t\t\t\t\tGame over!";
					q1=0; q2=0;q3=0; x=4;
				}
				if(l1=='J' && l2=='A' && l3=='C' && l4=='K' && l5=='A' && l6=='L' ){
					cout << "\n\n\t\t\t\tYou have guessed the word! Go on to the next word!";
					q1=0; q2=0;q3=0; 
					}
			}
			while(q1==6 || q2==6 || q3==6)
			{
				Sleep(1000);system("cls");
				//word = "BOMBED"; //word here
			gs(lives,x,l1,l2,l3,l4,l5,l6);
	
				cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
				cout << endl;
				if(ans=="FULL")
				{
					cout << "\n\n\t\t\t\t";
					cout << "\n\n\t\t\t\tInput final answer: ";
					cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
					if(ans=="BOMBED"){ //change here
					
					
					cout << "\n\n\t\t\t\tCorrect! Go on to the next word!";
					q1=0; q2=0;q3=0; }
					else{
					cout << "Wrong answer!"; lives = 0;
					}
		}
				else if(ans=="B"){
				
					l1='B';	
					l4='B';}
				else if(ans=="O")
					l2='O';
				else if(ans=="M")
				
					l3='M';	
			
				else if(ans=="E")
					l5='E';	
				else if(ans=="D")
					l6='D';
				else
				{
					cout << "Wrong answer/input! -1 life.";
					lives--;
				}
				if(lives==0){
					cout << "\n\n\t\t\t\t\tGame over!";
					q1=0; q2=0;q3=0; x=4;
				}
				if(l1=='B' && l2=='O' && l3=='M' && l4=='B' && l5=='E' && l6=='D' ){
					cout << "\n\n\t\t\t\tYou have guessed the word! Go on to the next word!";
					q1=0; q2=0;q3=0; 
					}
			}
			while(q1==7 || q2==7 || q3==7)
			{
				Sleep(1000);system("cls");
				//word = "JAMMED"; //word here
			gs(lives,x,l1,l2,l3,l4,l5,l6);
			
				cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
				cout << endl;
				if(ans=="FULL")
				{
					cout << "\n\n\t\t\t\t";
					cout << "\n\n\t\t\t\tInput final answer: ";
					cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
					if(ans=="JAMMED"){ //change here
					
					
					cout << "\n\n\t\t\t\tCorrect! Go on to the next word!";
					q1=0; q2=0;q3=0; }
					else{
					cout << "Wrong answer!"; lives = 0;
					}
		}
				else if(ans=="J")
					l1='J';	
				else if(ans=="A")
					l2='A';
				else if(ans=="M")
				{
				
					l3='M';
					l4='M';	}
			
				else if(ans=="E")
					l5='E';	
				else if(ans=="D")
					l6='D';
				else
				{
					cout << "Wrong answer/input! -1 life.";
					lives--;
				}
				if(lives==0){
					cout << "\n\n\t\t\t\t\tGame over!";
					q1=0; q2=0;q3=0; x=4;
				}
					if(l1=='J' && l2=='A' && l3=='M' && l4=='M' && l5=='E' && l6=='D' ){
					cout << "\n\n\t\t\t\tYou have guessed the word! Go on to the next word!";
					q1=0; q2=0;q3=0; 
					}
			}
			while(q1==8 || q2==8 || q3==8)
			{
				Sleep(1000);system("cls");
				//word = "DREDGE"; //word here
			gs(lives,x,l1,l2,l3,l4,l5,l6);
				cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
				cout << endl;
				if(ans=="FULL")
				{
					cout << "\n\n\t\t\t\t";
					cout << "\n\n\t\t\t\tInput final answer: ";
					cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
					if(ans=="DREDGE"){ //change here
					
					
					cout << "\n\n\t\t\t\tCorrect! Go on to the next word!";
					q1=0; q2=0;q3=0; }
					else {
					cout << "Wrong answer!"; lives = 0;
					}
		}
				else if(ans=="D")
				{
				
					l1='D';	
						l4='D';
					}
				else if(ans=="R")
					l2='R';
				else if(ans=="E"){
				
			
				
					l3='E';l6='E';}
			
				else if(ans=="G")
					l5='G';	

				else
				{
					cout << "Wrong answer/input! -1 life.";
					lives--;
				}
				if(lives==0){
					cout << "\n\n\t\t\t\t\tGame over!";
					q1=0; q2=0;q3=0; x=4;
				}
					if(l1=='D' && l2=='R' && l3=='E' && l4=='D' && l5=='G' && l6=='E' ){
					cout << "\n\n\t\t\t\tYou have guessed the word! Go on to the next word!";
					q1=0; q2=0;q3=0; 
					}
			}
			while(q1==9 || q2==9 || q3==9)
		{
				Sleep(1000);system("cls");
				//word = "ZOMBIE"; //word here
			gs(lives,x,l1,l2,l3,l4,l5,l6);
				cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
				cout << endl;
				if(ans=="FULL")
				{
					cout << "\n\n\t\t\t\t";
					cout << "\n\n\t\t\t\tInput final answer: ";
					cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
					if(ans=="ZOMBIE"){ //change here
					
					
					cout << "\n\n\t\t\t\tCorrect! Go on to the next word!";
					q1=0; q2=0;q3=0; }
					else{
					cout << "Wrong answer!"; lives = 0;
					}
		}
				else if(ans=="Z")
					l1='Z';	
				else if(ans=="O")
					l2='O';
				else if(ans=="M")
				
					l3='M';	
				else if(ans=="B")
					l4='B';
			
				else if(ans=="I")
					l5='I';	
				else if(ans=="E")
					l6='E';
				else
				{
					cout << "Wrong answer/input! -1 life.";
					lives--;
				}
				if(lives==0){
					cout << "\n\n\t\t\t\t\tGame over!";
					q1=0; q2=0;q3=0; x=4;
				}
				if(l1=='Z' && l2=='O' && l3=='M' && l4=='B' && l5=='I' && l6=='E' ){
					cout << "\n\n\t\t\t\tYou have guessed the word! Go on to the next word!";
					q1=0; q2=0;q3=0; 
					}
			}
			while(q1==10 || q2==10 || q3==10)
				{
				Sleep(1000);system("cls");
				//word = "ENZYME"; //word here
			gs(lives,x,l1,l2,l3,l4,l5,l6);
				
				cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
				cout << endl;
				if(ans=="FULL")
				{
					cout << "\n\n\t\t\t\t";
					cout << "\n\n\t\t\t\tInput final answer: ";
					cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
					if(ans=="ENZYME"){ //change here
					
					
					cout << "\n\n\t\t\t\tCorrect! Go on to the next word!";
					q1=0; q2=0;q3=0; }
					else{
					 cout << "Wrong answer!"; lives = 0;
					}
		}
				else if(ans=="E"){
				
					l1='E';	l6='E';}
				else if(ans=="N")
					l2='N';
				else if(ans=="Z")
				
					l3='Z';	
				else if(ans=="Y")
					l4='Y';
			
				else if(ans=="M")
					l5='M';	
				else if(ans=="E"){
				
					l6='E';
					l1='E';}
				else
				{
					cout << "Wrong answer/input! -1 life.";
					lives--;
				}
				if(lives==0){
					cout << "\n\n\t\t\t\t\tGame over!";
					q1=0; q2=0;q3=0; x=4;
					
				}
				if(l1=='E' && l2=='N' && l3=='Z' && l4=='Y' && l5=='M' && l6=='E' ){
					cout << "\n\n\t\t\t\tYou have guessed the word! Go on to the next word!";
					q1=0; q2=0;q3=0; 
					}
			}
			while(q1==11 || q2==11 || q3==11)
			{
				Sleep(1000);system("cls");
				//word = "FRENZY"; //word here
			gs(lives,x,l1,l2,l3,l4,l5,l6);
				cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
				cout << endl;
				if(ans=="FULL")
				{
					cout << "\n\n\t\t\t\t";
					cout << "\n\n\t\t\t\tInput final answer: ";
					cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
					if(ans=="FRENZY"){ //change here
					
					
					cout << "\n\n\t\t\t\tCorrect! Go on to the next word!";
					q1=0; q2=0;q3=0; }
					else{
					 cout << "Wrong answer!"; lives = 0;
					}
		}
				else if(ans=="F")
					l1='F';	
				else if(ans=="R")
					l2='R';
				else if(ans=="E")
				
					l3='E';	
				else if(ans=="N")
					l4='N';
			
				else if(ans=="Z")
					l5='Z';	
				else if(ans=="Y")
					l6='Y';
				else
				{
					cout << "Wrong answer/input! -1 life.";
					lives--;
				}
				if(lives==0){
					cout << "\n\n\t\t\t\t\tGame over!";
					q1=0; q2=0;q3=0; x=4;
				}
				if(l1=='F' && l2=='R' && l3=='E' && l4=='N' && l5=='Z' && l6=='Y' ){
					cout << "\n\n\t\t\t\tYou have guessed the word! Go on to the next word!";
					q1=0; q2=0;q3=0; 
					}
			}
			while(q1==12 || q2==12 || q3==12)
			{
				Sleep(1000);system("cls");
				//word = "GLITCH"; //word here
			gs(lives,x,l1,l2,l3,l4,l5,l6);
			
				cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
				cout << endl;
				if(ans=="FULL")
				{
					cout << "\n\n\t\t\t\t";
					cout << "\n\n\t\t\t\tInput final answer: ";
					cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
					if(ans=="GLITCH"){ //change here
					
					
					cout << "\n\n\t\t\t\tCorrect! Go on to the next word!";
					q1=0; q2=0;q3=0; }
					else{
					 cout << "Wrong answer!"; lives = 0;
					}
		}
				else if(ans=="G")
					l1='G';	
				else if(ans=="L")
					l2='L';
				else if(ans=="I")
				
					l3='I';	
				else if(ans=="T")
					l4='T';
			
				else if(ans=="C")
					l5='C';	
				else if(ans=="H")
					l6='H';
				else
				{
					cout << "Wrong answer/input! -1 life.";
					lives--;
				}
				if(lives==0){
					cout << "\n\n\t\t\t\t\tGame over!";
					q1=0; q2=0;q3=0; x=4;
					if(l1=='G' && l2=='L' && l3=='I' && l4=='T' && l5=='C' && l6=='H' ){
					cout << "\n\n\t\t\t\tYou have guessed the word! Go on to the next word!";
					q1=0; q2=0;q3=0; 
					}
				}
				
			}
			
		
			
				
				
		}
					
				break;}
				//DIFFICULTY 2 
				//DIFFICULTY 2 
				//DIFFICULTY 2 
			//DIFFICULTY 2 
				//DIFFICULTY 2 
				//DIFFICULTY 2 
				//DIFFICULTY 2 
				//DIFFICULTY 2 
			case 2:{
				
		cout << "\n\n\t\t\t\t\tYou have chosen : Normal!"; Sleep(1000);
		cout << "\n\n\t\t\t\t\tGrabbing codes..."; Sleep(1000);
		cout << "\n\n\t\t\t\t\tTaking linguistic classes.."; Sleep(1000);
		cout << "\n\n\t\t\t\t\tGetting versed in vocabulary.."; Sleep(1000);
		cout << "\n\n\t\t\t\t\tSipping coffee..."; Sleep(1000);
		cout << "\n\n\t\t\t\t\tWords collected!";
		cout << "\n\n\n\n\n\n\n";
	
			
				for(x=1;x<=3;x++)
			{
			srand((int)time(0));
		int q1 = (rand() % 12) + 1;
		int q2 = (rand() % 12) + 1;
		int q3 = (rand() % 12) + 1;
		if (q1==q2){
		
		q1 = (rand() % 12) + 1;}
		else if(q2==q3){
		
	
		 q2 = (rand() % 12) + 1;}
		else if (q3==q1){
		
			q3 = (rand() % 12) + 1;}	
if(x==1)
{
	btemp=q2; ctemp=q3;
	q2=0,q3=0;	
}
else if(x==2){
	q3=0;
	q2=btemp;
}
else if(x==3){
	q3=ctemp;
	q2=0;
}
			char l1='_',l2='_',l3='_',l4='_',l5='_',l6='_',l7='_'; int lives=7;
				while(q1==1 || q2==1 || q3==1){
					Sleep(1000);system("cls");
				//word = "TRINITY";
				gs7(lives,x,l1,l2,l3,l4,l5,l6,l7);
				cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
				cout << endl;
				if(ans=="FULL")
				{
					cout << "\n\n\t\t\t\t";
					cout << "\n\n\t\t\t\tInput final answer: ";
					cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
					if(ans=="TRINITY"){
					
					
					cout << "\n\n\t\t\t\tCorrect! Go on to the next word!";
					q1=30; q2=30;q3=30;} 
					else {
					cout << "Wrong answer!"; lives=0; 
					
					}
		}
				else if(ans=="T"){
				
					l1='T';	
					l6='T';
				}
				else if(ans=="R")
					l2='R';
				else if(ans=="I")
					{
					l3='I';	
					l5='I';}
				else if(ans=="N")
					l4='N';
				else if(ans=="Y")
					l7='Y';
				else
				{
					cout << "Wrong answer/input! -1 life.";
					lives--;
				}
				if(lives==0){
					cout << "\n\n\t\t\t\t\tGame over!";
					q1=0; q2=0;q3=0; x=4;
				}
				if(l1=='T' && l2=='R' && l3=='I' && l4=='N' && l5=='I' && l6=='T' && l7=='Y'){
					cout << "\n\n\t\t\t\tYou have guessed the word! Go on to the next word!";
					q1=0; q2=0;q3=0; 
					}
			}
			
			
			while(q1==2 || q2==2 || q3==2)
			{
				Sleep(1000);system("cls");
				//word = "JUMBLED"; //word here
				gs7(lives,x,l1,l2,l3,l4,l5,l6,l7);
				cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
				cout << endl;
				if(ans=="FULL")
				{
					cout << "\n\n\t\t\t\t";
					cout << "\n\n\t\t\t\tInput final answer: ";
					cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
					if(ans=="JUMBLED"){ //change here
					
					
					cout << "\n\n\t\t\t\tCorrect! Go on to the next word!";
					q1=0; q2=0;q3=0; }
					else {
					cout << "Wrong answer! Lives = 0"; lives=0;
					
					}
			}
				else if(ans=="J")
					l1='J';	
				else if(ans=="U")
					l2='U';
				else if(ans=="M")
					l3='M';	
				
				else if(ans=="B")
					l4='B';	
				else if(ans=="L")
					l5='L';
					else if(ans=="E")
					l6='E';
				else if(ans=="D")
					l7='D';
				else
				{
					cout << "Wrong answer/input! -1 life.";
					lives--;
				}
				if(lives==0){
					cout << "\n\n\t\t\t\t\tGame over!";
					q1=0; q2=0;q3=0; x=4;
				}
				if(l1=='J' && l2=='U' && l3=='M' && l4=='B' && l5=='L' && l6=='E' && l7=='D' ){
					cout << "\n\n\t\t\t\tYou have guessed the word! Go on to the next word!";
					q1=0; q2=0;q3=0; 
					}
			}
			while(q1==3 || q2==3 || q3==3)
		{
				Sleep(1000);system("cls");
				//word = "JEEPNEY"; //word here
				gs7(lives,x,l1,l2,l3,l4,l5,l6,l7);
			
				cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
				cout << endl;
				if(ans=="FULL")
				{
					cout << "\n\n\t\t\t\t";
					cout << "\n\n\t\t\t\tInput final answer: ";
					cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
					if(ans=="JEEPNEY"){ //change here
					
					
					cout << "\n\n\t\t\t\tCorrect! Go on to the next word!";
					q1=0; q2=0;q3=0; }
					else {
					cout << "Wrong answer!"; lives = 0;
					}
		}
				else if(ans=="J")
					l1='J';	
				else if(ans=="P")
					l4='P';
				else if(ans=="E"){
				
					l2='E';	
					l3='E';
					l6='E';
			}
				else if(ans=="N")
					l5='N';	
				else if(ans=="Y")
					l7='E';
				else
				{
					cout << "Wrong answer/input! -1 life.";
					lives--;
				}
				if(lives==0){
					cout << "\n\n\t\t\t\t\tGame over!";
					q1=0; q2=0;q3=0; x=4;
				}
					if(l1=='J' && l2=='E' && l3=='E' && l4=='P' && l5=='N' && l6=='E' && l7=='Y' ){
					cout << "\n\n\t\t\t\tYou have guessed the word! Go on to the next word!";
					q1=0; q2=0;q3=0; 
					}
			}
			while(q1==4 || q2==4 || q3==4) 
			{
					Sleep(1000);system("cls");
				//word = "JUKEBOX";
				gs7(lives,x,l1,l2,l3,l4,l5,l6,l7);
				cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
				cout << endl;
				if(ans=="FULL")
				{
					cout << "\n\n\t\t\t\t";
					cout << "\n\n\t\t\t\tInput final answer: ";
					cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
					if(ans=="JUKEBOX"){
					
					
					cout << "\n\n\t\t\t\tCorrect! Go on to the next word!";
					q1=0; q2=0;q3=0; }
					else {
					cout << "Wrong answer!"; lives = 0;
					}
		}
				else if(ans=="J")
					l1='J';	
				else if(ans=="U")
					l2='U';
				else if(ans=="K")
					l3='K';	
				else if(ans=="E")
					l4='E';
				
				else if(ans=="B")
					l5='B';	
				else if(ans=="O")
					l6='O';
					else if(ans=="X")
					l7='X';
				else
				{
					cout << "Wrong answer/input! -1 life.";
					lives--;
				}
				if(lives==0){
					cout << "\n\n\t\t\t\t\tGame over!";
					q1=0; q2=0;q3=0; x=4;
				}
				if(l1=='J' && l2=='U' && l3=='K' && l4=='E' && l5=='B' && l6=='O' && l7=='X' ){
					cout << "\n\n\t\t\t\tYou have guessed the word! Go on to the next word!";
					q1=0; q2=0;q3=0; 
					}
			}
			while(q1==5 || q2==5 || q3==5) 
				{
				Sleep(1000);system("cls");
				//word = "SKYWALK"; //word here
					gs7(lives,x,l1,l2,l3,l4,l5,l6,l7);

				cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
				cout << endl;
				if(ans=="FULL")
				{
					cout << "\n\n\t\t\t\t";
					cout << "\n\n\t\t\t\tInput final answer: ";
					cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
					if(ans=="SKYWALK"){ //change here
					
					
					cout << "\n\n\t\t\t\tCorrect! Go on to the next word!";
					q1=0; q2=0;q3=0;} 
					else{
					 cout << "Wrong answer!"; lives = 0;
					}
		}
				else if(ans=="S")
					l1='S';	
				else if(ans=="K")
					l2='K';
				else if(ans=="Y")
				
					l3='Y';	
				else if(ans=="W")
					l4='W';
			
				else if(ans=="A")
					l5='A';	
				else if(ans=="L")
					l6='L';
					else if(ans=="K")
					l7='K';
				else
				{
					cout << "Wrong answer/input! -1 life.";
					lives--;
				}
				if(lives==0){
					cout << "\n\n\t\t\t\t\tGame over!";
					q1=0; q2=0;q3=0; x=4;
				}
				if(l1=='S' && l2=='K' && l3=='Y' && l4=='W' && l5=='A' && l6=='L' && l7=='K' ){
					cout << "\n\n\t\t\t\tYou have guessed the word! Go on to the next word!";
					q1=0; q2=0;q3=0; 
					}
			}
			while(q1==6 || q2==6 || q3==6)
			{
				Sleep(1000);system("cls");
				//word = "SQUISHY"; //word here
					gs7(lives,x,l1,l2,l3,l4,l5,l6,l7);
	
				cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
				cout << endl;
				if(ans=="FULL")
				{
					cout << "\n\n\t\t\t\t";
					cout << "\n\n\t\t\t\tInput final answer: ";
					cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
					if(ans=="SQUISHY"){ //change here
					
					
					cout << "\n\n\t\t\t\tCorrect! Go on to the next word!";
					q1=0; q2=0;q3=0; }
					else{
					 cout << "Wrong answer!"; lives = 0;
					}
		}
				else if(ans=="S")
					{
					l1='S';	
					l5='S';
				}
				else if(ans=="Q")
					l2='Q';
				else if(ans=="U")
				
					l3='U';	
				else if(ans=="I")
					l4='I';
			
				else if(ans=="H")
					l6='H';	
				else if(ans=="Y")
					l7='Y';
				else
				{
					cout << "Wrong answer/input! -1 life.";
					lives--;
				}
				if(lives==0){
					cout << "\n\n\t\t\t\t\tGame over!";
					q1=0; q2=0;q3=0; x=4;
				}
				if(l1=='S' && l2=='Q' && l3=='U' && l4=='I' && l5=='S' && l6=='H' && l7 =='Y'){
					cout << "\n\n\t\t\t\tYou have guessed the word! Go on to the next word!";
					q1=0; q2=0;q3=0; 
					}
			}
			while(q1==7 || q2==7 || q3==7) //SAVE
			{
				Sleep(1000);system("cls");
				//word = "JAMMED"; //word here
				gs(lives,x,l1,l2,l3,l4,l5,l6);
			
				cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
				cout << endl;
				if(ans=="FULL")
				{
					cout << "\n\n\t\t\t\t";
					cout << "\n\n\t\t\t\tInput final answer: ";
					cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
					if(ans=="JAMMED"){ //change here
					
					
					cout << "\n\n\t\t\t\tCorrect! Go on to the next word!";
					q1=0; q2=0;q3=0; }
					else {
					cout << "Wrong answer!"; lives = 0;
					}
		}
				else if(ans=="J")
					l1='J';	
				else if(ans=="A")
					l2='A';
				else if(ans=="M")
				{
				
					l3='M';
					l4='M';	}
			
				else if(ans=="E")
					l5='E';	
				else if(ans=="D")
					l6='D';
				else
				{
					cout << "Wrong answer/input! -1 life.";
					lives--;
				}
				if(lives==0){
					cout << "\n\n\t\t\t\t\tGame over!";
					q1=0; q2=0;q3=0; x=4;
				}
					if(l1=='J' && l2=='A' && l3=='M' && l4=='M' && l5=='E' && l6=='D' ){
					cout << "\n\n\t\t\t\tYou have guessed the word! Go on to the next word!";
					q1=0; q2=0;q3=0; 
					}
			}
			while(q1==8 || q2==8 || q3==8)
			{
				Sleep(1000);system("cls");
				//word = "DREDGE"; //word here
					gs(lives,x,l1,l2,l3,l4,l5,l6);
				cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
				cout << endl;
				if(ans=="FULL")
				{
					cout << "\n\n\t\t\t\t";
					cout << "\n\n\t\t\t\tInput final answer: ";
					cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
					if(ans=="DREDGE"){ //change here
					
					
					cout << "\n\n\t\t\t\tCorrect! Go on to the next word!";
					q1=0; q2=0;q3=0; }
					else {
					cout << "Wrong answer!"; lives = 0;
					}
		}
				else if(ans=="D")
				{
				
					l1='D';	
						l4='D';
					}
				else if(ans=="R")
					l2='R';
				else if(ans=="E"){
				
			
				
					l3='E';l6='E';}
			
				else if(ans=="G")
					l5='G';	

				else
				{
					cout << "Wrong answer/input! -1 life.";
					lives--;
				}
				if(lives==0){
					cout << "\n\n\t\t\t\t\tGame over!";
					q1=0; q2=0;q3=0; x=4;
				}
					if(l1=='D' && l2=='R' && l3=='E' && l4=='D' && l5=='G' && l6=='E' ){
					cout << "\n\n\t\t\t\tYou have guessed the word! Go on to the next word!";
					q1=0; q2=0;q3=0; 
					}
			}
			while(q1==9 || q2==9 || q3==9)
		{
				Sleep(1000);system("cls");
				//word = "ZOMBIE"; //word here
					gs(lives,x,l1,l2,l3,l4,l5,l6);
				cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
				cout << endl;
				if(ans=="FULL")
				{
					cout << "\n\n\t\t\t\t";
					cout << "\n\n\t\t\t\tInput final answer: ";
					cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
					if(ans=="ZOMBIE"){ //change here
					
					
					cout << "\n\n\t\t\t\tCorrect! Go on to the next word!";
					q1=0; q2=0;q3=0; }
					else {
					cout << "Wrong answer!"; lives = 0;
					}
		}
				else if(ans=="Z")
					l1='Z';	
				else if(ans=="O")
					l2='O';
				else if(ans=="M")
				
					l3='M';	
				else if(ans=="B")
					l4='B';
			
				else if(ans=="I")
					l5='I';	
				else if(ans=="E")
					l6='E';
				else
				{
					cout << "Wrong answer/input! -1 life.";
					lives--;
				}
				if(lives==0){
					cout << "\n\n\t\t\t\t\tGame over!";
					q1=0; q2=0;q3=0; x=4;
				}
				if(l1=='Z' && l2=='O' && l3=='M' && l4=='B' && l5=='I' && l6=='E' ){
					cout << "\n\n\t\t\t\tYou have guessed the word! Go on to the next word!";
					q1=0; q2=0;q3=0; 
					}
			}
			while(q1==10 || q2==10 || q3==10)
				{
				Sleep(1000);system("cls");
				//word = "ENZYME"; //word here
					gs(lives,x,l1,l2,l3,l4,l5,l6);
				
				cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
				cout << endl;
				if(ans=="FULL")
				{
					cout << "\n\n\t\t\t\t";
					cout << "\n\n\t\t\t\tInput final answer: ";
					cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
					if(ans=="ENZYME"){ //change here
					
					
					cout << "\n\n\t\t\t\tCorrect! Go on to the next word!";
					q1=0; q2=0;q3=0; }
					else {
					cout << "Wrong answer!"; lives = 0;
					}
		}
				else if(ans=="E"){
				
					l1='E';	l6='E';
				}
				else if(ans=="N")
					l2='N';
				else if(ans=="Z")
				
					l3='Z';	
				else if(ans=="Y")
					l4='Y';
			
				else if(ans=="M")
					l5='M';	
				else
				{
					cout << "Wrong answer/input! -1 life.";
					lives--;
				}
				if(lives==0){
					cout << "\n\n\t\t\t\t\tGame over!";
					q1=0; q2=0;q3=0; x=4;
					
				}
				if(l1=='E' && l2=='N' && l3=='Z' && l4=='Y' && l5=='M' && l6=='E' ){
					cout << "\n\n\t\t\t\tYou have guessed the word! Go on to the next word!";
					q1=0; q2=0;q3=0; 
					}
			}
			while(q1==11 || q2==11 || q3==11)
			{
				Sleep(1000);system("cls");
				//word = "FRENZY"; //word here
					gs(lives,x,l1,l2,l3,l4,l5,l6);
				cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
				cout << endl;
				if(ans=="FULL")
				{
					cout << "\n\n\t\t\t\t";
					cout << "\n\n\t\t\t\tInput final answer: ";
					cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
					if(ans=="FRENZY"){ //change here
					
					
					cout << "\n\n\t\t\t\tCorrect! Go on to the next word!";
					q1=0; q2=0;q3=0; }
					else {
					cout << "Wrong answer!"; lives = 0;
					}
		}
				else if(ans=="F")
					l1='F';	
				else if(ans=="R")
					l2='R';
				else if(ans=="E")
				
					l3='E';	
				else if(ans=="N")
					l4='N';
			
				else if(ans=="Z")
					l5='Z';	
				else if(ans=="Y")
					l6='Y';
				else
				{
					cout << "Wrong answer/input! -1 life.";
					lives--;
				}
				if(lives==0){
					cout << "\n\n\t\t\t\t\tGame over!";
					q1=0; q2=0;q3=0; x=4;
				}
				if(l1=='F' && l2=='R' && l3=='E' && l4=='N' && l5=='Z' && l6=='Y' ){
					cout << "\n\n\t\t\t\tYou have guessed the word! Go on to the next word!";
					q1=0; q2=0;q3=0; 
					}
			}
			while(q1==12 || q2==12 || q3==12)
			{
				Sleep(1000);system("cls");
				//word = "GLITCH"; //word here
					gs(lives,x,l1,l2,l3,l4,l5,l6);
			
				cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
				cout << endl;
				if(ans=="FULL")
				{
					cout << "\n\n\t\t\t\t";
					cout << "\n\n\t\t\t\tInput final answer: ";
					cin >> ans;
				std::transform(ans.begin(), ans.end(),ans.begin(), ::toupper);
					if(ans=="GLITCH"){ //change here
					
					
					cout << "\n\n\t\t\t\tCorrect! Go on to the next word!";
					q1=0; q2=0;q3=0; }
					else{
					 cout << "Wrong answer!"; lives = 0;
					}
		}
				else if(ans=="G")
					l1='G';	
				else if(ans=="L")
					l2='L';
				else if(ans=="I")
				
					l3='I';	
				else if(ans=="T")
					l4='T';
			
				else if(ans=="C")
					l5='C';	
				else if(ans=="H")
					l6='H';
				else
				{
					cout << "Wrong answer/input! -1 life.";
					lives--;
				}
				if(lives==0){
					cout << "\n\n\t\t\t\t\tGame over!";
					q1=0; q2=0;q3=0; x=4;
					if(l1=='G' && l2=='L' && l3=='I' && l4=='T' && l5=='C' && l6=='H' ){
					cout << "\n\n\t\t\t\tYou have guessed the word! Go on to the next word!";
					q1=0; q2=0;q3=0; 
					}
				}
				
			}
			
		
			
				
				
			
				}	
				break;}
				
		}
		Sleep(2500);system("cls");
		if(lives!=0 && x==3){
				cout << " \n_______________________________________________________________________________________________________________________";
				cout << "\n\n\t\t\t\t\tCongratulations! You have cleared level [" << diff << "]";
				cout << " \n_______________________________________________________________________________________________________________________";
		}
				
			cout << "\n /$$$$$$$$ /$$                           /$$                                           /$$"; Sleep(150);
	cout<<"\n|__  $$__/| $$                          | $$                                          | $$"; Sleep(150);
	cout<< "\n   | $$   | $$$$$$$   /$$$$$$  /$$$$$$$ | $$   /$$       /$$   /$$  /$$$$$$  /$$   /$$| $$"; Sleep(150);
	cout<< "\n   | $$   | $$__  $$ |____  $$| $$__  $$| $$  /$$/      | $$  | $$ /$$__  $$| $$  | $$| $$"; Sleep(150);
	cout<< "\n   | $$   | $$   \ $$  /$$$$$$$| $$   \ $$| $$$$$$/       | $$  | $$| $$   \ $$| $$  | $$|__/"; Sleep(150);
	cout<< "\n   | $$   | $$  | $$ /$$__  $$| $$  | $$| $$_  $$       | $$  | $$| $$  | $$| $$  | $$    "; Sleep(150);
	cout<< "\n   | $$   | $$  | $$|  $$$$$$$| $$  | $$| $$ \  $$       |  $$$$$$$|  $$$$$$/|  $$$$$$/ /$$"; Sleep(150);
	cout<< "\n   |__/   |__/  |__/ \_______/|__/  |__/|__/  \__/          \____  $$ \______/  \______/ |__/"; Sleep(150);
	cout<< "\n                                                         /$$  | $$                        "; Sleep(150);
	cout<< "\n                                                        |  $$$$$$/                        "; Sleep(150);
	cout<< "\n                                                         \______/                         "; Sleep(150);
		
	cout << "\n\n\t\t\t\t\tDo you want to try again?! [Y/N]";
					cin >> repeat; repeat=toupper(repeat);
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n";	
					if(repeat=='N')
					exit(1);		
}
getch();
				
}
