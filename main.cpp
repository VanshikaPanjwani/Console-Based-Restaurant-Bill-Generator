#include<iostream>
#include<string.h>
#include<fstream>
#include<string>
using namespace std;

class file
{
	public:
		char usern[20];
		char pass[20];
	void push(char username[],char password[])
	{
			fstream file;
			fstream file1;
			file.open("userpass.txt",ios::out);
			file1.open("usersdata.txt",ios::out);
	    	file<<username;
	    	file1<<password;
	    	file.close();
	    	file1.close();
	}
	
	void get(){
			fstream file;
			fstream file1;
			file.open("userpass.txt",ios::in);
			file1.open("usersdata.txt",ios::in);
	    	file>>usern;
	    	file1>>pass;
	    	file.close();
	    	file1.close();
	}
};

class user :public file
{
	public:	
	char username[10] , password[10];
		void singup()
		{
			char uname[20],umail[20];
			int phn;
			cout<<"Enter your first name :";
			cin>>uname;
			cout<<"Enter phone_no. :";
			cin>>phn;
			cout<<"Enter your Gmail to stay updated and in contact :";
			cin>>umail;
			ofstream fout("userdetail.txt");
			fout<<uname<<endl;
			fout<<phn<<endl;
			fout<<umail<<endl;
			fout.close();
			cout<<"Here create your ID  \n";
			cout<<"Enter username :";
			cin>>username;
			cout<<"Create a strong password :";
			cin>>password;
			cout<<"\n   Successfully logined "<<endl;
			push(username,password);
	        menuprint();
	
		}
		void login()
		{
			get();
			char username1[10];
			char password1[10];
			strcpy(username,usern);
			strcpy(password,pass);
			
			cout<<"Enter your username :";
			cin>>username1 ;
			cout<<"Enter password :";
			cin>>password1;
		   	if(strcmp(username1,username )==0 && strcmp(password1,password)==0)
			{
				cout<<"You have succesfully logined"<<endl;
				menuprint();
			}
			else if(strcmp(username1,username )==0 && strcmp(password1,password)!=0)
			{
				cout<<"You have entered a wrong password for "<<username;
				exit(1);
			}
			else if(strcmp(username1,username )!=0 && strcmp(password1,password)==0)
			{
				cout<<"You have entered a wrong username ";
				exit(0);
			}
			else if(strcmp(username1,username )!=0 && strcmp(password1,password)!=0)
			{
			cout<<"Wrong username and password";
			exit(2);
		    }
			else
			{
			cout<<"error"<<endl;
			exit(1);}
	}
	void menuprint()
	{
		const int size=70;
		char ch[size];
		ifstream fin;
		fin.open("menu.txt");
		cout<<"\n";
		if(fin.good()!=1)
		{
			cout<<"Error in Opening file \n";
		}
		while(fin)
		{
    		fin.getline(ch,size);
    		cout<<ch<<endl;
		}
    	fin.close();
    }
	

	
};

class dish
{
	public:
		char name[20];
		char name1[10];
		int serial,quantity,price1;
		int gtotal;
		static int total;
		static float gst;
		int price[20]={00,70,80,90,150,195,170,20,30,25,400,350,300,70,85,90,50,70,40};
		
		void gd()
		{
			cout<<"Enter name of item:";
		    cin>>name>>name1;
			cout<<"Enter serial number of item :";
			cin>>serial;
			cout<<"Enter Quantity :";
			cin>>quantity;
		}
		int sd()
		{
			price1=quantity*price[serial];
			total+=price1;
			gst=total*8/100;
			gtotal=total+gst; 
			//cout<<"Items:       Quantity      Price      Total\n";
			cout<<name<<" "<<name1<<"\t    "<<quantity<<"      \t   "<<price[serial]<<"  \t  "<<price1 <<endl<<endl;
			return gtotal;
		}
		
};

int dish :: total;
float dish::gst = 0.0;

bool caseInsensitiveCompare(const std::string& a, const std::string& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i)
        if (tolower(a[i]) != tolower(b[i])) return false;
    return true;
}

int main()
{
	cout<<"          WELCOME TO THE GRILL IN !\n";
	user i;
	int total;
	int n;
		cout<<"Enter your choice : \n1 - Signup \n2 - Login"<<endl;	
	cin>>n;
		switch(n)
	{
		case 1:
			i.singup();
		break;
		case 2 :
			i.login();
		break;
    }
    
    int nom=0;
    int no=0;
	char s[2];
	dish d[10];
	//dish *pt;
	do{
	  	if(nom==0)
		{
			cout<<"Enter numbers of dish you want to order :";
			cin>>nom;
		for(int i=0;i<nom;i++)
		{
			d[i].gd();
		}	
		}
	else 
	{
	cout<<"Enter numbers of dish you want to order :";
	cin>>no;
	for(int i=nom;i<=no;i++)
	{
		d[i].gd();
	}
	}
    cout<<"do you want to order more (Yes /No ):";
    cin>>s;
    }
    while(caseInsensitiveCompare("Yes",s));
    int tno = no + nom;
	cout << "\n-----------------------------------------------\n";
	cout << "              GRILL IN !\n"; 
	cout << "            Your Order Bill : \n";   
	cout << "Bill no : 1                 Date : 9/11/23 \n\n";
	cout << "  Items:\t   Quantity\t Price\t  Total\n\n";

	for(int i = 0; i < tno; i++) {
		d[i].sd();
	}

	float gstAmount = dish::total * 0.08;
	float grandTotal = dish::total + gstAmount;

	cout << "GST (8%) ---------------------------   " << gstAmount << endl;
	cout << "Grand Total ------------------------   " << grandTotal << endl << endl;
	cout << "----------------------------------------------\n\n";
	cout << "        Thanks for Visiting \n";
	cout << "         Have a Nice day \n\n ";
	cout << "----------------------------------------------\n";

    return 0;
}

