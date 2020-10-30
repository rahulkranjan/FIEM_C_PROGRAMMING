list1 = []
n = int(input("Enter number of element :"))
for i in range(n):
    a = int(input())
    list1.append(a)
s = int(input("Enter the element you want to check :"))
q = list1.count(s)
q = int(q)
# print("the searched number appeared:", q)
if(q > 1):
    for i in range(q-1):
        list1.remove(s)
for i in range(len(list1)):
    d = list1
print(list(d))
