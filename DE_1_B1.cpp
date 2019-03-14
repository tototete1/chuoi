#include <iostream>
#include <cstring>
using namespace std;
bool check(char x)
{
    for (int i=0;i<=9;i++) if ((x-48)==i) return true;
    return false;
}
int n,i,d=0;
char s[257];
int main()
{
    cin.getline(s,256);
    n=strlen(s);
    for (i=0;i<n;i++)
    {
        if (check(s[i]))
        {
            d=d+s[i]-48;
        }
    }
    cout <<d;
    return 0;
}
