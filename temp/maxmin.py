
lst = []
n = int(input("Enter number of elements : "))

for i in range(0, n):
    b = int(input())

    lst.append(b)

lst.sort()
print("Max term is :", lst[-1])
print("Min term  is :", lst[0])
