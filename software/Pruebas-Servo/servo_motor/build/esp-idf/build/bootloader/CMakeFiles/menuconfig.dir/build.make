# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/alejandro/zephyrproject/modules/hal/espressif/components/bootloader/subproject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alejandro/projects/zephyros-esp32-sample/servo_motor/build/esp-idf/build/bootloader

# Utility rule file for menuconfig.

# Include any custom commands dependencies for this target.
include CMakeFiles/menuconfig.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/menuconfig.dir/progress.make

CMakeFiles/menuconfig:
	/usr/bin/python3.10 /home/alejandro/zephyrproject/modules/hal/espressif/tools/kconfig_new/prepare_kconfig_files.py --env-file /home/alejandro/projects/zephyros-esp32-sample/servo_motor/build/esp-idf/build/bootloader/config.env
	/usr/bin/python3.10 /home/alejandro/zephyrproject/modules/hal/espressif/tools/kconfig_new/confgen.py --kconfig /home/alejandro/zephyrproject/modules/hal/espressif/Kconfig --sdkconfig-rename /home/alejandro/zephyrproject/modules/hal/espressif/sdkconfig.rename --config /home/alejandro/projects/zephyros-esp32-sample/servo_motor/build/esp-idf/build/sdkconfig --env-file /home/alejandro/projects/zephyros-esp32-sample/servo_motor/build/esp-idf/build/bootloader/config.env --env IDF_TARGET=esp32 --env IDF_ENV_FPGA= --dont-write-deprecated --output config /home/alejandro/projects/zephyros-esp32-sample/servo_motor/build/esp-idf/build/sdkconfig
	/usr/bin/python3.10 /home/alejandro/zephyrproject/modules/hal/espressif/tools/check_term.py
	/usr/local/bin/cmake -E env COMPONENT_KCONFIGS_SOURCE_FILE=/home/alejandro/projects/zephyros-esp32-sample/servo_motor/build/esp-idf/build/bootloader/kconfigs.in COMPONENT_KCONFIGS_PROJBUILD_SOURCE_FILE=/home/alejandro/projects/zephyros-esp32-sample/servo_motor/build/esp-idf/build/bootloader/kconfigs_projbuild.in IDF_CMAKE=y KCONFIG_CONFIG=/home/alejandro/projects/zephyros-esp32-sample/servo_motor/build/esp-idf/build/sdkconfig IDF_TARGET=esp32 IDF_ENV_FPGA= /usr/bin/python3.10 -m menuconfig /home/alejandro/zephyrproject/modules/hal/espressif/Kconfig
	/usr/bin/python3.10 /home/alejandro/zephyrproject/modules/hal/espressif/tools/kconfig_new/confgen.py --kconfig /home/alejandro/zephyrproject/modules/hal/espressif/Kconfig --sdkconfig-rename /home/alejandro/zephyrproject/modules/hal/espressif/sdkconfig.rename --config /home/alejandro/projects/zephyros-esp32-sample/servo_motor/build/esp-idf/build/sdkconfig --env-file /home/alejandro/projects/zephyros-esp32-sample/servo_motor/build/esp-idf/build/bootloader/config.env --env IDF_TARGET=esp32 --env IDF_ENV_FPGA= --output config /home/alejandro/projects/zephyros-esp32-sample/servo_motor/build/esp-idf/build/sdkconfig

menuconfig: CMakeFiles/menuconfig
menuconfig: CMakeFiles/menuconfig.dir/build.make
.PHONY : menuconfig

# Rule to build all files generated by this target.
CMakeFiles/menuconfig.dir/build: menuconfig
.PHONY : CMakeFiles/menuconfig.dir/build

CMakeFiles/menuconfig.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/menuconfig.dir/cmake_clean.cmake
.PHONY : CMakeFiles/menuconfig.dir/clean

CMakeFiles/menuconfig.dir/depend:
	cd /home/alejandro/projects/zephyros-esp32-sample/servo_motor/build/esp-idf/build/bootloader && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alejandro/zephyrproject/modules/hal/espressif/components/bootloader/subproject /home/alejandro/zephyrproject/modules/hal/espressif/components/bootloader/subproject /home/alejandro/projects/zephyros-esp32-sample/servo_motor/build/esp-idf/build/bootloader /home/alejandro/projects/zephyros-esp32-sample/servo_motor/build/esp-idf/build/bootloader /home/alejandro/projects/zephyros-esp32-sample/servo_motor/build/esp-idf/build/bootloader/CMakeFiles/menuconfig.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/menuconfig.dir/depend

