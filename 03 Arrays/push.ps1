# Stage all changes
git add .

# Check if there are changes
$changes = git status --porcelain
if ($changes) {
    $timestamp = Get-Date -Format "yyyy-MM-dd AT HH:mm:ss"
    git commit -m "$timestamp"
    git push origin main
} else {
    Write-Output "No changes to commit."
}
