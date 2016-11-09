#include <iostream>
using namespace std;
int main()
{
    double sum_positive=0,sum_negetive=0,ave_positive,ave_negetive,sum,ave;
    int m=0,n,num_po=0,num_ne=0;

    while (m<10)
{
    cin>>n;
        if (n>0)
        {
        sum_positive += n;
        num_po++;
        m++;
        }
        if (n<=0)
        {
        sum_negetive += n;
        num_ne++;
        m++;
        }
}


    ave_positive=sum_positive/num_po;
    sum=sum_positive+sum_negetive;
    ave=(sum_positive+sum_negetive)/(num_ne+num_po);
    ave_negetive=sum_negetive/num_ne;
    cout<<"Sum of Positive numbers is "<<sum_positive<<endl;
    if (num_po>0)
   {
       cout<<"Average of Positive numbers is "<<ave_positive<<endl;
   }

    cout<<"Sum of NonPositive numbers is "<<sum_negetive<<endl;

    if(num_ne>0)
    {
        cout<<"Average of NonPositive numbers is "<<ave_negetive<<endl;
    }
    cout<<"Sum "<<sum<<endl;
    cout<<"Average is "<<ave<<endl;

    return 0;
}
