# N = int(input())

students = [
    ['Harry', 37.21],
    ['Berry', 37.21],
    ['Tina', 37.2],
    ['Akriti', 41],
    ['Harsh', 41],
]

# for i in range(N):
#     students.append([input(), float(input())])

# scores = set([student[1] for student in students])
# scores = list(scores)
# scores.sort()
# print(scores)

# students = [student[0] for student in students if student[1] == scores[1]]

# print(students)


def get_second_lowest_element(lists):
    scores = set([x[1] for x in lists])
    scores = list(scores)
    scores.sort()

    return scores[1]


score = get_second_lowest_element(students)
students = [student[0] for student in students if student[1] == score]

# print(students)

for s in students:
    print(s)
