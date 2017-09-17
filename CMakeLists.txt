#files


file(GLOB EssexEngineJsonDaemon_HEADERS
    "src/Daemons/Json/*.h"
)
file(GLOB EssexEngineJsonDaemon_SRC
    ${EssexEngineJsonDaemon_HEADERS}
    "src/Daemons/Json/*.cpp"
)

#setup headers

file(COPY ${EssexEngineJsonDaemon_HEADERS} DESTINATION "${CMAKE_BINARY_DIR}/lib/include/EssexEngineJsonDaemon/")

#setup build

add_library(EssexEngineJsonDaemon SHARED ${EssexEngineJsonDaemon_SRC})
target_link_libraries(EssexEngineJsonDaemon EssexEngineCore)
target_link_libraries(EssexEngineJsonDaemon EssexEngineFileSystemDaemon)