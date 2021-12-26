"""
Implement a group_by_owners function that:

Accepts a dictionary containing the file owner name for each file name.
Returns a dictionary containing a list of file names for each owner name, in any order.
For example, for dictionary {'Input.txt': 'Randy', 'Code.py': 'Stan', 'Output.txt': 'Randy'} the group_by_owners
function should return {'Randy': ['Input.txt', 'Output.txt'], 'Stan': ['Code.py']}.
"""

def group_by_owners(files):
    files_by_author = {}
    
    for file, author in files.items():
        if author in files_by_author:
            files_by_author[author].append(file)
        else:
            files_by_author[author] = [file]

    return files_by_author

if __name__ == "__main__":    
    files = {
        'Input.txt': 'Randy',
        'Code.py': 'Stan',
        'Output.txt': 'Randy'
    }   
    print(group_by_owners(files))