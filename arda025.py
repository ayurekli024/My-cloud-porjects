
str1 = input()
str2 = input()
correct_position_indices = []
wrong_position_indices = []
completely_wrong_indices = []
i = 0
for num2 in str2:

	if num2 == str1[i]:
		correct_position_indices.append(i)
		i+=1
	else:
		if num2 in str1:
			wrong_position_indices.append(i)
			i+=1
		else:
			completely_wrong_indices.append(i)
			i+=1
all_lists = [correct_position_indices,wrong_position_indices,completely_wrong_indices]
print(all_lists)
