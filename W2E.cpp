#include <iostream>
using namespace std;

int main()
{

    double dieter,number_can,suger,sweet,mouse;

    cin>>sweet;
    cin>>mouse;
    cin>>dieter;

    suger=(dieter*1000*sweet)/mouse;
    number_can=suger/0.35;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<number_can;

    return 0;
}
