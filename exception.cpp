#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "enter value of a&b: ";
    cin>>a>>b;
    int result=a/(a-b);
    if(a>b){
    cout << "result="<<result << endl;
    }
    else if(a<b){
    cout << "result="<<result << endl;
    }
   else{
    cout << "result="<<result << endl;
    }

    return 0;
}