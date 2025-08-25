import matplotlib.pyplot as plt

n, t1, t2 = [], [], []
with open("output.txt") as f:
    next(f) # skip header
    for line in f:
        parts = line.split()
        n.append(int(parts[0]))
        t1.append(int(parts[1]))
        t2.append(int(parts[2]))

plt.figure(figsize=(8,6))
plt.plot(n, t1, 'r-o', label="O(n^2) Method")
plt.plot(n, t2, 'g-o', label="O(n) Method")

plt.xlabel("Array size (n)")
plt.ylabel("Execution time (ms)")
plt.title("Time Complexity Comparison: O(n^2) vs O(n)", fontsize=14)

# 🔹 Roll number in top-left corner (axes coords)
roll_number = "Roll No: 24BCS080"   # <-- replace with your roll no.
plt.text(
    0.02, 0.95, roll_number, 
    transform=plt.gca().transAxes,  # position relative to axis
    fontsize=12, color="RED",
    ha="left", va="top"
)

plt.legend()
plt.grid(True)
plt.tight_layout()
plt.show()
