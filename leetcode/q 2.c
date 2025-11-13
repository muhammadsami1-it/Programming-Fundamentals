bool isPalindrome(long long x) {
    if(x<0) return false;
    long long y=0;
    long long temp=x;
    while(x!=0){
        y = y*10 + (x%10);
        x /=10;
    }
    if(temp==y) return true;
    else return false;
}