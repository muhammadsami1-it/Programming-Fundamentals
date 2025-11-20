int lengthOfLastWord(char* s) {
    int space=0;
    int len =0;
    for(int i =strlen(s)-1;i>-1;i--){
        if ( s[i] != ' '&& space ==0) space=1;
        if ( s[i] !=' '&& space==1) len++;
        if ((s[i] == ' ' || i ==0)&& space==1) return len ;
    }
    return 0;
}