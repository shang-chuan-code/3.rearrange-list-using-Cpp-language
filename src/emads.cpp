/*
 * @Author: shangchuan shangchuan97@163.com
 * @Date: 2025-05-06 22:50:01
 * @LastEditors: shangchuan shangchuan97@163.com
 * @LastEditTime: 2025-05-11 23:25:17
 * @FilePath: \3.rearrange-list-using-Cpp-language\src\emads.cpp
 */
#include <iostream>
#include "emads.h"

ListNode * list:: createNodeList(const vector<int>& inputArray)
{
    if (inputArray.size() == 0) return nullptr; 
 
    ListNode* head = new ListNode(inputArray[0]); 
    ListNode* current = head; 
 
   
    for (int i = 1; i < inputArray.size() ; ++i) 
    {
        current->next = new ListNode(inputArray[i]); 
        current = current->next; 
    }
 
    return head;
}

void* list::printfNodeList(ListNode* head)
{
    ListNode* current = head;
    
    while (current != nullptr) 
    {
        std::cout << current->val << " ";
        current = current->next;
    }
    std::cout << std::endl;

}


list::list()
{

}

list::~list()
{
    
}
