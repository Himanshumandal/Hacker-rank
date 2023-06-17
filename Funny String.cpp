string funnyString(string s) {
    string r=s;
    reverse(r.begin(),r.end());
    for(int i=1;i<s.size();i++){
        if(abs(s[i]-s[i-1])!=abs(r[i]-r[i-1])){
            return "Not Funny";
        }
    }
    return "Funny";
}
