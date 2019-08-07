# Day 14 Question

Given an input string `s` and a pattern `p`, implement reqular expression matching with support for `.` and `*`.

---

### Note

`s` could be empty and contains only lowercase letters `a-z`.
`p` could be empty and contains only lowercase letters `a-z`, and characters like `.` or `*`.

---

#### Example 1

**Input**
```
s = aa
p = a*
```

**Output:** `true`

##### Explanation
`*` means zero or more of the precedeng element, `a`. Therefore, by repeating `a` once, it becomes

---

#### Example 2

**Input**
```
s = ab
p = .*
```

**Output:** `true`

##### Explanation
`.*` means zero or more `*` of any character `.`.

---

For full explanation, [click here.](https://www.prodevelopertutorial.com/given-an-input-string-s-and-a-pattern-p-implement-regular-expression-matching-with-support-for-and/)
