# LeetCode Challenges

| Author          | Contact                           |
| --------------- | --------------------------------- |
| Brandon Marlowe | bpmarlowe-software@protonmail.com |

This repository contains all my solutions to LeetCode challenges that I have attempted. The source
code, Makefiles, as well as runtime information is included in each of the directories. I use
`C++` at my day-job, so I decided to stick with it for the challenges. This repository will be
updated pretty regularly.

## Compilation

```sh
# within root directory

mkdir build && cd $_ && cmake .. && make -j$(nproc)

# if you have ninja instaleld

mkdir build && cd $_ && cmake -G Ninja .. && ninja
```

- If you are using Vim, Emacs, or VSCode and want to use any LSP features, the
  `compile_commands.json` file will be exported and output to the `build` directory.

- All executables will be placed in the `build/bin` directory

|   Category   |           Challenge Name            |   Run Time : Rank   |    Memory : Rank     |                               Link                                |
| :----------: | :---------------------------------: | :-----------------: | :------------------: | :---------------------------------------------------------------: |
|     Easy     |        Longest Common Prefix        |    4 ms : 97.07%    |   8.60 MB : 92.04%   |   [Results](https://leetcode.com/submissions/detail/240839966/)   |
|     Easy     |          Palindrome Number          |   16 ms : 79.31%    |   8.10 MB : 74.41%   |   [Results](https://leetcode.com/submissions/detail/237364074/)   |
|     Easy     |           Reverse Integer           |    0 ms : 100.0%    |   8.20 MB : 56.09%   |   [Results](https://leetcode.com/submissions/detail/237356122/)   |
|     Easy     |          Roman to Integer           |    8 ms : 96.80%    |   8.40 MB : 77.56%   |   [Results](https://leetcode.com/submissions/detail/237590384/)   |
|     Easy     |               Two Sum               |    8 ms : 96.89%    |   10.0 MB : 46.81%   |   [Results](https://leetcode.com/submissions/detail/237585273/)   |
|     Easy     |          Valid Parentheses          |    0 ms : 100.0%    |   8.30 MB : 81.84%   |   [Results](https://leetcode.com/submissions/detail/241260100/)   |
|    Medium    |           Add Two Numbers           |   20 ms : 95.04%    |   10.0 MB : 38.14%   |   [Results](https://leetcode.com/submissions/detail/231515855/)   |
|    Medium    |   Longest Substring w/o Repeating   |   16 ms : 76.44%    |   11.0 MB : 53.00%   |   [Results](https://leetcode.com/submissions/detail/231767778/)   |
| :----------: | :---------------------------------: | :-----------------: | :------------------: | :---------------------------------------------------------------: |
