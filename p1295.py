def findNumber(nums):
    count_list=0
    for i in nums:
        count=0
        while(nums[i] >0):
            i=i//10
            count+=1
        if(count%2==0):
            count_list+=1
    return count_list


n=int(input('>'))
list_1=[]
while(n>0):
    for i in range(n):
        list_1.append(i)
    n=n-1
print(findNumber(list_1))

    