#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int dem=0;
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
            if(uoc[a]%2==0)
                {
                    dem += 1;
                }
            cout<<uoc[a]<<",";
        }
    for(int c =0;c<uoc.size()-1; c++)
        {
            tong += uoc[c];
        }
    if(tong == n)
        {
            cout<<"day la so hoan hao";

        }
    else
        {
            cout<<"day khong phai so hoan hao";
        }
}


