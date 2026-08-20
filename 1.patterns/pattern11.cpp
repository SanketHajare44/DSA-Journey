#include <iostream>
using namespace std;

class pattern{
    public:
        void PrintPattern(int n)
        {
            for(int i = 0; i < n; i++)
            {
                int start = 1;

                if(i % 2 == 0)
                {
                    start = 0;
                }

                for(int j = 0; j <= i; j++)
                {
                    cout<<start<<" ";

                    start = !start;
                }

                cout<<endl;
            }
        }
};

int main(){

    int iNo = 5;

    pattern pt;

    pt.PrintPattern(iNo);

    return 0;
}