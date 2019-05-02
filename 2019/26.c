#include <stdio.h>

int a, b, n;
int treasure[1000];
int color[1000];
int add;
int prevc;

int main(void){
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%d", &treasure[i]);
	}
	for(int i = 0; i < n; i++){
		scanf("%d", &color[i]);
	}
	
	scanf("%d %d", &a, &b);
	
	for(int i = 0; i < n; i++){
		if(prevc == color[i]){
			if(treasure[i] * a > 0){
				add += treasure[i] * a;
			}
		}
		else{
			if(treasure[i] * b > 0){
				add += treasure[i] * b;
			}
		}
		prevc = color[i];
	}
	
	printf("%d\n", add);
	
	return 0;	
}