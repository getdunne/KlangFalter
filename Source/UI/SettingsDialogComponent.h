#pragma once
#include "JuceHeader.h"
#include "../Processor.h"

class SettingsDialogComponent  : public Component,
	public Button::Listener
{
public:
    SettingsDialogComponent (Processor& processor);
    ~SettingsDialogComponent();

    void paint (Graphics& g);
    void resized();
    void buttonClicked (Button* buttonThatWasClicked);

    // Binary resources:
    static const char* hifilofi_jpg;
    static const int hifilofi_jpgSize;

    juce_UseDebuggingNewOperator

private:
    Processor& _processor;

    GroupComponent* _irDirectoryGroupComponent;
    GroupComponent* _aboutGroupComponent;
    Label* _nameVersionLabel;
    Label* _copyrightLabel;
    HyperlinkButton* _licenseHyperlink;
    GroupComponent* _infoGroupComponent;
    Label* _juceVersionPrefixLabel;
    Label* _juceVersionLabel;
    Label* _numberInputsPrefixLabel;
    Label* _numberInputsLabel;
    Label* _numberOutputsPrefixLabel;
    Label* _numberOutputsLabel;
    Label* _sseOptimizationPrefixLabel;
    Label* _sseOptimizationLabel;
    Label* _headBlockSizePrefixLabel;
    Label* _headBlockSizeLabel;
    Label* _tailBlockSizePrefixLabel;
    Label* _tailBlockSizeLabel;
    TextButton* _selectIRDirectoryButton;
    Image cachedImage_hifilofi_jpg;

    // (prevent copy constructor and operator= being generated..)
    SettingsDialogComponent (const SettingsDialogComponent&);
    const SettingsDialogComponent& operator= (const SettingsDialogComponent&);
};
