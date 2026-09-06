# Strings in C and C++

## Initialize a character variable
`char temp = 'A';`

## Initialize a character variable with equivalent ASCII code
`char temp = 65;`

## Initialize a character array
`char name[4] = {'j','o','h','n'};`

## Initialize a character array with equivalent ASCII code
`char name[4] = {106,111,104,110};`

## Initialize a string in C++ and C

### Pattern 1
`char name[] = {'j','o','h','n','\0'}; // Must be terminated with null character or string delimiter`

### Pattern 2
`char name[] = "john"; // Equivalent to char name[] = {'j','o','h','n','\0'};`

## Reading/Writing a char array or string
`char name[] = {'j','o','h','n','\0'};`

### Write a String
`printf('%s', name);`

### Read a single String
`scanf('%s', name); // Only useful for reading one word string`

### Read multiple string
`gets(name); // Read a string like: Mike Taylor`
