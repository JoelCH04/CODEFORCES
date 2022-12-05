#include<iostream>
#include<string>
using namespace std;
int main(){
    int t; cin>>t;
    while(t!=0){
        int n; cin>>n;
        bool answer=true;
        string s;
        cin.ignore();
        getline(cin,s); 

        while(s.length()>=3){
            if (s[1]==s[2]){
                s=s.substr(3);
            }
            else{
                answer=false;
                break;
            }
        }
        
        if (answer && s.length()!=2) cout<<"YES\n";
        else cout<<"NO\n";

        t--;
    }
    return 0;
}