#include<iostream>
void check1(int a);
//1-99
void check2(int b);
//hundred.
void check3(int c);
//>999
int main()
{
    using namespace std;
    int x,consult_1,remainder_1,judge;

    cin>>x;
    consult_1 = x/1000;
    remainder_1 = x%1000;


    if(consult_1<1)
    {
        check3(x);
    }


    if(consult_1>=1)
    {
        check3(consult_1);

        judge=consult_1%100;
        if(judge!=0)
        {
            cout<<" thousand ";
        }
        else
        {
            cout<<"thousand ";
        }
        if(remainder_1!=0)
        {
            check3(remainder_1);
        }



    }
}
void check1(int a)
{
    using namespace std;

        if(a==0)
            cout<<"zero";
        if(a==1)
            cout<<"one";
        if(a==2)
            cout<<"two";
        if(a==3)
            cout<<"three";
        if(a==4)
            cout<<"four";
        if(a==5)
            cout<<"five";
        if(a==6)
            cout<<"six";
        if(a==7)
            cout<<"seven";
        if(a==8)
            cout<<"eight";
        if(a==9)
            cout<<"nine";
}

void check2(int b)
{
    using namespace std;
    if(b==10)
        cout<<"ten";
    if(b==11)
        cout<<"eleven";
    if(b==12)
        cout<<"twelve";
    if(b==13)
        cout<<"thirteen";
    if(b==14)
        cout<<"fourteen";
    if(b==15)
        cout<<"fifteen";
    if(b==16)
        cout<<"sixteen";
    if(b==17)
        cout<<"seventeen";
    if(b==18)
        cout<<"eighteen";
    if(b==19)
        cout<<"nineteen";
    if(b==20)
        cout<<"twenty";
    if(b==21)
        cout<<"twenty-one";
    if(b==22)
        cout<<"twenty-two";
    if(b==23)
        cout<<"twenty-three";
    if(b==24)
        cout<<"twenty-four";
    if(b==25)
        cout<<"twenty-five";
    if(b==26)
        cout<<"twenty-six";
    if(b==27)
        cout<<"twenty-seven";
    if(b==28)
        cout<<"twenty-eight";
    if(b==29)
        cout<<"twenty-nine";
    if(b==30)
        cout<<"thirty";
    if(b==31)
        cout<<"thirty-one";
    if(b==32)
        cout<<"thirty-two";
    if(b==33)
        cout<<"thirty-three";
    if(b==34)
        cout<<"thirty-four";
    if(b==35)
        cout<<"thirty-five";
    if(b==36)
        cout<<"thirty-six";
    if(b==37)
        cout<<"thirty-seven";
    if(b==38)
        cout<<"thirty-eight";
    if(b==39)
        cout<<"thirty-nine";
    if(b==40)
        cout<<"forty";
    if(b==41)
        cout<<"forty-one";
    if(b==42)
        cout<<"forty-two";
    if(b==43)
        cout<<"forty-three";
    if(b==44)
        cout<<"forty-four";
    if(b==45)
        cout<<"forty-five";
    if(b==46)
        cout<<"forty-six";
    if(b==47)
        cout<<"forty-seven";
    if(b==48)
        cout<<"forty-eight";
    if(b==49)
        cout<<"forty-nine";
    if(b==50)
        cout<<"fifty";
    if(b==51)
        cout<<"fifty-one";
    if(b==52)
        cout<<"fifty-two";
    if(b==53)
        cout<<"fifty-three";
    if(b==54)
        cout<<"fifty-four";
    if(b==55)
        cout<<"fifty-five";
    if(b==56)
        cout<<"fifty-six";
    if(b==57)
        cout<<"fifty-seven";
    if(b==58)
        cout<<"fifty-eight";
    if(b==59)
        cout<<"fifty-nine";
    if(b==60)
        cout<<"sixty";
    if(b==61)
        cout<<"sixty-one";
    if(b==62)
        cout<<"sixty-two";
    if(b==63)
        cout<<"sixty-three";
    if(b==64)
        cout<<"sixty-four";
    if(b==65)
        cout<<"sixty-five";
    if(b==66)
        cout<<"sixty-six";
    if(b==67)
        cout<<"sixty-seven";
    if(b==68)
        cout<<"sixty-eight";
    if(b==69)
        cout<<"sixty-nine";
    if(b==70)
        cout<<"seventy";
    if(b==71)
        cout<<"seventy-one";
    if(b==72)
        cout<<"seventy-two";
    if(b==73)
        cout<<"seventy-three";
    if(b==74)
        cout<<"seventy-four";
    if(b==75)
        cout<<"seventy-five";
    if(b==76)
        cout<<"seventy-six";
    if(b==77)
        cout<<"seventy-seven";
    if(b==78)
        cout<<"seventy-eight";
    if(b==79)
        cout<<"seventy-nine";
    if(b==80)
        cout<<"eighty";
    if(b==81)
        cout<<"eighty-one";
    if(b==82)
        cout<<"eighty-two";
    if(b==83)
        cout<<"eighty-three";
    if(b==84)
        cout<<"eighty-four";
    if(b==85)
        cout<<"eighty-five";
    if(b==86)
        cout<<"eighty-six";
    if(b==87)
        cout<<"eighty-seven";
    if(b==88)
        cout<<"eighty-eight";
    if(b==89)
        cout<<"eighty-nine";
    if(b==90)
        cout<<"ninety";
    if(b==91)
        cout<<"ninety-one";
    if(b==92)
        cout<<"ninety-two";
    if(b==93)
        cout<<"ninety-three";
    if(b==94)
        cout<<"ninety-four";
    if(b==95)
        cout<<"ninety-five";
    if(b==96)
        cout<<"ninety-six";
    if(b==97)
        cout<<"ninety-seven";
    if(b==98)
        cout<<"ninety-eight";
    if(b==99)
        cout<<"ninety-nine";
}

void check3(int c)
{
    using namespace std;
    int consult_2,remainder_1;

        consult_2=c/100;

        if(consult_2<1)
        {
            check1(c);
            check2(c);
        }
        if(consult_2>=1)
        {

            check1(consult_2);
            cout<<" hundred ";

            remainder_1=c%100;
            if(remainder_1!=0)
            {
            check1(remainder_1);

            check2(remainder_1);
            }


        }
}
