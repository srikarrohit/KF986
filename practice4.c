char* addStrings(char* num1, char* num2) {
/* char ch1='1';//1's ascii value//49
    char ch2='2';//50
    //ch1+ch2=3
    int ch1int=ch1-'0';
    int ch2int=ch2-'0';
    int ch3int=ch1int+ch2int;
    char ch3=ch3int+'0';//48+3=51..3
    printf("%c\n",ch3);//99--97 ..c
    return num1;*/
    int len1=strlen(num1);//2
    int len2=strlen(num2);//3
    int maxLen=len1>len2?len1:len2;//ternary operator//3
    int newArrsize=maxLen+2;//one more because of terminal operator//5
    char* newArr=malloc(newArrsize*sizeof(char));
    int i=len1-1;
    int j=len2-1;
    int k=newArrsize-2;
    int carry=0;
    while(i>=0 && j>=0){
        int sum=carry+(num1[i]-'0')+(num2[j]-'0');
        carry=sum/10;
        sum=sum%10;
        newArr[k]=sum+'0';
        k--;
        i--;
        j--;
    }
    while(i>=0){
        int sum=carry+(num1[i]-'0');
        carry=sum/10;
        sum=sum%10;
        newArr[k]=sum+'0';
        k--;
        i--;
    }
    while(j>=0){
        int sum=carry+(num2[j]-'0');
        carry=sum/10;
        sum=sum%10;
        newArr[k]=sum+'0';
        k--;
        j--;
    }
    while(carry!=0){
        newArr[k]=carry+'0';
        carry=0;
        k--;
    }
    newArr[newArrsize-1]='\0';
    if(k==-1){
        return newArr;
    }else{
        return newArr+1;
    }
    
}