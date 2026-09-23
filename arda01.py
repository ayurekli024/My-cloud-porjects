fullName = input("Enter Your Name:")
n = fullName.rfind(" ")
print("Last Name:", fullName.upper()[n+1:])
print("First Name:", fullName.capitalize()[:n])