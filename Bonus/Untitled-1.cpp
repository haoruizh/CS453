#include <cmath>
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int factorial(int n)
{
    
}


int main()
{
    float temp;
    for (int q=6;q <= INT_MAX;q++)
    {
        for (int p=8; p <= INT_MAX;p++)
        {
            temp = (pow(2,p)/tgamma(q+1));

            if (temp > 1.000000000 && temp < 1.000001)
            {
                cout << p << endl;
                cout << q << endl;
            }
        }
    }
    cout << "END"<<endl;
    return 0;
}