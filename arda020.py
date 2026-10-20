count = 1
while count < 10:
    if count % 3 == 0:
        print("Multiple of 3:", count)
    count += 1


while True:
    num1 = int(input("Write an integer: "))
    if num1 > 0:
        print("Thank You!")
        break
    else:
        print("Try again.")