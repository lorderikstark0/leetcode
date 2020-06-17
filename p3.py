
def lengthoflongestSubstring(s:str)->int:
	count=0
	'''Converting string into a set and counting the val'''
	'''also we have to check if the elements of the set made a substring 
	in the original string or not 
	'''
	f=set(s)
	print(f)


def main():
	s=input()
	print(lengthoflongestSubstring(s))

if __name__=='__main__':
	main()
