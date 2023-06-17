int gemstones(vector<string> arr) {
    
    int ans,res=0;
    for(char i='a';i<='z';i++){
            ans=0;
        for(int j=0;j<arr.size();j++){
            if(arr[j].find(i)!=string::npos)
                ans++;
            
        }
        if(ans==arr.size())
            res++;
        
    }
    return res;
}
