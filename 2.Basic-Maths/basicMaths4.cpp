// 3. - Check number is palimdrom or not

#include <iostream>
using namespace std;

int main()
{
    int iNo = 0;
    int iNo1 = 0;
    int ReverseNum = 0;
    int num = 1;

    cout<<"Enter the Number : ";
    cin>>iNo;
    iNo1 = iNo;

    while(iNo != 0)
    {
        num = iNo % 10;

        ReverseNum = (ReverseNum * 10) + num;

        iNo = iNo / 10;
    }

    if(ReverseNum == iNo1)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }

    return 0;
}