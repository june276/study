contents=[]
while True:
    try:
        line=input()
    except EOFError:
        break
    contents.append(line)
print("\n".join(contents))