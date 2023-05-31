#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin >> n ;
        int arr[n];
        int even=0,odd=0;
        for(int  i = 0 ; i < n ; i++ ){
            cin>>arr[i];
            if(arr[i]%2 == 1){
                odd++;
            }
            else
            even++;
        }
        if(odd == even && odd%2 == 0){
            cout<< odd/2 <<endl;
           // cout<<"!!!!!!!!!!"<<endl;
        }
        else if(odd == even && odd%2 != 0){
            cout<<even<<endl;
       //     cout<<"222222222"<<endl;
        }
        else if(even > odd && odd%2==0 ){
            cout<<(odd/2)<<endl;
            continue;
        } 
        else if(odd>even){
          //  int ctr1=0,ctr2=0;
           // ctr1 = odd ;
            cout<<odd<<endl;
          //  cout<<"********"<<endl;
            continue;
        }
        else{
            cout<<odd<<endl;
        //    cout<<"$$$$$$$$$"<<endl;
        }


    }
    return 0 ;
}
