// Given a linked list, there may exist a single loop or no loop. If there are a total of X elements present in a loop, return X-1 as your answer; otherwise, in case no loop exists, return -1.
// To solve this problem, complete the function present in the submit solution tab.
// Input Format
// The first line will contain N, representing the elements in the linked list
// Constraints
// Maximum elements in the linked list can be 10^5.

class Solution{
    static int findlength(Node root,Node slow,Node fast){
        int count=1;
        fast=fast.next;
        while(fast!=slow){
            fast=fast.next;
            count++;
        }
        return count;
    }
    static int solve(Node root){
       Node slow=root;
       Node fast=root;
       while(fast!=null && fast.next!=null){
           slow=slow.next;
           fast=fast.next.next;
           if(slow==fast){
               return findlength(root,slow,fast);
           }
       }
       return -1;
    }
}