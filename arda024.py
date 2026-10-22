correct_position_indices = []
wrong_position_indices = []
completely_wrong_indices = []

found = False

num1 = str(input())
num2 = str(input())

for i in range(len(num1)):
    found = False
    for j in range(len(num2)):
        
        if i == j:
            if num1[i] == num2[j]:
                correct_position_indices.append(i)
                found = True
        else:
            if num1[i] == num1[j]:
                wrong_position_indices.append(i)
                found = True
    if not found:
        completely_wrong_indices.append(i)

print("[" ,correct_position_indices, ",", wrong_position_indices, ",", completely_wrong_indices, "]")

