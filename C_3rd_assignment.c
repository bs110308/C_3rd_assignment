#include <stdio.h>

int main(void)

{
float l=1.0;
float result=0.0;
float sum=0.0;

while(1){
	result=l*l;
	sum+=result;
	printf("x�� %f�϶� ������ ���̴� %f-%f=%f�Դϴ�.\n",l,sum,sum-result,result);	
	l=l/2;
	if(result<=0.000001)
	break;
}
printf("����� ������ ���� %f�Դϴ�.\n",sum-result);




return 1;
}