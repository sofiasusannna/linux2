#!/bin/sh

git add .

read -p "Commit message: " COMMIT
git commit -m "$COMMIT"

read -p "Branch: " BRANCH

git push -f origin $BRANCH

