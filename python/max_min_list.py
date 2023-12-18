lst=[22,4,11,5,9,66,3,7,33,55]
print(lst)
min=max=lst[0]
for ele in lst:
    if ele < min:
        min=ele
    if ele > max:
        max=ele

print("max=",max,"min=",min)
