#1-import the random module
import random

#2-create a list of subjects for fake news headlines
subjects = [
    'politics',
    'sports',
    'entertainment',
    'technology',
    'business',
    'health',
    'science'
]

#3-create a list of actions for fake news headlines
actions = [
    'shocks the world',
    'reveals a secret',
    'causes controversy',
    'sparks a debate',
    'changes everything',
    'is exposed',
    'is under investigation'
]

#4-create a list of objects for fake news headlines
objects = [
    'a celebrity',
    'a politician',
    'a company',
    'a scientific discovery',
    'a health issue',
    'a sports team',
    'a social media platform'
]

while True:

    #5-generate a random fake news headline
    subject = random.choice(subjects)
    action = random.choice(actions)
    obj = random.choice(objects)

    headline = f"{subject} {action} {obj}"

    #6-print the generated fake news headline
    print("\nFake Headline:")
    print(headline)

    #7-ask the user if they want to generate another headline
    user_input = input("\nDo you want to generate another headline? (yes/no): ")

    if user_input.strip().lower() != 'yes':
        break

print("\nThank you for using the fake news headline generator!")