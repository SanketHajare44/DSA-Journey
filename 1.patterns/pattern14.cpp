#include <iostream>
using namespace std;

class pattern{
    public:
        void PrintPattern(int n)
        {
            for(int i = 1; i <= n; i++)
            {
                char c = 'A';
                for(int j = 1; j <= i; j++)
                {
                    cout<< c <<" ";
                    c++;
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