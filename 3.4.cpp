#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    double x,n,result,m=1,rt;
    int number;
    cin>>x>>n;
    while (m<=n)
  {
      result=1+(x/m);
    {
        for (int number=m-1; number>0; number--)

            result=1+(x/number)*result;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(16);

    cout<<result<<endl;
    }
    m++;
  }
    rt=exp(x);
    cout<<"exp("<<x<<") = "<<rt;

    return 0;
}

