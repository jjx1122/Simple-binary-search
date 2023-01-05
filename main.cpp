
#include<stdio.h>
//二分查找
int main() {
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = 0;
	printf("输入查找的数字：\n");
	scanf("%d", &n);
	int low = 0, high = sizeof(a)/sizeof(a[0])-1;//右边的下标是长度减一
	while (low <= high) {
		int mid = (low + high) / 2;
		if (n > a[mid]) {
			low = mid + 1;
		}
		else if (n < a[mid]) {
			high = mid - 1;
		}
		else
		{
			printf("找到了,下标是%d", mid);
			break;
		}

	}
	if (low > high)
		printf("没找到。");
	return 0;
}
