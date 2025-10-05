#include <iostream>
using namespace std;
#include <math.h>
int main(){

    int n;
    int x;
    double S=0;

    cout <<"hay nhap n: ";
    cin >>  n;
    cout <<"hay nhap x: ";
    cin >> x;
    if (n<0)
        {
        cout<<"vui long nhap so nguyen duong";
        }
    else{
        S = pow(x, n);
        cout << S<< endl;
    }
    return 0;
}


