/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Create a dummy head for the result linked list
        ListNode* dummyHead = new ListNode(0);
        // Pointers for traversal of input linked lists and result list
        ListNode* p1 = l1;
        ListNode* p2 = l2;
        ListNode* current = dummyHead;
        // Variable to hold carry over
        int carry = 0;
        
        // Traverse both linked lists
        while (p1 != nullptr || p2 != nullptr) {
            // Get digits from current nodes, default to 0 if node is nullptr
            int digit1 = (p1 != nullptr) ? p1->val : 0;
            int digit2 = (p2 != nullptr) ? p2->val : 0;
            // Calculate sum of current digits and carry over
            int sum = digit1 + digit2 + carry;
            // Update carry for next calculation
            carry = sum / 10;
            // Create a new node with the digit sum % 10
            current->next = new ListNode(sum % 10);
            // Move current pointer to the next node
            current = current->next;
            // Move p1 and p2 pointers to their next nodes
            if (p1 != nullptr) p1 = p1->next;
            if (p2 != nullptr) p2 = p2->next;
        }
        
        // After exiting the loop, if there's any remaining carry, add it as a new node
        if (carry > 0) {
            current->next = new ListNode(carry);
        }
        
        // Return the next of the dummy head, which is the head of the resultant linked list
        return dummyHead->next;
    }
};
