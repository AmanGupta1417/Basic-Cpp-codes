//-------Nested If ----//

//----Max of 3 Numbers ----//

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter Three Numbers:";
    cin>>a>>b>>c;
    if(a>b&&a>c)
    {
        cout<<"A is greater";
    }
    else
    {
        if(b>c)
        {
            cout<<"B is greater";
        }
        else{
            cout<<"C is greater";
        }
    }
    return 0;
}