#include <iostream>

using  namespace std;
typedef long long int lli;

lli distance(lli x1, lli y1, lli x2, lli y2)
{
    return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}

int main()
{
    int t;
    cin>>t;
    for(int i = 1; i <= t; i++)
    {
        lli n, res = 0;
        cin>>n;
        int x[n], y[n];
        for(int j = 0; j < n; j++) cin>>x[j]>>y[j];
        for(int j = 0; j < n - 1; j++)
        {
            for(int k = j + 1; k < n; k++)
                    res = max(res, distance(x[j], y[j], x[k], y[k]));
        }
        cout<<"Case "<<i<<": "<<res<<endl;
    }
    return 0;
}
