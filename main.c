#include <stdio.h>
#include <string.h>

void naive(char [], char []);

void main(){
  char txt[50] = "asdfghjklpoiuytrewqlmnbvcxz";
  char pat[50] = "lpo";
  
  naive(txt, pat);
}

void naive(char t[], char p[]){
  int i,j;
  for(i=0; i<strlen(t); i++){
    j=0;
    while(j<strlen(p) && t[j+i] == p[j])
    j++;
    if(j==strlen(p)){
      printf("Match found at %d",i);
    }
    else{
      continue;
    }
  }
}

