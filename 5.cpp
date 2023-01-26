//------ Nature of Roots -----//

#include<iostream>
using namespace std;
int main(){
    float a,b,c,r1,r2,d;
    cout<<"Enter Three Numbers :"; 
    cin>>a>>b>>c;
    d= b*b-4*a*c;
    if(d==0)
    {
        cout<<"Roots are real and equal";
        cout<<endl<<(-b/(2*a));
    }
    else if(d>0)
    {
        cout<<"Roots are real and unequal";
        
    }
    else 
    {
        cout<<"Roots are Imaginary";
    }
    return 0;
}