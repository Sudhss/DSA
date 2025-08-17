# Add all changes (including new files)
git add .

# Commit with current date & time
$now = Get-Date -Format "yyyy-MM-dd HH:mm:ss"
git commit -m "$now"

# Push to main branch
git push origin main
