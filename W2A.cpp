#include<iostream>
using namespace std;

int main()
{
    double C,F;
    cin>>C;

    F=(C*9)/5+32;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout<<F;

    return 0;
}
