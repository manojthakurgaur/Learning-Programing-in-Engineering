#include <stdio.h>
int main(){
	int t;
        printf("Test   :");
        scanf("%d",&t);
        int size[t-1];
        
	
//code for storing '.' and '#' upto test cases 
for(int k=0;k<t;k++){
        int r,c,n=1,n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0
        ;
        printf("Test case :%d\n",k+1);
        printf("row    :");
	scanf("%d",&r);
	printf("column :");
	scanf("%d",&c);
	int row[r];
	int col[c];
	char ch[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){	
		scanf(" %c",&ch[i][j]);
		}
	}
	

//code for analysing the contineous manner of # along row
	for(int i=0;i<r;i++){
	for(int j=0;j<c;j++){
	//if(ch[i][j]==ch[i][j+1]=='#'){
	if(ch[i][j]=='#'&&ch[i][j+1]=='#'){
	n=n+1;
	}
	if(n>n1){
	n2=n;
	}	
	n1=n;
	if(ch[i][j]!='#'){
	n=1;
	}
     }
     row[i]=n2;
             n=1;
     }
//code for analysing the contineous manner of # along columns
   for(int j=0;j<c;j++){
   for(int i=0;i<r;i++){
   if(ch[i][j]=='#'&&ch[i][j+1]=='#'){
   n=n+1;
     }
   if(n>n1){
    n3=n;
     }
    n1=n;
    if(ch[i][j]!='#'){
    n=1;
    }
    }
    col[j]=n3;
	n=1;
   }
   //getting the max value from row and column and storing it in n4 and n5
   n4=row[0];
   for(int m=1;m<r;m++){
   if(row[m]>n4){
   n4=row[m];
    }
   }
   n5=col[0];
   for(int m=1;m<c;m++){
   if(col[m]>n5){
   n5=col[m];
   }
   }
   //storing in array ,the max size from the test case in column or row or from both
   if(n4>n5){
   size[k]=n4;
   }
   else{
   size[k]=n5;
   }
  }
 
  for(int l=0;l<t;l++){
  printf("Test case :%d ,Max size : %d",l+1,size[l]);
  printf("\n");
  }
  return 0;
 }
   
      //if(ch[j][i]==ch[j][i+1]=='#'){//Mistake 1&2.C's compiler compare left to right.The first part of the expression (ch[j][i] == ch[j][i+1]) evaluates to either 1 (true) or 0 (false), and then this result is compared to the character '#'. This may not produce the expected result because you're effectively comparing an integer (1 or 0) to a character ('#'), which might not behave as intended.
 
 /*//code for comparing the maximum value out of two arays which is faltu ka code
 for(int i=0;i<sizeof(count1[0]);i++){
 a=count1[i];
 b=count1[i+1];
 if(a>b){
 row=a;
 } 
 else{
 row=b;
  } 
 }
 for(int i=0;i<sizeof(count2[0]);i++){
 a=count2[i];
 b=count2[i+1];
 if(a>b){
 col=a;
 }
 else{
 col=b;
  }
 }
 if(col>row){
 printf("%d max is in column",col);
 }
 else{
 printf("%d\n Max is in rows",row);
 printf("count2%d\n",sizeof(count2[0]));
  printf("count 1 %d\n
 
}


*/
