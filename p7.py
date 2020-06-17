'''reverse an intger '''

def reverse(x:int)->int:
	ans_ret=0
	if(x<0):
		x=x*-1
		p=0
		while(x>0):
			h=x%10
			p=p*10+h
			x=x//10
		ans_ret=-1*p	
	else:
		p=0
		while(x>0):
			h=x%10
			p=p*10+h
			x=x//10
		ans_ret=p
	return ans_ret	

def main():
	x=int(input())
	print(reverse(x))

if __name__=='__main__':
	main()