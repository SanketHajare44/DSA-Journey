#include <iostream>
using namespace std;

class pattern{
    private:
        void PrintPattern2(int n)
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

        void PrintPattern5(int n)
        {
            for(int i = 2; i <= n; i++)
            {
                for(int j = 1; j <= n-i+1; j++)
                {
                    cout<<"*"<< " ";
                }

                cout<<"\n";
            }
        }

    public:
        void PrintPattern(int n)
        {
            PrintPattern2(n);
            PrintPattern5(n);
        }
};

int main(){

    int iNo = 5;

    pattern pt;

    pt.PrintPattern(iNo);

    return 0;
}