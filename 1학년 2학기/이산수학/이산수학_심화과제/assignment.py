from copy import deepcopy

def custom_linear_search(target_list, x):
    num_steps = 0
    # YOU ARE ONLY ALLOWED TO MODIFY THIS ZONE - START
    x_index = -1
    for i in range(len(target_list)):
        num_steps += 1
        if x == target_list[i]:
            x_index = i
            break

    # YOU ARE ONLY ALLOWED TO MODIFY THIS ZONE - END
    return x_index, num_steps

def custom_binary_search(target_list, x):
    num_steps = 0
    # YOU ARE ONLY ALLOWED TO MODIFY THIS ZONE - START

    # YOU ARE ONLY ALLOWED TO MODIFY THIS ZONE - END
    return x_index, num_steps

def custom_sort(target_list):
    num_steps = 0
    target_list = deepcopy(target_list)
    # YOU ARE ONLY ALLOWED TO MODIFY THIS ZONE - START

    # YOU ARE ONLY ALLOWED TO MODIFY THIS ZONE - END
    return target_list, num_steps