int lengthOfLastWord(char* s) {
    int i=strlen(s)-1;
    while(s[i]==' '){
        i--;
    }
    int count=0;
    while(i>=0 && s[i]!=' '){
        i--;
        count++;
    }
    return count;
}