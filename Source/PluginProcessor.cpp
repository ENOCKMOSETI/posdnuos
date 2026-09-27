#include "PluginProcessor.h"
#include "PluginEditor.h"

//=========================================================================

SanyoG1519AudioProcessor::SanyoG1519AudioProcessor()
    : AudioProcessor(
                     BusesProperties()
                     .withOutput(
                                 "Output",
                                 juce::AudioChannelSet::stereo(),
                                 true))
{
}

SanyoG1519AudioProcessor::~SanyoG1519AudioProcessor()
{
}

//=========================================================================

void SanyoG1519AudioProcessor::prepareToPlay(
                                             double sampleRate,
                                             int samplesPerBlock)
{
    juce::ignoreUnused(sampleRate, samplesPerBlock);
}

void SanyoG1519AudioProcessor::releaseResources()
{
}

bool SanyoG1519AudioProcessor::isBusesLayoutSupported(
                                                      const BusesLayout& layouts) const
{
    const auto output = layouts.getMainOutputChannelSet();
    
    if (output != juce::AudioChannelSet::mono()
        && output != juce::AudioChannelSet::stereo())
    {
        return false;
    }
    
    return true;
}

//=========================================================================

void SanyoG1519AudioProcessor::processBlock(
                                            juce::AudioBuffer<float>& buffer,
                                            juce::MidiBuffer& midiMessages)
{
    juce::ignoreUnused(midiMessages);
    
    buffer.clear();
}

//=========================================================================

juce::AudioProcessorEditor*
SanyoG1519AudioProcessor::createEditor()
{
    return new SanyoG1519AudioProcessorEditor(*this);
}

bool SanyoG1519AudioProcessor::hasEditor() const
{
    return true;
}

//=========================================================================

const juce::String SanyoG1519AudioProcessor::getName() const
{
    return "Sanyo G-1519-3";
}

bool SanyoG1519AudioProcessor::acceptsMidi() const
{
    return false;
}

bool SanyoG1519AudioProcessor::producesMidi() const
{
    return false;
}

bool SanyoG1519AudioProcessor::isMidiEffect() const
{
    return false;
}

double SanyoG1519AudioProcessor::getTailLengthSeconds() const
{
    return 0.0;
}

//=========================================================================

int SanyoG1519AudioProcessor::getNumPrograms()
{
    return 1;
}

int SanyoG1519AudioProcessor::getCurrentProgram()
{
    return 0;
}

void SanyoG1519AudioProcessor::setCurrentProgram(int index)
{
    juce::ignoreUnused(index);
}

const juce::String SanyoG1519AudioProcessor::getProgramName(int index)
{
    juce::ignoreUnused(index);
    return {};
}

void SanyoG1519AudioProcessor::changeProgramName(
                                                 int index,
                                                 const juce::String& newName)
{
    juce::ignoreUnused(index, newName);
}

//=========================================================================

void SanyoG1519AudioProcessor::getStateInformation(
                                                   juce::MemoryBlock& destData)
{
    juce::ignoreUnused(destData);
}

void SanyoG1519AudioProcessor::setStateInformation(
                                                   const void *data,
                                                   int sizeInBytes)
{
    juce::ignoreUnused(data, sizeInBytes);
}

//=========================================================================

juce::AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    return new SanyoG1519AudioProcessor();
}
