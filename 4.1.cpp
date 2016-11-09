#include <iostream>
using namespace std;
int main()
{
    char player1,player2;


    cin>>player1>>player2;

    if (player1=='R')
    {
        if (player2=='S')
            cout<<"1"<<endl;
        if (player2=='P')
            cout<<"2"<<endl;
        if (player2=='R')
            cout<<"0"<<endl;
    }
    if (player1=='S')
    {
        if (player2=='P')
            cout<<"1"<<endl;
        if (player2=='R')
            cout<<"2"<<endl;
        if (player2=='S')
            cout<<"0"<<endl;

    }
    if (player1=='P')
    {
        if (player2=='R')
            cout<<"1"<<endl;
        if (player2=='S')
            cout<<"2"<<endl;
        if (player2=='P')
            cout<<"0"<<endl;


    }
    return 0;
}
