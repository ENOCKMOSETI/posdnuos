cmake_minimum_required(VERSION 3.22)

project(SanyoG1519 VERSION 0.1.0)

add_subdirectory(../JUCE JUCE)

juce_add_plugin(SanyoG1519
    COMPANY_NAME "Mosetinc"
    
    PLUGIN_MANUFACTURER_CODE Msti
    
    PLUGIN_CODE Sg19
    
    FORMATS VST3 Standalone
    
    PRODUCT_NAME "Sanyo G-1519-3"
    
    IS_SYNTH FALSE
    NEEDS_MIDI_INPUT FALSE
    NEEDS_MIDI_OUTPUT FALSE
    IS_MIDI_EFFECT FALSE
    
    VST3_CATEGORIES Fx
)

juce_generate_juce_header(SanyoG1519)

target_sources(SanyoG1519
    PRIVATE
        Source/PluginProcessor.cpp
        Source/PluginProcessor.h
        Source/PluginEditor.cpp
        Source/PluginEditor.h
        
        Source/DSP/SanyoEngine.cpp
        Source/DSP/SanyoEngine.h
)

target_compile_definitions(SanyoG1519
    PUBLIC
        JUCE_WEB_BROWSER=0
        JUCE_USE_CURL=0
        JUCE_VST3_CAN_REPLACE_VST2=0
)

target_link_libraries(SanyoG1519
    PRIVATE
        juce::juce_audio_utils
        juce::juce_dsp
    
    PUBLIC
        juce::juce_recommended_config_flags
        juce::juce_recommended_warning_flags
)
