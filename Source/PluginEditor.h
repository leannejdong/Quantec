/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class QuantecAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    QuantecAudioProcessorEditor (QuantecAudioProcessor&);
    ~QuantecAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    
    juce::Slider slider; // Declare the slider control

    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    QuantecAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (QuantecAudioProcessorEditor)
};
