class Solution:
    def isWinner(self, player1: List[int], player2: List[int]) -> int:
        x=0
        y=0
        z=1
        for i in player1:
            if z==1:
                x+=i
            else:
                x+=2*i
                z-=1
            if i==10:
                z=3
                
        m=1
        for j in player2:
            if m==1:
                y+=j
            else:
                y+=2*j
                m-=1
            if j==10:
                m=3
                
        if x==y:
            return 0
        elif x>y:
            return 1
        else:
            return 2