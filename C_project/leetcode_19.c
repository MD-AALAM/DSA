#include <stdio.h>
#include <string.h>

int maxFreqSum(char* s) {
    int hash[26]={0};
    int size=strlen(s);
     int maxVowel=0;
     int maxCons=0;
    //count frequency of each   character
    for(int i=0;i<size; i++){
        hash[s[i]-'a']++;
    }
    for(int i=0; i<size; i++){
        //find vowel and consonant
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            if(hash[s[i]-'a']>maxVowel){
                maxVowel=hash[s[i]-'a'];
            }
            }else{
                if(hash[s[i]-'a']>maxCons){
                    maxCons=hash[s[i]-'a'];
                }
            }
        }
    return maxVowel+maxCons;
}
int main() {
    char s1[] = "successes";
    printf("%d\n", maxFreqSum(s1)); // 6

    char s2[] = "aeiaeia";
    printf("%d\n", maxFreqSum(s2)); // 3

    return 0;
}