from assignment import *
import random

if __name__ == '__main__':

    target_list = random.sample(range(100, 10000), 10)
    
    print('1. Test Case -- Linear Search')
    x = random.choice(target_list)
    custom_index, num_steps = custom_linear_search(target_list, x)
    auto_index = target_list.index(x)
    if custom_index == auto_index:
        print(' PASSED ')
    else:
        print(' FAILED ')

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
