def custom_binary_search(target_list, x):
    num_steps = 0
    # YOU ARE ONLY ALLOWED TO MODIFY THIS ZONE - START
    first, last = 0, len(target_list)
    while first <= last:
        num_steps += 1
        half = (first + last) // 2
        if target_list[half] == x:
            x_index = half
            break
        elif target_list[half] > x:
            last = half - 1
        else:
            first = half + 1
    if first > last:
        x_index = -1
    # YOU ARE ONLY ALLOWED TO MODIFY THIS ZONE - END
    return x_index, num_steps


import random
target_list = random.sample(range(100, 10000), 10)
x = 1145 #random.choice(target_list)
sorted_list = [1144, 1671, 2635, 3152, 4235, 5869, 7050, 7512, 7723, 9506]
custom_index, num_steps = custom_binary_search(sorted_list, x)
print(custom_index, num_steps)
# auto_index = sorted_list.index(x)
# if custom_index == auto_index:
#     print(' PASSED ')
# else:
#     print(' FAILED ')