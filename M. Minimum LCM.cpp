#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t; cin>>t;
    while(t!=0){
        int answer=1,n;
        cin>>n;
        for (int i=2; i<=sqrt(n); i++)
            if (n%i==0){
                answer=n/i;
                break;
            }
        cout<<answer<<" "<<n-answer<<endl;
        t--;
    }
}