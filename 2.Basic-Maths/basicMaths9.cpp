// 9. - Find the GCD of two numbers

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int iNo2 = 0;
    int iNo1 = 0;
    int largest = 1;

    cout<<"Enter the number : "<<endl; 
    cin>>iNo1;
    cin>>iNo2;

    for(int i = 2; i < min(iNo1, iNo2); i++)
    {
        if((iNo1 % i == 0)&&(iNo2 % i == 0))
        {
            largest = i;
        }
    }
    
    cout<<"GCD of two number is :"<<largest<<endl;

    return 0;
}