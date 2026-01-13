
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {

        if (!head)
            return head;

        if (!head->next)
            return head;

        ListNode *t1 = head, *t2 = head->next, *temp = nullptr;

        while (t2 != nullptr)
        {
            temp = t2->next;
            t2->next = t1;
            t1 = t2;
            t2 = temp;
        }

        head->next = nullptr;
        head = t1;

        return head;
    }
};