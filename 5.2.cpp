#include <iostream>
void judge1(int q);


int main()
{
    using namespace std;

    int x;
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0;
    while (1)//ÎÞÏÞÑ­»·
    {

        cin>>x;

        if(x==-1)
        {
            break;
        }
        if((x>=0)&&(x<=9))
        {
            a++;
        }
        if((x>=10)&&(x<=19))
        {
            b++;
        }
        if((x>=20)&&(x<=29))
        {
            c++;
        }
        if((x>=30)&&(x<=39))
        {
            d++;

        }
        if((x>=40)&&(x<=49))
        {
            e++;

        }
        if((x>=50)&&(x<=59))
        {
            f++;
        }
        if((x>=60)&&(x<=69))
        {
            g++;
        }
        if((x>=70)&&(x<=79))
        {
            h++;
        }
        if((x>=80)&&(x<=89))
        {
            i++;
        }
        if((x>=90)&&(x<=99))
        {
            j++;
        }
        if(x==100)
        {
            k++;
        }

    }
    cout<<"  0: ";judge1(a);cout<<"\n";
    cout<<" 10: ";judge1(b);cout<<"\n";
    cout<<" 20: ";judge1(c);cout<<"\n";
    cout<<" 30: ";judge1(d);cout<<"\n";
    cout<<" 40: ";judge1(e);cout<<"\n";
    cout<<" 50: ";judge1(f);cout<<"\n";
    cout<<" 60: ";judge1(g);cout<<"\n";
    cout<<" 70: ";judge1(h);cout<<"\n";
    cout<<" 80: ";judge1(i);cout<<"\n";
    cout<<" 90: ";judge1(j);cout<<"\n";
    cout<<"100: ";judge1(k);cout<<"\n";
    return 0;
}

void judge1(int q)

{
    using namespace std;
    for(;q>0;q--)
    {
        cout<<'*';
    }
}
