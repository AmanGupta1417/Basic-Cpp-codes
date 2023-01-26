#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter Two Number :";
    cin>>a>>b;
    if(b==0)
    {
        cout<<"Divsion by Zero "<<endl;
    }
    else
    {
        c=a/b;
        cout<<c<<endl;
    }
    return 0 ;
}