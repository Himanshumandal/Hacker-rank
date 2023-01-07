for(int i=0;i<s1.size();i++){
    if(s2.find(s1[i])<s2[i]){
      return "YES";
    }
    }
return "NO";
}
