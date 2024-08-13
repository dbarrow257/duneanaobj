add_executable(duneanaobj_dumpevent duneanaobj_dumpevent.cxx)
target_link_libraries(duneanaobj_dumpevent duneanaobj::All ROOT::Tree ROOT::RIO)
set_target_properties(duneanaobj_dumpevent PROPERTIES INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/../)
install(TARGETS duneanaobj_dumpevent DESTINATION bin)
