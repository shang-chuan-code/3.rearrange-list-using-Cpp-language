/*
 * @Author: shangchuan shangchuan97@163.com
 * @Date: 2025-05-06 22:22:57
 * @LastEditors: shangchuan shangchuan97@163.com
 * @LastEditTime: 2025-05-12 23:47:25
 * @FilePath: \3.rearrange-list-using-Cpp-language\main.cpp
 */
#include <iostream>
#include "emads.h"
using namespace std;



class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param head ListNode类 the head
     * @return bool布尔型
     */
    bool isPail(ListNode* head) 
    {
        ListNode* midNode = getMidNode(head);
        ListNode* newMidNode = invertList(midNode);



        while(nullptr != head && nullptr != newMidNode)
        {
            if(head->val != newMidNode->val)
            {
                return false;
            }
            head = head->next;
            newMidNode = newMidNode->next;
        }
        return true;
    }

    ListNode* invertList(ListNode* head);
    ListNode* getMidNode(ListNode* head);

};

ListNode* Solution::getMidNode(ListNode* head) {
    ListNode* fast  = head;
    ListNode* slow  = head;

    if (nullptr == fast->next) 
    {
        return fast;
    }

    while (nullptr != fast) 
    {
        if(nullptr == fast->next) break;
        fast = fast->next->next;
        slow = slow->next;
    }

    return slow;

}
  
ListNode* Solution::invertList(ListNode* head) 
{
    ListNode * pre = nullptr;
    ListNode * cur = head;
    ListNode * nxt = cur->next;


    while (nullptr != cur) 
    {
        nxt = cur->next;
        cur->next = pre;
        pre = cur;
        cur = nxt;
        
    }


    return pre;
}

int main(int argc, char* argv[])
{

    cout<< "hello world" <<endl;
    vector<int> array = {1, 2, 5, 2, 1};
    list list;
    ListNode* head = list.createNodeList(array);
    list.printfNodeList(head);
    Solution solution;
    bool ret = solution.isPail(head);
    cout<< "ret = "<< ret << endl;

}