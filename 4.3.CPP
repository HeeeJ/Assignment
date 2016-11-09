#include<iostream>
#include<math.h>
double hat_size(double weight,double height);
//returns the hat size of this people...

double jacket_size(double height,double weight,int age);
//returns the jacket size.....

double waist(double weight,int age);
//waist size

int main()
{
    using namespace std;

    double height,weight;
    int age;

    cin>>height;
    cin>>weight;
    cin>>age;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<hat_size(weight,height)<<endl;
    cout<<jacket_size(height,weight,age)<<endl;
    cout<<waist(weight,age)<<endl;

    return 0;
}
double hat_size(double weight,double height)
{
    return ((weight/height)*2.9);
}
double jacket_size(double height,double weight,int age)
{
    int c=0;
    if (age>=40)
    {
        c=floor((age-31)/10);
    }
    if (age<40)
    {
        c=0;
    }
    return((height*weight)/288+c/8);
}
double waist(double weight,int age)
{
    int c=0;
    if (age>28)
    {
        c=floor((age-28)/2);
    }
    if(age<=28)
    {
        c=0;
    }
    return((weight/5.7)+c*0.1);
}
