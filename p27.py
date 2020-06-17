'''given a an array nums and a value val we have to remove 
all the instances of that value in-place and return the new length 
'''
'''
DOubt in the question --> leave for now 
'''

def removeElement(nums,val) ->int :
	new_list= list(filter(lambda x: x!=val ,nums))
	'''prints the new_list'''
	print(new_list)
	return len(new_list)


def main():
	n=int(input('Size :'))
	li1=[]
	while(n>0):
		p=int(input('Element:'))
		li1.append(p)
		n=n-1
	val=int(input('Val:'))
	print(removeElement(li1,val))

if __name__=='__main__':
	main()