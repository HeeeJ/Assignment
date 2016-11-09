#include <iostream>
using namespace std;

string name_instructor,name_my,food,adj,color,animal,number;
int main()
{
    cin>>name_instructor;
    cin>>name_my;
    cin>>food;
    cin>>number;
    cin>>adj;
    cin>>color;
    cin>>animal;
    cout<<"Dear Instructor "<<name_instructor<<","<<endl<<endl;
    cout<<"I am sorry that I am unable to turn in my homework at this time. First,"<<endl;
    cout<<"I ate a rotten "<<food<<", which made me turn "<<color<<" and extremely ill. I"<<endl;
    cout<<"came down with a fever of "<<number<<". Next, my "<<adj<<" pet"<<endl;
    cout<<animal<<" must have smelled the remains of the "<<food<<" on my homework,"<<endl;
    cout<<"because he ate it. I am currently rewriting my homework and hope you"<<endl;
    cout<<"will accept it late."<<endl<<endl;
    cout<<"Sincerely,"<<endl;
    cout<<name_my;

    return 0;

}
