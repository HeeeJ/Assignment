 #include<iostream>
using namespace std;
int main()
{
    int feet;
    double inches,meter;

    cin>>meter;

    feet=(meter/0.0254)/12;
    inches=(meter/0.0254)-feet*12;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<feet<<" feet "<<inches<<" inches";

    return 0;
}
