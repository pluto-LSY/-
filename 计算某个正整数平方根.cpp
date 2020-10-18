#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main()
{
    double a;
    double b;

    cout<<"please:"<<endl;
    cin>>a;
    b=sqrt(a);
    cout.setf(ios::fixed);
    for(int i=1;i<=6;i++)
    {
        cout.precision(i);
        cout<<b<<endl;
    }



}
