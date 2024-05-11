# hourlyPay = int(input("Enter your Hourly Pay: "))
# hours = int(input("Enter Hours worked: "))

# if hours <= 40:
#     print(f"Regular Pay: {hours*hourlyPay}")
#     print(f"Total Pay: {hours*hourlyPay}")
# else:
#     print("Regular Pay: ",hourlyPay*40)
#     overtimePay = (hours - 40) * (hourlyPay*1.5)
#     print ("Overtime Pay: ",overtimePay)
#     print ("Total Pay: ",overtimePay + (hourlyPay*40))
    
# num = int(input("Enter 3 digit number: "))

# num3 = num%10
# num = num//10
# num2 = num%10
# num = num//10

# if num == num3:
#     print("hurray!!")
# else:
#     print("aiehf")


# count = "y"
# totalSum = 0
# countNum = 0

# while count == "y":
#     num = int(input("Enter the number"))
#     if num %2 != 0:
#         totalSum += num
#         countNum += 1
#     count = input("Press y to enter number again.")

# print(f"You have entered {countNum} odd numbers and their total sum is {totalSum}")

# num = int(input("Enter the number: "))

# count = 1

# print(f"The positive divisors of {num} are:")

# while count<= num:
    
#     if num % count == 0:
#         print (count)

#     count+=1

# num = int(input("Enter the number: "))

# count = 1
# mul = 1

# while count <= num:
#     mul = mul * count
#     count+=1

# print (mul)

# num = int(input("Enter the number: "))

# product = 1

# while num>=10:
#     num1 = num % 10
#     num = num//10
#     product = product * num1

# product = product * num

# print (product)


# count = 1
# condition = 0

# num = int( input("Enter the number: "))

# while count<= num:
    
#     if num % count == 0:
#         condition += 1

#     count+=1

# if condition == 2:
#     print("prime")
# else:
#     print("not prime")

# num1 = int( input("Enter first number: "))
# num2 = int( input("Enter second number: "))

# if num1>num2:
#     min = num2
# else:
#     min = num1

# count = 1

# while count <= min:
#     if (num1%count==0 and num2%count==0):
#         hcf = count
    
#     count += 1

# print (hcf)

# Input the decimal number
# decimal_num = int(input("Enter a decimal number: "))

# Initialize a variable to store the octal equivalent
# octal_num = 0

# Initialize a variable to keep track of the current digit
# digit = 1

# Divide the decimal number by 8 and store the remainder
# while decimal_num > 0:
#     remainder = decimal_num % 8
#     octal_num += remainder * digit
#     decimal_num = decimal_num // 8
#     digit *= 10

# Print the octal equivalent of the decimal number
# print("Octal equivalent: ", octal_num)

# a = int(input("enter a"))
# n = int(input("enter n"))

# count = 1
# result = 1

# while count <= n:
#     result *= a
#     count+=1

# print ( result)
