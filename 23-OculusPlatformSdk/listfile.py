import os
from os.path import *

cur = dirname(__file__)
root = join(cur, './Include')

header_list = []
for parent, folders, files in os.walk(root):
    if parent.startswith('.'):
        continue
    for i in files:
        if not i.endswith('.h'):
            continue
        header = abspath(join(parent, i))
        header_list.append(header)
for i in header_list:
    x = relpath(i, cur)
    print(f'#include "{x}"')

print()
for i in header_list:
    x = relpath(i, cur)
    print(f'%include "{x}"')
