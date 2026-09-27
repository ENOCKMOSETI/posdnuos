#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

class SanyoG1519AudioProcessorEditor
    : public juce::AudioProcessorEditor
{
public:
    explicit SanyoG1519AudioProcessorEditor(
                                            SanyoG1519AudioProcessor&);
    
    ~SanyoG1519AudioProcessorEditor() override;
    
    //=========================================================================
    void paint(juce::Graphics&) override;
    void resized() override;
    
private:
    SanyoG1519AudioProcessor& audioProcessor;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(
                                                 SanyoG1519AudioProcessorEditor)
};
