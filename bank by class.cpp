#include<iostream>
#include<ctime>
#include<string.h>
using namespace std;
class bank{
	
	public:
		
		float balance=2000;
		int pin=12345;
		string name="bharat",city="ahmedabad",state="gujarat";
		int user_pin;
		int choice;
		char ch;
		float deposite_amt;
		float withdraw_amt;
		
		bank()
		{
			do{
		
				cout<<"================WELCOME TO ATM=========================\n";
				
				time_t now=time(0);
				char *dt=ctime(&now);
				cout<<endl;
				cout<<"current Time and Date : "<<dt;
				cout<<"==========================================================\n";
		}
		void show()
		{
				cout<<"Press 1 and Then Press Enter to access Your Account Via Pin number\n"; 
				cout<<endl;
				cout<<"                    or                        ";
				cout<<endl;
				cout<<"	Press 0 and press Enter to get "<<endl;						
				int attemp=0;
				cout<<"Enter Choice : ";
				cin>>choice;
				if(choice==1)
				{
					
				
					while(attemp<1)
					{
					
						cout<<"Enter Your Acc pin Access Number! [Only one attmpt is allowed] \n";
						
						
						cout<<"\n=====================================================\n";
						cout<<"=====================================================\n";
						cout<<"=====================================================\n";
					
						attemp++;
						
					}
				}
				else if(choice==2){
					cout<<"================ATM ACCOUNT STATUS===================\n";
					cout<<endl;
					cout<<"You Must have the correct pin number to access this account . see your\n";
					cout<<endl;
					cout<<"bank representative for assistance dusring bank opening hours \n";
					cout<<endl;
					cout<<"Thank for ,your choice todya!!\n";
					cout<<"=====================================================\n";
					cout<<"=====================================================\n";
					cout<<"=====================================================\n";
					cout<<"'Press any key to continue . . . \n";
					cin>>ch;
				
				}
				else{
					cout<<"==================           =================\n";
					cout<<"                  THANK  YOU\n";
					cout<<"==================           =================\n";
					
					cout<<endl;
					
					cout<<"you had made your attemp which failed !! no more attemp allow !! today ! sorry !!";
					cout<<"\n=====================================================\n";
					cout<<"=====================================================\n";
					cout<<"=====================================================\n";
					cout<<"press any key to continue ..... ";
					cin>>ch;
				}
			}while(ch<'a'  || ch<'A' || ch>'Z' || ch>'z');
		}
		
		void deposite()
		{
			cout<<"Name : of the Account Holder are : "<<name<<endl;
			cout<<endl;
			cout<<"The Account Holder's address is : "<<state<<endl;
			cout<<endl;
			cout<<"The Branch location is : "<<city<<endl;
			cout<<endl;
			
			cout<<"Account number : 5678\n";
			
			cout<<"present available balance : Rs. "<<balance<<endl;
			cout<<endl;
			cout<<"Enter the amount to be Deposite Rs. ";
			cin>>deposite_amt;
			
			balance+=deposite_amt;
			cout<<"Your new available Balanced amoount is Rs. "<<balance<<endl;
			cout<<endl;
			cout<<"              THANK YOU !               ";
			cout<<endl;
			cout<<"Name : of the Account Holder are : "<<name<<endl;
			cout<<endl;
			cout<<"The Account Holder's address is : "<<state<<endl;
			cout<<endl;
			cout<<"The Branch location is : "<<city<<endl;
			cout<<endl;
			
			cout<<"Account number : 5678\n";
		}
		void withdraw()
		{
			cout<<"Name : of the Account Holder are : "<<name<<endl;
			cout<<endl;
			cout<<"The Account Holder's address is : "<<state<<endl;
			cout<<endl;
			cout<<"The Branch location is : "<<city<<endl;
			cout<<endl;
			
			cout<<"Account number : 5678\n";
			cout<<endl;
			cout<<"Enter Amount To Withdraw : ";
			cin>>withdraw_amt;
			if(balance<withdraw_amt)
			{
				cout<<"insufficient available balance in your account \n";
				
				
				cout<<endl;
				cout<<"           sorry!!    \n";
				cout<<endl;	
			}
			else{
				balance-=withdraw_amt;
				cout<<"The Withdraw amount is : "<<withdraw_amt;
				cout<<endl;
				cout<<"current balance : "<<balance;
				cout<<endl;
			}
		}
		void balance_inquiery()
		{
			cout<<endl;
			cout<<"your balance : "<<balance ; 
			cout<<endl;
		}
		
};
int main()
{
	char ch;
	int choice;
	int user_pin;
	cout<<"enter pin : ";
	cin>>user_pin;
	bank b;
	
	if(b.user_pin==b.pin)
	{
		do{
		
			cout<<"Enter [1] To Deposite Cash \n";
			cout<<"Enter [2] To Withdraw Cash \n";
			cout<<"Enter [3] To Balance Inquiery \n";
			cout<<"Enter [0] to Exit ATM\n";
			cout<<"enter choice : ";
			cin>>choice;
			if(choice==1)
			{
				b.deposite();
				cout<<"pree any key to go main page : ";
				cin>>ch;
				if(ch>'a' || ch>'A' || ch<'z' ||  ch<'Z' )
				{
					bank b1;
				}
			}
			else if(choice==2)
			{
				b.withdraw();
				cout<<"enter any key to be continue..... \n";
				cin>>ch;
			}
			else if(choice==3)
			{
				b.balance_inquiery();
				cout<<"enter any key to be continue..... \n";
				cin>>ch;
			}
			else{
				break;
			}
		}while(ch>'a' || ch>'A' || ch<'z' ||  ch<'Z' );
			
		
	}
	
	
}
