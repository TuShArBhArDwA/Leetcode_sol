class Solution:
    def commonChars(self, words: List[str]) -> List[str]:
        l1=[]
        l3=[]
        for k in range(1,len(words)):
            l2=[]
            for z in range(len(words[k])):
                l2.append(words[k][z])
            l3.append(l2)
        for i in words[0]:
            check=0
            for j in range(len(l3)):
                if i in l3[j]:
                    n=l3[j].index(i)
                    l3[j].pop(n)
                    check+=1
            if check==len(l3):
                l1.append(i)
        return (l1)