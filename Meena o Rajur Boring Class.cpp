#include <bits/stdc++.h>
#define PI 3.141593

using namespace std;

void fibo(long long int* ara)
{
    long long int term1 = 0, term2 = 1, temp;
    for(int i = 0; i <= 35; i++)
    {
        ara[i] = term1;
        temp = term2;
        term2 = term1 + term2;
        term1 = temp;
    }
    return;
}
int main()
{
    int t;
    cin>>t;
    long long int f[36];
    fibo(f);
    while(t--)
    {
        int n;
        double ans = 0;
        cin>>n;
        for(int i = 0; i <= n; i++)
            ans += ((f[i] * f[i]) * (4 - PI)) / 4;
        printf("%.2lf\n", ans);
    }
    return 0;
}
