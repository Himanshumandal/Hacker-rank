vector<string> weightedUniformStrings(string s, vector<int> queries) {
unordered_map<int,int>mp;
int ch=0;
vector<string>ans;
for(int i=0;i<s.size();i++){
    if(i!=0 && s[i]==s[i-1]){
    ch+=s[i]-'a'+1;
    mp[ch]=1; 
    }
    else{
        ch=s[i]-'a'+1;
        mp[ch]=1;
    }      
}
for(int i=0;i<queries.size();i++){
    if(mp[queries[i]]){
        ans.push_back("Yes");
    }
    else{
        ans.push_back("No");
    }
}
return ans;
}
