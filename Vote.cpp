#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter your age";
    cin>>a;
    if(a>=18)
    {
        cout<<"You are eligible to vote";
    }
    else
    {
        cout<<"You are not eligible to vote";
    }
    return 0;
}
