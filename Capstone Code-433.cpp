#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list node.
struct ListNode {
    int val;
    struct ListNode* next;
};

// Function to create a new node
struct ListNode* createNode(int val) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

// Function to merge two sorted linked lists
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    if (!l1) return l2;
    if (!l2) return l1;

    if (l1->val < l2->val) {
        l1->next = mergeTwoLists(l1->next, l2);
        return l1;
    } else {
        l2->next = mergeTwoLists(l1, l2->next);
        return l2;
    }
}

// Function to merge k sorted linked lists
struct ListNode* mergeKLists(struct ListNode** lists, int listsSize) {
    if (listsSize == 0) return NULL;
    if (listsSize == 1) return lists[0];

    // Divide and conquer approach to merge k lists
    int mid = listsSize / 2;
    struct ListNode* left = mergeKLists(lists, mid);
    struct ListNode* right = mergeKLists(lists + mid, listsSize - mid);
    
    return mergeTwoLists(left, right);
}

// Helper function to print the linked list
void printList(struct ListNode* head) {
    while (head) {
        printf("%d -> ", head->val);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    // Example: creating the lists [[1, 4, 5], [1, 3, 4], [2, 6]]
    struct ListNode* list1 = createNode(1);
    list1->next = createNode(4);
    list1->next->next = createNode(5);

    struct ListNode* list2 = createNode(1);
    list2->next = createNode(3);
    list2->next->next = createNode(4);

    struct ListNode* list3 = createNode(2);
    list3->next = createNode(6);

    // Array of pointers to linked lists
    struct ListNode* lists[] = {list1, list2, list3};

    // Merging k sorted lists
    struct ListNode* result = mergeKLists(lists, 3);

    // Printing the merged list
    printf("Merged list: ");
    printList(result);

    return 0;
}

