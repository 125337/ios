@interface MJShootSideToolbar : MMUIView
{
    BOOL _isCaptionButtonEnabledShowing; // +0x8
    BOOL _isDuetShootingEntry; // +0x9
    BOOL _isCaptionEnabledByConfig; // +0xa
    BOOL _isCountdownTimerEnabledByConfig; // +0xb
    BOOL _isRecordingTimerEnabledByConfig; // +0xc
    BOOL _isTemplatePanelShowing; // +0xd
    BOOL _isTemplateShooting; // +0xe
    MMUIButton * _flashButton; // +0x10
    MMUIButton * _switchCameraButton; // +0x18
    MMUIButton * _countdownTimerButton; // +0x20
    MMUIButton * _recordingTimerButton; // +0x28
    MMUIButton * _switchGenderButton; // +0x30
    id <MJShootSideToolbarDelegate> _delegate; // +0x38
    MMUIButton * _visageButton; // +0x40
    MMUIButton * _captionButton; // +0x48
    MMUIButton * _duetShootingEnableButton; // +0x50
    MMUIButton * _replayButton; // +0x58
    NSMutableArray * _showingButtons; // +0x60
    UIImpactFeedbackGenerator * _feedbackGenerator; // +0x68
}
- (id)initWithIsDuetShootingEntry:(BOOL)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)commonInit;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)visageButtonDidTouchUpInside:(id)arg1;
- (void)switchGenderButtonDidTouchUpInside:(id)arg1;
- (void)switchCountdownButtonDidTouchUpInside:(id)arg1;
- (void)switchRecordingTimerButtonDidTouchUpInside:(id)arg1;
- (void)duetShootingEnableButtonDidTouchUpInside:(id)arg1;
- (void)switchCameraButtonDidTouchUpInside:(id)arg1;
- (void)replayButtonDidTouchUpInside:(id)arg1;
- (void)flashButtonDidTouchUpInside:(id)arg1;
- (void)captionButtonDidTouchUpInside:(id)arg1;
- (void)updateForTemplateShooting;
- (void)updateForNormalShooting;
- (void)updateForTemplatePanelShowing;
- (void)updateForTemplatePanelDismissing;
- (void)updateForVisagePanelShowing;
- (void)updateForVisagePanelDismissing;
- (void)updateForFlashOn;
- (void)updateForFlashOff;
- (void)setIsCaptionButtonEnabledShowing:(BOOL)arg1;
- (void)updateCountdownTimerButtonStyleWithMode:(unsigned long long)arg1;
- (void)updateRecordingTimerButtonStyleWithMode:(unsigned long long)arg1;
- (BOOL)isDuetShootOn;
- (BOOL)isCaptionOn;
- (id)showingButtons;
- (void)updateShowingButtonsWithTemplateShootingMode:(BOOL)arg1;
- (void)notifyButtonStatusIfNeeded;
- (id)showingButtonsForTemplateShooting;
- (id)showingButtonsForNormalShooting;
- (id)switchCameraButton;
- (id)flashButton;
- (id)countdownTimerButton;
- (id)captionButton;
- (id)visageButton;
- (id)switchGenderButton;
- (id)replayButton;
- (id)duetShootingEnableButton;
- (id)recordingTimerButton;
- (id)feedbackGenerator;
- (BOOL)isCaptionButtonEnabledShowing;
- (void)setFlashButton:(id)arg1;
- (void)setSwitchCameraButton:(id)arg1;
- (void)setCountdownTimerButton:(id)arg1;
- (void)setRecordingTimerButton:(id)arg1;
- (void)setSwitchGenderButton:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setVisageButton:(id)arg1;
- (void)setCaptionButton:(id)arg1;
- (void)setDuetShootingEnableButton:(id)arg1;
- (void)setReplayButton:(id)arg1;
- (void)setShowingButtons:(id)arg1;
- (void)setFeedbackGenerator:(id)arg1;
- (BOOL)isDuetShootingEntry;
- (void)setIsDuetShootingEntry:(BOOL)arg1;
- (BOOL)isCaptionEnabledByConfig;
- (void)setIsCaptionEnabledByConfig:(BOOL)arg1;
- (BOOL)isCountdownTimerEnabledByConfig;
- (void)setIsCountdownTimerEnabledByConfig:(BOOL)arg1;
- (BOOL)isRecordingTimerEnabledByConfig;
- (void)setIsRecordingTimerEnabledByConfig:(BOOL)arg1;
- (BOOL)isTemplatePanelShowing;
- (void)setIsTemplatePanelShowing:(BOOL)arg1;
- (BOOL)isTemplateShooting;
- (void)setIsTemplateShooting:(BOOL)arg1;
- (void).cxx_destruct;
@end

