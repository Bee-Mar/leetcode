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
