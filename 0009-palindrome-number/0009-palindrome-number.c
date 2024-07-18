bool isPalindrome(int x){
   long int i,product=0,num;
    int y=x;
    
    
    while(x>0)
    {
        num=x%10;
        x=x/10;
        product=product*10+num;
    }
    if(product==y)
    {
        return true;
    }
    else
    {
        return false;
    }

}