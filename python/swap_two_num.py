a=int(input("enter a number:"))
b=int(input("enter b number:"))
print("before swap:","a=:",a,"b=:",b)
a = a ^ b
b = a ^ b
a = a ^ b
print("after swap:","a=:",a,"b=",b)
