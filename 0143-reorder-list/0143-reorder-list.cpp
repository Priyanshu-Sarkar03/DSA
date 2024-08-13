/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;             // Value of the current node
 *     ListNode *next;      // Pointer to the next node in the list
 *     ListNode() : val(0), next(nullptr) {}                    // Default constructor, initializes value to 0 and next to nullptr
 *     ListNode(int x) : val(x), next(nullptr) {}               // Constructor that initializes value with x and next to nullptr
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}  // Constructor that initializes value with x and next pointer with the given node
 * };
 */

class Solution {
public:
    void reorderList(ListNode* head) {
        // Step 1: Create a deque (double-ended queue) to store pointers to the nodes of the linked list
        deque<ListNode*> q;

        // Step 2: Traverse the linked list and add each node to the deque
        ListNode* temp = head;  // Temporary pointer to traverse the list
        while (temp != NULL) {
            q.push_back(temp);  // Add the current node to the back of the deque
            temp = temp->next;  // Move to the next node
        }

        // Step 3: Reorder the list by alternating nodes from the front and back of the deque
        temp = head;  // Start from the head of the list
        q.pop_front();  // Remove the first element, as temp is already pointing to it

        while (!q.empty()) {
            // Step 3a: Set the next node of temp to be the last node from the deque
            temp->next = q.back();  // Link the current node to the node at the back of the deque
            q.pop_back();  // Remove the last node from the deque
            temp = temp->next;  // Move temp to the new node

            // Step 3b: Check if deque is not empty before proceeding
            if (!q.empty()) {
                // Set the next node of temp to be the first node from the deque
                temp->next = q.front();  // Link the current node to the node at the front of the deque
                q.pop_front();  // Remove the first node from the deque
                temp = temp->next;  // Move temp to the new node
            }
        }

        // Step 4: Set the next pointer of the last node to nullptr to mark the end of the list
        temp->next = NULL;
    }
};
