from copy import deepcopy
import random

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

if __name__ == '__main__':

    
    target_list = random.sample(range(100, 10000), 10)


    print('2. Test Case -- Binary Search')
    x = random.choice(target_list)
    sorted_list, num_steps = custom_sort(target_list)
    custom_index, num_steps = custom_binary_search(sorted_list, x)
    auto_index = sorted_list.index(x)
    if custom_index == auto_index:
        print(' PASSED ')
    else:
        print(' FAILED ')

    print('3. Test Case -- Sort')
    sorted_list, num_steps = custom_sort(target_list)
    auto_sorted_list = sorted(target_list)

    equal_counter = 0
    for val1, val2 in zip(sorted_list, auto_sorted_list):
        if val1 == val2:
            equal_counter += 1

    if equal_counter == len(sorted_list):
        print(' PASSED ')
    else:
        print(' FAILED ')
