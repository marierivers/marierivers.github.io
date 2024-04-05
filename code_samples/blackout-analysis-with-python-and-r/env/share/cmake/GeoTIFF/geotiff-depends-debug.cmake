#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "geotiff_library" for configuration "Debug"
set_property(TARGET geotiff_library APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(geotiff_library PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG "/Users/marierivers/Documents/Data_Science/marierivers.github.io/code_samples/blackout-analysis-with-python-and-r/env/lib/libtiff.dylib;PROJ::proj;/Users/marierivers/Documents/Data_Science/marierivers.github.io/code_samples/blackout-analysis-with-python-and-r/env/lib/libz.dylib;/Users/marierivers/Documents/Data_Science/marierivers.github.io/code_samples/blackout-analysis-with-python-and-r/env/lib/libjpeg.dylib"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libgeotiff.5.1.0.dylib"
  IMPORTED_SONAME_DEBUG "/Users/marierivers/Documents/Data_Science/marierivers.github.io/code_samples/blackout-analysis-with-python-and-r/env/lib/libgeotiff.5.dylib"
  )

list(APPEND _cmake_import_check_targets geotiff_library )
list(APPEND _cmake_import_check_files_for_geotiff_library "${_IMPORT_PREFIX}/lib/libgeotiff.5.1.0.dylib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
