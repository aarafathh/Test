#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        lli arr[n];
        vector<lli>vec(n+1,0);
        vector<lli>v;

        for(lli i=0;i<n;i++){
            cin>>arr[i];
            vec[arr[i]] = i+1;
        }
        v.push_back(1);
        long long int sum = 1,sum1=0;
        for(lli i=2;i<=n;i++){
            sum+=(arr[vec[i]]);
            sum1 = ((i+1)*i)/2;
            if(sum==sum1){
                v.push_back(1);
            }
            else v.push_back(0);
        }

        for(int i=0;i<v.size();i++){
            cout<<v[i];
        }
        cout<<endl;
        v.clear();
        vec.clear();

    }

}
