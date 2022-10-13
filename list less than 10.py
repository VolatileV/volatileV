
a = [1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89]

b=[]

c=int(input("Enter the number lesser than which (from a given list) should be entered in a separate list: "))

for i in a:
    if i<c:
        b.append(i)
    else:
        continue

print(b)
