#include <bits/stdc++.h>
using namespace std;

void reverseString(string &s)
{
    int l = s.size();
    for(int i=0; i<l/2; i++){
        swap(s[i], s[l-i-1]);
    }
}

int main()
{
    string str = "hello";
    cout<<str<<endl;
    reverseString(str);
    cout<<str<< endl;
    return 0;
}