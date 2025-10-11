#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"hay nhap so nguyen duong n: ";
    cin>>n;
    bool f = false;
    for (int a=0;a<=n;a++)
        {
            if(pow(a, 2)==n)
                {
                    f = true;
                    break;
                }
        }
    if(f)
    {
        cout<<"day la so chinh phuong";
    }
    else
    {
        cout<<"day khong phai la so chinh phuong";
    }

}
