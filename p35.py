class Solution:
    def searchInsert(self,nums:List[int], target:int ) ->int:
        for i in range(len(nums)):
            if(nums[i]==target): ## the target is found 
                return i
            
            else:
                if(i==0 and target<nums[i]):##when element has to be inserted at index 0
                    return 0
                elif(i==len(nums)-1 and target>nums[i]):
                    ##when element has to beinserted 
                    return len(nums)
                else:
                    if(nums[i]>target):
                        ##if the elemnt has to be inserted somewhere in the middle  
                        return i
