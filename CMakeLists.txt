
add_executable(meteoriteRush "main.cpp" "Enemy.h" "Player.h" "Entity.h" "Enemy.cpp" "Player.cpp")

target_link_libraries(meteoriteRush ${CMAKE_SOURCE_DIR}/extlibs/lib/sfml-graphics.lib)
target_link_libraries(meteoriteRush ${CMAKE_SOURCE_DIR}/extlibs/lib/sfml-audio.lib)
target_link_libraries(meteoriteRush ${CMAKE_SOURCE_DIR}/extlibs/lib/sfml-network.lib)
target_link_libraries(meteoriteRush ${CMAKE_SOURCE_DIR}/extlibs/lib/sfml-system.lib)
target_link_libraries(meteoriteRush ${CMAKE_SOURCE_DIR}/extlibs/lib/sfml-window.lib)

include_directories(${CMAKE_SOURCE_DIR}/extlibs/include)