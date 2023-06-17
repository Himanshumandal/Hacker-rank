string pangrams(string s) {
    unordered_map<char,int>mp;
    for(auto i:s){
        if(i!=' '){
            mp[tolower(i)];
        }
    }
    if(mp.size()==26){
        return "pangram";
    }
    return "not pangram";
}
