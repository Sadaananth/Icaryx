add_library (icaryx-lib
	app.cxx
	app.h
  )


target_link_libraries(icaryx-lib
	${Boost_LIBRARIES}
  )

add_executable (icaryx
  main.cpp
  )

target_link_libraries(icaryx
  icaryx-lib
  )

install (TARGETS icaryx DESTINATION bin)
