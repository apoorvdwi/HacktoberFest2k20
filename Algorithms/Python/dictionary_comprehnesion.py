
# ---------------------------------------------------Dictionary comprehension -------------------------------------------------

numbers = dict(first=1, second=2, third=3)
sqaured_no = {key: value**2 for key, value in numbers.items()}

print(sqaured_no)

str1 = "ABC"
str2 = "123"
combo = {str1[i]: str2[i] for i in range(0, len(str1))}
print(combo)

person = {"name": "aayush", "sirname": "kumar"}

person_1 = {k.upper(): v.upper() for k, v in person.items()}
print(person_1)
