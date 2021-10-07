#include<stdio.h>
#include<math.h>

 int decToBin(int num){
 	//Convert decimal number to binary
    int binary = 0,x=1;
    while(num > 0){
    	//num%2 gives reminder of number known as next binary digit
        binary += (num % 2) * x;
        num /= 2;
    	//then multiply it with 10 everytime to get next digit
        x *= 10;
    }
    //return the result
    return binary;
}

int modExp(int b, int e, int m){
	//modExp method to find modular exponentiation
    int power = b % m,x = 1,i=0,k=0,tmp=e;
    //b%m at start gives the first power
    while(tmp>0){
    	tmp/=10;
    	k++;
    	//first we should know digit count in binary number
	}
	int a[k];
	//Then we should keep each digit
	for(i=0;i<k;i++){
		a[i] = e % 10;
        e /= 10;
        //Get each digit of binary number to a array
    	printf("Because b%d is %d,",i,a[i]);
        if(a[i] == 1){
        	//if digit is 1
            printf(" we have x = (%d * %d)",x,power);
            //then we calculate next x value and hold it
			x = (x * power) % m;
        }
        else{
        	//else, we just print it on the screen
        	printf(" we have x = %d",x);
		}
        if(e==0){
        	//if e is 0, it means binary number has no more digits and calculation done
        	printf(" mod %d ==>",m);
		}
		else{
			//else, we calculate next step
			printf(" and power = %d ^ %d mod %d",power,2,m);
			//Getting square of power mod m to power variable
        	power = (int)pow(power,2) % m;
        	//or:
			//power = (power*power) %m
        	//then print result
			printf(" = %d",power);
		}
        printf("\n");
	}
    printf("\n");
    return x;
}

int main(){
	int a,b,m,x;
	printf("MODULAR EXPONENTIATION CALCULATOR\n");
	printf("(a^b mod m solver)\n\n");
	printf("Enter Base (a): ");
	scanf("%d",&a);
	printf("Enter Exponent (b): ");
	scanf("%d",&b);
	printf("Enter Modulus (m): ");
	scanf("%d",&m);
	//Taking each input from user
    int binary;
    //Then call the methods to find result
    binary = decToBin(b);
    printf("\n%d is equivalent to (%ld) as binary number...\n\n",b,binary);
    x = modExp(a, binary, m);
    printf("Modular Exponentiation of (%d ^ %d) mod (%d) = %d\n",a,b,m,x);
    return 0;
}
