#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
char cAccname[200];
char cpass[100];
class Bank
{
private:
    char name[30];
    int dop;
    char Accname[200];
    char pass[100];
    char type[20];
    int ibalance;
    int with;
public:
    void menu(void);
    void get(void);
    void deposite(void);
    void withdraw(void);
    void info(void);
    void check(void);
} ;
void Bank::menu()
{
    int me;
    cout<<"\n\tchose your option from 1-to-6\n";
    cout<<"\t1.Create a New Account\n";
    cout<<"\t2.Deposit Your Money\n";
    cout<<"\t3.Check Your Balance\n";
    cout<<"\t4.Withdraw Amount\n";
    cout<<"\t5.Your Account's All Info\n";
    cout<<"\t6.Exit";
    cout<<"\n\t\t";
    cin>>me;
    switch(me)
    {
    case 1:
        get();
        break;

    case 2:
        deposite();
        break;
    case 3:
        check();
        break;
    case 4:
        withdraw();
        break;
    case 5:
        info();
        break;

    }


}
void Bank::get()
{
    int go;
    cout<<"\n\t\tEnter Name:";
    cin>>name;
    cout<<"\n";
    cout<<"\t\tEnter Account Name:";
    cin>>Accname;
    cout<<"\n";
    cout<<"\t\tEnter Account Password:";
    cin>>pass;
    cout<<"\n";
    cout<<"\t\tEnter the Type of Account:";
    cin>>type;
    cout<<endl;
    cout<<"\t\nHow much Money You wanna Deposite:"<<endl;;
    cout<<"\t\t";
    cin>>ibalance;
    strcpy(cAccname,Accname);
    strcpy(cpass,pass);
    cout<<"\n\tHit\'0\'for go to MainMeno:";
    cout<"\n";
    cin>>go;
    if(go==0)
    {
        menu();

    }

}
void Bank::deposite()
{
    // cout<<cAccname<<" "<<cpass<<endl;
    int go;
    cout<<"\n\tEnter your account name\t\t";
    char nacc[100],npass[100];
    cin>>nacc;
    cout<<"\n\tEnter your account password\t\t";
    cin>>npass;
    if(strcmp(nacc,cAccname)==0&&strcmp(npass,cpass)==0) ;
    else
    {
        cout<<"\n\tWrong account name or password!!\t\t";
        cout<<"\nHit\'0\'for go to MainMeno:"<<endl;
        cout<<endl;
        cin>>go;
        if(go==0)
        {
            menu();

        }
    }
    cout<<"\n\tHow much Money You wanna Deposite?";
    cout<<"\t\t";
    cin>>dop;
    ibalance+=dop;
    cout<<"\nHit\'0\'for go to MainMeno:"<<endl;
    cout<<endl;
    cin>>go;
    if(go==0)
    {
        menu();

    }
}
void Bank::check()
{
    int go;
    cout<<"\n\tEnter your account name\t\t";
    char nacc[100],npass[100];
    cin>>nacc;
    cout<<"\n\tEnter your account password\t\t";
    cin>>npass;
    if(strcmp(nacc,cAccname)==0&&strcmp(npass,cpass)==0) ;
    else
    {
        cout<<"\n\tWrong account name or password!!\t\t";
        cout<<"\nHit\'0\'for go to MainMeno:"<<endl;
        cout<<endl;
        cin>>go;
        if(go==0)
        {
            menu();

        }
    }
    cout<<"\t\tYour Current Balance:"<<ibalance<<endl;;
    cout<<"\nHit\'0\'for go to MainMeno:";
    cout<<endl;
    cin>>go;
    if(go==0)
    {
        menu();

    }
}
void Bank::withdraw()
{
    //cout<<ibalance<<endl;
    int go;
    cout<<"\n\tEnter your account name\t\t";
    char nacc[100],npass[100];
    cin>>nacc;
    cout<<"\n\tEnter your account password\t\t";
    cin>>npass;
    if(strcmp(nacc,cAccname)==0&&strcmp(npass,cpass)==0) ;
    else
    {
        cout<<"\n\tWrong account name or password!!\t\t";
        cout<<"\nHit\'0\'for go to MainMeno:"<<endl;
        cout<<endl;
        cin>>go;
        if(go==0)
        {
            menu();

        }
    }
    cout<<"\n\t How much money you wanna withdraw?"<<endl;
    cout<<"\t\t";
    cin>>with;
    if(with>ibalance)
    {

        cout<<"\n\tInsufficient amount!!\t\t";
        cout<<"\nHit\'0\'for go to MainMeno:"<<endl;
        cout<<endl;
        cin>>go;
        if(go==0)
        {
            menu();

        }
    }
    ibalance-=with ;
    cout<<"After withdrawing Your Balance:"<<ibalance<<"\n\t";
    cout<<"\nHit\'0\'for go to MainMeno:"<<endl;
    cin>>go;
    if(go==0)
    {
        menu();

    }
}
void Bank::info()
{
    int go;
    cout<<"\n\t\tName of the Depositer:"<<name<<"\n";
    cout<<"\t\t Name of the Account:<<"<<Accname<<"\n";
    cout<<"\t\tType of Account:"<<type<<"\n";
    cout<<"\t\tAmount in your Account"<<dop<<"\n";
    cout<<"\nHit\'0\'for go to MainMeno:";
    cout<"\n";
    cin>>go;
    if(go==0)
    {
        menu();

    }
}
int main()
{
    Bank obj;
    obj.menu();
    getch();
    return 0;
}


