lst=[11,22,44,77,33,66,55,4,8,99]

print(lst)
max1=0
max2=0
for i in lst:
    if i > max1:
        max2=max1
        max1=i
    elif ((max2 < i) and (i < max1)):
        max2=i

print("max1:",max1)
print("max2:" ,max2)
