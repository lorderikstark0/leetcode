'''
Given a sorted array nums , we have to remove the duplicates 
in-place such that each element appear only once and return the new length 
'''

def removeDuplicates(nums):
	'''convert the list into a set  and find its size '''
	'''it is not working with sets in leetcode 
	thats why using a differnet approach
	f= set(nums)
	print(f)
	return len(f)
	'''
	count=0
	for num in nums:
		if count==0 or num!=nums[count-1]:
			nums[count]=num 
			count+=1
	return (count)


def main():
	t=int(input())
	nums=[]
	while(t>0):
		p=int(input())
		nums.append(p)
		t=t-1
	print(removeDuplicates(nums))

if __name__=='__main__':
	main()