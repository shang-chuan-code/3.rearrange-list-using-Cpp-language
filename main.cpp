/*
 * @Author: shangchuan shangchuan97@163.com
 * @Date: 2025-05-06 22:22:57
 * @LastEditors: shangchuan shangchuan97@163.com
 * @LastEditTime: 2025-05-11 23:33:42
 * @FilePath: \3.rearrange-list-using-Cpp-language\main.cpp
 */
#include <iostream>
#include "emads.h"
using namespace std;




int main(int argc, char* argv[])
{

    cout<< "hello world" <<endl;
    vector<int> array = {1, 2, 2, 1};
    list list;
    ListNode* head = list.createNodeList(array);
    list.printfNodeList(head);

}