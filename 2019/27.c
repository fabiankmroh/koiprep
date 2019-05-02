#include <stdio.h>

int course[1000];
int accu[1000];
int opp; // opportunity
int i, n;
int max, coordinate;

int main(void){
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		scanf("%d", &course[i]);	
	}
	
	//scanf("%d", &opp);
	
	accu[0] = course[0];
	for(i = 1; i < n; i++){
		if(accu[i-1] < 0){
			accu[i] = course[i];
		}
		else{
			accu[i] = course[i] + accu[i-1];
		}
	}
	
	for(i = 0; i < n; i++){
		if(max < accu[i]){
			max = accu[i];		
		}
	}
	
	printf("%d\n", max);
}
	
