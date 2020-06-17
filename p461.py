##hamming distance 

def hammingDistance(x:int,y:int)->int:
    setBits=0
    n1=x^y
    while(n1>0):
        setBits+= x & 1
        x >>= 1
    return setBits

if __name__ =='__main__':
    x=int(input('>'))
    y=int(input('>'))
    print(hammingDistance(x,y))

