@interface MMFinderLiveConnectMicControlBar : UIView
{
    BOOL _isMuted; // +0x8
    BOOL _isMutedByAnchor; // +0x9
    BOOL _isCameraEnabled; // +0xa
    BOOL _canSwitchMicMode; // +0xb
    BOOL _isExpanded; // +0xc
    BOOL _isAnimating; // +0xd
    id <MMFinderLiveConnectMicControlBarDelegate> _delegate; // +0x10
    UIView * _backgroundView; // +0x18
    UIButton * _minimizeButton; // +0x20
    UIButton * _muteButton; // +0x28
    UIButton * _switchMicModeButton; // +0x30
    UIButton * _cameraSettingsButton; // +0x38
    UIButton * _endMicButton; // +0x40
    UIView * _buttonContainerView; // +0x48
    UIVisualEffectView * _backgroundEffectView; // +0x50
    UIView * _animationBackgroundView; // +0x58
}
- (id)initWithMuted:(BOOL)arg1 isMutedByAnchor:(BOOL)arg2 cameraEnabled:(BOOL)arg3 canSwitchMicMode:(BOOL)arg4;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)setupBackgroundView;
- (void)setupButtonContainer;
- (void)setupButtons;
- (id)createMinimizeButton;
- (id)createButtonWithIconName:(id)arg1 action:(SEL)arg2 accessibilityLabel:(id)arg3;
- (void)layoutSubviews;
- (void)layoutButtons;
- (id)visibleButtons;
- (void)updateMuteState:(BOOL)arg1 isMutedByAnchor:(BOOL)arg2;
- (void)updateCameraState:(BOOL)arg1;
- (void)updateCanSwitchMicMode:(BOOL)arg1;
- (void)showWithAnimation:(BOOL)arg1 anchorRect:(CGRect)arg2 alongsideAnimations:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)hideWithAnimation:(BOOL)arg1 anchorRect:(CGRect)arg2 alongsideAnimations:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)updateMuteButtonState;
- (void)updateSwitchMicModeButtonState;
- (void)updateCameraSettingsButtonState;
- (id)muteButtonIconName;
- (id)muteButtonAccessibilityLabel;
- (id)switchMicModeButtonIconName;
- (id)switchMicModeButtonAccessibilityLabel;
- (void)onMinimizeButtonClicked;
- (void)onMuteButtonClicked;
- (void)onSwitchMicModeButtonClicked;
- (void)onCameraSettingsButtonClicked;
- (void)onEndMicButtonClicked;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isMuted;
- (void)setIsMuted:(BOOL)arg1;
- (BOOL)isMutedByAnchor;
- (void)setIsMutedByAnchor:(BOOL)arg1;
- (BOOL)isCameraEnabled;
- (void)setIsCameraEnabled:(BOOL)arg1;
- (BOOL)canSwitchMicMode;
- (void)setCanSwitchMicMode:(BOOL)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)minimizeButton;
- (void)setMinimizeButton:(id)arg1;
- (id)muteButton;
- (void)setMuteButton:(id)arg1;
- (id)switchMicModeButton;
- (void)setSwitchMicModeButton:(id)arg1;
- (id)cameraSettingsButton;
- (void)setCameraSettingsButton:(id)arg1;
- (id)endMicButton;
- (void)setEndMicButton:(id)arg1;
- (id)buttonContainerView;
- (void)setButtonContainerView:(id)arg1;
- (BOOL)isExpanded;
- (void)setIsExpanded:(BOOL)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (id)backgroundEffectView;
- (void)setBackgroundEffectView:(id)arg1;
- (id)animationBackgroundView;
- (void)setAnimationBackgroundView:(id)arg1;
- (void).cxx_destruct;
@end
