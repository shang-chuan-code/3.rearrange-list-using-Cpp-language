/*
 * @Author: shangchuan shangchuan97@163.com
 * @Date: 2025-05-08 21:36:20
 * @LastEditors: shangchuan shangchuan97@163.com
 * @LastEditTime: 2025-05-08 22:55:34
 * @FilePath: \3.rearrange-list-using-Cpp-language\include\emads.h
 */
#ifndef _EMADS_H
#define _EMADS_H

typedef struct node
{
    int data;
    struct node *next;
}Node;

class list
{
    private:
        
    public:
        Node* add_tail(Node* tail, int data);
        list();
        ~list();
};



Node *list::add_tail(Node *tail, int data)
{
    return nullptr;
}

list::list()
{

}

list::~list()
{
    
}



#endif