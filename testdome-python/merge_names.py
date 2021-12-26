"""
Implement the unique_names method. When passed two lists of names, 
it will return a list containing the names that appear in either or both lists. 
The returned list should have no duplicates.

For example, calling unique_names(['Ava', 'Emma', 'Olivia'], ['Olivia', 'Sophia', 'Emma']) should return
a list containing Ava, Emma, Olivia, and Sophia in any order.
"""

def unique_names(names1, names2):
    unique_names_list = names1
    unique_names_list.extend(names2)

    unique_names_set = set(unique_names_list)
    unique_names_list = list(unique_names_set)

    return unique_names_list

if __name__ == "__main__":
    names1 = ["Ava", "Emma", "Olivia"]
    names2 = ["Olivia", "Sophia", "Emma"]
    print(unique_names(names1, names2)) # should print Ava, Emma, Olivia, Sophia