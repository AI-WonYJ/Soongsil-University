from copy import deepcopy
import random

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

if __name__ == '__main__':

    target_list = random.sample(range(100, 10000), 10)
    
    print('1. Test Case -- Linear Search')
    x = random.choice(target_list)
    custom_index, num_steps = custom_linear_search(target_list, x)
    auto_index = target_list.index(x)
    if custom_index == auto_index:
        print(' PASSED ', num_steps)
    else:
        print(' FAILED ')
