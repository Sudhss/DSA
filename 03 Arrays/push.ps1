# Stage all changes
git add .

# Check if there are changes
$changes = git status --porcelain
if ($changes) {
    $timestamp = Get-Date -Format "yyyy-MM-dd HH:mm:ss"
    git commit -m "Updated files at $timestamp"
    git push origin main
} else {
    Write-Output "No changes to commit."
}
