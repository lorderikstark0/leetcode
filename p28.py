'''given a substring and  a substring we have to find the 
first occurrence of a substring in that string 
'''

def strStr(hayStack:str ,needle:str) ->int:
	if(needle==''):
		return 0
	else:
		return hayStack.find(needle)	


def main():
	str1=input()
	str2=input()
	print(strStr(str1,str2))


if __name__=='__main__':
	main()
