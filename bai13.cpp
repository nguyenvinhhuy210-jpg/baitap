
#include <iostream>
using namespace std;
#include <math.h>
int main(){

    int n;
    int S=0;
    int x;
    int z;

    cout <<"hay nhap n: ";
    cin >>  n;
    cout <<"hay nhap x: ";
    cin >> x;
    if (n<0)
        {
        cout<<"vui long nhap so nguyen duong";
        }
    else{
        for (int i = 1; i <= n; i++)
            {
             z = pow(x, 2*i);

             S = S + z ;
            }
        cout << S<< endl;
    }
    return 0;
}




