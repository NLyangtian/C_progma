#include <stdio.h>
#include <unistd.h>
//打印100~200之间的素数
//  素数：除了1和它本身之外
//  没有其它的因数
int main()
{
    int i=0;
    for(i=100;i<=200;i++){
	int j=0;
	for(j=2;j<i;j++){
	    if(i%j==0){
	    ;	;
	    }
	    else{
	    printf("%d\n",i);
	    }
	break;
	}
    
    }
    return 0;
}
