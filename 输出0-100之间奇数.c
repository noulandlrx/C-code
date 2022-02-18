#include<stdio.h>
int main() {
	//根据输入打印输出工作日或休息日
	int day;
	scanf_s("%d", &day);
	switch (day)
	{
	case 1:
	case 2:	
	case 3:
	case 4:
	case 5:
		printf("工作日 ");
		break;
	case 6:
	case 7:
		printf("休息日 ");
		break;
	default:
		printf("输入范围错误");
		break;
	}
	//根据输入打印输出星期几
	/*int day;
		scanf_s("%d", &day);
		switch (day)
	{   case 1:
		printf("星期一 ");
			break;
		case 2:
			printf("星期二 ");
			break;
		case 3:
			printf("星期三 ");
			break;
		case 4:
			printf("星期四 ");
			break;
		case 5:
			printf("星期五 ");
			break;
		case 6:
			printf("星期六 ");
			break;
		case 7:
			printf("星期天 ");
			break;
		default:
			printf("输入范围错误"); 
			break;
	}*/
	

	
	
	
	
	//输出0-100之间的奇数
	//int i = -1;
	//while (i < 99)
	//	printf("%d ", i+=2);

	//输出0-100之间的奇数
	//int i;
	//for (i = 0; i <= 100; i++)
	//	if (i % 2 == 1)
	//		printf("%d\t", i);
	return 0;
}