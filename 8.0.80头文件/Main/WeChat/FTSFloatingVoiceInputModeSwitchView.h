@interface FTSFloatingVoiceInputModeSwitchView : FTSFloatingVoiceInputView
{
    BOOL _isTriggeredByConfig; // +0x8
    BOOL _isShimmerAnimating; // +0x9
    id <FTSFloatingVoiceInputModeSwitchViewDelegate> _modeSwitchDelegate; // +0x10
    FTSFloatingVoiceInputModeSwitchConfig * _switchConfig; // +0x18
    long long _internalCurrentMode; // +0x20
    UIView * _modeSwitchContainer; // +0x28
    UIButton * _modeToggleButton; // +0x30
    UIButton * _actionTriggerButton; // +0x38
    UIButton * _uploadButton; // +0x40
    NSString * _customActionText; // +0x48
    UILongPressGestureRecognizer * _leftLongPress; // +0x50
    UILongPressGestureRecognizer * _rightLongPress; // +0x58
    long long _currentYOffset; // +0x60
    double _floatingButtonBottomHeight; // +0x68
    UIView * _solidBackgroundView; // +0x70
    UIView * _shimmerContainerView; // +0x78
    CAGradientLayer * _shimmerGradientLayer; // +0x80
}
- (id)initWithViewModel:(id)arg1 config:(id)arg2 ftsContext:(id)arg3;
- (void)setupViews;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setupModeSwitchView;
- (void)setupConstraints;
- (BOOL)isSolidBackground;
- (void)setupSolidBackgroundIfNeeded;
- (void)modeToggleButtonTapped:(id)arg1;
- (void)actionTriggerButtonTapped:(id)arg1;
- (void)uploadButtonTapped:(id)arg1;
- (void)modeButtonLongPressed:(id)arg1;
- (void)switchToMode:(long long)arg1;
- (void)updateButtonStates;
- (void)updateButtonStatesWithAnimation:(BOOL)arg1;
- (void)updateButtonContentsDirectly;
- (void)updateButtonBackgroundColor;
- (id)createContentSnapshotForButton:(id)arg1;
- (void)updateBehaviorForCurrentMode;
- (void)notifyModeButtonSelected:(id)arg1 atIndex:(long long)arg2;
- (long long)currentMode;
- (void)setSwitchConfig:(id)arg1;
- (void)animateShow;
- (void)animateHide;
- (void)configBottomAiContinueWithVisible:(BOOL)arg1 type:(long long)arg2 text:(id)arg3 yOffset:(long long)arg4;
- (void)updateVerticalPositionWithYOffset:(long long)arg1;
- (void)applyBottomConstraintsWithYOffset:(long long)arg1;
- (void)safeAreaInsetsDidChange;
- (void)updateEllipseGradientLayerFrame;
- (void)startActionTriggerShimmerAnimation;
- (void)removeShimmerAnimation;
- (id)modeSwitchDelegate;
- (void)setModeSwitchDelegate:(id)arg1;
- (id)switchConfig;
- (long long)internalCurrentMode;
- (void)setInternalCurrentMode:(long long)arg1;
- (id)modeSwitchContainer;
- (void)setModeSwitchContainer:(id)arg1;
- (id)modeToggleButton;
- (void)setModeToggleButton:(id)arg1;
- (id)actionTriggerButton;
- (void)setActionTriggerButton:(id)arg1;
- (id)uploadButton;
- (void)setUploadButton:(id)arg1;
- (id)customActionText;
- (void)setCustomActionText:(id)arg1;
- (BOOL)isTriggeredByConfig;
- (void)setIsTriggeredByConfig:(BOOL)arg1;
- (id)leftLongPress;
- (void)setLeftLongPress:(id)arg1;
- (id)rightLongPress;
- (void)setRightLongPress:(id)arg1;
- (long long)currentYOffset;
- (void)setCurrentYOffset:(long long)arg1;
- (double)floatingButtonBottomHeight;
- (void)setFloatingButtonBottomHeight:(double)arg1;
- (id)solidBackgroundView;
- (void)setSolidBackgroundView:(id)arg1;
- (id)shimmerContainerView;
- (void)setShimmerContainerView:(id)arg1;
- (id)shimmerGradientLayer;
- (void)setShimmerGradientLayer:(id)arg1;
- (BOOL)isShimmerAnimating;
- (void)setIsShimmerAnimating:(BOOL)arg1;
- (void).cxx_destruct;
@end
