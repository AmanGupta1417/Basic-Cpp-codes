
//---- Calculate a Net Salary -----//
#include <iostream>
using namespace std;
int main()
{
    float basic;
    float percentallow;
    float percentDeduct;
    float netsalary;

    cout<<"Enter basic salary :";
    cin>>basic;
    cout<<"Enter percentallow :";
    cin>>percentallow;
    cout<<"Enter percentDeduct :";
    cin>>percentDeduct;

    netsalary = basic+basic*percentallow/100-basic*percentDeduct/100;

    cout<<"Net Salary is :"<<netsalary<<endl;





}