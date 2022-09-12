
#include<stdio.h>
#include<unistd.h>


/*int main(){
	int pid,
	if(pid>0){
		for(i=0;i<=10;i++){
		}	
	}
	return 0;
}	
*/



int main()
{
	int a[15] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
	int S_odd = 0, S_even = 0, n, i;
	n = fork();

	if (n > 0) {
		for (i = 0; i < 15; i++) {
			if (a[i] % 2 == 0)
				S_even = S_even + a[i];
		}
		printf("Parent process \n");
		printf("Sum of even no. is %d \n",S_even);
	}

	else {
		for (i = 0; i < 15; i++) {
			if (a[i] % 2 != 0)
				S_odd = S_odd + a[i];
		}
		printf("Child process \n");
		printf("Sum of odd no. is %d \n" ,S_odd);
	}
	return 0;
}

