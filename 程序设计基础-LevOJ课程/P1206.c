#include<stdio.h>
#include<string.h>
int main(){
	char s[101],q;
	int a[512],i;
	while(scanf("%[^\n]",s)+1){
		scanf("%*c");
		memset(a,0,sizeof(int)*512);
		for(i=0;s[i];i++)
			a[s[i]]++;
		scanf("%c",&q);
		scanf("%*c");
		printf("%d\n",a[q]);
	}
	return 0;
}