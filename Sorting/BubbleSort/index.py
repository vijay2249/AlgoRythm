def BubbleSort():
    initial_values = [13, 46, 24, 52, 20, 9]
    print("Before Sorting")
    for a in initial_values:
        print(a, end=" ")
    print()
    
    for i in range(len(initial_values)-1, -1, -1):
        for j in range(0, i):
            if initial_values[j] > initial_values[j+1]:
                initial_values[j], initial_values[j+1] = initial_values[j+1], initial_values[j]

    print("After Sorting")
    for a in initial_values:
        print(a, end=" ")

if __name__ == "__main__":
    BubbleSort()