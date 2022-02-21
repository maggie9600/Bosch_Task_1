
ADD_LIBRARY( CustomLib STATIC math.cpp )


project ("calc")
                       

ADD_EXECUTABLE( ${PROJECT_NAME} main.cpp ) 

TARGET_LINK_LIBRARIES( ${PROJECT_NAME} CustomLib )
