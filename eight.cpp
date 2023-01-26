#include<iostream>
using namespace std;
int main()
{
    float v,u,a,s;
    cout<<"enter v,u,a";
    cin>>v>>u>>a;
    s= (v*v-u*u)/(2*a);
    cout<<"speed is"<<s;
    return 0;
}