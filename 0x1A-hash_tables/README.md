C - Hash Tables
A hash table is a data structure that stores key-value pairs and uses a hash function to compute an index into an array of buckets or slots, from which the desired value can be found. It is an efficient data structure for implementing associative arrays or dictionaries.

This repository contains C code for implementing hash tables. The hash table implementation uses open addressing as the collision resolution strategy, and supports dynamic resizing, which means that the size of the hash table can be increased or decreased as needed.

Files
The following files are included in this repository:

hash_table.h: Header file containing the hash table struct and function prototypes.
hash_table.c: Implementation of the hash table functions.
main.c: Example usage of the hash table functions.
Usage
To use the hash table implementation in your own code, simply include the hash_table.h header file and link against the hash_table.c implementation file.

The following functions are provided for interacting with the hash table:

hash_table_create(size_t size): Create a new hash table with the specified number of buckets.
hash_table_put(hash_table_t *hash_table, char *key, void *value): Insert a key-value pair into the hash table.
hash_table_get(hash_table_t *hash_table, char *key): Retrieve the value associated with the given key from the hash table.
hash_table_remove(hash_table_t *hash_table, char *key): Remove the key-value pair associated with the given key from the hash table.
hash_table_destroy(hash_table_t *hash_table): Free the memory used by the hash table.
For more information on the usage of these functions, refer to the comments in the hash_table.h header file and the main.c example file.

License
This code is licensed under the MIT License. See the LICENSE file for more information.
