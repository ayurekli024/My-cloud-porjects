password = input("Create a password: ")
strong = 0
short = 0
num = 0
whitespace = 0
if len(password)>= 8:
    strong +=1
    short = 1
if password[0].isdigit() == False:
    strong+=1
    num = 1
if password.find(" ") >=0:
    strong+=1
    whitespace = 1
if strong == 3:
    print("Strong Password")
else :
    if short == 0:
        print("Your password is too short.")
    if num == 0:
        print("Your password starts with number.")
    if whitespace == 0:
        print("Your password does not contain whitespace.")