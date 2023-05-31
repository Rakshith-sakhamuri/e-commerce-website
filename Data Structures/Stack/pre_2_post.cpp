#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

int pref(char c ){
    if(c=='^'){
        return 3 ;
    }
    else if (c=='/' || c == '*'){
        return 2 ;
    }
    else if( c =='+' || c =='_'){
        return 1 ;
    }
    else
    return -1 ;
}

void infix_2_post(string s){
    stack<char> str ;
    string res ;
    int n = str.length() ;
    for(int i = 0 ; i < n ; i++){
        int c = str[i];
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            res += c;

        else if (c == '('){
            str.pop() ;
        }
        else if ( c == ')'){
            while(str.top()!='('){
                res = res + str.pop() ;
                str.pop() ;
            }
            str.push() ;
        }
        else{
            while(!str.empty() && pref(s[i])<=pref(str.top())){
                res += str.top() ;
                str.pop() ;
            }
            str.push(c) ;
        }
    }
    while(!str.empty()) {
        res += str.top();
        str.pop();
    }
 
    cout << res << endl;
    return ;

}