#include <iostream>
using namespace std;

class pattern{
    public:
        void PrintPattern(int n)
        {
            char ch = 'A';

            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j <= i; j++)
                {
                    cout<< ch <<" ";
                }
                cout<<"\n";
                ch++;
            }
        }
};

int main(){

    int iNo = 5;

    pattern pt;

    pt.PrintPattern(iNo);

    return 0;
}