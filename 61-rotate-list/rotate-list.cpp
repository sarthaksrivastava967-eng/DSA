
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL || k == 0)
            return head;

        ListNode* prev = head;
        ListNode* curnt = head;

        int count = 0;
        ListNode* temp = head;

        while(temp != NULL) {
            count++;
            temp = temp->next;
        }

        k = k % count;

        if(k == 0)
            return head;

        while(k > 0) {
            curnt = curnt->next;
            k--;
        }

        while(curnt->next != NULL) {
            curnt = curnt->next;
            prev = prev->next;
        }

        ListNode* newHead = prev->next;

        curnt->next = head;
        prev->next = NULL;

        return newHead;
    }
};
