def rightSided(num1):
    for i in range(1,num1+1):
        print(" "*(num1-i)+"*"*i)
def leftSided(num1):
    for i in range(1,num1+1):
        print("*"*i)
def centerSided(num1):
    for a in range(1,num1+1):
        print(" "*(num1-a)+"*"*(2*a-1))  
str1 = input("Choose Your Triangle Type(L/C/R): ")
n = int(input("Enter your triangles rows: "))
str1 = str1.upper()
if str1 == 'L':
    leftSided(n)
elif str1 == 'C':
    centerSided(n)
elif str1 == 'R':
    rightSided(n)
else:
    print("Wrong Choice")


