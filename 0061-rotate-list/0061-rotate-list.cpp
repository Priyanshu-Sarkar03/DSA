class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        // Edge case: If the list is empty, has only one node, or no rotation is needed
        if (!head || !head->next || k == 0) {
            return head;
        }

        // Step 1: Put the nodes into a vector
        vector<ListNode*> arr;
        ListNode* temp = head;
        while (temp) {
            arr.push_back(temp); // Store the current node in the vector
            temp = temp->next;   // Move to the next node
        }

        int n = arr.size(); // Get the size of the list
        k = k % n;  // Handle the cases where k is larger than the size of the list
        if (k == 0) { // If k is 0 after modulus, no rotation is needed
            return head;
        }

        // Step 2: Create the second part of the array
        ListNode* newHead = arr[n - k]; // The new head will be the (n-k)th node
        ListNode* current = newHead; // Start from the new head
        for (int i = n - k; i < n; ++i) {
            current->next = arr[i]; // Link nodes from (n-k+1) to (n-1)
            current = current->next; // Move to the next node
        }

        // Step 3: Create the first part of the array
        for (int i = 0; i < n - k; ++i) {
            current->next = arr[i]; // Link nodes from 0 to (n-k-1)
            current = current->next; // Move to the next node
        }

        // Step 4: Finalize the list
        current->next = nullptr; // Set the next pointer of the last node to nullptr

        return newHead; // Return the new head of the rotated list
    }
};
