// 1. - Count All Digits of a number

#include <iostream>
using namespace std;

int main()
{
    int iNo = 0;
    int iCnt = 0;

    cout<<"Enter the Number : ";
    cin>>iNo;

    if(iNo == 0)
    {
        iCnt = 1;
    }

    while(iNo != 0)
    {
        iCnt++;
        iNo = iNo / 10;
    }

    cout<<"Total number of digit is : "<<iCnt<<endl;
    return 0;
}