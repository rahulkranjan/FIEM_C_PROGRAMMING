
x = int(input("Enter 1st number: "))
y = int(input("Enter 2nd number: "))
a = 0
for i in range(x, y+1):
    if i % 2 == 0:
        a += i

print("sum of even number is ", a)
