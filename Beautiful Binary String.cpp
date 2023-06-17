int beautifulBinaryString(string b) {
    int ans=0;
    for(int i=0;i<b.size();){
        if(b.substr(i,3)=="010"){
            ans++;
            i=i+3;
        }
        else{
            i++;
        }
    }
    return ans;
}
