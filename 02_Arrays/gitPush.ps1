git status -s 
git add -A .
$message = Read-Host -Prompt "Enter the message for the commit "

git commit -m $message
git push 