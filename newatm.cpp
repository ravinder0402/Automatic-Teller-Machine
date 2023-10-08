#include<iostream>
#include<conio.h>
#include<windows.h>
#include<unistd.h>
#include<stdlib.h>
#include<fstream>
#include <string>

using namespace std;
int balance;					
ifstream file;
ofstream ofile;
string s;			
class account            ///account class  having detail summary about users
{
	
	
	
	public:
		int pin,c=0;
		
	    
	    void account_detail()
	    {
	    	
			cout<<"enter your pin ****: ";
			sleep(2);
			cin>>pin;
			cout<<endl;
			switch(pin)
			{
				 case 1000:
					cout<<"ACCOUNT NUMBER : 34567890"<<endl;
					cout<<endl;
					sleep(2);
					s="C:\\Users\\rravi\\OneDrive\\Desktop\\atmdata\\balance1.txt";
					file.open(s);
					file>>balance;
					file.close();
					cout<<" balance is : "<<balance<<endl;
					cout<<endl;
					cout<<"---------------------------------------------------------------------------------"<<endl;
					cout<<"*************************** WE ARE HAPPY TO HELP YOU!!!!!!!!!!!! **********************";
					
					
					break;
				
				case 1001:
					cout<<"ACCOUNT NUMBER : 34567891"<<endl;
					cout<<endl;
					sleep(1);
					s="C:\\Users\\rravi\\OneDrive\\Desktop\\atmdata\\balance2.txt";
					file.open(s);
					file>>balance;
					file.close();
					cout<<" balance is : "<<balance<<endl;
					cout<<endl;
					cout<<"---------------------------------------------------------------------------------"<<endl;
					cout<<"*************************** WE ARE HAPPY TO HELP YOU!!!!!!!!!!!! **********************";
					
					break;
					
					
				
				case 1011:
					cout<<"ACCOUNT NUMBER  : 34567894"<<endl;
					cout<<endl;
					sleep(1);
					s="C:\\Users\\rravi\\OneDrive\\Desktop\\atmdata\\balance3.txt";
					file.open(s);
					file>>balance;
					
					cout<<" BALANCE IS : "<<balance<<endl;
					cout<<endl;
					cout<<"*************************** WE ARE HAPPY TO HELP YOU!!!!!!!!!!!! **********************";
					
					cout<<"---------------------------------------------------------------------------------"<<endl;
					break;
					
				case 1012:
					cout<<"ACCOUNT NUMBER  : 34567893"<<endl;
					cout<<endl;
					s="C:\\Users\\rravi\\OneDrive\\Desktop\\atmdata\\balance4.txt";
					file.open(s);
					file>>balance;
					cout<<" BALANCE IS : "<<balance<<endl;
					cout<<endl;
					cout<<"*************************** WE ARE HAPPY TO HELP YOU!!!!!!!!!!!! **********************";
					
					cout<<"---------------------------------------------------------------------------------"<<endl;
					break;
				
				case 0:
					exit(0);
					
				default:
					cout<<" PLEASE ENTER CORRECT PIN: "<<endl;
						c=c+1;
				
	           	    if(c==3)
	         	   {
	    	    	cout<<"YOUR ATM HAS BEEN BLOCKED:"<<endl;
	    	    	exit(0);
		     	   }
					
					
			}
			
		}
};

///single inheritance is performed

class withdraw : public account
{
	public:
		int amount;
		void withdraw_account()
		{   
		     
			cout<<"ENTER THE AMOUNT THAT YOU WANT TO WITHDRAW :   ";
			cin>>amount;
			file.open(s);
			file>>balance;
			file.close();
			if(amount>=500)
			{
				if(amount<=balance)
			{
				balance=balance-amount;
				ofile.open(s);
				ofile<<balance;
				ofile.close();
			}
			else
			{
				cout<<"YOU DONOT HAVE SUFFFICIENT AMOUNT OF MONEY:"<<endl;
			}
			}
			else
			{
			 cout<<"Enter valid amount :"<<endl;
			}
			
			
			
			
		}
		
};


class deposit : public account
{
	public:
		int amount;
		void deposit_account()
		{
		cout<<"ENTER THE AMOUNT THAT YOU WANT TO DEPOSIT :  ";
		cin>>amount;
			file.open(s);
			file>>balance;
			file.close();
	
		balance = balance+amount;
		ofile.open(s);
		ofile<<balance;
		ofile.close();
	
			
		}
};

///multiple inheritance is performed

class bank : public deposit ,public withdraw
{
	public:
		int pin,c;
		void check_balance()
		{
			cout<<"enter your pin ****: ";
			cin>>pin;
			sleep(2);
			cout<<endl;
			switch(pin)
			{
				case 1000:
					cout<<"ACCOUNT NUMBER : 34567890"<<endl;
					cout<<endl;
					file.open(s);
					file>>balance;
					file.close();
					sleep(2);
					cout<<" BALANCE IS  : "<<balance<<endl;
					cout<<endl;
					cout<<"*************************** WE ARE HAPPY TO HELP YOU!!!!!!!!!!!! ****************"<<endl;
					cout<<"---------------------------------------------------------------------------------"<<endl;
					break;
				
				case 1001:
					cout<<"ACCOUNT NUMBER  : 34567891"<<endl;
					cout<<endl;
					file.open(s);
					file>>balance;
					file.close();
					sleep(1);
					cout<<" BALANCE IS : "<<balance<<endl;
					cout<<endl;
					cout<<"*************************** WE ARE HAPPY TO HELP YOU!!!!!!!!!!!! ****************"<<endl;
					
					cout<<"---------------------------------------------------------------------------------"<<endl;
					break;
				
				case 1011:
					cout<<"ACCOUNT NUMBER  : 34567894"<<endl;
					cout<<endl;
					file.open(s);
					file>>balance;
					file.close();
					sleep(1);
					cout<<" BALANCE IS : "<<balance<<endl;
					cout<<endl;
					cout<<"*************************** WE ARE HAPPY TO HELP YOU!!!!!!!!!!!! ****************"<<endl;
					
					cout<<"---------------------------------------------------------------------------------"<<endl;
					break;
					
				case 1012:
					cout<<"ACCOUNT NUMBER  : 34567893"<<endl;
					cout<<endl;
					file.open(s);
					file>>balance;
					file.close();
					sleep(1);
					cout<<" BALANCE IS : "<<balance<<endl;
					cout<<endl;
					cout<<"*************************** WE ARE HAPPY TO HELP YOU!!!!!!!!!!!! ***************"<<endl;
					
					cout<<"---------------------------------------------------------------------------------"<<endl;
					break;
				
				case 0:
					exit(0);
					
				default:
					cout<<" PLEASE ENTER CORRECT PIN  : "<<endl; 
					c=c+1;
		         if(c==3)
	         	{
	    	    	cout<<"YOUR ATM HAS BEEN BLOCKED:"<<endl;
	    	    	exit(0);
		     	}
				
}
}
};
int main()
{   
    account q;
     bank a;
     sleep(3);
	 cout<<"\t\t\t\t\t\t\t\t\t>| WELCOME DEAR SBI USER |<                  "<<endl;
	 cout<<endl;
	 sleep(3);
     cout<<"\t\t\t\t\t\t-------------------------PLEASE INSERT YOUR CARD----------------------"<<endl;
     cout<<"\t\t\t\t\t\t-----------------------------------------------------------------------"<<endl;
     sleep(3);
    while(1)
    {
	
	  int choice;
	
	{  
	   
	   cout<<endl;
	   sleep(2);
	   cout<<endl;
	   cout<<"\t\t\t\t>|  START_TRANSACTION(PRESS 1)  WITHDRAW_AMOUNT( PRESSS 2)    DEPOSIT( PRESS 3)    CHECKBALANCE(PRESS 4)  EXIT(PRESS 5) |< : ";
	   cin>>choice;
	   cout<<"\t\t\t\t\t\t---------------------------------------------------------------------------------"<<endl;
	   cout<<endl;
	   switch(choice)
	   {
	   	 
		case 1:
			 system("cls");
	cout<<"\t\t\t\t\t\t\t\t\t>| WELCOME DEAR SBI USER |<                  "<<endl;
	 cout<<endl;
	 sleep(3);
		      q.account_detail();
			  break;
			  
			  	
	    case 2:
	    	if(balance<=0)
	    	{
	    		cout<<"ACCOUNT IS EMPTY:"<<endl;
	    		exit(0);
	    	
			}
            else
            {
            			 system("cls");
	cout<<"\t\t\t\t\t\t\t\t\t>| WELCOME DEAR SBI USER |<                  "<<endl;
	 cout<<endl;
	 sleep(3);
            	
              a.withdraw_account();
			  	
			}
			break;
	    	
	    case 3:
	    			 system("cls");
	cout<<"\t\t\t\t\t\t\t\t\t>| WELCOME DEAR SBI USER |<                  "<<endl;
	 cout<<endl;
	 sleep(3);
	    	a.deposit_account();
	    	break;
	    case 4:
	    			 system("cls");
	cout<<"\t\t\t\t\t\t\t\t\t>| WELCOME DEAR SBI USER |<                  "<<endl;
	 cout<<endl;
	 sleep(3);
	    	a.check_balance();
	    	break;
	    	
	    case 5:
	    	exit(0);
	    	
	    	
	    default:
	
	    	cout<<"ENTER CORRECT CHOICE :"<<endl;
	    	break;
	    	
       }
	   	
	   		 
	}
}
 return 0;
}

