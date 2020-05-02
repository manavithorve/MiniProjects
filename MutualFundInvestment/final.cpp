#include<iostream>
#include<string.h>
#include<fstream>
#include<graphics.h>
#include<stdio.h>
#include<dos.h>
#include<math.h>
#include<process.h>
using namespace std;
class invest
{
protected:
	double invest_amt;
	int invest_year;
	char bank_name[20];
	char acc_no[30];

public:
	virtual void accept()
	{
	cout<<"\n Enter the investment amount:-";
	cin>>invest_amt;
	cout<<"\n Enter the investment years:-";
	cin>>invest_year;
	cout<<"\n Enter the bank name:-";
	cin>>bank_name;
	cout<<"\n Enter the account number:-";
	cin>>acc_no;
	}
};
class new1
{
protected:
	 char mob[11];
	 char aadhar[20];
	 char name[30];
	 char mail_id[30];
	 char dob[20];
	 char fname[30];
public:

		void get()
		{
		cout<<"\nEnter your name:-";
		cin>>name;
		strcpy(fname,name);
		strcat(fname,".txt");
		ofstream obj(fname);
		obj<<name<<"\n";
		cout<<"\nEnter your aadhar number:-";
		cin>>aadhar;
		obj<<aadhar<<"\n";
		cout<<"\nEnter your mobile number:-";
		cin>>mob;
		obj<<mob<<"\n";
		cout<<"\nEnter your mail_id:-";
		cin>>mail_id;
		obj<<mail_id<<"\n";
		cout<<endl;
		cout<<"\nEnter your dob:-";
		cin>>dob;
		obj<<dob<<"\n";
		cout<<endl;
		obj.close();
		}
		char *getdob()
		{
		return dob;
		}




};
class display:public new1
{
public:
	int ch;
	void choice()
	{
		cout<<"............WELCOME TO MUTUAL FUND INVESTMENT .............";
		cout<<"\n 1-To create new account \n2-Already have an account";
		cout<<"\nEnter your choice :- ";
		cin>>ch;
		switch(ch)
		{
		case 1: new1 n;
			n.get();
			mutual_fund m;
			m.choice();
		break;
		case 2:
			old1 o;
			o.login();
			break;
		default:cout<<"\nWrong Choice!";
		break;
		}
	}

};
class old1
{
protected:int i,j;
	char name[20];
	char pass[20];
	char passwd[20];
	char fname[20],ch;
public:
	void login()
	{
		i=0;
		j=0;
		new1 temp;
		cout<<"\nEnter your name:-";
		cin>>name;
		cout<<"\nEnter your password:-";

		while(j<8)
		{
		passwd[j]=getch();
		cout<<"*";
		++j;
		}

		strcpy(fname,name);
		strcat(fname,".txt");
		ifstream obj(fname);
		while(obj)
		{
		  obj.get(ch);
		  if(ch=='\n')
		  {
		      i++;
		  }
		   if(i==4)
		  {
			obj>>pass;
			break;
		  }
		}
		obj.close();
		if(strcmp(pass,passwd)==0)
		{

			cout<<"\nYou have logged in successfully.";
			delay(5000);
			mutual_fund m;
			m.choice();
		}
		else
		{
			cout<<"\n\nYour password or username is incorrect..\tgoing back...\n";
			obj.read((char *)&temp,sizeof(temp));
			delay(5000);
			display d;
			d.choice();
		}


	}
};
class mutual_fund:public new1
{
protected:
	int ch;
public:
	void choice()
	{
	clrscr();
	cout<<"\n 1-Lumsum investment \n2-SIP investment \n0-exit \n Enter your choice:-";
	cin>>ch;
	switch(ch)
	{
		case 1:
			lumsum l;
			l.choice();
		break;
		case 2:
			sip s;
			s.choice();
		break;
		case 0:
			cout<<"thank you.....!!!";
		break;
		default:
			cout<<"\n Invalid choice";
	}
	}

};
class lumsum
{
public:
	char c;
	int ch;
	void choice()
	{
		cout<<"\n1-HDFC\n2-ICICI\n3-BIRLA\n4-RELIANCE\n5-FRANKLIN\n0-exit";
		cout<<"\n enter your choice:-";
		cin>>ch;
		switch(ch)
		{
			case 1: clrscr();
				ifstream o;
				o.open("hdfcl.txt",ios::in,ios::out);
				while(o)
				{
				 o.get(c);
				 cout<<c;
				 delay(10);
				}
				delay(10000);
				o.close();
				hdfcl h;
				h.choice();
			break;
			case 2: clrscr();
				ifstream p;
				p.open("icicil.txt",ios::in,ios::out);
				while(p)
				{
				 p.get(c);
				 cout<<c;
				 delay(10);
				}
				delay(10000);
				p.close();
				icicil i;
				i.choice();
			break;
			case 3: clrscr();
				ifstream q;
				q.open("birlal.txt",ios::in,ios::out);
				while(q)
				{
				 q.get(c);
				 cout<<c;
				 delay(10);
				}
				delay(10000);
				q.close();
				birlal b;
				b.choice();
			break;
			   case 4:clrscr();
				ifstream r;
				r.open("rell.txt",ios::in,ios::out);
				while(r)
				{
				 r.get(c);
				 cout<<c;
				 delay(10);
				}
				delay(10000);
				r.close();
				reliancel r1;
				r1.choice();
			break;
			case 5: clrscr();
				ifstream l;
				l.open("frankl.txt",ios::in,ios::out);
				while(l)
				{
				 l.get(c);
				 cout<<c;
				 delay(10);
				}
				delay(10000);
				l.close();
				franklinl f;
				f.choice();
			break;
			case 0:
				mutual_fund m;
				m.choice();
			break;
			default:
				cout<<"Invalid choice.....";

		 }
	}
};
class hdfcl
{
public:
int ch;

void choice()
	{
	clrscr();
	cout<<"\n1-Childrens gift fund\n2-Equity fund\n3-Dept Fund\n0-EXit\n\t\n\tEnter your choice:-";
	cin>>ch;
	switch(ch)
	{
		case 1:
			hdfc_giftl g;
			g.acc_hdfc();
		break;
		case 2:
			hdfc_equityl e;
			e.acc_hdfc();
		break;
		case 3:
			hdfc_deptl d;
			d.acc_hdfc();

		break;
		case 0:lumsum l;
			l.choice();
			break;
		default:
			cout<<"\n Invalid choice";
	}
	}
};
class hdfc_giftl:public  invest
{
protected:
	int ch;
     double iamt,totamt,intt,inttt;
      double n;
      int i;
      char fname[20],name[30];
      char a1[20],a2[20],a3[20],a4[20],a5[20],a6[20],a7[20],a8[20];
public:
	void acc_hdfc()
	{
		cout<<"\nEnter your username:-";
		cin>>name;
		accept();
	n=15;
	totamt=invest_amt;
	for(i=0;i<invest_year;i++)
	{
		totamt=totamt+20000;
	}
		strcpy(fname,name);
		strcat(fname,".txt");
		ofstream obj1(fname, ios::app | ios::in | ios::out);
		obj1<<invest_amt<<"\n";
		obj1<<invest_year<<"\n";
		obj1<<totamt<<"\n";
		obj1.close();
		ifstream ob(fname);
		ob>>a1;
		clrscr();
		cout<<"\nname:-"<<a1;
			ob>>a2;
		cout<<"\naadhar number:-"<<a2;

			ob>>a3;
		cout<<"\nmobile number:-"<<a3;
			ob>>a4;
		cout<<"\nmail_id:-"<<a4;
			ob>>a5;
		cout<<"\ndob:-"<<a5;
			ob>>a6;
		cout<<"\ninvest_amt:-"<<a6;
		ob>>a7;
		cout<<"\ninvest_year:-"<<a7;
		ob>>a8;
		cout<<"\ntotal_amt:-"<<a8;
		ob.close();
		cout<<"\nSo, you have invested Rs."<<invest_amt<<" in hdfc children's gift fund and your bank details are: \n\tbank name:-"<<bank_name<<" \n\tacc_no:-"<<acc_no;
		cout<<"\nYour amount after "<<invest_year<<" years will be:-"<<totamt;
		cout<<"\n do you want to continue...enter 1\t";
		cin>>ch;
		if(ch==1)
		{
		hdfcl j;
		j.choice();
		}
	}



};
class hdfc_equityl:public  invest
{
protected:
     double iamt,totamt,intt,inttt;
      double n;
      int i,ch;
public:
	void acc_hdfc()
	{
	accept();
	totamt=invest_amt;
	for(i=0;i<invest_year;i++)
	{
		totamt=totamt+25000;
	}
		cout<<"\nSo, you have invested Rs."<<invest_amt<<" in hdfc equity fund and your bank details are: \n\tbank name:-"<<bank_name<<" \t\nacc_no:-"<<acc_no;
		cout<<"\nYour amount after "<<invest_year<<" years will be:-"<<totamt;
		cout<<"\n do you want to continue...enter 1\t";
		cin>>ch;
		if(ch==1)
		{
		hdfcl j;
		j.choice();
		}

	}


};
class hdfc_deptl :public  invest
{
protected:
     double iamt,totamt,intt,inttt;
      double n;
      int i,ch;
public:
	void acc_hdfc()
	{
		accept();
		totamt=invest_amt;
	for(i=0;i<invest_year;i++)
	{
		totamt=totamt+8000;
	}
		cout<<"\nSo, you have invested Rs."<<invest_amt<<" in hdfc dept fund and your bank details are: \n\tbank name:-"<<bank_name<<" \t\nacc_no:-"<<acc_no;
		cout<<"\nYour amount after "<<invest_year<<" years will be:-"<<totamt;

		cout<<"\n do you want to continue...enter 1\t";
		cin>>ch;
		if(ch==1)
		{
		hdfcl j;
		j.choice();
		}
	}


};
class birlal
{
public:
int ch;
void choice()
	{
	clrscr();
	cout<<"\n1-Childrens gift fund\n2-Equity fund\n3-Dept Fund\n0-EXit\n\t \t\n Enter your choice:-";
	cin>>ch;
	switch(ch)
	{
		case 1:
			birla_giftl g;
			g.acc_birla();
		break;
		case 2:
			birla_equityl e;
			e.acc_birla();
		break;
		case 3:
			birla_deptl d;
			d.acc_birla();

		break;
		case 0:lumsum l;
		l.choice();
		break;
		default:
			cout<<"\n Invalid choice";
	}
	}
};
class birla_giftl:public  invest
{
protected:
     double iamt,totamt,intt,inttt;
      double n;
      int i,ch;
public:
	void acc_birla()
	{
		accept();
	n=15;
	totamt=invest_amt;
	for(i=0;i<invest_year;i++)
	{
		totamt=totamt+19000;
	}
		cout<<"\nSo, you have invested Rs."<<invest_amt<<" in birla children's gift fund and your bank details are: \n\tbank name:-"<<bank_name<<" \t\nacc_no:-"<<acc_no;
		cout<<"\nYour amount after "<<invest_year<<" years will be:-"<<totamt;
		cout<<"\n do you want to continue...enter 1\t";
		cin>>ch;
		if(ch==1)
		{
		birlal j;
		j.choice();
		}


	}


};
class birla_equityl:public  invest
{
protected:
     double iamt,totamt,intt,inttt;
      double n;
      int i,ch;
public:
	void acc_birla()
	{
		accept();
	totamt=invest_amt;
	for(i=0;i<invest_year;i++)
	{
		totamt=totamt+22000;
	}
		cout<<"\nSo, you have invested Rs."<<invest_amt<<" in birla equity fund and your bank details are: \n\tbank name:-"<<bank_name<<" \t\nacc_no:-"<<acc_no;
		cout<<"\nYour amount after "<<invest_year<<" years will be:-"<<totamt;
			cout<<"\n do you want to continue...enter 1\t";
		cin>>ch;
		if(ch==1)
		{
		birlal j;
		j.choice();
		}
	}


};
class birla_deptl :public  invest
{
protected:
     double iamt,totamt,intt,inttt;
      double n;
      int i,ch;
public:
	void acc_birla()
	{
		accept();
		totamt=invest_amt;
	for(i=0;i<invest_year;i++)
	{
		totamt=totamt+8000;
	}
	cout<<"\nSo, you have invested Rs."<<invest_amt<<" in birla dept fund and your bank details are: \n\tbank name:-"<<bank_name<<" \t\nacc_no:-"<<acc_no;
		cout<<"\nYour amount after "<<invest_year<<" years will be:-"<<totamt;
				cout<<"\n do you want to continue...enter 1\t";
		cin>>ch;
		if(ch==1)
		{
		birlal j;
		j.choice();
		}
	}


};

class icicil
{
public:
int ch;
void choice()
	{
	clrscr();
	cout<<"\n1-Childrens gift fund\n2-Equity fund\n3-Dept Fund\n0-EXit\n\t \t\n Enter your choice:-";
	cin>>ch;
	switch(ch)
	{
		case 1:
			icici_giftl g;
			g.acc_icici();
		break;
		case 2:
			icici_equityl e;
			e.acc_icici();
		break;
		case 3:
			icici_deptl d;
			d.acc_icici();
			break;
		case 0:lumsum l;
			l.choice();
			break;
		default:
			cout<<"\n Invalid choice";
	}
	}
};
class icici_giftl:public  invest
{
protected:
     double iamt,totamt,intt,inttt;
      double n;
      int i;
public:
	void acc_icici()
	{
		accept();
	n=15;
	totamt=invest_amt;
	for(i=0;i<invest_year;i++)
	{
		totamt=totamt+17800;
	}
	cout<<"\nSo, you have invested Rs."<<invest_amt<<" in icici children's gift fund and your bank details are: \n\tbank name:-"<<bank_name<<" \t\nacc_no:-"<<acc_no;
		cout<<"\nYour amount after "<<invest_year<<" years will be:-"<<totamt;
			int ch;
		cout<<"\n do you want to continue...enter 1\t";
		cin>>ch;
		if(ch==1)
		{
		icicil j;
		j.choice();
		}
	}


};
class icici_equityl:public  invest
{
protected:
     double iamt,totamt,intt,inttt;
      double n;
      int i,ch;
public:
	void acc_icici()
	{
		accept();
	totamt=invest_amt;
	for(i=0;i<invest_year;i++)
	{
		totamt=totamt+21000;
	}
	cout<<"\nSo, you have invested Rs."<<invest_amt<<" in icici equity fund and your bank details are: \n\tbank name:-"<<bank_name<<" \t\nacc_no:-"<<acc_no;
		cout<<"\nYour amount after "<<invest_year<<" years will be:-"<<totamt;
			cout<<"\n do you want to continue...enter 1\t";
		cin>>ch;
		if(ch==1)
		{
		icicil j;
		j.choice();
		}
	}


};
class icici_deptl :public  invest
{
protected:
     double iamt,totamt,intt,inttt;
      double n;
      int i;
public:
	void acc_icici()
	{
		accept();
		totamt=invest_amt;
	for(i=0;i<invest_year;i++)
	{
		totamt=totamt+8200;
	}
	cout<<"\nSo, you have invested Rs."<<invest_amt<<" in icici dept fund and your bank details are: \n\tbank name:-"<<bank_name<<" \t\nacc_no:-"<<acc_no;
		cout<<"\nYour amount after "<<invest_year<<" years will be:-"<<totamt;
			int ch;
		cout<<"\n do you want to continue...enter 1\t";
		cin>>ch;
		if(ch==1)
		{
		icicil j;
		j.choice();
		}
	}


};
class reliancel
{
public:
int ch;
void choice()
	{
	clrscr();
	cout<<"\n1-Childrens gift fund\n2-Equity fund\n3-Dept Fund\n0-EXit\n\t \n\t Enter your choice:-";
	cin>>ch;
	switch(ch)
	{
		case 1:
			relaince_giftl g;
			g.acc_relaince();
		break;
		case 2:
			relaince_equityl e;
			e.acc_relaince();
		break;
		case 3:
			relaince_deptl d;
			d.acc_relaince();

		break;
		case 0:lumsum l;
		l.choice();
		break;
		default:
			cout<<"\n Invalid choice";
	}
	}
};
class relaince_giftl:public  invest
{
protected:
     double iamt,totamt,intt,inttt;
      double n;
      int i;
public:
	void acc_relaince()
	{
		accept();
	n=15;
	totamt=invest_amt;
	for(i=0;i<invest_year;i++)
	{
		totamt=totamt+17000;
	}
	cout<<"\nSo, you have invested Rs."<<invest_amt<<" in relaince children's gift fund and your bank details are: \n\tbank name:-"<<bank_name<<" \t\nacc_no:-"<<acc_no;
		cout<<"\nYour amount after "<<invest_year<<" years will be:-"<<totamt;
			int ch;
		cout<<"\n do you want to continue...enter 1\t";
		cin>>ch;
		if(ch==1)
		{
		reliancel j;
		j.choice();
		}
	}


};
class relaince_equityl:public  invest
{
protected:
     double iamt,totamt,intt,inttt;
      double n;
      int i;
public:
	void acc_relaince()
	{
		accept();
	totamt=invest_amt;
	for(i=0;i<invest_year;i++)
	{
		totamt=totamt+22000;
	}
	cout<<"\nSo, you have invested Rs."<<invest_amt<<" in reliance equity fund and your bank details are: \n\tbank name:-"<<bank_name<<" \t\nacc_no:-"<<acc_no;
		cout<<"\nYour amount after "<<invest_year<<" years will be:-"<<totamt;
			int ch;
		cout<<"\n do you want to continue...enter 1\t";
		cin>>ch;
		if(ch==1)
		{
		reliancel j;
		j.choice();
		}
	}


};
class relaince_deptl :public  invest
{
protected:
     double iamt,totamt,intt,inttt;
      double n;
      int i;
public:
	void acc_relaince()
	{
		accept();
		totamt=invest_amt;
	for(i=0;i<invest_year;i++)
	{
		totamt=totamt+7800;
	}
	cout<<"\nSo, you have invested Rs."<<invest_amt<<" in reliance dept fund and your bank details are: \n\tbank name:-"<<bank_name<<" \t\nacc_no:-"<<acc_no;
		cout<<"\nYour amount after "<<invest_year<<" years will be:-"<<totamt;
			int ch;
		cout<<"\n do you want to continue...enter 1\t";
		cin>>ch;
		if(ch==1)
		{
		reliancel j;
		j.choice();
		}
	}


};
class franklinl
{
public:
int ch;
void choice()
	{
	clrscr();
	cout<<"\n1-Childrens gift fund\n2-Equity fund\n3-Dept Fund\n0-EXit\n\t \n\t Enter your choice:-";
	cin>>ch;
	switch(ch)
	{
		case 1:
			franklin_giftl g;
			g.acc_franklin();
		break;
		case 2:
			franklin_equityl e;
			e.acc_franklin();
		break;
		case 3:
			franklin_deptl d;
			d.acc_franklin();

		break;
		case 0:lumsum l;
			l.choice();
			break;
		default:
			cout<<"\n Invalid choice";
	}
	}
};
class franklin_giftl:public  invest
{
protected:
     double iamt,totamt,intt,inttt;
      double n;
      int i;
public:
	void acc_franklin()
	{
		accept();
	n=15;
	totamt=invest_amt;
	for(i=0;i<invest_year;i++)
	{
		totamt=totamt+17800;
	}
	cout<<"\nSo, you have invested Rs."<<invest_amt<<" in franklin children's gift fund and your bank details are: \n\tbank name:-"<<bank_name<<" \t\nacc_no:-"<<acc_no;
		cout<<"\nYour amount after "<<invest_year<<" years will be:-"<<totamt;
			int ch;
		cout<<"\n do you want to continue...enter 1\t";
		cin>>ch;
		if(ch==1)
		{
		franklinl j;
		j.choice();
		}
	}


};
class franklin_equityl:public  invest
{
protected:
     double iamt,totamt,intt,inttt;
      double n;
      int i;
public:
	void acc_franklin()
	{
		accept();
	totamt=invest_amt;
	for(i=0;i<invest_year;i++)
	{
		totamt=totamt+23400;
	}
	cout<<"\nSo, you have invested Rs."<<invest_amt<<" in franklin equity and your bank details are: \n\tbank name:-"<<bank_name<<" \t\nacc_no:-"<<acc_no;
		cout<<"\nYour amount after "<<invest_year<<" years will be:-"<<totamt;
			int ch;
		cout<<"\n do you want to continue...enter 1\t";
		cin>>ch;
		if(ch==1)
		{
		franklinl j;
		j.choice();
		}
	}


};
class franklin_deptl :public  invest
{
protected:
     double iamt,totamt,intt,inttt;
      double n;
      int i;
public:
	void acc_franklin()
	{
		accept();
		totamt=invest_amt;
	for(i=0;i<invest_year;i++)
	{
		totamt=totamt+7800;
	}
	cout<<"\nSo, you have invested Rs."<<invest_amt<<" in franklin dept fund and your bank details are: \n\tbank name:-"<<bank_name<<" \t\nacc_no:-"<<acc_no;
		cout<<"\nYour amount after "<<invest_year<<" years will be:-"<<totamt;
			int ch;
		cout<<"\n do you want to continue...enter 1\t";
		cin>>ch;
		if(ch==1)
		{
		franklinl j;
		j.choice();
		}
	}


};

class sip
{
public:
	char c;
	int ch;
	void choice()
	{
		cout<<"\n1-HDFC\n2-ICICI\n3-BIRLA\n4-RELIANCE\n5-FRANKLIN\n0-exit";
		cout<<"\n enter your choice";
		cin>>ch;
		switch(ch)
		{
			case 1: clrscr();
				ifstream o;
				o.open("hdfc.txt",ios::in,ios::out);
				while(o)
				{
				 o.get(c);
				 cout<<c;
				delay(10);
				}
				delay(10000);
				o.close();
				hdfc h;
				h.choice();

			break;
			case 2: clrscr();
				ifstream p;
				p.open("icici.txt",ios::in,ios::out);
				while(p)
				{
				 p.get(c);
				 cout<<c;
				 delay(10);
				}
				delay(10000);
				p.close();
				icici i;
				i.choice();
			break;
			case 3: clrscr();
				ifstream q;
				q.open("birla.txt",ios::in,ios::out);
				while(q)
				{
				 q.get(c);
				 cout<<c;
				 delay(10);
				}
				delay(10000);
				q.close();
				birla b;
				b.choice();
			break;
			   case 4:clrscr();
				ifstream r;
				r.open("reliance.txt",ios::in,ios::out);
				while(r)
				{
				 r.get(c);
				 cout<<c;
				 delay(10);
				}
				delay(10000);
				r.close();
				reliance rr;
				rr.choice();
			break;
			case 5: clrscr();
				ifstream l;
				l.open("franklin.txt",ios::in,ios::out);
				while(l)
				{
				 l.get(c);
				 cout<<c;
				 delay(10);
				}
				delay(10000);
				l.close();
				franklin f;
				f.choice();
			break;
			case 0:
				mutual_fund m;
				m.choice();
				break;
			default:
				cout<<"Invalid choice.....";

		 }
	}
};
class hdfc
{
public:
int ch;
void choice()
	{
	clrscr();
	cout<<"\n1-Childrens gift fund\n2-Equity fund\n3-Dept Fund\n0-EXit\n\tEnter your choice:-";
	cin>>ch;
	switch(ch)
	{
		case 1:
			hdfc_gift g;
			g.acc_hdfc();
		break;
		case 2:
			hdfc_equity e;
			e.acc_hdfc();
		break;
		case 3:
			hdfc_dept d;
			d.acc_hdfc();

		break;
		case 0: sip s;
			s.choice();
			break;
		default:
			cout<<"\n Invalid choice";
	}
	}
};
class hdfc_gift:public invest
{
protected:
     double iamt,totamt,intt,inttt;
      double n;
public:
	void acc_hdfc()
	{
		accept();
	n=15;
	iamt=((invest_amt*12)*invest_year);
		intt=(invest_amt*n*invest_year);
		inttt=intt/100;
		totamt=iamt+inttt;
		cout<<"\nSo, you have invested Rs."<<invest_amt<<" in hdfc children's gift fund and your bank details are: \n\tbank name:-"<<bank_name<<" \n\tacc_no:-"<<acc_no;
		cout<<"\nYour amount after "<<invest_year<<" years will be:-"<<totamt;

		int ch;
		cout<<"\n do you want to continue...enter 1\t";
		cin>>ch;
		if(ch==1)
		{
		hdfc j;
		j.choice();
		}
	}


};
class hdfc_equity:public  invest
{
protected:
     double iamt,totamt,intt,inttt;
      double n;
public:
	void acc_hdfc()
	{
		accept();
	n=18;
	iamt=((invest_amt*12)*invest_year);
		intt=(invest_amt*n*invest_year);
		inttt=intt/100;
		totamt=iamt+inttt;
		cout<<"\nSo, you have invested Rs."<<invest_amt<<" in hdfc equity fund and your bank details are: \n\tbank name:-"<<bank_name<<" \n\tacc_no:-"<<acc_no;
		cout<<"\nYour amount after "<<invest_year<<" years will be:-"<<totamt;
			int ch;
		cout<<"\n do you want to continue...enter 1\t";
		cin>>ch;
		if(ch==1)
		{
		hdfc j;
		j.choice();
		}
	}


};
class hdfc_dept:public  invest
{
protected:
     double iamt,totamt,intt,inttt;
      double n;
public:
	void acc_hdfc()
	{
		accept();
	n=10;
	iamt=((invest_amt*12)*invest_year);
		intt=(invest_amt*n*invest_year);
		inttt=intt/100;
		totamt=iamt+inttt;
		cout<<"\nSo, you have invested Rs."<<invest_amt<<" in hdfc dept fund and your bank details are: \n\tbank name:-"<<bank_name<<" \n\tacc_no:-"<<acc_no;
		cout<<"\nYour amount after "<<invest_year<<" years will be:-"<<totamt;
				int ch;
		cout<<"\n do you want to continue...enter 1\t";
		cin>>ch;
		if(ch==1)
		{
		hdfc j;
		j.choice();
		}
	}


};
class icici
{
public:
int ch;
void choice()
	{
	clrscr();
	cout<<"\n1-Childrens gift fund\n2-Equity fund\n3-Dept Fund\n0-EXit\n\t \n\t Enter your choice:-";
	cin>>ch;
	switch(ch)
	{
		case 1:
			icici_gift g;
			g.acc_icici();
		break;
		case 2:
			icici_equity e;
			e.acc_icici();
		break;
		case 3:
			icici_dept d;
			d.acc_icici();

		break;
		case 0: sip s;
			s.choice();
			break;
		default:
			cout<<"\n Invalid choice";
	}
	}
};
class icici_gift:public invest
{
protected:
     double iamt,totamt,intt,inttt;
      double n;
public:
	void acc_icici()
	{
		accept();
	n=14;
	iamt=((invest_amt*12)*invest_year);
		intt=(invest_amt*n*invest_year);
		inttt=intt/100;
		totamt=iamt+inttt;
		cout<<"\nSo, you have invested Rs."<<invest_amt<<" in icici children's gift fund and your bank details are: \n\tbank name:-"<<bank_name<<" \n\tacc_no:-"<<acc_no;
		cout<<"\nYour amount after "<<invest_year<<" years will be:-"<<totamt;
			int ch;
		cout<<"\n do you want to continue...enter 1\t";
		cin>>ch;
		if(ch==1)
		{
		icici j;
		j.choice();
		}
	}


};
class icici_equity:public  invest
{
protected:
     double iamt,totamt,intt,inttt;
      double n;
      char fname[20],name[30];
      char a1[20],a2[20],a3[20],a4[20],a5[20],a6[20],a7[20],a8[20];
public:
	void acc_icici()
	{
		cout<<"\nEnter your username:-";
		cin>>name;
		accept();
	n=17;
	iamt=((invest_amt*12)*invest_year);
		intt=(invest_amt*n*invest_year);
		inttt=intt/100;
		totamt=iamt+inttt;
		strcpy(fname,name);
		strcat(fname,".txt");
		ofstream obj1(fname, ios::app | ios::in | ios::out);
		obj1<<invest_amt<<"\n";
		obj1<<invest_year<<"\n";
		obj1<<totamt<<"\n";
		obj1.close();
		ifstream ob(fname);
		ob>>a1;
		clrscr();
		cout<<"\nname:-"<<a1;
			ob>>a2;
		cout<<"\naadhar number:-"<<a2;

			ob>>a3;
		cout<<"\nmobile number:-"<<a3;
			ob>>a4;
		cout<<"\nmail_id:-"<<a4;
			ob>>a5;
		cout<<"\ndob:-"<<a5;
			ob>>a6;
		cout<<"\ninvest_amt:-"<<a6;
		ob>>a7;
		cout<<"\ninvest_year:-"<<a7;
		ob>>a8;
		cout<<"\ntotal_amt:-"<<a8;
		ob.close();
		cout<<"\nSo, you have invested Rs."<<invest_amt<<" in icici equity fund and your bank details are: \n\tbank name:-"<<bank_name<<" \n\tacc_no:-"<<acc_no;
		cout<<"\nYour amount after "<<invest_year<<" years will be:-"<<totamt;
			int ch;
		cout<<"\n do you want to continue...enter 1\t";
		cin>>ch;
		if(ch==1)
		{
		icici j;
		j.choice();
		}
	}


};
class icici_dept:public  invest
{
protected:
     double iamt,totamt,intt,inttt;
      double n;
public:
	void acc_icici()
	{
		accept();
	n=9.5;
	iamt=((invest_amt*12)*invest_year);
		intt=(invest_amt*n*invest_year);
		inttt=intt/100;
		totamt=iamt+inttt;
		cout<<"\nSo, you have invested Rs."<<invest_amt<<" in icici dept fund and your bank details are: \n\tbank name:-"<<bank_name<<" \n\tacc_no:-"<<acc_no;
		cout<<"\nYour amount after "<<invest_year<<" years will be:-"<<totamt;
				int ch;
		cout<<"\n do you want to continue...enter 1\t";
		cin>>ch;
		if(ch==1)
		{
		icici j;
		j.choice();
		}
	}


};
class birla
{
public:
int ch;
void choice()
	{
	clrscr();
	cout<<"\n1-Childrens gift fund\n2-Equity fund\n3-Dept Fund\n0-EXit\n\t \n\t Enter your choice:-";
	cin>>ch;
	switch(ch)
	{
		case 1:
			birla_gift g;
			g.acc_birla();
		break;
		case 2:
			birla_equity e;
			e.acc_birla();
		break;
		case 3:
			birla_dept d;
			d.acc_birla();

		break;
		case 0: sip s;
			s.choice();
			break;
		default:
			cout<<"\n Invalid choice";
	}
	}
};
class birla_gift:public invest
{
protected:
     double iamt,totamt,intt,inttt;
      double n;
public:
	void acc_birla()
	{
		accept();
	n=14;
	iamt=((invest_amt*12)*invest_year);
		intt=(invest_amt*n*invest_year);
		inttt=intt/100;
		totamt=iamt+inttt;
		cout<<"\nSo, you have invested Rs."<<invest_amt<<" in birla children's gift fund and your bank details are: \n\tbank name:-"<<bank_name<<" \n\tacc_no:-"<<acc_no;
		cout<<"\nYour amount after "<<invest_year<<" years will be:-"<<totamt;

		int ch;
		cout<<"\n do you want to continue...enter 1\t";
		cin>>ch;
		if(ch==1)
		{
		birla j;
		j.choice();
		}
	}


};
class birla_equity:public  invest
{
protected:
     double iamt,totamt,intt,inttt;
      double n;
public:
	void acc_birla()
	{
		accept();
	n=16.5;
	iamt=((invest_amt*12)*invest_year);
		intt=(invest_amt*n*invest_year);
		inttt=intt/100;
		totamt=iamt+inttt;
		cout<<"\nSo, you have invested Rs."<<invest_amt<<" in birla equity fund and your bank details are: \n\tbank name:-"<<bank_name<<" \n\tacc_no:-"<<acc_no;
		cout<<"\nYour amount after "<<invest_year<<" years will be:-"<<totamt;
		int ch;
		cout<<"\n do you want to continue...enter 1\t";
		cin>>ch;
		if(ch==1)
		{
		birla j;
		j.choice();
		}
	}


};
class birla_dept:public  invest
{
protected:
     double iamt,totamt,intt,inttt;
      double n;
public:
	void acc_birla()
	{
		accept();
	n=9;
	iamt=((invest_amt*12)*invest_year);
		intt=(invest_amt*n*invest_year);
		inttt=intt/100;
		totamt=iamt+inttt;
		cout<<"\nSo, you have invested Rs."<<invest_amt<<" in birla dept fund and your bank details are: \n\tbank name:-"<<bank_name<<" \n\tacc_no:-"<<acc_no;
		cout<<"\nYour amount after "<<invest_year<<" years will be:-"<<totamt;
		int ch;
		cout<<"\n do you want to continue...enter 1\t";
		cin>>ch;
		if(ch==1)
		{
		birla j;
		j.choice();
		}
	}


};
class reliance
{
public:
int ch;
void choice()
	{
	clrscr();
	cout<<"\n1-Childrens gift fund\n2-Equity fund\n3-Dept Fund\n0-EXit\n\t \n\tEnter your choice:-";
	cin>>ch;
	switch(ch)
	{
		case 1:
			reliance_gift g;
			g.acc_reliance();
		break;
		case 2:
			reliance_equity e;
			e.acc_reliance();
		break;
		case 3:
			reliance_dept d;
			d.acc_reliance();

		break;
		case 0: sip s;
			s.choice();
			break;
		default:
			cout<<"\n Invalid choice";
	}
	}
};
class reliance_gift:public invest
{
protected:
     double iamt,totamt,intt,inttt;
      double n;
public:
	void acc_reliance()
	{
		accept();
	n=14;
	iamt=((invest_amt*12)*invest_year);
		intt=(invest_amt*n*invest_year);
		inttt=intt/100;
		totamt=iamt+inttt;
		cout<<"\nSo, you have invested Rs."<<invest_amt<<" in reliance children's gift fund and your bank details are: \n\tbank name:-"<<bank_name<<" \n\tacc_no:-"<<acc_no;
		cout<<"\nYour amount after "<<invest_year<<" years will be:-"<<totamt;
		int ch;
		cout<<"\n do you want to continue...enter 1\t";
		cin>>ch;
		if(ch==1)
		{
		reliance j;
		j.choice();
		}
	}


};
class reliance_equity:public  invest
{
protected:
     double iamt,totamt,intt,inttt;
      double n;
public:
	void acc_reliance()
	{
		accept();
	n=16;
	iamt=((invest_amt*12)*invest_year);
		intt=(invest_amt*n*invest_year);
		inttt=intt/100;
		totamt=iamt+inttt;
		cout<<"\nSo, you have invested Rs."<<invest_amt<<" in reliance equity fund and your bank details are: \n\tbank name:-"<<bank_name<<" \n\tacc_no:-"<<acc_no;
		cout<<"\nYour amount after "<<invest_year<<" years will be:-"<<totamt;
		int ch;
		cout<<"\n do you want to continue...enter 1\t";
		cin>>ch;
		if(ch==1)
		{
		reliance j;
		j.choice();
		}
	}


};
class reliance_dept:public  invest
{
protected:
     double iamt,totamt,intt,inttt;
      double n;
public:
	void acc_reliance()
	{
		accept();
	n=10;
	iamt=((invest_amt*12)*invest_year);
		intt=(invest_amt*n*invest_year);
		inttt=intt/100;
		totamt=iamt+inttt;
		cout<<"\nSo, you have invested Rs."<<invest_amt<<" in reliance dept fund and your bank details are: \n\tbank name:-"<<bank_name<<" \n\tacc_no:-"<<acc_no;
		cout<<"\nYour amount after "<<invest_year<<" years will be:-"<<totamt;
		int ch;
		cout<<"\n do you want to continue...enter 1\t";
		cin>>ch;
		if(ch==1)
		{
		reliance j;
		j.choice();
		}
	}


};
class franklin
{
public:
int ch;
void choice()
	{
	clrscr();
	cout<<"\n1-Childrens gift fund\n2-Equity fund\n3-Dept Fund\n0-EXit\n\t \n\t Enter your choice:-";
	cin>>ch;
	switch(ch)
	{
		case 1:
			franklin_gift g;
			g.acc_franklin();
		break;
		case 2:
			franklin_equity e;
			e.acc_franklin();
		break;
		case 3:
			franklin_dept d;
			d.acc_franklin();

		break;
		case 0: sip s;
			s.choice();
			break;
		default:
			cout<<"\n Invalid choice";
	}
	}
};
class franklin_gift:public invest
{
protected:
     double iamt,totamt,intt,inttt;
      double n;
public:
	void acc_franklin()
	{
		accept();
	n=13;
	iamt=((invest_amt*12)*invest_year);
		intt=(invest_amt*n*invest_year);
		inttt=intt/100;
		totamt=iamt+inttt;
		cout<<"\nSo, you have invested Rs."<<invest_amt<<" in franklin children's gift fund and your bank details are: \n\tbank name:-"<<bank_name<<" \n\tacc_no:-"<<acc_no;
		cout<<"\nYour amount after "<<invest_year<<" years will be:-"<<totamt;
		int ch;
		cout<<"\n do you want to continue...enter 1\t";
		cin>>ch;
		if(ch==1)
		{
		franklin j;
		j.choice();
		}
	}


};
class franklin_equity:public  invest
{
protected:
     double iamt,totamt,intt,inttt;
      double n;
public:
	void acc_franklin()
	{
		accept();
	n=15;
	iamt=((invest_amt*12)*invest_year);
		intt=(invest_amt*n*invest_year);
		inttt=intt/100;
		totamt=iamt+inttt;
		cout<<"\nSo, you have invested Rs."<<invest_amt<<" in franklin equity fund and your bank details are: \n\tbank name:-"<<bank_name<<" \n\tacc_no:-"<<acc_no;
		cout<<"\nYour amount after "<<invest_year<<" years will be:-"<<totamt;
		int ch;
		cout<<"\n do you want to continue...enter 1\t";
		cin>>ch;
		if(ch==1)
		{
		franklin j;
		j.choice();
		}
	}


};
class franklin_dept:public  invest
{
protected:
     double iamt,totamt,intt,inttt;
      double n;
public:
	void acc_franklin()
	{
		accept();
	n=8.5;
	iamt=((invest_amt*12)*invest_year);
		intt=(invest_amt*n*invest_year);
		inttt=intt/100;
		totamt=iamt+inttt;
		cout<<"\nSo, you have invested Rs."<<invest_amt<<" in franklin dept fund and your bank details are: \n\tbank name:-"<<bank_name<<" \n\tacc_no:-"<<acc_no;
		cout<<"\nYour amount after "<<invest_year<<" years will be:-"<<totamt;
		int ch;
		cout<<"\n do you want to continue...enter 1\t";
		cin>>ch;
		if(ch==1)
		{
		franklin j;
		j.choice();
		}
	}


};
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	display d;
	d.choice();
}
