int max=0;
for(int i=0;i<word.size();i++)
{
    int val=int(word[i])-97;
    int store=h[val];
    if(max<store)
    max=store;
}
int ans=max*word.size();
return ans;
}
