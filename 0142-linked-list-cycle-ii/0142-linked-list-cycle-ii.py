# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def detectCycle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        slow,fast=head,head
        while fast and fast.next:
            fast=fast.next.next
            slow=slow.next
            if slow==fast:
                slow1=head
                while slow1!=slow:
                    slow1=slow1.next
                    slow=slow.next
                return slow
        
        
        



        