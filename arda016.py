L = ["sentence","contains","five","words."]
L.insert(0,"This")
print(" ".join (L))
del L[3]
L.insert(3,"six")
L.insert(4,"different")
print(" ".join (L))