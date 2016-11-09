#include <iostream>
#include <string>
int main()
{
    using namespace std;
    int hour1,min1,hour2,min2,total,difference_hour,difference_min;
    string a,b;

    cin>>hour1>>min1>>a;
    cin>>hour2>>min2>>b;
    if (a=="am"&&hour1==12)
    {
        hour1=hour1-12;
    }
    if (b=="am"&&hour2==12)
    {
        hour2=hour2-12;
    }
    if (a=="pm")
    {
        hour1=hour1+12;
    }

    if (b=="pm")
    {
        hour2=hour2+12;
    }
    difference_hour=(hour2-hour1)*60;
    difference_min=min2-min1;
    total=difference_hour+difference_min;

    if (total<0)
    {
        total=total+1440;
    }
    cout<<total;

    return 0;
}


