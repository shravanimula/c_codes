a=int(input("enter a number:"))
b=int(input("enter b number:"))
value=0
while(b!=0):
    value=(a&b) << 1
    a = a ^ b
    b = value

print("sum of two is:",a)
