int ans=0,share=5;
for(int i=1;i<=n;i++){
    ans+=share/2;
    share=(share/2)*3;
    cout<<ans<<" "<<share<<endl;
}
return ans;
