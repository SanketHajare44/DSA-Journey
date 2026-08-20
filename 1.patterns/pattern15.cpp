#include <iostream>
using namespace std;

class pattern{
    public:
        void PrintPattern(int n)
        {
            // for(int i = n; i >= 1; i--)
            // {
            //     char c = 'A';
            //     for(int j = 1; j <= i ; j++)
            //     {
            //         cout<< c <<" ";
            //         c++;
            //     }
            //     cout<<"\n";
            // }

            for(int i = 0; i < n; i++)
            {
                for(char ch = 'A'; ch <'A'+(n-i); ch++)
                {
                    cout<< ch <<" ";
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