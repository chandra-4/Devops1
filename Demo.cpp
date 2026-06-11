#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    int age = 17;

    try{
        
        if(age >= 18)
        {
            cout << "Eligible for vote";
        }
        else
        {
            throw age;
        }
    }
    catch(int a)
    {
        cout << "Not Eligible for vote";
    }

    return 0;
}