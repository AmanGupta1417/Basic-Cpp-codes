// ---- check the working hours ----//

#include<iostream>
using namespace std;
int main(){
    int hours;
    cout<<"Enter Hour :";
    cin>>hours;
    if(hours>=9&&hours<=18)
    {
        cout<<"Working Hour";
    }
    else{
        cout<<"Not Working Hour";
    }
    return 0; 
}