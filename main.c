#include <stdio.h>
int main()
{

    int choice,n;
    int a[50];

    while(1){

    printf("1=insert\n");
    printf("2=update\n");
    printf("3=delete\n");
    printf("4=display\n");
    printf("5=sort\n");
    printf("6=search\n");
    printf("7=Exit");
    scanf("%d",&choice);
    switch(choice){
        case 1:{
               printf("How many values you want to insert:");
               scanf("%d",&n);
               for(int i=0;i<n;i++){
                 scanf("%d",&a[i]);
               }
               break;
        }
        case 2:{
               int x,value;
               scanf("%d %d",&x,&value);
               for(int i=n;i>x;i--){
                a[i]=a[i-1];
               }
               a[x]=value;
               n++;
               break;
        }
        case 3:{
               int x;
               scanf("%d",&x);
               for(int i=x;i<n;i++){
                a[i]=a[i+1];
               }
               n--;
               break;
        }
        case 4:{
               for(int i=0;i<n;i++){
                 printf("%d\n",a[i]);
               }
               break;
        }
        case 5:{
               int temp,ch;
               printf("1.Ascending");
               printf("2.Descending");
               scanf("%d",&ch);
               if(ch==1){

               for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(a[i]>a[j]){
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                    }
                }
               }
               }
               else if(ch==2){
               for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(a[i]<a[j]){
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                    }
                }
               }
               }
               break;
        }
        case 6:{
               int m,found=0;
               scanf("%d",&m);
               for(int i=0;i<n;i++){
                    if(a[i]==m){
                        found=1;
                        break;
                    }

                }
                if(found==1){
                    printf("Found\n");
                }
                else{
                    printf("Not found\n");
                }
                break;
        }
        case 7:{
                 return 0;
        }
        default:
               printf("Invalid input\n");









    }
    }
    return 0;
}

