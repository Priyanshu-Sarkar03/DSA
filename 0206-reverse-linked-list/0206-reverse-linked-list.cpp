class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;  // Pointer to traverse the list
        ListNode* prev = nullptr;  // Pointer to the previous node, initially nullptr
        ListNode* next = nullptr;  // Pointer to the next node, initially nullptr
        
        // Traverse the list and reverse pointers iteratively
        while (temp != nullptr) {
            next = temp->next;   // Store the next node
            temp->next = prev;   // Reverse the current node's pointer
            
            // Move pointers one step forward
            prev = temp;         // Move prev to current node
            temp = next;         // Move temp to next node
        }
        
        // prev now points to the new head of the reversed list
        return prev;  // Return the new head of the reversed list
    }
};
