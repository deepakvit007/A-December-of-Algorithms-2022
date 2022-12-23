#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin>>n;

    while(n--)
    {
        vector<string>v;

        int n;

        cin>>n;

        for (int i = 0; i < n; i++)
        {
            string s;
            cin>>s;

            v.push_back(s);
        }
        
        string ascii = "";

        for (int i = 0; i < v.size(); i++)
        {
            char ch =stoul(v[i],nullptr,16);

            ascii+=ch;
        }
        cout<<ascii<<endl;


    }
    
    return 0;
}