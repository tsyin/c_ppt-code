#include <stdio.h>
#include <stdlib.h>
#include "list.h"

static void CopyToNode(Item item, Node *pnode);

//初始化一个链表，plist指向一个链表，链表初始化为空
void InitList(List *plist)
{
    *plist = NULL;
}
//确定链表是否为空，如果链表为空返回true,否则返回false
bool ListIsEmpty(const List *plist)
{
    if (*plist == NULL)
        return true;
    else
        return false;
}
//确定链表是否已满，plist指向一个已初始化的链表，如果链表为空返回true,否则返回false
bool ListIsFull(const List *plist)
{
    Node *pt;
    bool full;
    pt = (Node *)malloc(sizeof(Node));
    if (pt == NULL)
        full = true;
    else
        full = false;
    free(pt);
    return full;
}
//确定链表中的项数，plist指向一个已初始化的链接，返回链表中的项数
unsigned int ListItemCount(const List *plist)
{
    unsigned int count = 0;
    Node *pnode = *plist;
    while (pnode != NULL)
    {
        pnode = pnode->next;
        count++;
    }
    return count;
}
//在链表末尾添加项，item是一个待添加到链表的项，plist指向一个已初始化的链表
bool AddItem(Item item, List *plist)
{
    Node *pnew;
    Node *scan = *plist;
    pnew = (Node *)malloc(sizeof(Node));
    if (pnew == NULL)
    {
        puts("malloc error");
        return false;
    }
    CopyToNode(item, pnew);
    pnew->next = NULL;
    if (scan == NULL)
    {
        *plist = pnew;
    }
    else
    {
        while (scan->next != NULL)
            scan = scan->next;
        scan->next = pnew;
    }
    return true;
}
//把函数作用于链表的每一项
void Traverse(const List *plist, void (*pfunc)(Item item))
{
    Node *pnode = *plist;
    while(pnode != NULL)
    {
        pfunc(pnode->item);
        pnode = pnode->next;
    }
}
//释放已分配的内存，释放为链表分配的所有内存，链表设置为空
void EmptyTheList(List *plist)
{
    Node *psave;
    while (*plist != NULL)
    {
        psave = (*plist)->next;
        free(*plist);
        *plist = psave;
    }
}

static void CopyToNode(Item item, Node *pnode)
{
    pnode->item = item;
}