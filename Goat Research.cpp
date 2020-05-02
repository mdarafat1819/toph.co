#include <bits/stdc++.h>

using namespace std;

int count_a(string str)
{
    int cnt = 0;
    for(int i = 0; str[i] != '\0'; i++)
        if(str[i] == 'a') cnt++;
    return cnt;
}
string a_remover(string str)
{
    string res;
    for(int i = 0; i < str.length() - 1; i ++)
        res.push_back(str[i]);
    return res;
}
int main()
{
    int n, mx = 0, cnt = 0;
    cin>>n;
    string str[n], input;
    for(int i = 0; i < n; i++)
    {
        cin>>input;
        cnt = count_a(input);
        if(cnt % 2)
        {
            if(cnt > 1) input = a_remover(input);
            else input.push_back('a');
            str[i] = input;
        }
        else str[i] = input;
        int len = str[i].length();
            mx = max(mx, len);
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < (mx - str[i].length()) / 2; j++)
            cout<<" ";
        cout<<str[i]<<endl;
    }
    return 0;
}
