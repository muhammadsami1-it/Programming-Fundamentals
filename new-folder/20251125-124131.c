ITFA LAB 12 – PYTHON LOOPS 

This file contains: syntax, examples, and shortcuts.


SECTION 1: FOR LOOP – BASIC SYNTAX
for i in range(start, stop, step):
    statement


Common patterns:

for i in range(5):          # 0 to 4
for i in range(1, 6):       # 1 to 5
for i in range(1, 10, 2):   # step of 2

SECTION 2: WHILE LOOP – BASIC SYNTAX
while condition:
    statement


Example:

i = 1
while i <= 5:
    print(i)
    i += 1

SECTION 3: LOOP CONTROL STATEMENTS

break → exit the loop
continue → skip current iteration
pass → placeholder (does nothing)

SECTION 4: ITERATING OVER SEQUENCES
List
for x in li:
    print(x)

Tuple
for x in tup:
    print(x)

String
for x in s:
    print(x)

Dictionary
for key in d:
    print(key, d[key])

Set
for x in set1:
    print(x)

SECTION 5: INDEX-BASED ITERATION
for i in range(len(li)):
    print(li[i])

SECTION 6: INFINITE LOOP
while True:
    print("Hello World")

SECTION 7: NESTED LOOPS
for i in range(1, 5):
    for j in range(i):
        print(i, end=" ")
    print()

SECTION 8: EXAMPLES FOR CONTROL STATEMENTS
Continue Example
for letter in "geeksforgeeks":
    if letter == "e" or letter == "s":
        continue
    print(letter)

Break Example
for letter in "geeksforgeeks":
    if letter == "e" or "s":
        break
    print(letter)

Pass Example
for letter in "hello world":
    pass
print(letter)

VS CODE SHORTCUTS 

File & Editing

Ctrl + N → New file

Ctrl + S → Save file

Ctrl + A → Select all

Ctrl + C → Copy

Ctrl + V → Paste

Ctrl + X → Cut

Ctrl + Z → Undo

Ctrl + Shift + Z → Redo

Coding

Ctrl + / → Toggle comment

Shift + Alt + ↓ → Duplicate line

Alt + ↑ or Alt + ↓ → Move line up or down

Navigation

Ctrl + B → Toggle sidebar

Ctrl + F → Find

Ctrl + H → Replace

Ctrl + P → Quick file open

Ctrl + Shift + P → Command palette

GOOGLE COLAB SHORTCUTS

Cells

Ctrl + M then B → New cell below

Ctrl + M then A → New cell above

Ctrl + M then D → Delete cell

Run

Ctrl + Enter → Run current cell

Shift + Enter → Run and go to next cell

Editing

Ctrl + S → Save

Ctrl + F → Find

Ctrl + M then M → Convert to Markdown

Ctrl + M then Y → Convert to Code