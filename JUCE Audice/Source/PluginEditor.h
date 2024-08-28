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
class JUCEAudiceAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    JUCEAudiceAudioProcessorEditor (JUCEAudiceAudioProcessor&);
    ~JUCEAudiceAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    JUCEAudiceAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (JUCEAudiceAudioProcessorEditor)
};
