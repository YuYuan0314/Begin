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
//    // 第一个循环
//    for (int i = 0; i < 6; i++) {
//        // 理由：*(p + i)等价于p[i]，这里是遍历name数组中的每个字符串指针
//        // 并打印出对应的字符串
//        printf("%s ", *(p + i));
//    }
//    printf("\n");
//    // 第二个循环
//    for (int i = 0; i < 4; i++) {
//        // 理由：*(*p)等价于p[0][i]，这里是取name数组中第一个字符串的每个字符并打印
//        printf("%c\t", *(*p + i));
//    }
//    printf("\n");
//    // 第三个循环
//    for (int i = 0; i < 6; i++) {
//        // 理由：**(p + i)等价于p[i][0]，这里是取每个字符串的第一个字符并打印
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
	printf("请输入数组长度:");
	scanf("%d", &len);
	for (int i = 0; i < len; i++)
	{
		struct Node* nodei=(struct Node*)malloc
	}
}