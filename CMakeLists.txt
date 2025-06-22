# (C) Copyright ${2025} TEMP All rights reserved.
#
# Licensed under the TEMP License, Version 2.0 (the License);
# you may not use this file except in compliance with the License.
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an AS IS BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
# Contributors:
#     Kashyap Ekbote (kashyap.ekbote@gmail.com). */

cmake_minimum_required (VERSION 3.14)
project (BPF VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set (CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

# Enable it when we require any libs
#set (Boost_USE_STATIC_LIBS ON)
#find_package (Boost REQUIRED COMPONENTS
#   thread date_time system program_options)

find_package(Threads)

add_subdirectory (src)

