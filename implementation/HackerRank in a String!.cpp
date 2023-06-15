string hackerrankInString(string s) {
    string st="hackerrank";
    int j=0;
    for(auto i:s){
        if(i==st[j]){
            j+=1;
        }
        
    }
    if(j==st.size()){
            return "YES";
    }
    return "NO";
    
}
