
add_executable(server src/server.c)
target_link_libraries(server ${CONAN_LIBS})

add_executable(client src/client.c)
target_link_libraries(client ${CONAN_LIBS})
