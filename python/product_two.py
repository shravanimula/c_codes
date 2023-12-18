a=int(input("enter a number:"))
b=int(input("enter b number:"))
result=0
while(b > 0):
    if(b&1):
        result=result+a
    a = a << 1
    b = b >> 1

print("product of two is:",result)
