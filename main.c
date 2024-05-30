#include<stdio.h>
#define MAX_PALAVRA 10
#define MAX_TAGS 50

int main(){
  int num, tam_palavra, tam_tag;
  char palavra[MAX_PALAVRA];
  char tags[MAX_TAGS];

  scanf("%s",palavra); //scanf só lê ate o espaço em branco
  scanf("%d",&num);
  scanf("%s",tags);

  tam_palavra=strlen(palavra);
  tam_tag=strlen(tags);
  printf("%s %d %s\n",palavra,num,tags);

  // for(int i=0;i<tam_tags;i++){
  //   if(palavra[i] == '<'{
  //     for(int j=i;j<tam;j++){

  //   })
 // }
  



  return 0; 
}