#pragma once

#include <JuceHeader.h>

class SanyoEngine
{
public:
    enum class Speed
    {
        rpm33,
        rpm45,
        rpm78
    };
    
    void prepare(
                 double sampleRate,
                 int samplesPerBlock,
                 int numChannels);
    
    void setSpeed(Speed newSpeed);
    
    void process(juce::AudioBuffer<float> & buffer);
    
private:
    double sampleRate = 44100.0;
    int samplesPerBlock = 0;
    int numChannels = 0;
    
    Speed speed = Speed::rpm33;
};
