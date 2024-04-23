/*#include<iostream>
using namespace std;
int main(){
int i;
cout<<"Hellow to c++"<<endl;
cout<<i<<endl;
cout<<i++<<endl;
cout<<i<<endl;
cout<<++i<<endl;
cout<<i<<endl;
cout<<i=i+i<<endl;
return 0;
}

//Day 2
#include<iostream>
using namespace std;
int main(){
int i,n;
cin>> i;
cout<<i<<"is the number that was taken input "<< endl;

}
*/
//Day 2
/*#include<iostream>
using namespace std;
int main(){
//logical question 1
int a=2;
int b=a+1;
if((a=3)==b){
cout<<a<<endl;
cout<<"first if"<<endl;
}
else{
cout<<a+1<<endl;
cout<<"second a"<<endl;
}*/
//Q2.sum of the numbers and printing the numbers upto n
/*int a=1;
int n;
cout<<"enter the number";
cin>>n;
int sum=0;
while(a<=n){
//cout<<a<<endl;
sum=sum+a;
a=a+1;
 }
cout<<sum<<endl;*/
//Q3.prime number
//int a=2,n;
//cin>>n;

/*if(a<n){ not executed because at this moment the value will always be 2 of a as code execuete line by line.
  while(a<n){
       if(n%a==0){
           cout<<n<<"not prime";
        }
        else{                         
           a=a+1;
         }
  }
}
else{
   cout<<n<<"Prime"<<endl;
 }
 
 //second try*/

/*while(a<n){
if(n%a==0){
      cout<<n<<" Not prime"<<endl;
    break;
 }
a=a+1;
 }
if(n%a==1){
cout<<n <<" prime"<<endl;
}working*/


//Pattern questions

//type1.Row is equals to column
/*int r,ro,co=1,c=1;
cin>>r;
ro=r;
while(ro>=co){
while(r>=c){
cout<<"*";
c=c+1;
}
c=1;
cout<<"\n";
co=co+1;
}*/


//2.increasing numbers during column and same during row
/*int r,c=1,i,j=1;
cin>>r;
i=r;
while(r>=c){
while(i>=j){
cout<<c;
j=j+1;
}
//j=1; //equal rows and columns with row increment
//j=c; // first row with 5position and 1 and others increment but only one time
cout<<endl;
c=c+1;
//j=c; //right inverted triangular with value increment 
}
*/

//3.increment across row,equall rows
/*int i=1,j=1,r,c;
cin>>r;
c=r;//or simply n can be taken as input and replacing c,r reducing a step
while(r>=i){
while(c>=j){
cout<<r-j+1;
//j=j+1;
j=j+1;//decreasing order across row ,equall rows 
}
j=1;
cout<<endl;
i=i+1;
 }*/


//4.Rows increasing with value across and along the column.
/*int r,c,i=1,j=1;//k=1; Way 1.by initilising 5or 4variable 
cin>>r;
c=r;
while(r>=i){
while(c>=j){

//cout<<k;
cout<<
//k=k+1;
j=j+1;
}
j=1;
cout<<endl;
i=i+1;
}
*/

//5.Right triangle of stars
// int n,i=1,j;
// cin>>n;
// j=n;
// while(n>=i){
// while(n>=j){
// cout<<"*";
// j=j+1;
// }
// j=j-i-1;
// cout<<endl;
// i=i+1;
// }
//Day1.to Day149 Targer




//College Day 1.14Sep2023
//PATTERN QUESTIONS:
//Q6.To print equal no.of rows and columns
/*#include<iostream>
using namespace std;
int main(){
	int n,i=1,j=1;
	cout<<"Enter the desired value:";
	cin>>n;
	while(i<=n){
		int j=1;//if initialised here then no need to inisilisation with declearation.
		while(j<=n){
			
			cout<<"*";
        j++;
		}
	//	j=1;Not best location 
		cout<<"\n";
		//cout<<endl;
		i++;
   }
}
*/
//Q7.Row having same value and increased by one at every column.
/*#include<iostream>
using namespace std;
int main(){
	int n,j,i=1;
	cin>>n;
	while(i<=n){
		j=1;
		//j=i;//Q3.Equal value across Rows and incresed by one along column but with reduced one place.
		while(j<=n){
			cout<<i;
        j++;
		}
		cout<<"\n";
        i++;
	}
}	
*/


//Q8.increasing value across row by one and all rows are equal
/*#include<iostream>
using namespace std;
int main(){
	int n,i=1,j;
	cin>>n;
	while(i<=n){
		j=1;
		
		while(j<=n){
		   cout<<j;
			cout<<n-j+1;//decending
			j++; 
	    	
		}
		cout<<"\n";
    i++;
	}
}	
*/

//Q9.decreasing value across row by one and all rows are equal
/*#include<iostream>
using namespace std;
int main(){
	int n,i=1,j,r;
	cin>>n;
	while(i<n){
		r=n;
		j=1;
		while(j<=n){
			cout<<r;
			r=n-j;
			j++;
		}
	cout<<"\n";
	i++;
	}	
}*/

//Q10.Increasing order mattrix
/*#include<iostream>
using namespace std;
int main(){
	int i=1,n,j,r=1;
	cin>>n;
	while(i<=n){
		j=1;
		while(j<=n){
			cout<<r;
			r++;
			j++;
		}
	cout<<"\n";
	i++;
	}
}	
*/

//Q11.Printing right angled triangl of stars
/*#include<iostream>
using namespace std;
int main(){
	int i=1,n,j;
	cin>>n;
	j=n;
	while(i<=n){
		while(j<=n){// way two while(j<=i) others changes accordingly
			cout<<"*";
			j++;
		}
		j=n-i;
		cout<<"\n";
		i++;
	}
}*/	

//Q12.right angled triangle.Same value across rows.Increasing value by one at every row.
/*#include<iostream>
using namespace std;
int main(){
	int r=1,i=1,j,n;
	cin>>n;
	j=n;
	while(i<=n){
		while(j<=n){//or while(j<=i)
	    	cout<<r;
			j++;
			r++;//Q6II. r++; for contineous counting along row .
		}
		j=n-i;
		cout<<"\n";
	//	r=r+1;
		i++;
	}
}	

*/

//Q13.right angled triangle.starting of row is with row number.
//way one using another variable which is iterated.
//way two without iteration
/*#include<iostream>
using namespace std;
int main(){
	int n,i=1,j,r;
	cin>>n;
	while(i<=n){
		//r=i; //way one using iteration
		cout<<i;
		j=1;
		while(j<i){
//		while(j<=i){

			//cout<<r;
			cout<<i+j;
			j++;
			//r++;
		}
		cout<<"\n";
		i++;
	}
*/
/*#include<iostream>
using namespace std;
int main(){
	int i=1,j=1,n;
	cin>>n;
	while(i<=n){
		cout<<i;
		j=1;
		while(j<i){
			cout<<i-j<<" ";
			//cout<<i-j+1; //method 2 
			j++;
		}
		i++;
		cout<<"\n";
	}
}
*/

//Q.14.To print Alphabets from 'A'.
/*
#include<iostream>
using namespace std;
int main(){
	int n,i=1,j=1;
	char ch='A';
	cin>>n;
	while(i<=n){
		j=1;  
		while(j<=n){
//			char ch='A'+i-1;
			cout<<ch<<" ";
			ch=ch+1;
			j++;
		}
		cout<<"\n";
		i++;
	}
}
*/

//Q15.print contineously Characters and every starting of row is with coresponding Alphabatic serial number.
/*#include<iostream>
using namespace std;
int main(){
	int i=1,j=1,n;
	cin>>n;
	char ch='A';
	while(i<=n){
		cout<<ch<<" ";
		j=1;
		while(j<=n){
			ch=ch+1;
			cout<<ch<<" ";
			j++;
		}
		i++;
		cout<<"\n";
	}

}
*/
//Q16.middle alphabet will be printed in begining of every line.
/*#include<iostream>
using namespace std;
int main(){
	int i=1,j=1,n;
	char ch='A';
	cin>>n;
	while(i<=n){
		j=1;
		while(j<=n){
			cout<<ch<<" ";
			ch=ch+1;
			j++;
		}
		i++;
		cout<<"\n";
		ch=ch-2;
	}

 //way2
#include<iostream>
using namespace std;
int main(){
	int i=1,j=1,n;
	cin>>n;
	char ch='A';
	while(i<=n){
		j=1;
		while(j<=n){
			ch='A'+j+i-2;
			cout<<ch<<" ";
			j++;
		}
		cout<<"\n";
		i++;
	}
}
*/
	
//Type2.triangular patterns
//Q1:Alphabatic triangular of right angle having same characters along the row.
/*#include<iostream>
using namespace std;
int main(){
	int i=1,j=1,n;
	cin>>n;
	while(i<=n){
		j=1;
    	char ch='A'+i-1;
		while(j<=i){
			cout<<ch<<" ";
			j++;
		}
		cout<<"\n";
		i++;
	}
}
*/

//Q2:right angled triangle .every second element of previous row is initial element of next row.
/*#include<iostream>
using namespace std;
int main(){
	int i=1,j=1,n;
	cin>>n;
	while(i<=n){
		j=1;
		while(j<=i){
            char ch='A'+i+j-2;
			cout<<ch<<" ";
			j++;
		}
		cout<<"\n";
		i++;
	}
}
*/

//Q3.Righ angled triangle.First row starting with D and starting of row is in decreasing order according to alphabets.Alphabets are increasing order along row according to alphabitical oredr.
/*#include<iostream>
using namespace std;
int main(){
	int i=1,j=1,n;
	cin>>n;
	while(i<=n){
		j=1;
		//char ch='A'-i+n; //way two of solving 
		while(j<=i){
			char ch='A'+n+j-i-1;
			cout<<ch<<" ";
			//cout<<ch<<" ";
			//ch++;
			j++;
		}
		cout<<"\n";
		i++;
	}
}
*/
//Q4.Time>Day//Right angled triangle at Right side.Printing stars.
/*#include<iostream>
using namespace std;
int main(){
	int i=1,j=1,n;
	cin>>n;
	while(i<=n){
		j=1;
		while(j<=n){
			int r=0;
                r=n-j;
			if(i>r){
			cout<<"*";
			}
            else{
              cout<<" ";
	    	}

				j++;
		}
		cout<<"\n";
		i++;
	}
}*/
//Way 2.Lobe.b
/*#include<iostream>
using namespace std;
int main(){
    int n,i=1,j,r=1,c=1,s;
    cin>>n;
    i=n;
    while(r<=n){
        s=n-r;
        i--;
        c=1;
        while(s){
            cout<<" ";
            s--;
        }
        while(c<=r){
            cout<<"*";
            //cout<<i;
            c++;
        }
        cout<<"\n";
        r++;
    }
}
*/
//29Sep.Day1.
//Q1.Vertically inverted rectangular triangle.
/*#include<iostream>
using namespace std;
int main(){
    int i=1,j=1,n;
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=n){
            int r=0;
            r=n-j+1;
            if(i<=r){
                cout<<"*";
            }
            else{
            cout<<" ";
            }
        j++;    
        }
    
        cout<<"\n";
        i++;
        }
}
*/
//way2.
/*
#include<iostream>
using namespace std;
int main(){
    int i=1,j,k;
    cin>>k;
    while(i<=k){
        j=1;
        int r=k-i+1;
        while(j<=r){
            cout<<"*";
            j++;
        }
        cout<<"\n";
        i++;
    }
}
*/
//Q2.mirror image of vertically inverted rectangular triangle made with "*".
/*#include<iostream>
using namespace std;
int main(){
    int i=1,j,n;
    cin>>n;
    while(i<=n){
        j=1;
        int s=n-i+1;
        while(s<n){
            cout<<" ";
            s++;
        }
            
        s=n-i+1;
        while(j<=s){
            cout<<"*";
            //cout<<i;
            j++;
        }
        cout<<"\n";
        i++;
    }
    return 0;
}
*/
//30Sep2023
//Q1.Mirror image of vertically inverted rectangular triangle made with "*".Every row starts with second element of first row in ascending order.
/*#include<iostream>
using namespace std;
int main(){
    int i=1,j=1,n;
    cin>>n;
    while(i<=n){
        j=1;
        int s=n-i+1;
        while(s<n){
            cout<<" ";
            s++;
        }
        s=n-i+j;
        while(j<=s){
            int k;
            cout<<j+i-1;
            j++;
        }
        cout<<"\n";
        i++;
    }
}
*/
//Q2.Right angled at right side.Asscending order numbers since first element of first row.
/*#include<iostream>
using namespace std;
int main(){
    int k=1,i=1,j=1,n;
    cin>>n;
    while(i<=n){
        j=1;
        int s=n-i;
        while(s){
            cout<<" ";
            s--;
        }
        s=n-i;
        while(j<=i){
            cout<<k;
            j++;
            k++;
        }
        cout<<"\n";
        i++;
    }
}
*/

//Q.3.Equiletral triangle.Every row starts with 1 and also last at one.Middle number is the heighest at every row.
/*
#include<iostream>
using namespace std;
int main(){
	int r=1,c;
	int n;
	cout<<"Enter the no.Of rows :";
	cin>>n;
	cout<<n<<endl;
	while(r<=n){
		c=1;
		while(c<=n-r){
			cout<<" ";
			c++;
		}
		while(n>=c){
			cout<<r-n+c;
			c++;
		}
		while(c<n+r){
			cout<<n+r-c;
			c++;
		}
		r++;
		cout<<"\n";
	}
}
*/

//LECTURE4:
//BITWISE OPERATORS
//Q.1.Testing
/*
#include<iostream>
using namespace std;
int main(){
    int a=4;
    int b=6;
    cout<<"a&b"<<(a&b)<<endl;
    cout<<"a|b"<<(a|b)<<endl;
    cout<<"~a"<<(~a)<<endl;
    cout<<"a^b"<<(a^b)<<endl;
    cout<<(17<<1)<<endl;
    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;
    cout<<(17<<2)<<endl;
}
*/
//Leetcode1.1009::Compliment Of an integer
//Method 1::Using bit manuplation and conditional operator
/*
#include<iostream>
#include<cmath>
using namespace std;
int complement(int n){
            int digit=0;
            int i=0;
            int compliment_=0;
            while(n!=0){
            int bit=n&1;
            int complimentbit=(bit==0) ? 1 : 0;
            compliment_+=(complimentbit<<i);
            n>>=1;
            i++;
            }
            return compliment_;
}

int main(){
    int n;
    cin>>n;
    cout<<complement(n);
    return 0;
}
*/
//Method 2:Love babbar method
/*#include<iostream>
using namespace std;
class Solution{
    public:
        int complement(int n){
            if(n==0) return 1;
            int m=n;
            int mask=0;
            while(m!=0){
                mask=(mask<<1)|1;
                m=m>>1;
            }
            int ans=(~n)&mask;
            return ans;
        }        
};
int main(){
    int n;
    cin>>n;
    Solution obj;
    cout<<obj.complement(n);
    return 0;
}
*/
//Returning Power of two..Leetcode 231
//My Method
// #include<iostream>
// Using namespace std;
// class Solution{
// public:
//     bool isPowerOfTwo(int n) {
//         if(n<=0) return false;
//
//         int x=log(n)/log(2);
//         if(pow(2,x)==n){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };
// int main(){
// 	int n;
// 	Solution obj;
// 	cout<<obj.isPowerofTwo(n);
// 	return 0;
// }
//Lovebabbar method
/*#include<iostream>
using namespace std;
class Solution{
public:
	bool isPowerOfTwo(int n){
		for(int i=0;i<=30;i++){
        int ans=pow(2,i);
        if(ans==n){
            return true;
        }
       }
       return false;

	}
};
int main(){
	int n;
	Solution obj;
	cout<<obj.isPowerOfTwo(n);
	return 0;

}*/

//11April Q.1..finding nCr of a number.N is given with and ncr to be found
//My Method.
/*
#include<iostream>
using namespace std;
//lovebabar method ::seprate function for finding factorial of all
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact =fact*i;
    }
    return fact;
}

int ncr(int n,int r){
    int num=factorial(n);
    int denom=factorial(r)*factorial(n-r);
    int ans=num/denom;
    return ans;

*/
    //My method
    /*int fact1=n;
    int fact2=n-r;
    int i=1;
    int ans;
    while(i<n){
         factn=fact1*i;
         if(i<n-r){
           factnr=fact2*i;
         } 
         factr=
    ans=fact1/(fact1*fact2);
    i++;
    }
    return ans;
    */
    //Lovebbar method::better method one fuction for finding factorial for all
/*    }

int main(){
    int n,r;
    cin>>n >> r;
    cout<<ncr(n,r);
}
*/
//Functions knodledge check Q2
#include<iostream>
using namespace std;
//void update(int a){
int update(int a){
    a/=2;
}
int mai(){
    int a=20;
    update(a);
    cout<<a<<endl;//Expected a=20 =>correct
    cout<<update<<endl;//expected 10
        
}



