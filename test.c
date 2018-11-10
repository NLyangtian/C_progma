#include <stdio.h>
#include <unistd.h>
//打印久久乘法口诀表

int main()
{
    int i=0;
    int j=0;
    int result=0;
    for(i=1;i<10;i++){
	for(j=1;j<=i;j++){
	    result=i*j;
	    printf("%d=%d*%d ",result,i,j);
	}
    printf("\n");
    }
    return 0;
}
