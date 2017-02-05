#include<fstream.h>
#include<stdlib.h>
#include<iomanip.h>
#include<conio.h>
#include<string.h>
#include<time.h>
#include<ctype.h>
#include<dos.h>
typedef char word[15];
int game = 1;
int score = 0;
int attempts;
void getword(word wd)
{
    int num,i;
    unsigned int sval;
    time_t t;
    sval=(unsigned)time(&t);  //get a random seed value based on system time
    srand(sval);
    int randnum = rand()%1000; //generate a random number
    ifstream fin("wdlist.dat", ios::in); //loading data file
    int x = 0;
    while( x < randnum && !fin.eof())
    {
	fin.getline(wd, 15);
	if(strlen(wd)<4)  //words with less than 4 characters are rejected
	    continue;
	x++;
    }
    fin.close();
}

void drawMan()
{

switch(attempts)
{
case 0:
{
    cout << setfill(' ') << setw(44) << "===========" << endl;
    cout << setfill(' ') << setw(44) << "||        |" << endl;
    cout << setfill(' ') << setw(44) << "||        O" << endl;
    cout << setfill(' ') << setw(45) << "||       /|\\" << endl;
    cout << setfill(' ') << setw(44) << "||        |" << endl;
    cout << setfill(' ') << setw(45) << "||       / \\" << endl;
    cout << setfill(' ') << setw(44) << "||         " << endl;
    cout << setfill(' ') << setw(45) << "=============" << endl;
}
break;
case 1:
{
    cout << setfill(' ') << setw(44) << "===========" << endl;
    cout << setfill(' ') << setw(44) << "||        |" << endl;
    cout << setfill(' ') << setw(44) << "||        O" << endl;
    cout << setfill(' ') << setw(45) << "||       /|\\" << endl;
    cout << setfill(' ') << setw(44) << "||        |" << endl;
    cout << setfill(' ') << setw(44) << "||       / " << endl;
    cout << setfill(' ') << setw(44) << "||         " << endl;
    cout << setfill(' ') << setw(45) << "=============" << endl;
}
break;
case 2:
{
    cout << setfill(' ') << setw(44) << "===========" << endl;
    cout << setfill(' ') << setw(44) << "||        |" << endl;
    cout << setfill(' ') << setw(44) << "||        O" << endl;
    cout << setfill(' ') << setw(45) << "||       /|\\" << endl;
    cout << setfill(' ') << setw(44) << "||        |" << endl;
    cout << setfill(' ') << setw(44) << "||         " << endl;
    cout << setfill(' ') << setw(44) << "||         " << endl;
    cout << setfill(' ') << setw(45) << "=============" << endl;
}
break;
case 3:
{
    cout << setfill(' ') << setw(44) << "===========" << endl;
    cout << setfill(' ') << setw(44) << "||        |" << endl;
    cout << setfill(' ') << setw(44) << "||        O" << endl;
    cout << setfill(' ') << setw(44) << "||       /|" << endl;
    cout << setfill(' ') << setw(44) << "||        |" << endl;
    cout << setfill(' ') << setw(44) << "||         " << endl;
    cout << setfill(' ') << setw(44) << "||         " << endl;
    cout << setfill(' ') << setw(45) << "=============" << endl;
}
break;
case 4:
{
    cout << setfill(' ') << setw(44) << "===========" << endl;
    cout << setfill(' ') << setw(44) << "||        |" << endl;
    cout << setfill(' ') << setw(44) << "||        O" << endl;
    cout << setfill(' ') << setw(44) << "||        |" << endl;
    cout << setfill(' ') << setw(44) << "||        |" << endl;
    cout << setfill(' ') << setw(44) << "||         " << endl;
    cout << setfill(' ') << setw(44) << "||         " << endl;
    cout << setfill(' ') << setw(45) << "=============" << endl;
}
break;
case 5:
{
    cout << setfill(' ') << setw(44) << "===========" << endl;
    cout << setfill(' ') << setw(44) << "||        |" << endl;
    cout << setfill(' ') << setw(44) << "||        O" << endl;
    cout << setfill(' ') << setw(44) << "||        |" << endl;
    cout << setfill(' ') << setw(44) << "||         " << endl;
    cout << setfill(' ') << setw(44) << "||         " << endl;
    cout << setfill(' ') << setw(44) << "||         " << endl;
    cout << setfill(' ') << setw(45) << "=============" << endl;
}
break;
case 6:
{
    cout << setfill(' ') << setw(44) << "===========" << endl;
    cout << setfill(' ') << setw(44) << "||        |" << endl;
    cout << setfill(' ') << setw(44) << "||        O" << endl;
    cout << setfill(' ') << setw(44) << "||         " << endl;
    cout << setfill(' ') << setw(44) << "||         " << endl;
    cout << setfill(' ') << setw(44) << "||         " << endl;
    cout << setfill(' ') << setw(44) << "||         " << endl;
    cout << setfill(' ') << setw(45) << "=============" << endl;
}
break;
case 7:
{
    cout << setfill(' ') << setw(44)<< "===========" << endl;
    cout << setfill(' ') << setw(44)<< "||        |" << endl;
    cout << setfill(' ') << setw(44)<< "||         " << endl;
    cout << setfill(' ') << setw(44)<< "||         " << endl;
    cout << setfill(' ') << setw(44)<< "||         " << endl;
    cout << setfill(' ') << setw(44)<< "||         " << endl;
    cout << setfill(' ') << setw(44)<< "||         " << endl;
    cout << setfill(' ') << setw(45)<< "=============" << endl;
}
break;
case 8:
{
    cout << setfill(' ') << setw(44) << "===========" << endl;
    cout << setfill(' ') << setw(44) << "||         " << endl;
    cout << setfill(' ') << setw(44) << "||         " << endl;
    cout << setfill(' ') << setw(44) << "||         " << endl;
    cout << setfill(' ') << setw(44) << "||         " << endl;
    cout << setfill(' ') << setw(44) << "||         " << endl;
    cout << setfill(' ') << setw(44) << "||         " << endl;
    cout << setfill(' ') << setw(45) << "=============" << endl;
}
break;
default:
{ cout << "Application Error";}
}
}

void display(word buf, int len)
{
     clrscr();
     cout << "\n";
     cout << setfill(' ') << setw(55) << "|__|  /\\  |\\ |  /\\  |\\/|  /\\  |\\ |" << endl;
     cout << setfill(' ') << setw(55) << "|  | | =| |  \\ |__\\ |  | | =| |  \\" << endl;
     cout << setfill(' ') << setw(57) << "=====================================" << endl << endl;
     cout << setfill(' ') << setw(46) << "Guess the Word!" << endl;
     cout << setfill(' ') << setw(46) << "---------------" << endl;
     cout << setfill(' ') << setw(42)<< " SCORE: " << score;
     cout << endl << setfill(' ') << setw(45)<< "attempts left:" << attempts;
     cout << endl << setfill(' ') << setw((len/6)+27);
     for(int i = 0; i< len; i++)
	cout <<"  " <<buf[i] << "  ";
     cout << endl << endl;
     drawMan();
}

void guess(word wd)
{
int scorevalve;
word temp;
attempts = 8;
strcpy(temp, wd);
for(int i = 0; i<strlen(wd);i++)
    temp[i] = '_'; //initializing the temp arr
display(temp, strlen(wd));  //preliminary display
char ch;
do
{
    scorevalve = attempts;
    ch = getch();
    if(!(isalpha(ch))) //if the input character is not alphabetic skip
	continue;
    attempts--;
    for(int k= 0; k<strlen(wd); k++)
	if(wd[k]==ch)
	{
	   temp[k] = wd[k]; //for match, add the letter for display
	   if((attempts+1)<=scorevalve)
		attempts++;
	}
    display(temp, strlen(wd)); //display updated temp
   } while(attempts!=0 && strcmp(temp, wd)!=0); //out of attempts or win
if (attempts == 0) //if fail then end the game
{
    game = 0;
    cout << endl << setfill(' ') << setw(44)<< "the word was: "<< wd;
}
else
 {
    cout << endl << setfill(' ') << setw(45)<< "great job!" << endl;
    score++;
 }
    delay(500);
}

void main()
{
clrscr();
word wd;
char try = 'N';
score = 0;  //initialize score before game commences
do
{
    game = 1;  //set the game to ON position
    if(try == 'Y')
       score = 0;
    try = 'N';
    getword(wd); //select a random word from file
    if( strlen(wd) == 0)
	continue;
    guess(wd);
    if(game == 0)
    {
	score = 0;
	cout << endl << setfill(' ') << setw(44)<< "Game Over" << endl;
	cout << endl << setfill(' ') << setw(61)<< "Do you want to play again?(Y for yes): ";
	try = getch();
    }
}while(try == 'Y' || try == 'y' || game ==1);
clrscr();
cout << "\n\n\n\n\n\n\n";
cout << endl << setfill(' ') << setw(57)<< "Thank You for playing Hangman!" << endl;
cout << endl << setfill(' ') << setw(58)<< "A program by Anubhab Chakraborty";
delay(700);
getch();
}
