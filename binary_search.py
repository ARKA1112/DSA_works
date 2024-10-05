import numpy as np


def binary_search(list, target):
    low = 0
    high = len(list)

    while low <= high:
        mid = (low + high) //2
        if list[mid] == target:
            print(f"Target is found in index {mid}")
            return 1
        elif list[mid] > target:
            high = mid
            mid+=1
        elif list[mid] < target:
            low = mid
            mid+=1
        else:
            print("Target is not found")


if __name__ == '__main__':
    lis = list(set(np.random.randint(1000,size=400)))
    #lis.sort()
    target = 766
    print(lis)
    binary_search(lis,target)