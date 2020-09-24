def solve(s):
    for i in s.split():
        s = s.replace(i, i.capitalize())
    return s


name = solve('3hasinur rahman')

print(name)
