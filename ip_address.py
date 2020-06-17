##question on string manipulation 
def defangIPAddress(address):
    return  address.replace(".","[.]")

n=str(input(''))
print(defangIPAddress(n))

