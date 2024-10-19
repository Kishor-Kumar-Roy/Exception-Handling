#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "enter value of a&b: ";
    cin>>a>>b;
    int result=a/(a-b);
    int s=a-b;
    try {
        if(s!=0)
        {
            cout << "result=" <<result<< endl;
        }
        else {
            throw(s);
        }
    }
    catch(int i)
    {
        cout << "can't be divided by zero" << endl;
    }
    return 0;
}