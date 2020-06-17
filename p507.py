'''perfect number is a +ve number 
that is equal to the sum of all its +ve divisors except itself
'''
'''this will give tle --> writing the main solution in cpp
'''
def getDivisors(num):
	i=1
	li1=[]
	while i<num:
		if(num%i==0):
			li1.append(i)
		i=i+1
	return li1


def checkPerfect(num:int)->bool:
	if(num<0):
		return False
	else:
		sum1=num
		sum2=0
		li2= getDivisors(num)
		for i in li2:
			sum2+=i
		if(sum2==sum1):
			return True
		else:
			return False


def main():
	p=int(input())
	print(checkPerfect(p))


if __name__=='__main__':
	main()
