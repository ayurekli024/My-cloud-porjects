print("Hello World!")
num1 = input("Write first number as integer : ")
num2 = input("Write second number as integer: ")
if num1.isdigit() and num2.isdigit():
	num1 = eval(num1)
	num2 = eval(num2)
	n = input("Choose your operator (+,-,*,/)")
	if n == '+':
		print("You chose addition.")
		print("Result is",num1+num2)
	elif n == '-':
		print("You chose substraction.")
		print("Result is",num1-num2)
	elif n == '*':
		print("You chose multiplication.")
		print("Result is",num1*num2)
	elif n == '/':
		print("You chose division.")
		if num2 != 0:
			result = num1/num2
			print("Result is {0:.2f}".format(result))
		else:
			print("Dividing 0 is not accepted.")
	else: 
		print("Your choose is wrong.")
else:
	print("Please input a number, not letter or something.")
