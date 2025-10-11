#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cont;
    cout<<"nhap 1 de tiep tuc"<<endl<<"nhap 0 de thoat"<<endl;
    cin>>cont;
    while(cont==1)
    {
        int n;
        int dem=0;
        cout <<"hay nhap so nguyen duong n: " ;
        cin >> n;
        vector<int> uoc;
        int tong=0;
        string g;

        for (int i=1; i<= n; i++)
            {
                if(n % i ==0)
                    {
                        uoc.push_back(i);
                    }

            }

        if (uoc.size()>2)
            {
                g = "day la hop so";
            }
        else if (uoc.size()==1)
            {
                g= "day khong phai la so nguyen to";
            }
        else
            {
                g= "day la so nguyen to";
            }
        cout<<g<<endl;
        cout<<"nhap 1 de tiep tuc"<<endl<<"nhap 0 de thoat"<<endl;
        cin>>cont;
    }

}


