#include<stdio.h>
int main() {
	//���������ӡ��������ջ���Ϣ��
	int day;
	scanf_s("%d", &day);
	switch (day)
	{
	case 1:
	case 2:	
	case 3:
	case 4:
	case 5:
		printf("������ ");
		break;
	case 6:
	case 7:
		printf("��Ϣ�� ");
		break;
	default:
		printf("���뷶Χ����");
		break;
	}
	//���������ӡ������ڼ�
	/*int day;
		scanf_s("%d", &day);
		switch (day)
	{   case 1:
		printf("����һ ");
			break;
		case 2:
			printf("���ڶ� ");
			break;
		case 3:
			printf("������ ");
			break;
		case 4:
			printf("������ ");
			break;
		case 5:
			printf("������ ");
			break;
		case 6:
			printf("������ ");
			break;
		case 7:
			printf("������ ");
			break;
		default:
			printf("���뷶Χ����"); 
			break;
	}*/
	

	
	
	
	
	//���0-100֮�������
	//int i = -1;
	//while (i < 99)
	//	printf("%d ", i+=2);

	//���0-100֮�������
	//int i;
	//for (i = 0; i <= 100; i++)
	//	if (i % 2 == 1)
	//		printf("%d\t", i);
	return 0;
}