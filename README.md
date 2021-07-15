# My Everyday Scripts
This is a compilation of multipropose scripts created during holberton.

## newcproject
Bash script to create the files of a project in C language including readme file, header file and all the files with basic mandatory content.
Objective: Automate the creation of the files.
Advantages: Includes the most common libraries in C language.
Limitations: Posterior edition of the readme file is required.

#### Installation:

Download the repository, move to the folder, and run this command:
```
$ sudo mv newcproject /usr/local/bin
```
Now you can use the command from any folder.

#### Usage:
```
$ newcproject directory_name header_file_name file_name.c [file_name2.c] [...]
```

## push
Bash script to check the ANSI C89 standard (ISO/IEC 9899:1990) style, add, commit, and push files to github for projects wrote in C language.
Objective: Reduce the time to push files to github.
Requirements: Install Betty Style Checker https://github.com/holbertonschool/Betty

#### Installation:
Download the repository, move to the folder, and run this command:
```
$ sudo mv push /usr/local/bin
```
Now you can use the command from any folder.

#### Usage:
```
$ push "This is a commit" filename.c [filename2.c] [...]
```

## TO DO:

- Test scripts in sandbox, vagrant and wsl.

- Upgrade push command to include other file types and other linterns:
    - Python - Pycodestyle.
    - Bash - Shellcheck.

- Upgrade newcproject to:
    - Ask the name and email of the developer.

- A script that changes the emacs config file to allow:
    - Show line numbers. 
