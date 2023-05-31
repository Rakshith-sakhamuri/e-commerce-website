#include <iostream>
#include<string>
using namespace std;


int main() {
    string str;
    cin>>str;
    char arr[str.length()],brr[str.length()],crr[str.length()],drr[str.length()],err[str.length()],frr[str.length()];
    int a=0,b=0,c=0,d=0,e=0,f=0;
    for(int i=0;i<str.length();i++){
        arr[i]=str[i];
    }
    for(int i=0;i<str.length();i++){
        if(str[i]>47 && str[i]<58 ){
            brr[i]=str[i];
            b++;
        }
        else if(( str[i]>64 && str[i]<91) || (str[i]>96 && str[i]<123)){
            crr[i]=str[i];
            c++;
        }
        else{
            arr[i]=str[i];
            a++;
        }
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] =='o' || str[i]=='O' || str[i] == 'u' || str[i] == 'U'){
            drr[i]=str[i];
            d++;
        }
        if((str[i]>64 && str[i]<91 )){
            err[i]=str[i];
            e++;
        }
        if((str[i]<123 && str[i]>96 )){
            frr[i]=str[i];
            f++;
        }
    }
    for(int i=0;i<a;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<b;i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<c;i++){
        cout<<crr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<c;i++){
        cout<<drr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<c;i++){
        cout<<err[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<c;i++){
        cout<<frr[i]<<" ";
    }
	return 0;
}