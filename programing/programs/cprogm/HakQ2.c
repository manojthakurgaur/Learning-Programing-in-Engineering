//Approach=>finding the most occured number in an array.
//Way1.With much intrective way,Without dynamic Memory allocation.
#include<stdio.h>
#include<math.h>
int main(){
int n,k=0,count=0,a=0;    
 printf("Enter the number songs:");
 scanf("%d",n);
int singer[n];
int occurence[n];
//taking input singer name corresponding to position of the song
for(int i=0;i<n;i++){
scanf("%d",&singer[i]);
		}
//Analysis of what number is maximum time occured
for(int i=0;i<2*pow(10,5);i++){
     for(int j=0;j<n;j++){
	    if(i==singer[j]){
				count++;
				}
    	}
     if(count!=0){
		occurence[k]=count;
		k+=1;
	 }
}
//To store maximum occurence of any number/singer 
count=0;
a=occurence[0];
for(int i=0;i<=k;i++){
   if(occurence[i]>a){
   a=occurence[i];
   }
}
//to count maximum occurence of maximum a occurenc or to say to count maximum number of faviourite singers.
count=0;
for(int i=0;i<=k;k++){
	if(a==occurence[i]){
		count++;
	}
}
printf("%d",count);
}

