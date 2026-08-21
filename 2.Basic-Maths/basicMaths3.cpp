// 3. - Reverse a number

#include <iostream>
using namespace std;

int main()
{
    int iNo = 0;
    int ReverseNum = 0;
    int num = 1;

    cout<<"Enter the Number : ";
    cin>>iNo;

    while(iNo != 0)
    {
        num = iNo % 10;

        ReverseNum = (ReverseNum * 10) + num;

        iNo = iNo / 10;
    }

    cout<<"Reverse number  is : "<<ReverseNum<<endl;
    return 0;
}