int migratoryBirds(vector<int> arr) {
//     vector<int>v;
//     sort(arr.begin(),arr.end());
//     int cnt1=0,cnt2=0,cnt3=0,cnt4=0,cnt5=0;
//     for(int i=0;i<arr.size();i++){
        
//         cout<<v[i];
//     }
    
// }
unordered_map<int,int>miga;
int n=0,cnt=0;
sort(arr.begin(),arr.end());
for(auto i=0;i<arr.size();i++){
    miga[arr[i]]++;
}

for(auto x:miga){
    if(cnt<x.second||cnt==x.second){
        cnt=x.second;
        n=x.first;
        cout<<n<<" "<<cnt<<endl;
    }
}
return n;
}
