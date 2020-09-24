from collections import OrderedDict


words = OrderedDict()
n = int(input())


for i in range(n):
    input_text = input()

    if input_text in words:
        words[input_text] += 1

    else:
        words[input_text] = 1

print(len(words))
print(' '.join(map(str, words.values())))
