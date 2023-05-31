#include<iostream>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while (tc--)
    {
        string str;
        int n=str.size();
        int odd=0,even=0;
        cin>>str;
        for(int i=0;i<n;i++){
            
            if(str[i]%2 == 0){
                even++;
            }
            else odd++;
        }

        if((even%2 == 0 && even>2)|| (odd%2 ==0 && odd>2)){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }
    
}