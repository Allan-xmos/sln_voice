##******************************************
## Create IC+NS+AGC 
##   2 mic input channels
#    2 reference input channels
##******************************************

add_library(ic_ns_agc_2mic_2ref INTERFACE)

target_sources(ic_ns_agc_2mic_2ref
    INTERFACE
        ${CMAKE_CURRENT_LIST_DIR}/audio_pipeline.c
)

target_include_directories(ic_ns_agc_2mic_2ref
    INTERFACE
        ${CMAKE_CURRENT_LIST_DIR}
)

target_link_libraries(ic_ns_agc_2mic_2ref
    INTERFACE
        core::general
        rtos::freertos
        rtos::sw_services::generic_pipeline
        lib_voice::agc
        lib_voice::ic
        lib_voice::ns
        lib_voice::vnr::features
        lib_voice::vnr::inference
)

##*********************************************
## Create aliases for sln_voice example designs
##*********************************************

add_library(sln_voice::app::ffd::ap ALIAS ic_ns_agc_2mic_2ref)
