"""list1 = ["Hello\n", "Aloha\n"]
outfile = open("Greetings.txt", 'w')
outfile.writelines(list1)
outfile.close()
infile = open("Greetings.txt", 'r')
text = infile.read()
infile.close()
print(text.rstrip())

print(len(set("Bookkeeper")))
set1 = set("Bookkeeper")
set1 = sorted(set1)
print(set1)

s = set("dozen")
s.discard('d')
print(sorted(s, reverse=True))
list1 = [1,2,3,4,5]
list2 = [4,5,6,7,8]
def findItemsInEither(list1, list2):
    list3 = []
    for item in list1:
        if (item not in list3):
            list3.append(item)
    for item in list2: 
        if (item not in list3):
            list3.append(item)
    return list3

list1 += list2
set2 =set(list1)

print(findItemsInEither(list1,list2,))
print(list(set2))"""

names = ["Donald Shell", "Harlan Mills", "Donald Knuth", "Alan Kay"]
setLN = set() # empty set
for name in names:
    setLN.add(name.split()[-1])
print(setLN)
set1= {x.split()[-1] for x in names}
print(set1)