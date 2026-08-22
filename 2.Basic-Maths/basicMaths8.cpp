// 8. - Check given number is perfect or not

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int iNo = 0;
    int iNo1 = 0;
    int sum = 0;

    cout<<"Enter the number : "; 
    cin>>iNo;

    iNo1 = iNo;

    int i = 1;

    while(i <= iNo1/2)
    {
        if(iNo1 % i == 0)
        {
            sum = sum + i;
        }
        i++;
    }

    if(iNo == sum)
    {
        cout<<"Given number is Perfect Number"<<endl;
    }
    else
    {
        cout<<"Given number is Perfect Number"<<endl;
    }

    return 0;
}