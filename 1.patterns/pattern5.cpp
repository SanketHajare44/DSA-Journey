#include <iostream>
using namespace std;

class pattern{
    public:
        void PrintPattern(int n)
        {
            // 1st implimention

            // for(int i = n; i > 0; i--)
            // {
            //     for(int j = 1; j <= i; j++)
            //     {
            //         cout<< "*" <<" ";
            //     }
            //     cout<<"\n";
            // }

            // 2nd implimentation

            for(int i = 1; i <= n; i++)
            {
                for(int j = 1; j <= n-i+1; j++)
                {
                    cout<<" * "<< " ";
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