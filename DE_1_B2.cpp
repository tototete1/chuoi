#include <iostream>
#include <cstring>
using namespace std;
char s[257];
long long n,i;
int main()
{
    cin.getline(s,256);
    n=strlen(s);
    i=0;
    while (i<n)
    {
        while (s[i]!=' ' && i<n)
        {
            cout <<s[i];
            i++;
        }
        while (s[i]==' ' && i<n)
        {
            if (i!=0 && s[i-1]!=' ') cout <<" ";
            i++;
        }
    }
    return 0;
}
