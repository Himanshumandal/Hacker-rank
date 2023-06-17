int anagram(string s) 
{
    int ch=0;
    if(s.size()%2==1){
        return -1;
    }
    map<char,int>mp;
    for(int i=0;i<s.size()/2;i++){
        mp[s[i]]++;
    }
    for(int i=s.size()/2;i<s.size();i++){
        if(mp[s[i]]!=0){
            mp[s[i]]--;
        }
        else{
            ch++;
        }
        
    }
    return ch;
}
