#include<iostream>
using namespace std;
int main()
{
    double money,rate,month,tatol,interest;

    cin>>money>>rate>>month;

    tatol=money/(1-rate*0.01*month/12);
    interest=tatol/month;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<tatol<<endl;
    cout<<interest;

    return 0;


}
