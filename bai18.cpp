#include <iostream>
using namespace std;
#include <math.h>

int giai_thua(int a, int c)
{
    int g=1;
    int h=2*c;

    for (int k=1; k<=h;k++)
        {
             g=g*k;

        }
    return g;
}
int main(){

    int n;
    double S=1.0;
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
             S = S+(pow(x,2*i)/giai_thua(i, n)) ;
            }
        cout << S<< endl;
    }
    return 0;
}



