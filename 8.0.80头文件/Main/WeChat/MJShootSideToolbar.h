@interface MJShootSideToolbar : MMUIView
{
    BOOL _isDuetShootOn; // +0x8
    BOOL _isCaptionButtonEnabledShowing; // +0x9
    BOOL _isTemplatePanelShowing; // +0xa
    BOOL _isTemplateShooting; // +0xb
    BOOL _isCurrentAIGCTemplateShooting; // +0xc
    MJToolbarButton * _flashButton; // +0x10
    MJToolbarButton * _switchCameraButton; // +0x18
    MJToolbarButton * _countdownTimerButton; // +0x20
    MJToolbarButton * _recordingTimerButton; // +0x28
    MJToolbarButton * _switchGenderButton; // +0x30
    MJToolbarButton * _backgroundButton; // +0x38
    id <MJShootSideToolbarDelegate> _delegate; // +0x40
    MJToolbarButton * _visageButton; // +0x48
    MJToolbarButton * _captionButton; // +0x50
    MJToolbarButton * _replayButton; // +0x58
    NSMutableArray * _showingButtons; // +0x60
    UIImpactFeedbackGenerator * _feedbackGenerator; // +0x68
}
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)commonInit;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (double)calcToolBarWidth;
- (void)visageButtonDidTouchUpInside:(id)arg1;
- (void)switchGenderButtonDidTouchUpInside:(id)arg1;
- (void)switchCountdownButtonDidTouchUpInside:(id)arg1;
- (void)switchRecordingTimerButtonDidTouchUpInside:(id)arg1;
- (void)switchCameraButtonDidTouchUpInside:(id)arg1;
- (void)replayButtonDidTouchUpInside:(id)arg1;
- (void)flashButtonDidTouchUpInside:(id)arg1;
- (void)captionButtonDidTouchUpInside:(id)arg1;
- (void)backgroundButtonDidTouchUpInside:(id)arg1;
- (void)updateForTemplateShooting;
- (void)updateForNormalShooting;
- (void)updateForTemplatePanelShowing;
- (void)updateForTemplatePanelDismissing;
- (void)updateForVisagePanelShowing;
- (void)updateForVisagePanelDismissing;
- (void)setIsCaptionButtonEnabledShowing:(BOOL)arg1;
- (void)updateCountdownTimerButtonStyleWithMode:(unsigned long long)arg1;
- (void)updateRecordingTimerButtonStyleWithMode:(unsigned long long)arg1;
- (void)updateFillInlightButtonStyleWithMode:(unsigned long long)arg1;
- (void)updateCaptionButtonStateWithIsCaptionOn:(BOOL)arg1;
- (void)toggleCaptionButton;
- (BOOL)isBackgroundOn;
- (void)updateWithIsCurrentAIGCTemplateShooting:(BOOL)arg1;
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
- (id)backgroundButton;
- (id)recordingTimerButton;
- (id)feedbackGenerator;
- (BOOL)isDuetShootOn;
- (BOOL)isCaptionButtonEnabledShowing;
- (void)setFlashButton:(id)arg1;
- (void)setSwitchCameraButton:(id)arg1;
- (void)setCountdownTimerButton:(id)arg1;
- (void)setRecordingTimerButton:(id)arg1;
- (void)setSwitchGenderButton:(id)arg1;
- (void)setBackgroundButton:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setVisageButton:(id)arg1;
- (void)setCaptionButton:(id)arg1;
- (void)setReplayButton:(id)arg1;
- (void)setShowingButtons:(id)arg1;
- (BOOL)isTemplatePanelShowing;
- (void)setIsTemplatePanelShowing:(BOOL)arg1;
- (BOOL)isTemplateShooting;
- (void)setIsTemplateShooting:(BOOL)arg1;
- (BOOL)isCurrentAIGCTemplateShooting;
- (void)setIsCurrentAIGCTemplateShooting:(BOOL)arg1;
- (void)setFeedbackGenerator:(id)arg1;
- (void).cxx_destruct;
@end
