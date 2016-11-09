#include <iostream>
using namespace std;

int main()
{
    double t,x;
    cin>>t;

    x=(9.8*t*t)/2;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<x;

}
