add_library (app-lib
	app.cpp
	app.h
  )


target_link_libraries(app-lib
	#${Boost_LIBRARIES}
  )

add_executable (app
  main.cpp
  )

target_link_libraries(app
  app-lib
  )

install (TARGETS app DESTINATION bin)
