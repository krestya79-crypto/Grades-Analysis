
---

#  Grade Analysis Project

##  Overview

The **Grade Analysis Project** is a robust C++ console application designed to automate the process of student academic evaluation. Unlike simple calculators, this tool evaluates a student's performance based on both their **numerical average** and their **subject competency** (counting failed subjects).

It provides a clear summary of a student's status, ensuring that academic standards are met before assigning a final grade.

---

##  Key Features

### 1. **Interactive Input Handling**

* Captures student name and allows for custom subject names (4 subjects).
* Uses `getline` to ensure names with spaces are handled correctly.

### 2. **Smart Data Validation**

* Implements a `do-while` loop to prevent invalid data entry.
* The program will not proceed unless the grade entered is between **0 and 100**.

### 3. **Comprehensive Grading Logic**

The program applies a multi-layered evaluation system:

* **Automatic Failure:** If a student fails 3 or more subjects (grade < 50), they are marked as **"Failed"** regardless of the average.
* **Partial Success:** If a student fails 1 or 2 subjects, they receive a **"Not Passed"** status.
* **Merit Grading:** If all subjects are passed, the program calculates the average () and assigns:
* **A+**: Perfect Score (100)
* **A**: Excellent (90-99)
* **B**: Very Good (80-89)
* **C**: Good (70-79)
* **D**: Fair (60-69)
* **Passed**: Minimum requirement (50-59)



### 4. **Detailed Reporting**

* Outputs the final average.
* Specifically lists the **names of the failed subjects**, helping students identify areas that need improvement.

---

##  Technical Implementation

* **Language:** C++
* **Concepts Used:** * Arrays (for subjects and grades)
* Loops (`for`, `do-while`)
* Conditional Logic (`if-else if-else`)
* String Manipulation (for tracking failed subjects)



---

##  How to Run the Program

1. **Clone the repository:**
```bash
git clone https://github.com/YourUsername/Grade-Analysis-Project.git

```


2. **Compile the code:**
```bash
g++ main.cpp -o GradeAnalysis

```


3. **Execute the application:**
```bash
./GradeAnalysis

```



---

##  Example Output

```text
Name: Ahmed Ali
Enter 4 subjects:
Math
Physics
English
History

Enter grades:
Math: 45
Physics: 80
English: 40
History: 90

Ahmed Ali, average: 63.75
Result: Not Passed
Failed subjects: Math English 

```

---

##  Contribution
Contributions, issues, and feature requests are welcome! Feel free to check the issues page.
