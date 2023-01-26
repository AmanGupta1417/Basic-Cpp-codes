#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,r1,r2,d;
    cout<<"Enter a, b, c";
    cin>>a>>b>>c;
    d = sqrt(b*b-4*a*c);
    if(d>0){
    r1= (-b+(d))/(2*a);
    r2 =(-b-(d))/(2*a);
    cout<<"Roots are"<<r1<<""<<r2;
    }
    else {
        cout<<"the roots are not possible";
    }
    
    return 0;

}