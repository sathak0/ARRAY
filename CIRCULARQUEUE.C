#include<stdio.h>
#include<conio.h>
int arr[20],len,i,start=-1,end=-1,element=0;
void enqueue(){
if(element>len-1) {
printf("Queue is full");
}
else{
if(start==-1) start=0;
printf("Enter a element:");
if(end==len-1) end=-1;
end++;
element++;
scanf("%d",&arr[end]);
}
}
void dequeue(){
if(element==0){
printf("Queue is empty");
}
else{
if(start==-1) start=0;
printf("%d is removed",arr[start]);
element--;
start++;
if(start==len) start=-1;
}
}
void peek(){
if(element==0){
printf("Queue is empty");
}
else{
printf("%d is first element",arr[start]);
}
}

void display(){
int i;
if(element==0){
printf("Queue is empty");
}
else{
if(start<end){
for(i=start;i<=end;i++){
printf("%d ",arr[i]);
}  }
else{
for(i=start;i<len;i++){
printf("%d ",arr[i]);
}
for(i=0;i<=end;i++){
printf("%d ",arr[i]);
}}
}
}


void main(){
int choice=2;
clrscr();
printf("Enter a size:");
scanf("%d",&len);
while(choice!=5){
printf("\nEnter a choice:");
scanf("%d",&choice);
switch(choice){
case 1:
enqueue();
break;
case 2:
dequeue();
break;
case 3:
peek();
break;
case 4:
display();
break;
case 5:
printf("Exiting..");
break;
}}
getch();
}
