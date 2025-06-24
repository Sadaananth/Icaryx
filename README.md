# Icaryx
Tracing tool based on ebpf

## Configure setup

Run the configure script with necessary command to configure the project.

eg: to configure bazel

```bash
./configure.sh --bazel
```

to configure cmake

```bash
./configure.sh --cmake
```

## Build setup

### 🚀 Building with Bazel

We can build Icaryx using [Bazel](https://bazel.build), a fast and reliable build system developed by google.

#### 🔧 Build the Project

To build the project using bazel, run the following command

```bash
bash build //src:icaryx
```
The output binary will be located at `bazel-bin/main/icaryx`

#### ▶️ Run the Binary

```bash
    bazel run //src:icaryx
```

You can build this project with cmake also

### 🚀 Building with Cmake
```bash
mkdir build && cd build
cmake -DCMAKE_BUILD_TYPE=Debug ..
make -j$(nproc)
```

#### ▶️ Run the Binary
```bash
./src/icaryx
```

#### 📚 Learn More

Bazel C++ Rules: https://bazel.build/reference/be/c-cpp

C++ Tutorial with Bazel: https://bazel.build/tutorial/cpp
