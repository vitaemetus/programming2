import matplotlib.pyplot as plt
import numpy as np

y = []
x = []

with open('section2.txt') as f:
    for i, line in enumerate(f):
        y.append(int(line))
        x.append(100 + i*1000)

fig = plt.figure()
ax1 = fig.add_subplot(1,1,1)
ax1.scatter(x, y, s = 1)
plt.show()
