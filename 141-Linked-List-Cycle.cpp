/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == nullptr || head->next == nullptr) {
            return false;
        }
        
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;           // slow moves 1 step
            fast = fast->next->next;     // fast moves 2 steps

            if (slow == fast) {
                return true;
            }
        }

        return false;
    }
}; 


// if the list is empty or has only one node it can't have a cycle
// two pointers: 
    //one moves slowly
    // the other moves fast
// traverse the list
// if slow and fast meet, there's a cycle
// if fast reaches the end, there is no cycle


//optimized chatgpt
// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         // Check if the list has fewer than 2 nodes
//         if (!head || !head->next) {
//             return false;
//         }
        
//         // Initialize slow and fast pointers
//         ListNode* slow = head;
//         ListNode* fast = head->next; // Fast starts ahead to reduce checks

//         // Traverse the list
//         while (slow != fast) {
//             // If fast reaches the end, there is no cycle
//             if (!fast || !fast->next) {
//                 return false;
//             }
//             slow = slow->next;           // Move slow pointer one step
//             fast = fast->next->next;     // Move fast pointer two steps
//         }

//         // If slow and fast meet, there is a cycle
//         return true;
//     }
// };


