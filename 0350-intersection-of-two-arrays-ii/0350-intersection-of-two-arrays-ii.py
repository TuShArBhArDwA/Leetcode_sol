class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        l1=[]
        l2=[]
        if len(nums1)>=len(nums2):
            for i in range(len(nums2)):
                count=0
                for j in range(len(nums1)):
                    if nums2[i]==nums1[j] and j not in l2 and count==0:
                        l1.append(nums2[i])
                        l2.append(j)
                        count=1
        else:
            for i in range(len(nums1)):
                count=0
                for j in range(len(nums2)):
                    if nums1[i]==nums2[j] and j not in l2 and count==0:
                        l1.append(nums1[i])
                        l2.append(j)
                        count=1
        return l1
