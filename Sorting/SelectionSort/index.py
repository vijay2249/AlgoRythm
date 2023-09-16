def SelectionSort():
    initial_values = [13, 46, 24, 52, 20, 9]
    print("Before Sorting")
    for a in initial_values:
        print(a, end=" ")
    print()
    
    for i in range(len(initial_values)):
        mini = i
        for j in range(i+1, len(initial_values)):
            if initial_values[j] < initial_values[mini]:
                mini = j
        initial_values[i], initial_values[mini] = initial_values[mini], initial_values[i]

    print("After Sorting")
    for a in initial_values:
        print(a, end=" ")

if __name__ == "__main__":
    SelectionSort()
