#include<bits/stdc++.h>
using namespace std;
void rules();
int main()
{
    char playername[100];
    //playername=(char *)malloc(sizeof(char )*100);
    int balance;
    int bettingamount;
    int guess;
    srand(time(0));
    int dice;
    char choice;
    cout<<"\t\t\t=====welcome to the casio world======\n";
    cout<<"Enter your choice to play game Y=yes  or N=no\n";
    cin>>choice;
    cout<<"enter the playername \t\t";
    cin>>playername;
    cout<<"\nEnter ythe starting the balance to play the game  \n\n";
    cin>>balance;
   do{
        cout<<"\nwelcome to the casino \n\n";
        rules();
        cout<<"\nYour current balance is   "<<balance<<"\n\n";
        do{
                cout<<"hey   "<<playername<<"\n enter your bet amount    ";
                cin>>bettingamount;
                if(bettingamount>balance)
                    cout<<"your bet amount is more than balnce \n please reneter your amount \n";

        }
        while(bettingamount>balance);

//getting th eplayer number to
        do{
            cout<<"enter the number between 1 to 10\n";
            cin>>guess;
            if(guess<=0||guess>10)
                cout<<"number should be between 1 to  10\n re enter the number \n";

        }
        while(guess<=0||guess>10);

        dice=rand()%10+1;
        if(dice==guess)
         {   cout<<"\n you are in luck\n yoy have won  "<<bettingamount*10;
            balance=balance+bettingamount*10;
         }
            else
            {
                balance=balance-bettingamount;
                cout<<"\noops you have palyed well but you lost the game of  $  "<<bettingamount;
            }
            cout<<"\n the winner number was  \n"<<dice;
            cout<<"\n "<<playername<<"you have balance  $ "<<balance<<"\n";
            if(balance==0)
                {cout<<"you have no money to play\n";
                break;}
            cout<<"do u want to play again   (y/n) \n";
            cin>>choice;
   }
   while(choice=='y'||choice=='Y');

}
void rules()
{
    system("cls");
    cout<<"\t\t======casino number guessing rules======\n";
    cout<<"\n 1.choose no. between 1 to 10\n";
    cout<<"\n 2. winner get the 10 times the money they bet";
    cout<<"\n3. if wrong they get the lose their balance\n";
}
