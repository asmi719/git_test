# Git Practical Experiments  
Author: asmi719  
Email: asmiprasad5@gmail.com  

This repository contains all Git practical experiments for learning and demonstration purposes.  
Each experiment is performed in the repository using Git commands through PowerShell.

---

# 📘 **What is Git?**
Git is a distributed version control system that tracks changes in files and enables multiple developers to collaborate efficiently.  
It keeps the history of changes, supports branching, merging, stashing, tagging, and provides full control over source code.

---

# 📘 **Why Git?**
- Tracks all versions of your project  
- Helps multiple developers work together  
- Supports branching & merging  
- Allows offline work  
- Provides backup & full history  
- Improves code quality via review  
- Standard tool for modern software development  

---

# 📘 **Version Control System (VCS)**  
Version Control System tracks changes in files over time.  
Types of VCS:  
1. **Centralized (CVCS)** – one central repo (e.g., SVN)  
2. **Distributed (DVCS)** – each user has full repo copy (e.g., Git)

---

# 🧪 **Git Practical Experiments**

Below are all experiments with the exact commands executed in this repository.

---

# ✅ **Experiment 1 – Initialize Repo & First Commit**

```bash
echo "This is experiment 1" > exp1.txt
git add exp1.txt
git commit -m "Experiment 1: Add exp1.txt"
git push
```

---

# ✅ **Experiment 2 – Create and Merge Branch**

```bash
git checkout -b feature-branch
echo "Feature content" > feature.txt
git add feature.txt
git commit -m "Experiment 2: Add feature.txt"

git checkout main
git merge feature-branch -m "Experiment 2: Merge feature-branch into main"
git push
```

---

# ✅ **Experiment 3 – Stash, Switch, Apply**

```bash
echo "Temporary change" >> exp1.txt
git stash save "Experiment 3 stash"

git checkout feature-branch
git stash apply
git add exp1.txt
git commit -m "Experiment 3: Apply stashed changes"
git push
```

---

# ✅ **Experiment 4 – Clone a Repository**

```bash
git clone https://github.com/asmi719/git_test.git
```

---

# ✅ **Experiment 5 – Fetch & Rebase**

```bash
git fetch origin
git rebase origin/main
git push
```

---

# ✅ **Experiment 6 – Merge with Custom Message**

```bash
git checkout main
git merge feature-branch -m "Experiment 6: Custom merge message"
git push
```

---

# ✅ **Experiment 7 – Create a Tag**

```bash
git tag v1.0
git push origin v1.0
```

---

# ✅ **Experiment 8 – Cherry-pick a Commit**

```bash
git log --oneline
git cherry-pick <commit-id>
git push
```

---

# ✅ **Experiment 9 – View Commit Details**

```bash
git show <commit-id>
```

---

# ✅ **Experiment 10 – View Commits by Author**

```bash
git log --author="asmi719" --since="2025-01-01" --until="2025-12-31"
```

---

# ✅ **Experiment 11 – Show Last 5 Commits**

```bash
git log -n 5
```

---

# ✅ **Experiment 12 – Revert a Commit**

```bash
git revert <commit-id>
git push
```

---

# 🎉 **All Experiments Completed Successfully**

This repository now contains commits, merges, stashes, rebases, cherry-picks, revert operations, and tags demonstrating complete Git workflow understanding.

