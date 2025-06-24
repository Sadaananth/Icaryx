#!/bin/bash
set -e

usage() {
    echo "Usage: $0 --[cmake|bazel]"
    echo "  --cmake   - install cmake and set up build directory"
    echo "  --bazel   - install bazel only"
    echo "  --format  - Configure clang-format and git commit hook"
    exit 1
}

if [ $# -ne 1 ]; then
    usage
fi

echo "Running configure script..."

install_pkg() {
    local pkg=$1
    if command -v apt-get &>/dev/null; then
        echo "Installing $pkg using apt..."
        sudo apt-get update
        sudo apt-get install -y clang-tidy clang-format "$pkg"
    else
        echo "❌ Unknown package manager. Please install $pkg manually."
        exit 1
    fi
}

install_cmake() {
    echo "Installing cmake..."
    install_pkg cmake
    echo "Setting up build directory..."
    mkdir -p build
    cd build || exit 1
    cmake ..
}

install_bazel() {
    echo "Installing bazel..."
    install_pkg bazel
    echo "Setting up bazel workspace..."
}

configure_format() {
    echo "Configuring clang-format..."
    cp scripts/git-hooks/commit-msg .git/hooks/commit-msg
    chmod +x .git/hooks/commit-msg
}

case "$1" in
    --cmake)
        install_cmake
        ;;
    --bazel)
        install_bazel
        ;;
    *)
        usage
        ;;
esac

configure_format
echo "Configuration complete."
echo "You can now build the project using 'cmake' or 'bazel' as per your choice."
