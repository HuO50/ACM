#1003
#include<stdio.h>

int main(){
	float in;
	float sum ;
	float single;
	int count = 2;
	sum = 0;
	while(scanf("%f",&in)!=EOF){
		if(in == 0.0||in >= 5.20){
			continue;
		} 
//		printf("%f\n",in);
//		printf("%f\n", sum);
		while(sum <= in){
			single = 1.0/count;//在该除法中，如果用1/N的话只会是0，但是1.0/N则会变成小数 
			sum = sum + single;
//			printf("%f\n", sum);
			count ++;
		}
		printf("%d", count-2);
		printf(" card(s)");
		count = 2;
		sum = 0;
	}
	return 0;
}
