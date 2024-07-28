#!/bin/sh

# Check if the correct number of arguments is provided
if [ "$#" -ne 2 ]; then
    echo "Usage: $0 <path_to_file> <text_string>"
    exit 1
fi

writefile=$1
writestr=$2

# Create the directory path if it doesn't exist
mkdir -p "$(dirname "$writefile")"

# Create or overwrite the file with the specified content
if echo "$writestr" > "$writefile"; then
    echo "File created successfully with the specified content."
else
    echo "Error: The file could not be created."
    exit 1
fi