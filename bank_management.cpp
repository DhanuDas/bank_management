#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class bank
{   int balance;
    char name[100];
    char add[1000];
    char y;
    public:
    void open_account();
    void deposit_money();
    void withdraw_money();
    void display_account();

};
void bank ::  open_account()
{
    cout<<"Enter your full name :: \n ";
    cin.ignore();
    cin.getline(name,100);
    cout<<"Enter your address :: \n ";
    cin.ignore();
    cin.getline(add,1000);
    cout<<"What kind of account you want to open saving (S) or current (C) \n";
    cin>>y;
    cout<<"Enter amount for deposit :\n ";
    cin>>balance;
    cout<<"Your account have been created :\n";

}
void bank :: deposit_money()
{
    int a;
    cout<<"\nEnter how much you want to deposit : ";;
    cin>>a;
    balance+=a;
    cout<<"\n Total amount you deposit :"<<balance;
    
}
void bank :: display_account()
{
    cout<<"\n Your full name :: \t"<<name;
    cout<<"\n Your address :: \t "<<add;
    cout<<"\n Type of account that you open :: \t"<<y;
    cout<<"\n Amount you deposited :: \t"<<balance;

}
void bank ::withdraw_money()
{
    float amount;
    cout<<"\n Withdraw ::";
    cout<<"Enter amount to withdraw ::\n";
    cin>>amount;
    balance=balance - amount;
    cout<<"Now total amount is left ::\n"<<balance;

}

int main()
{   system("cls");
    int choice, x;
    bank b;
    do
    {
    cout<<" 1) Open account \n";
    cout<<" 2) Deposit money \n";
    cout<<" 3) Withdraw money \n";
    cout<<" 4) Display acoount \n";
    cout<<" 5) Exit \n";
    cout<<"Select the option from above :\n";
    cin>>choice;
    switch(choice)
    {
      case 1:
      cout<< "1) Open account \n";
      b.open_account();
      break;
      case 2:
      cout<<" 2) Deposit money \n";
      b.deposit_money();
      break;
      case 3:
      cout<<" 3) Withdraw money \n";
      b.withdraw_money();
      break;
      case 4:
      cout<<" 4) Display acoount \n";
      b.display_account();
      break;
      case 5:
      if(choice==5)
      {
        exit(1);
      }
      default:
      cout<<"\n This is not exist try again !";

    }
    
    cout<<"\n Do you want select next option then press :: y ";
    cout<<"\n If you want to exit then press :: N ";
    x=getch();
    if(x=='n'||x=='N')
    exit(0);
    }while(x=='y'|| x=='Y');
    getch();
    return 0;
}
