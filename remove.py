import os
cwd=os.getcwd()
print(cwd)

#Come to the root directory in terminal and run this file to remove all .exe files present in each sub-folders
# and in root folder

for root,dirs,files in os.walk(cwd):
    if('.vscode' not in root):
        for file in dirs:
            if(file.endswith('.exe')):
                os.remove(os.path.join(root,file))
    for file in files:
        if(file.endswith('.exe')):
            os.remove(os.path.join(root,file))   
