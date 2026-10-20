list1 = [y ** 2 for y in range(3)if y >3]

x = 5
GRAVITY = 9.80
#if we want to constant valuable, we are defining with UPPERCASE letters.
def main():
    print(x,"Value of x in main")
    trivial()
def trivial():
    global x
    #if we want to change x value, we need to define "global x" in the function
    x+=7
    print(x,"Value of x in trivial")
    print(GRAVITY)
main()

print(x)
print(list1)


