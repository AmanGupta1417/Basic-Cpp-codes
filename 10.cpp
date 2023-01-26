//-----Take a day number and then display a day name-------//

#include<iostream>
using namespace std;
int main()
{
    int day;
    cout<<"Enter day no :";
    cin>>day;
    switch(day)
    {
    case 1 :
        cout<<"monday"; 
        break;
    case 2 :
        cout<<"tuesday"; 
        break;
    default:
        cout<<"Invalid";
        break;
    }
    return 0;
}

//------------Basic points --------//

// • Switch is a branch and control statement
// • Switch can have 0 or more cases
// • Each case is defined with a label
// • Depending on the value of expression in switch corresponding case black is executed
// • Is a case block is not available then default block is executed
// • Default block is optional
// • Every case block must terminate with break
// • If breaks are not mentioned then cases will fall thru
// • Switch is used for menu-driven programs

//---------------------------------------------//