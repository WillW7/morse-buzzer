# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/Users/wrighty/Desktop/Computer Systems II/pico/pico-sdk/tools/pioasm"
  "/Users/wrighty/Desktop/Computer Systems II/pico/morse/build/pioasm"
  "/Users/wrighty/Desktop/Computer Systems II/pico/morse/build/pico-sdk/src/rp2_common/pico_cyw43_driver/pioasm"
  "/Users/wrighty/Desktop/Computer Systems II/pico/morse/build/pico-sdk/src/rp2_common/pico_cyw43_driver/pioasm/tmp"
  "/Users/wrighty/Desktop/Computer Systems II/pico/morse/build/pico-sdk/src/rp2_common/pico_cyw43_driver/pioasm/src/PioasmBuild-stamp"
  "/Users/wrighty/Desktop/Computer Systems II/pico/morse/build/pico-sdk/src/rp2_common/pico_cyw43_driver/pioasm/src"
  "/Users/wrighty/Desktop/Computer Systems II/pico/morse/build/pico-sdk/src/rp2_common/pico_cyw43_driver/pioasm/src/PioasmBuild-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/wrighty/Desktop/Computer Systems II/pico/morse/build/pico-sdk/src/rp2_common/pico_cyw43_driver/pioasm/src/PioasmBuild-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/Users/wrighty/Desktop/Computer Systems II/pico/morse/build/pico-sdk/src/rp2_common/pico_cyw43_driver/pioasm/src/PioasmBuild-stamp${cfgdir}") # cfgdir has leading slash
endif()
