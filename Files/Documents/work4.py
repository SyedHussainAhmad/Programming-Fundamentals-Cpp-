# num = int(input("ENter the number"))
# calc = num * (num+1)/2
# print(calc)

# num = int(input("ENter the number"))
# count = 1
# reverseNum = 0
# while count<num:
#     if num%count == 0:
#         reverseNum = reverseNum + count
#     count+=1

# if reverseNum == num:
#     print('perfect number')

# print(reverseNum)

# num = int(input("ENter the number"))
# reverseNum = 0
# copiedNum = num

# while copiedNum>0:
#     remainder = copiedNum%10
#     reverseNum = reverseNum * 10 + remainder
#     copiedNum = copiedNum//10

# if reverseNum == num:
#     print("palindrome")
# else:
#     print("not a palindrome")

num = int(input("ENter the number"))
binaryNum = 0

while num>0:
    remainder = num%2
    binaryNum = binaryNum * 10 + remainder
    num = num//2
print (binaryNum)

# terms = int(input("ENter the number"))
# if terms == 1:
#     print (1)  
# elif terms == 2:
#     print (3)

# count = 3
# term1 = 1
# term2 = 2
# sum = term1 + term2

# while count <= terms:
#     nextTerm = term1+term2
#     sum+=nextTerm
#     print(sum)
#     term1=term2
#     term2= nextTerm
#     count += 1

# print(sum)

# num = int(input("ENter the number"))

# if num<0:
#     num = num*-1

# reverseNum = 0
# while num > 0:
#     remainder = num % 10
#     reverseNum = reverseNum * 10 + remainder
#     num = num // 10
# while reverseNum > 0:
#     remainder = reverseNum % 10
#     print (remainder,end=" ")
#     reverseNum = reverseNum//10

# num = int(input("Enter the number"))
# max = 0
# min = num
# sum = num
# count = 1

# while num!=-99:
#     num = int(input("ENter the number"))
#     if num>max:
#         max = num
#     elif num< min:
#         min = num
#     count += 1
#     if num != -99:
#         sum +=num

# if sum!= -99:
#     print(sum/count)

# num1 = int(input("Enter the first number"))
# num2 = int(input("Enter the second number"))

# if num1>num2:
#     max = num1
# elif num2>num1:
#     max = num2

# count = 0
# while count != 1:
#     if max%num1 == 0 and max% num2 == 0:
#         count = 1
#     max += 1

# print (max-1)

# steps = int(input("Enter the no of steps: "))
# count = 1

# x = 0
# y = 0

# while count <= steps:
#     x = int(input(f"Enter {count} step x axis"))
#     y = int(input(f"Enter {count} step y axis"))
#     count = count + 1

# distance = (x*x) + (y*y)
# print (distance)