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

    int dem=0;
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
            if(uoc[a]%2==0)
                {
                    dem += 1;
                }

            cout<<uoc[a]<<",";
        }
        cout<< "so uoc chan cua " <<n<<" la: "<<dem;
}

