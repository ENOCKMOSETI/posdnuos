#include "PluginEditor.h"

//=========================================================================

SanyoG1519AudioProcessorEditor::
SanyoG1519AudioProcessorEditor(
                               SanyoG1519AudioProcessor& processor)
    : AudioProcessorEditor(&processor),
    audioProcessor(processor)
{
    setSize(600, 400);
}

SanyoG1519AudioProcessorEditor::
~SanyoG1519AudioProcessorEditor()
{
}

//=========================================================================

void SanyoG1519AudioProcessorEditor::paint(
                                           juce::Graphics& g)
{
    g.fillAll(juce::Colours::black);
    
    g.setColour(juce::Colours::white);
    g.setFont(24.0f);
    
    g.drawFittedText(
                     "SANYO G-1519-3",
                     getLocalBounds(),
                     juce::Justification::centred,
                     1);
}

void SanyoG1519AudioProcessorEditor::resized()
{
}
