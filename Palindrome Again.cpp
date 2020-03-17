#include <bits/stdc++.h>

using namespace std;

int wordToNumber(string word)
{
    if(word == "one") return 1;
    if(word == "two") return 2;
    if(word == "three") return 3;
    if(word == "four") return 4;
    if(word == "five") return 5;
    if(word == "six") return 6;
    if(word == "seven") return 7;
    if(word == "eight") return 8;
    if(word == "nine") return 9;
    if(word == "ten") return 10;
    if(word == "eleven") return 11;
    if(word == "twelve") return 12;
    if(word == "thirteen") return 13;
    if(word == "fourteen") return 14;
    if(word == "fifteen") return 15;
    if(word == "sixteen") return 16;
    if(word == "seventeen") return 17;
    if(word == "eighteen") return 18;
    if(word == "nineteen") return 19;
    if(word == "twenty") return 20;
    if(word == "thirty") return 30;
    if(word == "forty") return 40;
    if(word == "fifty") return 50;
    if(word == "sixty") return 60;
    if(word == "seventy") return 70;
    if(word == "eighty") return 80;
    if(word == "ninety") return 90;
}
string strRev(string str)
{
    int len = str.length();
    for(int i = 0; i < len / 2; i++)
        swap(str[i], str[len - 1 - i]);
    return str;
}
string decToBin(int num)
{
    string bin;
    while(num)
    {
        bin.push_back((num % 2) + '0');
        num /= 2;
    }
    bin  = strRev(bin);
    return bin;
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str, word, binary;
        getline(cin, str);
        int num = 0, sum = 0;
        for(int i = 0; i <= str.length(); i++)
        {
            if(str[i] == ' ' || str[i] == '\0')
            {
                if(word == "hundred")
                {
                    sum *= 100;
                    num += sum;
                    sum = 0;
                }
                else if(word == "thousand")
                {
                    sum *= 1000;
                    num += sum;
                    sum = 0;
                }
                else sum += wordToNumber(word);
                word.clear();
            }
            else word.push_back(str[i]);
        }
        num += sum;
        binary = decToBin(num);
        if(binary == strRev(binary)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
