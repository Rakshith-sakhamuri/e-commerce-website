#include<iostream>
#include<climits>
using namespace std;

int rod_cut(int price[],int n){
    if(n==0){
        return 0;
    }
    int max_val=INT_MIN;
    for(int i = 1 ; i <=n ; i++){
       // int cost=0;
        int cost=price[i-1]+rod_cut(price,n-i);
        if(cost > max_val){
            max_val=cost;
        }
    }
    return max_val;
}

int main(){
  //  int len[]={1,2,3,4,5,6,7,8,9,10};
    int price[]={1,5,8,10,21,34,56,78,88,90};
    cout<<"max profit:"<<rod_cut(price,4);
    return 0;

}