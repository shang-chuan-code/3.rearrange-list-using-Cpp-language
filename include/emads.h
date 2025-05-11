/*
 * @Author: shangchuan shangchuan97@163.com
 * @Date: 2025-05-08 21:36:20
 * @LastEditors: shangchuan shangchuan97@163.com
 * @LastEditTime: 2025-05-11 23:31:40
 * @FilePath: \3.rearrange-list-using-Cpp-language\include\emads.h
 */
#ifndef _EMADS_H
#define _EMADS_H

#include <iostream>
#include <vector>
using namespace std;

struct ListNode
{
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class list
{
    private:
        
    public:
    static ListNode* createNodeList(const vector<int>& inputArray);
    void* printfNodeList(ListNode* head);
    list();
    ~list();
};


#endif