#include<iostream>
using namespace std;

bool judge(int a,int b);

int main()
{
    int bb,bbb;
    cin>>bbb>>bb;

    if (judge(bbb,bb)==1)
        cout<<"true";
    else
        cout<<"false";

    return 0;
}
bool judge(int a,int b)
{
    int i=a/10;
    int c=a%10;
    if (c==b)
    {
        return true;
    }
    if(c!=b)
    {
        while(i>0)
        {
            c=i%10;
            i=i/10;
            if (c==b)
            {
                return true;
            }
        }
    return false;
    }
    if(i==0&&c==b)
        {
            return true;
        }

    return false;
}
