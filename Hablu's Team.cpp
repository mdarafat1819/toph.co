#include <bits/stdc++.h>

using namespace std;

int b_search(int ara[], int l, int r, int need)
{
    int cnt = 0, mid = l + (r - l) / 2;
    if(l > r) return cnt;
    if(ara[mid] <= need) cnt += (mid - l + 1);
    if(ara[mid] <= need) cnt += b_search(ara, mid + 1, r, need);
    if(ara[mid] > need) cnt += b_search(ara, l, mid - 1, need);
    return cnt;
}
int main()
{
    long long int ans = 0, n, k;
    cin>>n>>k;
    int ara[n];
    for(int i = 0; i < n; i++) cin>>ara[i];
    sort(ara, ara + n);
    for(int i = 0; i < n; i++)
        if(ara[i] < k) ans += b_search(ara, i+1, n-1, k-ara[i]-1);
   cout<<ans<<endl;
    return 0;
}
