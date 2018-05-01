
#include<bits/stdc++.h>
using namespace std;
double apples;
double oranges;
double cherries;
double watermelons;
double wallet;
float userchoice;
int main()
{
    cin>>wallet;
    while(wallet>=0)
    {
        cout<<"\n\n welcome to NIRJHOR And ARAFAT store!!|\n\n";
        cout<<"Menu:\n\n";
        cout<<"1      Apples       $2\n";
        cout<<"1      Oranges       $3\n";
        cout<<"1      Cherries       $4\n";
        cout<<"1      Watermelons       $5\n";
        cout<<"You have\n "<<apples<<" Apoples\n "<<oranges<<" Oranges\n "<<cherries<<" Cherries\n "<<watermelons<<" Watermelons\n\n"<<endl;
        cout<<"You have available credit is $"<<wallet<<endl;
        cin>>userchoice;
        if(userchoice==1)
        {
            apples++;
            wallet = wallet-2;
        }
          if(userchoice==2)
        {
            oranges++;
            wallet = wallet-3;
        }
          if(userchoice==3)
        {
            cherries++;
            wallet = wallet-4;
        }

         if(userchoice==4)
        {
            watermelons++;
            wallet = wallet-5;
        }
          if(userchoice==5)
        {
            cout<<"\n\n Thank you for shopping\n\n";
            cin.get();
            return 0;
        }
        if(wallet<=0)
        {
            cout<<"\nYOUR CREDIT IS NOT GOOD ENOUGH FOR BUYING ANYMORE !"<<endl;
            cout<<"\n                 || SORRY ||\n"<<endl;
        }
    }
    cin.get();
    return 0;
}
