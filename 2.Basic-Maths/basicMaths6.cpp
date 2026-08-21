// 6. - Fctorial of given number

#include <iostream>
using namespace std;

int main(){

    int iNo1 = 0;
    int iFactorial = 1;

    cout<<"Enter the number : "; 
    cin>>iNo1;

    for(int i = 1; i <= iNo1; i++)
    {
        iFactorial = iFactorial * i;
    }

    cout<<"Factorial is : "<<iFactorial<<endl;

    return 0;
}