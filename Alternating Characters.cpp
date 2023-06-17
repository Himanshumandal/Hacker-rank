
int alternatingCharacters(string s) {
    int c=0;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]){
            c++;
        }
    }
    return c;
}
