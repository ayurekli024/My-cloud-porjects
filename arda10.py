num1 = input("Write a number:")

if num1.isdigit()== True:
    num1 = int(num1)
    num2 = num1 % 2
    if num2 == 0:
        print("Even")
    elif num2 == 1:
        print("Odd")
elif num1.find("-") >= 0:
    print("Negative")
else :
    print("Invalid input! Please enter an integer.")
        