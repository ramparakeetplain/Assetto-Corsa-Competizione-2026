#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]){
if(argc < 2){
printf("Usage: %s <string>\n", argv[0]);
return 1;
}
char *input = argv[1];
int length = strlen(input);
int vowels = 0;
int consonants = 0;
for(int i = 0; i < length; i++){
char ch = tolower(input[i]);
if((ch >= 'a' && ch <= 'z')){
if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
vowels++;
}else{
consonants++;
}
}
}
printf("Vowels: %d\n", vowels);
printf("Consonants: %d\n", consonants);
return 0;
}
