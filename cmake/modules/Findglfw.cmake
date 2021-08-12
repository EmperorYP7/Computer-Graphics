#  Copyright 2021 Yash Pandey. All Rights Reserved.
#
#  Licensed under the Apache License, Version 2.0 (the "License");
#  you may not use this file except in compliance with the License.
#  You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
#  Unless required by applicable law or agreed to in writing, software
#  distributed under the License is distributed on an "AS IS" BASIS,
#  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#  See the License for the specific language governing permissions and
#  limitations under the License.

include(FetchContent)

FetchContent_Declare(
        glfw
        URL https://github.com/glfw/glfw/archive/refs/tags/3.3.4.zip
)

set(BUILD_SHARED_LIBS ON) # In case we want to link against dynamic library
set(GLFW_BUILD_EXAMPLES OFF) # Not needed
set(GLFW_BUILD_TESTS OFF) # Not needed
set(GLFW_BUILD_DOCS OFF) # Not needed. Available at https://www.glfw.org/documentation.html
set(GLFW_VULKAN_STATIC OFF) # Not needed. We'll be working with OpenGL only ;)

FetchContent_MakeAvailable(glfw)
