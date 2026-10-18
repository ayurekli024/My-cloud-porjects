num1 = int(input())
list1 = []
while num1 > 0:
    list1.insert(0,num1 % 10)
    num1 = num1 // 10
print(list1)
i = 0
j = len(list1)-1
palindrom = False
while i == j:
    i+=1
    j-=1
    palindrom = True
    print(1)

