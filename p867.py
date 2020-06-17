##transpose of a matrix 

class Solution:
     
     def transpose(self, A: List[List[int]]) -> List[List[int]]:
         '''
            Take base the lements of the diagonal and switch the elements of is hori list            and vertical list 
         '''
         '''
            Diagonal elements of the form [i,i] 
         '''
         '''assuming square matrix '''
         B=A[:][:]
         for i in range(len(A)):
             for j in range(len(A)):
                 B[i][j]=A[j][i]

         return B 

