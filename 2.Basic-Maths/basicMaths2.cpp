// 2. - Count number of Odd  digits in a number

#include <iostream>
using namespace std;

int main()
{
    int iNo = 0;
    int iCnt = 0;
    int num = 0;

    cout<<"Enter the Number : ";
    cin>>iNo;

    while(iNo != 0)
    {
        num = iNo % 10;

        if(num % 2 != 0)
        {
            iCnt++;
        }
        
        iNo = iNo / 10;
    }

    cout<<"Total number of odd digit is : "<<iCnt<<endl;
    return 0;
}