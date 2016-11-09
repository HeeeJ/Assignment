#include<iostream>
using namespace std;
bool judge(int a,int n);
//Êä³öÖÊÊý

int main()
{

    int initail_value,n;

    cin>>initail_value;
    if (initail_value>=2)
    {
        cout<<"2, ";
    }
    for (int n=3; n<=initail_value; n++)
    {
        int a=1;
        if (judge(n,a)==1)

            cout<<n<<", ";

    }



    return 0;
}
bool judge(int n,int a)
{

    for( a=2; a<n; a++)
    {
        if (n%a==0)
            return false;
    }

    return true;

}

