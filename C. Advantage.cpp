#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t; cin>>t;
    while(t!=0){
        int n; cin>>n;
        vector<int> s;
        for (int i=0; i<n; i++){
            int x; cin>>x;
            s.push_back(x);
        }
        auto it=max_element(s.begin(),s.end());
        for (int i=0; i<n; i++){
            if (it-s.begin()==i){
                vector<int> aux(s);
                aux.erase(aux.begin()+i);
                cout<<s[i] - *max_element(aux.begin(),aux.end())<<" ";
            }
            else{
                cout<<s[i]-*it<<" ";
            }
        }
        cout<<endl;
        t--;
    }
    return 0;
}