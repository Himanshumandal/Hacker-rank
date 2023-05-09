/ Complete the flatlandSpaceStations function below.
int flatlandSpaceStations(int n, vector<int> c) {
vector<int>v;
int diff=0;
for(int i=0;i<n;i++){
    int mini=INT_MAX;
    for(int j=0;j<c.size();j++){
        diff=abs(c[j]-i);
        //cout<<diff<<endl;
        mini=min(diff,mini);
        //cout<<mini;
    }
    v.push_back(mini);
    //cout<<v[i]<<endl;
}
sort(v.begin(),v.end());
return v[v.size()-1];
}
