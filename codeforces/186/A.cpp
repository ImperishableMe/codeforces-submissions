#include<iostream>
using namespace std;
int main(){
string s,ss;cin>>s>>ss;
int count=0;
int x=0,y=0;
for(int i=0;i<max(s.size(),ss.size());i++){
    if(s[i]!=ss[i]){
        y=x;
        x=i;
        }
}
swap(s[x],s[y]);
(s==ss)?cout<<"YES":cout<<"NO";
return 0;}