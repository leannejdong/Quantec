/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
QuantecAudioProcessorEditor::QuantecAudioProcessorEditor (QuantecAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (400, 300);
    // Create a slider control
    slider.setSliderStyle (juce::Slider::Rotary); // Set the slider style
    slider.setTextBoxStyle (juce::Slider::NoTextBox, false, 0, 0); // Hide the textbox
    slider.setRange (0.0, 1.0, 0.01); // Set the range and interval of the slider
    slider.setValue (0.5); // Set the initial value of the slider

    // Add the slider to the editor
    addAndMakeVisible (slider);

    // Position the slider on the editor
    slider.setBounds (100, 100, 200, 200);
}

QuantecAudioProcessorEditor::~QuantecAudioProcessorEditor()
{
}

//==============================================================================
void QuantecAudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setColour (juce::Colours::white);
    g.setFont (15.0f);
    g.drawFittedText ("Hello World!", getLocalBounds(), juce::Justification::centred, 1);
}

/*
 In this example, we've created a Slider control in the MyPluginAudioProcessorEditor constructor and added it to the editor using addAndMakeVisible(). We've also set the style, range, interval, and initial value of the slider using the appropriate methods.
 */

void QuantecAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}
