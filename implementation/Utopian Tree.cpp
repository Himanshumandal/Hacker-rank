 int height=0;
   for(int i=0;i<=n;i++){
      if(i%2==1){
          height*=2;
      }
      else{
          height+=1;
      }
   }
    return height;
}
