#include <iostream>
#include <math.h>

void average(double a1,double a2,double a3,double a4);
//calculate the average of 4 numbers.

void standard(double a1,double a2,double a3,double a4);
//Çó±ê×¼²î
int main()
{
    using namespace std;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    double a1,a2,a3,a4;
    cin>>a1>>a2>>a3>>a4;
    average(a1,a2,a3,a4);
    cout<<", ";
    standard(a1,a2,a3,a4);

    return 0;
}

void average(double a1,double a2,double a3,double a4)
{
    using namespace std;

    double ave;
    ave = (a1+a2+a3+a4)/4;
    cout<<ave;

    return;
}

void standard(double a1,double a2,double a3,double a4)
{
    using namespace std;

    double average1,stan;
    average1 = (a1+a2+a3+a4)/4;
    stan = sqrt(((a1-average1)*(a1-average1)+(a2-average1)*(a2-average1)+(a3-average1)*(a3-average1)+(a4-average1)*(a4-average1))/4);

    cout<<stan;

    return;
}
