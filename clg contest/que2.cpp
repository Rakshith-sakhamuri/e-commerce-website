#include<bits/stdc++.h>
using namespace std;


int main() {

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        set<char> a;
        for(int i=0;i<s.size();i++){
            a.insert(s[i]);
        }
        cout<<a.size()<<endl;
    }
    return 0;
}