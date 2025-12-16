
# Simple CI/CD Starter (GitHub Actions)

A minimal cross-platform C++ project with GitHub Actions CI, plus an optional Windows WinRM deployment job.

## Contents
- `src/main.cpp`: tiny C++ app
- `.github/workflows/ci.yml`: build & test on Linux, Windows, macOS
- `.github/workflows/deploy-winrm.yml`: optional WinRM HTTPS deploy job
- `.gitignore`: ignores build outputs

## Getting Started
1. Create a new GitHub repo and push these files.
2. (Optional) Configure **Environment → production** with secrets/variables for WinRM.
3. Push to `main` to trigger CI.
4. Create a tag `v1.0.0` to trigger production deploy (if deploy workflow enabled).

## Build locally
```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release
./build/app  # on Linux/macOS
build/Release/app.exe  # on Windows
```

## License
MIT
