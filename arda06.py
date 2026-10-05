name  = input("Input your name to authenticate: ")
password = input("Create a password: ")
n = name.rfind(" ")
surname = name.upper()[n+1:]
name = name.capitalize()[:n]

print("Welcome to", name, surname)
checkpass  = input("Input your password: ")
if checkpass == password:
    print("You successfully authenticated.")
else:
    print("There is a problem.")
