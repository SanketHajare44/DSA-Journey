#include <iostream>
using namespace std;

class pattern{
    private:
        void PrintPattern7(int n)
        {
            for(int i = 1; i <= n; i++)
            {
                for(int j = 1; j <= n - i; j++)
                {
                    cout<<" "<<" ";
                }

                for(int j = 1; j <= (2*i-1); j++)
                {
                    cout<<"*"<<" ";
                }

                for(int j = 1; j <= n - i; j++)
                {
                    cout<<" "<<" ";
                }

                cout<<"\n";
            }
        }

        void PrintPattern8(int n)
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
    
    public:
        void PrintPattern(int n)
        {
            PrintPattern7(n);
            PrintPattern8(n);
        }


};

int main(){

    int iNo = 5;

    pattern pt;

    pt.PrintPattern(iNo);

    return 0;
}