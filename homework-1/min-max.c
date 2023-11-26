#include<stdio.h>
#include<stdbool.h>

int main () 
{
	int n;
	int max = n;
	int min = n;
	bool first = true;
	
	
	printf("Enter number or enter -1 to finish\n");
	
	while (1) {
		scanf("%d", &n);
		
		if(n == -1){
			break;
		}
		
		if(first == true){
			
			min = n; 
			max = n;
			first = false;
			
		}
		
		if (n < min) {
			min = n;
		}
		
		if (n > max){
			max = n;
		}
	}
	
	printf( "Smallest number is %d\n", min);
	printf( "Largest number is %d\n", max);
}

