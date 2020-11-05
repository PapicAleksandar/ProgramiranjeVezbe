n=int(input())
factorial = 1

if n == 0:
   print("0")
else:
   for i in range(1,n + 1):
       factorial = factorial*i
   print("Faktorije broja ",n,"je",factorial)