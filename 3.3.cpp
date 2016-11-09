#include <iostream>
using namespace std;
int main()
{
    int month,day;

    cin>>month>>day;
    switch(month)
 {
    case(1):
         if (0<day&&day<20)
         {
             cout<<"Your Horoscope Sign is Capricorn"<<endl;
             cout<<"Compatible Signs are: Taurus, Virgo";
         }

         if (20<=day&&day<=31)
         {
             cout<<"Your Horoscope Sign is Aquarius"<<endl;
             cout<<"Compatible Signs are: Gemini, Libra";

         }
         break;
    case(2):
         if (0<day&&day<=18)
         {
             cout<<"Your Horoscope Sign is Aquarius"<<endl;
             cout<<"Compatible Signs are: Gemini, Libra";
         }
         if (18<day&&day<30)
         {
             cout<<"Your Horoscope Sign is Pisces"<<endl;
             cout<<"Compatible Signs are: Cancer, Scorpio";
         }
         break;
    case(3):
         if(0<day&&day<=20)
         {
             cout<<"Your Horoscope Sign is Pisces"<<endl;
             cout<<"Compatible Signs are: Cancer, Scorpio";
         }
         if(20<day&&day<=31)
         {
             cout<<"Your Horoscope Sign is Aries"<<endl;
             cout<<"Compatible Signs are: Leo, Sagittarius";
         }
         break;

     case (4):
         if(0<day&&day<=19)
         {
             cout<<"Your Horoscope Sign is Aries"<<endl;
             cout<<"Compatible Signs are: Leo, Sagittarius";
         }
         if(19<day&&day<=30)
         {
             cout<<"Your Horoscope Sign is Taurus"<<endl;
             cout<<"Compatible Signs are: Virgo, Capricorn";
         }
         break;

     case (5):
         if(0<day&&day<=20)
         {
             cout<<"Your Horoscope Sign is Taurus"<<endl;
             cout<<"Compatible Signs are: Virgo, Capricorn";
         }
         if(20<day&&day<=31)
         {
             cout<<"Your Horoscope Sign is Gemini"<<endl;
             cout<<"Compatible Signs are: Libra, Aquarius";
         }
         break;

     case(6):
        if(0<day&&day<=21)
        {
            cout<<"Your Horoscope Sign is Gemini"<<endl;
            cout<<"Compatible Signs are: Libra, Aquarius";
        }
        if(21<day&&day<=30)
        {
            cout<<"Your Horoscope Sign is Cancer"<<endl;
            cout<<"Compatible Signs are: Scorpio, Pisces";
        }
        break;

   case(7):
        if(0<day&&day<=22)
        {
            cout<<"Your Horoscope Sign is Cancer"<<endl;
            cout<<"Compatible Signs are: Scorpio, Pisces";
        }
        if(22<day&&day<=31)
        {
            cout<<"Your Horoscope Sign is Leo"<<endl;
            cout<<"Compatible Signs are: Sagittarius, Aries";
        }
     case(8):
        if(0<day&&day<=22)
        {
            cout<<"Your Horoscope Sign is Leo"<<endl;
            cout<<"Compatible Signs are: Sagittarius, Aries";

        }
        if(22<day&&day<=31)
        {
            cout<<"Your Horoscope Sign is Virgo"<<endl;
            cout<<"Compatible Signs are: Capricorn, Taurus";
        }
        break;

    case(9):
        if(0<day&&day<=22)
        {
            cout<<"Your Horoscope Sign is Virgo"<<endl;
            cout<<"Compatible Signs are: Capricorn, Taurus";
        }
        if(22<day&&day<=30)
        {
            cout<<"Your Horoscope Sign is Libra"<<endl;
            cout<<"Compatible Signs are: Aquarius, Gemini";
        }
        break;

    case(10):
        if(0<day&&day<=22)
        {
            cout<<"Your Horoscope Sign is Libra"<<endl;
            cout<<"Compatible Signs are: Aquarius, Gemini";
        }
        if(22<day&&day<=31)
        {
            cout<<"Your Horoscope Sign is Scorpio"<<endl;
            cout<<"Compatible Signs are: Pisces, Cancer";
        }
        break;

    case(11):
        if(0<day&&day<=21)
        {
            cout<<"Your Horoscope Sign is Scorpio"<<endl;
            cout<<"Compatible Signs are: Pisces, Cancer";
        }
        if(21<day&&day<=30)
        {
            cout<<"Your Horoscope Sign is Sagittarius"<<endl;
            cout<<"Compatible Signs are: Aries, Leo";
        }
        break;

    case(12):
        if(0<day&&day<=21)
        {
            cout<<"Your Horoscope Sign is Sagittarius"<<endl;
            cout<<"Compatible Signs are: Aries, Leo";
        }
        if(21<day&&day<=31)
        {
            cout<<"Your Horoscope Sign is Capricorn"<<endl;
            cout<<"Compatible Signs are: Taurus, Virgo";
        }

        break;
        default:
        break;
 }
    return 0;
}
