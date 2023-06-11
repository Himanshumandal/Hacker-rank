stack<int>st;
string ans="";
for(int i=0;i<s.size();i++){
    if(!st.empty() && st.top()==s[i]){
        st.pop();
    }
    else if(st.empty() || st.top()!=s[i]){
        st.push(s[i]);
       cout<<st.top()<<endl;
    }
}

while(st.size()!=0){
    ans+=st.top();
    //cout<<ans<<endl;
    st.pop();
}
if(ans==""){
    return "Empty String";
}
reverse(ans.begin(),ans.end());
return ans;
}
