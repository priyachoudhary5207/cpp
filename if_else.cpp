#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(ch>='A'&& ch<='Z'){
        cout<< "This is Upper case" << endl;
    }
    else if(ch>='a'&& ch<='z'){
        cout<< "This is Lower case" << endl;
    }
    else if(ch>='0'&&ch<='9'){
        cout<< "This is a digit"<< endl;
    }
    return 0;
}