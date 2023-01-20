  
 unordered_map<int,int>m;
  int n=0;
    for(int i=0;i<candles.size();i++){
        m[candles[i]]++;
    }
    for(auto i:m){
        if(i.second>n){
          n=i.second;
        }
    }
    return n;
}
