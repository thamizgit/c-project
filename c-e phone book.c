#include <stdio.h>
#include<string.h>
struct dict{
    char name[50];
    char num[11];
    char mail[35];
   
}sp[25];
int h,i=1;

int main()
{
    printf("----------------------------------------WELCOME TO E PHONE BOOK-------------------------\n");
    int c,y,addcon,a=1;
    int choice,v,pos;
    char b[50];
    strcpy(sp[1].name,"SRI SANJAI");strcpy(sp[1].num,"6377834657");strcpy(sp[1].mail,"srisanjai@gmail.com");i++;
    strcpy(sp[2].name,"SHARATH");strcpy(sp[2].num,"6746786567");strcpy(sp[2].mail,"sharath@gmail.com");i++;
    strcpy(sp[3].name,"SARAN");strcpy(sp[3].num,"2983983893");strcpy(sp[3].mail,"saran@gmail.com");i++;
    strcpy(sp[4].name,"VAIBHAV");strcpy(sp[4].num,"3675576754");strcpy(sp[4].mail,"vaibhav@gmail.com");i++;
    strcpy(sp[5].name,"VISWA");strcpy(sp[5].num,"6752348972");strcpy(sp[5].mail,"viswa@gmail.com");
    i++;
   while(a==1)
      {
          printf("1--->DISPLAY CONTACTS\n2--->DELETING CONTACTS\n3--->ADDING CONTACTS\n4--->FINDING CONTACTS");
   printf("\nENTER YOUR CHOICE:");
   
      scanf("%d",&choice);
      
    for (int j=0;j<140;j++){
    printf("_");}
    if(choice<=4){
   switch(choice)
   {
      case 1:
      printf("\nREG NO\tNAME\t\tNUMBER\t\t\tEMAIL");
      for(int n=1;n<i;n++)
      {
          
          printf("\n%d\t%s\t\t%s\t\t%s",n,sp[n].name,sp[n].num,sp[n].mail);
      }
      printf("\n");
      for (int j=0;j<140;j++){
    printf("_");}
    break;   
   
   case 2:
   printf("\nENTER THE REG NO OF CONTACT TO REMOVE:");
   
   scanf("%d",&h);
   if(h>=i)
   {
       printf("INVALID REG NO");
   }
   else{
   for (c = h ; c <=i ; c++)
         {
             
         strcpy(sp[c].name,sp[c+1].name);strcpy(sp[c].num,sp[c+1].num);strcpy(sp[c].mail,sp[c+1].mail);
         }
         i--;
         for(int n=1;n<i;n++)
      {
          printf("\n%d\t%s\t\t%s\t%s",n,sp[n].name,sp[n].num,sp[n].mail);
      }}
      printf("\n");
      for (int j=0;j<140;j++){
    printf("_");}
      break;
      case 3:
      printf("\nADDING CONTACT");
      printf("\nENTER THE NO OF PERSONS TO BE ADDED:");
      scanf("%d",&addcon);
      for (v=i;v<i+addcon;++v)
      {
          printf("\nenter name:");
          scanf("%s",sp[v].name);
          printf("\nenter number:");
          scanf("%s",sp[v].num);
          printf("\nenter mail:");
          scanf("%s",sp[v].mail);
      }
      printf("\n");
      for (int j=0;j<140;j++){
    printf("_");}
      i=v;
      printf("\nAFTER CHANGING\n");
      printf("REG NO\tNAME\t\tNUMBER\t\t\tEMAIL");
      for(int n=1;n<i;n++)
      {
         
          printf("\n%d\t%s\t\t%s\t\t%s",n,sp[n].name,sp[n].num,sp[n].mail);
      }
      printf("\n");
      for (int j=0;j<140;j++){
    printf("_");}
      break;
      
  
   case 4:
   printf("\nENTER THE REG NO OF THE PERSON:");
   scanf("%d",&pos);
   if(pos>=i)
   {
       printf("INVALID REG NO");
   }
   else{
   for (int y=pos-1;y<pos;y++)
   {
   printf("NAME:%s\n",sp[pos].name);
   printf("PHONE NUMBER:%s\n",sp[pos].num);
   printf("MAIL ID:%s\n",sp[pos].mail);
   }}
    printf("\n");
      for (int j=0;j<140;j++){
    printf("_");}
      break;
   }
    }
    else{
        printf("\nINVALID CHOICE");
    }
   printf("\nPRESS 1 TO CONTINUE 0 T0 EXIT");
   scanf("%d",&a);
}
}
