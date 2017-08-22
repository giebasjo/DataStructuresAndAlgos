import matplotlib.pyplot as plt
import linecache as lc

inFile = open('sorting_algo_times.txt', 'r')

x = [10,100,1000,10000,100000]
outList = list()

for line in inFile:

    L = line.strip().split(" ")
    outList.append(L)

y1 = outList[0]
y2 = outList[1]
y3 = outList[2]

fig, ax = plt.subplots()

ax.plot(x, y1, 'rs-', label="QuickSort")
ax.plot(x, y2, 'gs-', label="HeapSort")
ax.plot(x, y3, 'bs-', label="MergeSort")

leg = ax.legend(loc=2, bbox_to_anchor=(1.05, 1.0))

plt.show()