num=int(input("enter a number:"))
temp=num
rev=0
while(temp > 0):
    rev=rev*10+temp%10
    temp=temp//10

if (rev==num):
    print(num ,"is palindrome")

else:
    print(num,"is not palindrome")
