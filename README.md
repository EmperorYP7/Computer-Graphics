# Computer Graphics Lab

This contains the lab record of CS 325 - Computer Graphics Lab practicals.

This can be cloned directly and built from source without any need of proprietary
dependencies. The build system handles it all.

## Steps to run the program

It is assumed that you have [Git](https://git-scm.com/downloads) and [CMake >= v3.20.5](https://cmake.org/download/) installed and running.

1. Clone this repo
    ```bash
    git clone https://github.com/EmperorYP7/Computer-Graphics.git
    ```
2. Open up the terminal in the root directory of the project and make a `build` directory
    ```bash
    mkdir build
    cd build
    ```
3. Run CMake to generate build files depending on your OS and architecture
    ```bash
    cmake ..
    ```
4. For windows, open the build directory with file explorer. You'll find a Visual Studio solution file named
`Computer-Graphics.sln`, open it with Visual Studio and build/run the `application` project.

    OR

    Run the build command (compatible with all OS)
    ```bash
    cmake --build . --target application
    ```

    Locate where the executable is placed within the directory and run it.
