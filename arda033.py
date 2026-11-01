list1 = [10,15,20,25,30]
list2 = [0,0,0,0,0]
i = 0
while i < len(list1):
    list2[i]= int((9*list1[i]/5)+32)
    i+=1
i = 0
print("{0:<15}{1:<15}".format("Celsius","Fahrenheit"))
while i != len(list1):
    print("{0:<15}{1:<15}".format(list1[i],list2[i]))
    i+=1

num1 = eval(input("Enter coefficient of restitution: "))
num2 = eval(input("Enter initial height in meters: "))
i = 0
total = num2
while num2 >= 0.1:
    
    num2 = num2 * num1
    total+=num2*2
    i+=1
print("Number of bounces: ",i)
print("Meters traveled: ",total)    
x = 1
while (x+1980) != x*x:
    x+=1
print(x)


pop = 7000000000
date =2011
while pop < 8000000000:
    pop = pop+(pop*0.011)
    date+=1
print(date)

stro = 100
date = 0
while stro > 1:
    date +=28
    stro = stro / 2

print(date)

cpi = 100
year = 0.025
date = 0
while cpi < 200:
    date+=1
    cpi = cpi+ (cpi*year)

print(date)

