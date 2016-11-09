#include<iostream>
using namespace std;
int main()
{

    string empolyee_num;
    int num_people;
    double gross_pay,hours,FICA,FIT,flabber,net_pay,sta;
    const double regular_pay=16.78,FICA_rate=0.06,FIT_rate=0.14,state_rate=0.05;
    cin>>empolyee_num;
    cin>>hours;
    cin>>num_people;

    if (hours>40)
        gross_pay=regular_pay*40+1.5*regular_pay*(hours-40);
    else
        gross_pay=regular_pay*hours;

    FICA=gross_pay*FICA_rate;
    FIT=gross_pay*FIT_rate;
    sta=gross_pay*state_rate;
   {
    if(num_people<=2)
        flabber= 10.00;
    else
        flabber= 15.00;

   }
   net_pay=gross_pay-FICA-FIT-flabber-sta;

   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);


   cout<<"Employee number: "<<empolyee_num<<endl;
   cout<<"hours worked: "<<hours<<endl;
   cout<<"regular pay rate: "<<regular_pay<<endl;
   cout<<"gross pay: "<<gross_pay<<endl;
   cout<<"FICA tax withheld: "<<FICA<<endl;
   cout<<"Federal Income Tax withheld: "<<FIT<<endl;
   cout<<"State Tax withheld: "<<sta<<endl;
   cout<<"Flabberqaster's Union Dues withheld: "<<flabber<<endl;
   cout<<"Net pay: "<<net_pay<<endl;

   return 0;

}
