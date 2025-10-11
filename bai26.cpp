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
    int tich=1;
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
            if(uoc[a]%2!=0)
                {
                    tich = tich * uoc[a];
                }

            cout<<uoc[a]<<",";
        }
        cout<< "tich cua tat ca cac uoc chan cua " <<n<<" la: "<<tich;
}

