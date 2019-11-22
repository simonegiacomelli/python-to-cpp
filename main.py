import os

# write the file that contains input parameter for cpp
with open('input.txt', 'w') as f:
    for i in range(10):
        f.write(f'{i}\n')

# execute in the current working directory the cpp executable a.out
status = os.system('./a.out input.txt output.txt')

if status == 0:
    print("program execution successful")
    with open('output.txt', 'r') as f:
        lines = f.read().split('\n')
        if lines[0] == 'OK':
            print('computation completed successfully')
            print('line count: ', lines[1])
            print('sum: ', lines[2])
else:
    print("program execution failed")