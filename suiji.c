#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>

int main()
{
	srand((unsigned int)time(NULL));
	int x[6];
	for(int i=0;i<6;i++){
		x[i]=rand()%33+0;
		printf("%d ",x[i]);
	}
	printf("\n");
	int n[6];
	for(int i=0;i<6;i++){
		scanf("%d",&n[i]);
	}
	int num=0;
	for(int i=0;i<6;i++){
		if(n[i]==x[i]){
			num++;
		}
	}
	printf("%d",num);

	return 0;
}