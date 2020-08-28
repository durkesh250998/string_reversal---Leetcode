#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
      char str[20];
      int i,j;
      
      fgets(str,sizeof(str),stdin);
      printf("%s",str);
      printf("%lu",sizeof(str));
      
      printf("%lu",strlen(str));
      j=strlen(str)-1;
      for(i=0;i<j;i++){
                    
                    char temp;
                    temp=str[i];
                    str[i]=str[j];
                    str[j]=temp;     
                    j--;        
              }
      printf("%s",str);  
      
      
     
}
