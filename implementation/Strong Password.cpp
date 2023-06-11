// Return the minimum number of characters to make the password strong
    int c=0,s=0,sp=0,d=0,res=0;
    for(int i=0;i<password.size();i++){
        if(password[i]>=65 && password[i]<90){
            c++;
            continue;
        }
        else if(password[i]>=97 && password[i]<122){
            s++;
            
        }
        else if(password[i]>=48&&password[i]<=57)
        {
            d++;
        }
        else if((password[i]>=32&& password[i]<47)||(password[i]>=58 && password[i]<=64 )|| (password[i]>=91 && password[i]<=96 )||(password[i]>=123 && password[i]<=126 )){
            sp++;
        }
    }
    if(c==0){
        res++;
    }
    if(s==0){
        res++;
    }
    if(d==0){
        res++;
    }
    if(sp==0){
        res++;
    }
    if(n+res<6){
        return 6-n;
    }
    
return res;
}
