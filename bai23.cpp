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
    int tong=0;
    for (int i=1; i<= n; i++)
        {
            if(n % i ==0)
                {
                    uoc.push_back(i);
                }

        }
    cout<<"so uoc cua "<<n<<" la: " <<uoc.size();

}

