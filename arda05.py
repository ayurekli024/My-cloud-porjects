notes = input("Please write 6 different results:")
note = []
note = notes.split(",")

note[0] = int(note[0])
note[1] = int(note[1])
note[2] = int(note[2])
note[3] = int(note[3])
note[4] = int(note[4])
note[5] = int(note[5])

note.remove(min(note))
note.remove(min(note))
value = sum(note)/4
print("Kalan Notlar : {0}".format(note[:4]))
print("Ortalama     : {0:<.2f}".format(value))