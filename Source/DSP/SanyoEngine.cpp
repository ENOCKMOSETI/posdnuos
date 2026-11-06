#include "SanyoEngine.h"

void SanyoEngine::prepare(
                          double newSampleRate,
                          int newSamplesPerBlock,
                          int newNumChannels)
{
    sampleRate = newSampleRate;
    samplesPerBlock = newSamplesPerBlock;
    numChannels = newNumChannels;
}

void SanyoEngine::setSpeed(Speed newSpeed)
{
    speed = newSpeed;
}

void SanyoEngine::process(
                          juce::AudioBuffer<float>& buffer)
{
    juce::ignoreUnused(buffer);
}
