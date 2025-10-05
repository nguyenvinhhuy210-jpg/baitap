#include <iostream>
using namespace std;
#include <math.h>
int main(){

    int n;
    double S=0;

    cout <<"hay nhap n: ";
    cin >>  n;
    if (n<0)
        {
        cout<<"vui long nhap so nguyen duong";
        }
    else{
        for (int i = 0; i <= n; i++)
            {
             S = S+(double)(2*i+1)/(2*i+2);
            }
        cout << S<< endl;
    }
    return 0;
}


