//�ַ���+ת���ַ�
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	//char arr1[] = "abcdefg";
//	//char arr2[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g','\0' };
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	//printf("%d\n", strlen("abcdefg"));//"\0"ֻ�ǽ�����־
//	//printf("%d\n", strlen("arr1"));//strlen��ʾ���ַ�������
//	//printf("%d\n", strlen("arr2"));
//	//printf("\a\a\a\a\a\a");
//	//printf("%d\n", strlen("c:\test\328\test.c"));//\32��ʾ�˽��Ƶı����������һ���ַ���
//
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int a = 12;
//	int b = 34;
//	int c = a + b;
//	printf("c=%d", c);
//	system("pause");
//	return 0;
//}
//ѭ�����
#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int input = 0;
//	printf("���ú�ѧϰ��\n");
//		scanf("%d", &input);
//	if (input ==1 )
//	{
//		printf("offer\n");
//	}
//	else
//	{
//		printf("go home\n");
//	}
//	system("pause");
//	return 0;
//}
//while���
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	printf("�������\n");
//	int line = 0;
//	while (line <= 2000)
//	{
//		printf("�ô���\n");
//		line++;
//	}
//	if (line > 2000) 
//	{
//		printf("offer\n");
//	}
//	system("pause");
//	return 0;
//}
//#include  <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int line = 0;
//	while  (line < 5)
//	{
//
//		line++;
//		printf("�ô���\n");
//
//	}
//	if (line == 5)//�����if��while��ɶ����
//	{
//		line++;
//		printf("offer\n");
//
//	}
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int i, j;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j < 10; j++)
//		{
//			if (j < i)
//				printf("");
//				else
//			printf("%d%d= %2d \t", i, j, i*j);
//			//%2d ���ƿ��Ϊ�����ַ������Ҷ��룻�����Ϊ %-2d ��Ϊ�����
//            // \tΪtab����
//			
//		}
//		printf("\n");
//	}
//
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	//int a = 3;//011
//	//int b = 5;//101
//	//int c = a^b;//&��ʾ�룻|��ʾ��^Ϊ���
//	//printf("c=%d\n", c);
//	//int a = 5;
//	//int b=a >>1;//������λ
//	////5�Ķ����Ʊ�ʾ��ʽ101��32������λ00000000000000000000000000000101
//	//printf("%d\n",b);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a = 10;
//	int b = a++;//��ʹ��a��ֵ����++
//	int c = ++b;//��++��ʹ��
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	printf("c=%d\n", c);
//	//printf("%d\n", ~a);//~��λȡ��
//	//&a;//ȡ�������ڴ��еı��;
//	//printf("%p\n", &a);//��ʮ�����ƽ��д�ӡ��%p�Ǵ�ӡ��ַ��
//	//printf("%d\n", !a);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//    a > b ? (max = a) : (max = b);
//	//max = a > b ? a : b;
//	 
//	//if (a > b)
//	//	max = a;
//	//else
//	//	max = b;
//	printf("%d\n", max);
//	//int a = (int)3.14;//ǿ������ת��
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int Add(int x, int y)
//{
//	int c = x + y;
//	printf("c=%d\n", c);
//
//	return c;//return c ������ c
//
//}
//int main()
//{
//	int a = 1;
//	int b = 19;
//	int c = 0;
//	c = Add(a, b);//�������ò�����
//	printf("c=%d\n", c);
//	system("pause");
//	return 0;
//#include<stdio.h>
//#include<stdlib.h>
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
////ypedf�����ض���
////typedef unsigned int num uint;
////test()
////{
////	static int a = 1;//static���ξֲ��������ı��˱�������������
////	//���������ǳ�����������ڣ�������Ϊtest����
////	a++;
////	printf("%d\n", a);
////}
//
////	int i = 0;
////	for (i = 0; i < 10; i++)
////	{
////		test();
////	}
////
//system("pause");
//  return 0;
//}