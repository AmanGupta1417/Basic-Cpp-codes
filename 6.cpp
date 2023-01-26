//-------Display Grads-------//
#include<iostream>
using namespace std;
int main()
{
    float avg;
    int m1,m2,m3,T;
    cout<<"Enter three nummbers :";
    cin>>m1>>m2>>m3;
    T = m1+m2+m3;
    avg = T/3.0;
    cout<<" Avg is : "<<avg<<endl;
    if(avg>=60){

        cout<<"A grade";
    }
    else if (avg>=35&&avg<60)
    {
        cout<<"B grade";
    }
    else{

        cout<<"c grade";
    }
    return 0;
}