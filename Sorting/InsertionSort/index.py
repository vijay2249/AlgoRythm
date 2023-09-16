def InsertionSort():
    initial_values = [13, 46, 24, 52, 20, 9]
    print("Before Sorting")
    for a in initial_values:
        print(a, end=" ")
    print()
    
    for i in range(len(initial_values)):
        j = i
        while j > 0 and initial_values[j - 1] > initial_values[j]:
          initial_values[j - 1], initial_values[j] = initial_values[j], initial_values[j - 1]
          j -= 1

    print("After Sorting")
    for a in initial_values:
        print(a, end=" ")

if __name__ == "__main__":
    InsertionSort()
