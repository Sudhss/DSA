# Stage all changes
git add .

# Get a list of changed files
$changes = git status --porcelain | ForEach-Object { $_.Substring(3) }

# If there are changes, commit them
if ($changes) {
    $message = "Updated: " + ($changes -join ", ")
    git commit -m "$message"
    git push origin main
} else {
    Write-Output "No changes to commit."
}
