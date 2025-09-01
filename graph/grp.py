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

# 🔹 Keep curves same
plt.plot(n, t1, 'b-o', label="O(n^2) Method")
plt.plot(n, t2, 'g-o', label="O(n) Method")

plt.xlabel("Array size (n)")
plt.ylabel("Execution time (ms)")
plt.title("Time Complexity Comparison: O(n^2) vs O(n)", fontsize=14)

# 🔹 Roll number
roll_number = "Roll No: 24BCS102"
plt.text(
    0.02, 0.95, roll_number,
    transform=plt.gca().transAxes,
    fontsize=12, color="RED",
    ha="left", va="top"
)

plt.legend()
plt.grid(True)

# ✅ Change boundary (spines)
ax = plt.gca()
for spine in ax.spines.values():
    spine.set_linewidth(2)      # make boundary thicker
    spine.set_linestyle("--")   # dashed border
    spine.set_color("blue")     # change border color

plt.tight_layout()
plt.show()
