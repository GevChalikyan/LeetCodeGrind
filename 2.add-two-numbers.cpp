/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */

// @lc code=start
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

#ifndef LISTNODE_H

struct ListNode {     
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

#endif

class Solution {
public:
	//	Attempt #1	
    /*ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = l1;     //  Preserve initial l1 pointer
        bool carry = false;     //  

        l1->val += l2->val + (carry * 1);
        carry = l1->val >= 10;
        l1->val -= (10 * carry);

        while (l2->next != nullptr && l1->next != nullptr) {
            l1->next->val += l2->next->val + (carry * 1);

            carry = l1->next->val >= 10;
            l1->next->val -= (10 * carry);

            l1 = l1->next;
            l2 = l2->next;
        }

        l1->next = l1->next == nullptr ? l2->next : l1->next;

        while (carry && l1->next != nullptr) {
            l1->next->val += (carry * 1);

            carry = l1->next->val >= 10;
            l1->next->val -= (10 * carry);

            l1 = l1->next;
        }

        if (carry) {
            l1->next = new ListNode(1);
        }

        return ans;
    }*/

	//	Reference Answer
	/*ListNode* addTwoNumbers(ListNode* l1, ListNode* l2, int* throwaway) {
		ListNode* ans = l1;
		bool carry = false;

		l1->val += l2->val;
		carry = l1->val >= 10;
		l1->val -= (10 * carry);

		while (l2->next != nullptr || l1->next != nullptr || carry) {
			if (l1->next == nullptr && (l2->next != nullptr || carry)) {
				l1->next = new ListNode(0);
			}

			l1 = l1->next;
			l2 = l2->next != nullptr ? l2->next : new ListNode(0);

			l1->val += l2->val + carry;
			carry = l1->val >= 10;
			l1->val -= (10 * carry);
		}

		return ans;
	}*/

	//	Practice
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2, int* throwaway) {
		return nullptr;
	}
};
// @lc code=end

