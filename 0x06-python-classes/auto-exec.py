#!/usr/bin/env python3
import os

def auto_exec_file(path):
    for root, dirs, files in os.walk(path):
        for file in files:
            if file.endswith('.py') or file.endswith('.sh'):
                file_path = os.path.join(root, file)
                os.chmod(file_path, 0o755)  # Set executable permission

if __name__ == '__main__':
    directory_path = '.'  # Alter to suit the current directory
    auto_exec_file(directory_path)
