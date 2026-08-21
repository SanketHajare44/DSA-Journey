// 5. - Return the largest digit grom the given number
#include <iostream>
using namespace std;

int main(){

    int iNo1 = 0, iNo2 = 0;
    int MaxNum = 0;
    cout<<"Enter the number : "; 
    cin>>iNo1;

    while(iNo1 != 0)
    {
        iNo2 = iNo1 % 10;

        if(iNo2 > MaxNum)
        {
            MaxNum = iNo2;
        }
        iNo1 = iNo1 / 10;

    }

    cout<<"Largest number is : "<<MaxNum;

    return 0;
}