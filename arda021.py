word = "sea"
print(word)

t = (1, 2, 3)
t = (0,) + t[1:]
print(t)

nums = (6, 2, 8, 0)
print("Largest Number:", max(nums))
print("Length:", len(nums))
print("Total:", sum(nums))
print("Number list:", list(nums))


str1 = input("Write a sentence.")
lis1 = str1.split(" ")
print(len(lis1))
print(lis1[0])
print(lis1[-1])

str2 = input("Write your name: ")
lis2 = str2.split(" ")
print("Revised form: ", lis2[-1],lis2[0:-1])
print("Middle Name: ",lis2[1])

