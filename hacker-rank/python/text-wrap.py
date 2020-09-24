import textwrap
s = input()
w = int(input())

text_list = textwrap.wrap(s, w)
result = ''
for line in text_list:
    result += line + '\n'

print(result)
