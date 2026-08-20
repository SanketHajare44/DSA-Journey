#include <iostream>
using namespace std;

class pattern{
    public:
        void PrintPattern(int n)
        {
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j <= i; j++)
                {
                    cout<<"*"<<" ";
                }

                cout<<"\n";
            }
        }
};

int main(){

    int iNo = 4;

    pattern pt;

    pt.PrintPattern(iNo);

    return 0;
}