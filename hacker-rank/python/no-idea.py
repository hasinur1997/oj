def happyness(input_arry, A, B):
    happyness = 0

    for i in input_arry:
        if i in A:
            happyness += 1

        if i in B:
            happyness -= 1

    return happyness


def main():
    n, m = input().split()
    input_array = list(map(int, input().split()))
    A = set(map(int, input().split()))
    B = set(map(int, input().split()))
    print(happiness(input_array, A, B))


if __name__ == '__main__':
    main()
