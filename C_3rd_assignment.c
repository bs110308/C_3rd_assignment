#include <stdio.h>

int main(void)

{
float l=1.0;
float result=0.0;
float sum=0.0;

while(1){
	result=l*l;
	sum+=result;
	printf("x가 %f일때 넓이의 차이는 %f-%f=%f입니다.\n",l,sum,sum-result,result);	
	l=l/2;
	if(result<=0.000001)
	break;
}
printf("계산한 넓이의 합은 %f입니다.\n",sum-result);




return 1;
}