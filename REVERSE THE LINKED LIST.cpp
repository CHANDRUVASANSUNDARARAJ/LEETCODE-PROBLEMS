/*
 * Filename: d:\Test\LEETCODE-PROBLEMS-DATASTRUCTURES-AND-ALGORITHMS\REVERSE THE LINKED LIST
 * Path: d:\Test\LEETCODE-PROBLEMS-DATASTRUCTURES-AND-ALGORITHMS
 * Created Date: Sunday, November 19th 2023, 10:31:12 pm
 * Author:  CHANDRUVASAN S
 * 
 * Copyright (c) 2023 Trinom Digital Pvt Ltd
 */

struct ListNode* reverseList(struct ListNode* th){
            struct ListNode*  current = th;
            struct ListNode*  previous = NULL;
            while(current){
                struct ListNode* temp = current ->next;
                current->next = previous;
                previous = current;
                current = temp;
            } 
            return previous;
}

// Reversing is done by changing the arrow mark direction.