#include<iostream>
using namespace std;
int main()
{
    cout << "Multiple catch statement!" << endl;
    int x;
    cout << "enter an char or no:" << endl;
    cin>>x;
try {

        if(x>0)
        {
            throw (x);
        }
        else {
            throw ('x');
        }
    }
    catch(int no)
    {
        cout << "caught an integer" << endl;
    }
    catch(char ch)
    {
        cout << "caught an char" << endl;
    }


    return 0;
}