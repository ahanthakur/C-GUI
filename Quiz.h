//---------------------------------------------------------------------------

#ifndef QuizH
#define QuizH
#include <FMX.Controls.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <System.Classes.hpp>
#include<queue>
#include<string>
#include<sstream>
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
//---------------------------------------------------------------------------
class Quiz{
	public:
	char *ques;
	char *opt1;
	char *opt2;
	char *opt3;
	char *opt4;
	int ans;
	Quiz(char* a,char *b,char *c,char *d,char *e,int x);
	Quiz(){}
};
Quiz::Quiz(char* a,char *b,char *c,char *d,char *e,int x){
	ques=a;
	opt1=b;
	opt2=c;
	opt3=d;
	opt4=e;
	ans=x;
}
std::queue<Quiz> questions(){
	Quiz o1("Which of my friend is gay : ","Atul","Muskan","Vishwa","All of them",4);
	Quiz o2("My Favourite color : ","Blue","Black","Red","White",2);
	Quiz o3("When am i gonna loose my virginity : ","2023","2024","2025","2026",1);
	Quiz o4("How long is my penus : ","5.2","5.6","5.5","5.1",1);

	std::queue<Quiz> myq;
	myq.push(o1);
	myq.push(o2);
	myq.push(o3);
	myq.push(o4);
	return myq;
}
std::queue<Quiz> queslist;
Quiz currques;
int scr=0;
int slt;
class TZ : public TForm
{
__published:	// IDE-managed Components
	TLabel *Heading;
	TLabel *Question;
	TLabel *points;
	TLabel *score;
	TButton *submit;
	TRadioButton *opt1;
	TRadioButton *opt2;
	TRadioButton *opt3;
	TRadioButton *opt4;
	void __fastcall opt1Change(TObject *Sender);
	void __fastcall opt2Change(TObject *Sender);
	void __fastcall opt3Change(TObject *Sender);
	void __fastcall opt4Change(TObject *Sender);
	void __fastcall submitClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TZ(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TZ *Z;
//---------------------------------------------------------------------------
#endif
