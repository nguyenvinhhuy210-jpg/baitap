#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int dem=0;
    cout <<"hay nhap so nguyen duong n: " ;
    cin >> n;
    vector<int> uoc;
    int uoc_lon_nhat;


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


    for(int c=uoc.size()-1;c>=0;c--)
        {
            if(uoc[c]%2!=0)
                {
                    uoc_lon_nhat = uoc[c];
                    break;
                }
        }
    cout<<"uoc le lon nhat cua n la: "<<uoc_lon_nhat;
}


