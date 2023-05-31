//#include <bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;


int main() {
    string str;
    cin>>str;
    int a=0,b=0,c=0,d=0,e=0,f=0,n=str.length();
    
    for(int i=0;i<n;i++){
        if(str[i]>47 && str[i]<58 ){
            b++;
        }
        else if(( str[i]>64 && str[i]<91) || (str[i]>96 && str[i]<123)){
            c++;
        }
        else{
            a++;
        }
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] =='o' || str[i]=='O' || str[i] == 'u' || str[i] == 'U'){
            d++;
        }
        if((str[i]>64 && str[i]<91 )){
            e++;
        }
        if((str[i]<123 && str[i]>96 )){
            f++;
        }
    }
    cout<<"special char:"<<a<<endl;
    cout<<"digits:"<<b<<endl;
    cout<<"alphabets:"<<c<<endl;
    cout<<"vowels:"<<d<<endl;
    cout<<"consonents:"<<(c-d)<<endl;
    cout<<"lower case:"<<e<<endl;
    cout<<"upper case:"<<f<<endl;
	return 0;
}