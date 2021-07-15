# Examples
This is a compilation of multipropose scripts created during holberton.

## 1. Dali 
Bash script to create the bases of a project in C language including readme file, header file and all the files.
Objective: Automate the creation of the files with some dafault content.
Advantages: Includes the most common libraries in C language. 
Limitations: Posterior edition of the readme file is required.

Installation:

Download the repository, move to the folder, and run this command:
```
$ sudo mv dali /usr/local/bin
```
Now you can use the command from any folder.

Usage:
```
$ dali directory_name header_file_name file_name.c [file_name2.c] [...]
```

## 2. Dino
Bash script to check the ANSI C89 standard (ISO/IEC 9899:1990) style, add, commit, and push files to github for projects wrote in C language.
Objective: Reduce the time to commit files to github, and never forget to check the style.
Requirements: Install Betty Style Checker https://github.com/holbertonschool/Betty

Installation:
Download the repository, move to the folder, and run this command:
```
$ sudo mv dino /usr/local/bin
```
Now you can use the command from any folder.
Usage:
```
$ dino "This is a commit" filename.c [filename2.c] [...]
```
