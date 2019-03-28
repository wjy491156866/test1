//2.�������

//�������� �ǿ� ������������ʾ�����Ǹ������������У����Ǹ��Ե�λ���ǰ��� ���� �ķ�ʽ�洢�ģ��������ǵ�ÿ���ڵ�ֻ�ܴ洢 һλ ���֡�

//��������ǽ��������������������᷵��һ���µ���������ʾ���ǵĺ͡�

//�����Լ���������� 0 ֮�⣬���������������� 0 ��ͷ��



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

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

    ListNode* head = NULL, *cur = NULL;

    int carry = 0;

    while (l1 || l2) { // ͬʱ������������������ֻ��Ҫһ��whileѭ��

        int sum = carry; // ����ǰҪ��Ľڵ��ֵ����Ϊ��λ��ֵ��0 | 1��

        if (l1) { sum += l1->val; l1 = l1->next; } // ע�⵽�Ƿ������Ѿ����˱߽���

        if (l2) { sum += l2->val; l2 = l2->next;  } // ͬ��

        if (!cur) { cur = head = new ListNode(sum); } // �������������������ڣ�û���κνڵ㣩

        else { cur->next = new ListNode(sum); cur = cur->next; } // ��������ֱ����ӵ�����ĺ������

        if (cur->val >= 10) { carry = 1; cur->val -= 10; } //��ǰ�ڵ��ֵ���>=10�����λ��

        else carry = 0;

    }

    if (carry == 1) cur->next = new ListNode(carry); //�������λ���н�λ��

    return head;

    }

};