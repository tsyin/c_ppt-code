#ifndef LIST_H
#define LIST_H
#include<stdbool.h>
#define TSIZE 45
struct film
{
    char title[TSIZE];
    int rating;
};
typedef struct film Item;
typedef struct node
{
    Item item;
    struct node *next;
} Node;
typedef Node* List;

//初始化一个链表，plist指向一个链表，链表初始化为空
void InitList(List * plist);
//确定链表是否为空，如果链表为空返回true,否则返回false
bool ListIsEmpty(const List *plist);
//确定链表是否已满，plist指向一个已初始化的链表，如果链表为空返回true,否则返回false
bool ListIsFull(const List *plist);
//确定链表中的项数，plist指向一个已初始化的链接，返回链表中的项数
unsigned int ListItemCount(const List *plist);
//在链表末尾添加项，item是一个待添加到链表的项，plist指向一个已初始化的链表
bool AddItem(Item item,List *plist);
//把函数作用于链表的每一项
void Traverse(const List *plist,void (*pfunc)(Item item));
//释放已分配的内存，释放为链表分配的所有内存，链表设置为空
void EmptyTheList(List *plist);

#endif
