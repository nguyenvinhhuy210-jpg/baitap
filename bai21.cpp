#include <iostream>
#include<math.h>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout <<"hay nhap so nguyen duong n: " ;
    cin >> n;
    vector<int> uoc;
    int tong=0;
    for (int i=1; i<= n; i++)
        {
            if(n % i ==0)
                {
                    uoc.push_back(i);
                }

        }
    cout<<"uoc cua "<<n<<" la: ";
    for(int a=0; a<uoc.size();a++)
        {
            tong = tong + uoc[a];

            cout<<uoc[a]<<",";
        }
        cout<< "tong cua tat ca cac uoc cua " <<n<<" la: "<<tong;
}

