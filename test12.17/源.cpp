//#include <stdio.h>
//int main() 
//{
//	float f = 5.0f;
//	float* p = &f;
//	float** pp = &p;
//	printf("&f=%x\np=%x\n &p=%x\npp=%x\n\n f=%fn *p=%fn **pp=%f", &f ,p, &p, pp, f ,* p, **pp);
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//    const char* name[] = {
//        "Game",
//        "design",
//        "is",
//        "a",
//        "wonderful",
//        "job!"
//    };
//    const char** p = name;
//    // ��һ��ѭ��
//    for (int i = 0; i < 6; i++) {
//        // ���ɣ�*(p + i)�ȼ���p[i]�������Ǳ���name�����е�ÿ���ַ���ָ��
//        // ����ӡ����Ӧ���ַ���
//        printf("%s ", *(p + i));
//    }
//    printf("\n");
//    // �ڶ���ѭ��
//    for (int i = 0; i < 4; i++) {
//        // ���ɣ�*(*p)�ȼ���p[0][i]��������ȡname�����е�һ���ַ�����ÿ���ַ�����ӡ
//        printf("%c\t", *(*p + i));
//    }
//    printf("\n");
//    // ������ѭ��
//    for (int i = 0; i < 6; i++) {
//        // ���ɣ�**(p + i)�ȼ���p[i][0]��������ȡÿ���ַ����ĵ�һ���ַ�����ӡ
//        printf("%c\t", **(p + i));
//    }
//    return 0;
//}
#include <stdio.h>
#include <stdlib.h>

//struct Node 
//{
//    int data;
//    struct Node* next;
//};
//
//int main() {
//    
//    struct Node* node1 = (struct Node*)malloc(sizeof(struct Node));
//    struct Node* node2 = (struct Node*)malloc(sizeof(struct Node));
//    struct Node* node3 = (struct Node*)malloc(sizeof(struct Node));
//
//    node1->data = 12;
//    node1->next = node2;
//
//    node2->data = 48;
//    node2->next = node3;
//
//    node3->data = 129;
//    node3->next = NULL;
//
//    struct Node* ptr = node1;
//    while (ptr != NULL) {
//        printf("address = %p, data = %d, next = %p\n", ptr, ptr->data, ptr->next);
//        ptr = ptr->next;
//    }
//    return 0;
//}
struct Node
{
	int date;
	struct Node* next;
};
int main()
{
	int len;
	printf("���������鳤��:");
	scanf("%d", &len);
	for (int i = 0; i < len; i++)
	{
		struct Node* nodei=(struct Node*)malloc
	}
}