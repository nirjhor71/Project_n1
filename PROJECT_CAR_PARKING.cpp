#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Press 1 for rickshaw"<<endl;
    cout<<"Press 2 for car"<<endl;
    cout<<"press 3 for Bus"<<endl;
    cout<<"press  4 to show the record"<<endl;
    cout<<"press 5 to delete the record"<<endl;
    int inp,count=0,amount=0;
    while(true)
    {
        cin>>inp;
         cout<<" Press 1 for rickshaw"<<endl;
        cout<<"Press 2 for car"<<endl;
        cout<<"press 3 for Bus"<<endl;
        cout<<"press  4 to show the record"<<endl;
        cout<<"press 5 to delete the record"<<endl;
        if(inp==1)
        {
            if(count<=5)
            {
                amount=amount+100;
                count = count+1;
            }
            else
                cout<<"  "<<"|| No more car,Parking is full ||"<<endl;
        }
        else if(inp==2)
        {
            if(count<=5)
            {
                amount=amount+200;
                count = count+1;
            }
            else
                cout<<" "<<"|| No more car,Parking is full ||"<<endl;
        }
        else if(inp==3)
        {
            if(count<=5)
            {
                amount=amount+300;
                count = count+1;
            }
            else
                cout<<" "<<"|| No more car,Parking is full ||"<<endl;
        }
        else if(inp==4)
        {
            cout<<"||"<<endl;
            cout<<"Total amount"<<" "<<amount<<endl;
            cout<<"Number of Vehicles Parked"<<" "<<count<<endl;
        }
        else if(inp==5)
        {
            amount=0;
            count=0;
        }
        else
        {
            cout<<"Invalid number"<<endl;

        }

    }
}
