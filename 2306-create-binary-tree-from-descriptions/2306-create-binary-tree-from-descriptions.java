/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public TreeNode createBinaryTree(int[][] descriptions) 
    {
        HashMap<Integer,TreeNode>map=new HashMap<Integer,TreeNode>();
        HashSet<Integer>hs=new HashSet<Integer>();
        for(int  i[]:descriptions)
        {
            int parent=i[0];
            int child=i[1];
            int flag=i[2];
            if(!map.containsKey(parent))
            map.put(parent,new TreeNode(parent));
            if(!map.containsKey(child))
            map.put(child,new TreeNode(child));
            if(flag==1)
            map.get(parent).left=map.get(child);
            else
            map.get(parent).right=map.get(child);
            hs.add(child);
        }
        for(Map.Entry<Integer,TreeNode>e:map.entrySet())
        {
            if(!hs.contains(e.getKey()))
            return map.get(e.getKey());
        }
        return null;
        
    }
}