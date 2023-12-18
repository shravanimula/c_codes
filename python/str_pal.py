st=input("enter the string:")
rev=""
for ele in st:
    rev=ele+rev

print("after rev:",rev)
print("str is:" ,st)

if(rev==st):
    print("string is palindrome" )
else:
    print("string is not palindrome")
