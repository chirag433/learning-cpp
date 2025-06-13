#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char a[100],b[100];
    int start=0;
    int i,l;

    cout<<"enter the string"<<endl;
    cin>>a;
    l=strlen(a);
    int End =l-1;
    while(start<End)
    {
        if(a[start]!=a[End])
            {cout<<"not a palindrome";
        break;}
        start++;
        End--;
    }
        cout<<"palindrome";
    



return 0;}