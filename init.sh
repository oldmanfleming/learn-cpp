#!/bin/bash

# Script: init.sh
PROJECT_NAME=$1

if [ -z "$PROJECT_NAME" ]; then
  echo "Usage: ./init.sh <ProjectName>"
  exit 1
fi

cp -r cpp-template "$PROJECT_NAME"
sed -i '' "s/MyProject/${PROJECT_NAME}/g" "$PROJECT_NAME/CMakeLists.txt"
echo "New C++ project '$PROJECT_NAME' created!"
