#include <iostream>
using namespace std;

class pattern{
    public:
        void PrintPattern(int n)
        {
            for(int i = n; i >= 1; i--)
            {
                for(int j = 1; j <= n-i; j++)
                {
                    cout<<" "<<" ";
                }

                for(int j = 0; j < (2*i-1); j++)
                {
                    cout<<"*"<<" ";
                }

                for(int j = 1; j <= n-i; j++)
                {
                    cout<<" "<<" ";
                }

                cout<<"\n";
            }
        }
};

int main(){

    int iNo = 5;

    pattern pt;

    pt.PrintPattern(iNo);

    return 0;
}