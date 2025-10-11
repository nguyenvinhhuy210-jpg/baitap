#include <iostream>
using namespace std;
#include <math.h>

int giai_thua(int a)
{
    int g=1;
    for (int k=1; k<=a;k++)
        {
             g*=k;

        }
    return g;
}
int main(){

    int n;
    double S=0.0;
    int x;
    cout<<"hay nhap x: ";
    cin>>x;
    cout <<"hay nhap n: ";
    cin >>  n;
    if (n<0)
        {
        cout<<"vui long nhap so nguyen duong";
        }
    else{
       for (int i = 1; i <= n; i++)
            {
             S = S+(pow(x,i)/giai_thua(i)) ;
            }
        cout << S<< endl;
    }
    return 0;
}



