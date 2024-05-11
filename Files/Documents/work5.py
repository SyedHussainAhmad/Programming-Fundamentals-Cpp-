# # 10000999975535564535555534522

# number = int(input("Enter any number: "))

# # number = 123456789101112131415
# MAX_LENGTH = 1
# max_digit = number % 10
# CURRENT_LENGTH = 1
# current_digit = max_digit
# while number > 0:
#     number = number // 10
#     if number % 10 == current_digit:
#         CURRENT_LENGTH += 1
#     else:
#         if CURRENT_LENGTH > MAX_LENGTH:
#             MAX_LENGTH = CURRENT_LENGTH
#             max_digit = current_digit
#         current_digit = number % 10
#         CURRENT_LENGTH = 1
# if CURRENT_LENGTH > MAX_LENGTH:
#     MAX_LENGTH = CURRENT_LENGTH
#     max_digit = current_digit
# print(max_digit, MAX_LENGTH)

# num = int(input("Enter a number: "))

# base = 1
# sum = 0

# while base <= num:
#     exponent = base + 1
#     count = 1
#     result = 1
#     while count<= exponent:
#         result = result * base
#         count += 1
    
#     base +=1
#     sum += result

# print (sum)

# num = int(input("Enter number: "))
# S = int(input("Enter S: "))

# if num == 1:
#     sum = 1
# else:
#     term1, term2, termSum, count, sum = 1, 1, 1, 2, 1
#     while count <= num:
#         exponent = S + termSum
#         termSum = term1 + term2
#         term3 = term1 + term2
#         term1, term2 = term2, term3

#         if count % 2 == 0:
#             base = 2
#         else:
#             base = 3

#         result = 1
#         for innerCount in range(1, exponent + 1):
#             result *= base

#         count += 1
#         sum += result

# print(sum)

# num = int(input("Enter Number: "))
# numerator, denominator, count, result = 1, 1, 1, 0
# while count <= num:
#     term = numerator/denominator
#     denominator += 2
#     if count % 2 == 0:
#         result -= term
#     else:
#         result += term
#     count += 1

# result *= 4
# print(result)

# num = int(input("Enter the number: "))
# copyNum = num
# sum = 0
# while num > 0:
#     count = 1
#     remainder = num % 10
#     num = num // 10
#     factorial = 1
#     while count <= remainder:
#         factorial *= count
#         count += 1
#     sum += factorial

# if (sum==copyNum):
#     print("strong")
# else:
#     print("نہت strong")

# m = int(input("Enter First number: "))
# n = int(input("Enter Second number: "))

# if m < n:
#     max = n
#     min = m
# else:
#     max = m
#     min = n

# while min <= max:
#     if min == 0 or min == 1:
#         min += 1
#     else:
#         count = 2
#         while count < min and min % count != 0:
#             count += 1

#         if count == min:
#             print(min)
#         min += 1

# num = int(input("Enter a number"))

# if num == 0 or num == 1:
#     print ("not prime")

# else:
#     count = 2
#     while count < num and count != 0:
#         count +=1

#     if count == num:
#         print ("prime")

# num = int(input("Enter number: "))
# factor = 2

# while factor <= num:
#     if num % factor == 0:
#         count = 2
#         while count <= factor/2 and factor % count != 0:
#             count += 1

#         if count > factor/2:
#             print(factor)
#     factor += 1

# num = int(input("Enter the number: "))
# primeFactor1 = 2
# primeFactor2 = 3
# primes = 2

# while (primes <= num):
#     count = 2
#     while (count<primes and primes%count != 0):
#         count += 1

#     if (count==primes):
#         primeFactor3 = count

#     if (primeFactor2 - primeFactor1==2):
#         print(primeFactor1,primeFactor2)

#     primeFactor1 = primeFactor2
#     primeFactor2 = primeFactor3

#     primes += 1

# year = 0
# while year < 1:
#     year = int(input("Enter no of years: "))

# cnt = 1
# noOfMonths = 12*year
# sum = 0
# while cnt <= year:
#     innerCount = 1
#     while innerCount <= 12:
#         rainFallPerInch = float(input("Enter Rainfall per inch for month {}: ".format(innerCount)))
#         sum += rainFallPerInch
#         innerCount += 1
#     cnt += 1
# average = sum/noOfMonths
# print("Number of months: {}\nTotal rainfall: {}\nAverage rainfall per month: {}".format(noOfMonths, sum, average))

term1 = -1

while term1 < 0:
    term1 = int(input("Enter number 1: "))
term2 = -1
while term2 < 0:
    term2 = int(input("Enter number 2: "))
term3 = -1
count = 1

while term3 < term2 or term3 >= 0:
    term3 = term1 - term2
    term1 = term2
    term2 = term3
    count += 1
print("This is a sumac sequence of length", count)
