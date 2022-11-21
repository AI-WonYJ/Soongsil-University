from copy import deepcopy

def custom_linear_search(target_list, x):
    num_steps = 0
    # YOU ARE ONLY ALLOWED TO MODIFY THIS ZONE - START
    for i in range(len(target_list)):
        num_steps += 1
        if i <= len(target_list) and x == target_list[i]:
            x_index = i
            break
        else:
            x_index = -1
    # YOU ARE ONLY ALLOWED TO MODIFY THIS ZONE - END
    return x_index, num_steps

def custom_binary_search(target_list, x):
    num_steps = 0
    # YOU ARE ONLY ALLOWED TO MODIFY THIS ZONE - START
    start, end = 0, len(target_list)

    while start <= end:
        num_steps += 1
        half = (start + end) // 2
        if target_list[half] == x:
            x_index = half
            break
        elif target_list[half] > x:
            end = half - 1
        else:
            start = half + 1
    # YOU ARE ONLY ALLOWED TO MODIFY THIS ZONE - END
    return x_index, num_steps

def custom_sort(target_list):
    num_steps = 0
    target_list = deepcopy(target_list)
    # YOU ARE ONLY ALLOWED TO MODIFY THIS ZONE - START
    for i in range(1, len(target_list)):
        for j in range(i, 0, -1):
            num_steps += 1
            if target_list[j - 1] > target_list[j]:
                target_list[j - 1], target_list[j] = target_list[j], target_list[j - 1]
    # YOU ARE ONLY ALLOWED TO MODIFY THIS ZONE - END
    return target_list, num_steps