# Icaryx
Tracing tool based on ebpf

## Build setup

### 🚀 Building with Bazel

We can build Icaryx using [Bazel](https://bazel.build), a fast and reliable build system developed by google.

#### ✅ Prerequisites

- Install Bazel by following the official instructions:  
  https://bazel.build/install

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

#### 📚 Learn More

Bazel C++ Rules: https://bazel.build/reference/be/c-cpp

C++ Tutorial with Bazel: https://bazel.build/tutorial/cpp
