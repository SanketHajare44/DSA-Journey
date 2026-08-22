// 7. - Check Given number is amstrong or not

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int iNo = 0;
    int iNo1 = 0;
    int iCount = 0;
    int sum = 0;

    cout<<"Enter the number : "; 
    cin>>iNo;
    iNo1 = iNo;


    iCount = log10(iNo) + 1;

    while(iNo1 != 0)
    {
        sum = sum + pow((iNo1 % 10), iCount);
        iNo1 = iNo1/10;
    }

    if(iNo == sum)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }

    return 0;
}