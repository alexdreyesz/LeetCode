#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode {
    int val;
    struct ListNode *next;
 }ListNode;

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int sum = 0;
    char result[100]; 

    while(l1 != NULL || l2 != NULL) {
        if(l1 != NULL && l2 != NULL) {
            sum += l1->val + l2->val;
            l1->next;
            l2->next;
        } else if (l1 != NULL) {
            sum += l1->val;
            l1->next;
        } else if (l2 != NULL) {
            sum += l2->val;
            l2->next;
        } 
    }

    sprintf(result, "%d", sum);
}

int main() {

    int link1[] = {2, 4, 3};
    int link2[] = {5, 6, 4};

    ListNode *l1 = (ListNode*)malloc(sizeof(ListNode));
    ListNode *l2 = (ListNode*)malloc(sizeof(ListNode));
    ListNode *result;

    ListNode *templ1 = l1;

    for(int i = 0; i < strlen(link1); i++) {
        ListNode *new_node = (ListNode*)malloc(sizeof(ListNode));
        new_node->val = link1[i];
        new_node->next = NULL;

        templ1->next = new_node;
        templ1 = new_node;
    }

    ListNode *templ2 = l2;

    for(int i = 0; i < strlen(link1); i++) {
        ListNode *new_node = (ListNode*)malloc(sizeof(ListNode));
        new_node->val = link2[i];
        new_node->next = NULL;

        templ2->next = new_node;
        templ2 = new_node;
    }

    result = addTwoNumbers(l1, l2);

    printf("\n");

    while(result != NULL) {
        printf("%d -> ", result->val);
    }

    printf("NULL\n");

    printf("\n");

    return 0; 
}