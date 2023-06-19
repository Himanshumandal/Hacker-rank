int minimumLoss(vector<long> price) {
    unordered_map<long,int>mp;
    for(int i=0;i<price.size();i++){
        mp[price[i]]=i;
    }
    long ans=INT_MAX;
    sort(price.begin(),price.end(),greater<long>());
    for(int i=0;i<price.size()-1;i++){
        if(mp[price[i]]<mp[price[i+1]]){
            long ch=abs(price[i]-price[i+1]);
            if(ans>ch){
                ans=ch;
            }
        }
    }
    return ans;
}
