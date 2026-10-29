@interface VoIPLockScreenButton : MMUIView
{
    BOOL _isLocked; // +0x8
    BOOL _enableUnlockedBlur; // +0x9
    BOOL _isAnimating; // +0xa
    BOOL _isShakeAnimating; // +0xb
    BOOL _forceInterruptShake; // +0xc
    id <VoIPLockScreenButtonDelegate> _delegate; // +0x10
    long long _lockedIconAlignment; // +0x18
    MMUILabel * _lockedLabel; // +0x20
    MMUIButton * _lockButton; // +0x28
    MMUIButton * _unlockedButton; // +0x30
    UIImageView * _shakeImageView; // +0x38
    UILabel * _shakeLabel; // +0x40
}
+ (id)getUnLockIconString;
+ (id)getLockIconString;
+ (void)shakeView:(id)arg1 togetherWith:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 lockedIconAlignment:(long long)arg2;
- (void)setupConfigurationWithAlignment:(long long)arg1;
- (void)setupAccessibilityIfNeeded;
- (void)setEnableUnlockedBlur:(BOOL)arg1;
- (void)updateUnlockedButtonAppearance;
- (void)initUnlockedButton;
- (void)initLockedUIIfNeeded;
- (void)setState:(BOOL)arg1 animated:(BOOL)arg2;
- (void)remindLocked;
- (void)enterLockedStateAnimated:(BOOL)arg1;
- (void)startLockedEnterAnimation;
- (void)enterUnlockedStateAnimated:(BOOL)arg1;
- (void)startUnlockedEnterAnimation;
- (void)finalizeUnlockedState;
- (void)startScreenLockAnimation;
- (void)onLockedButtonClick;
- (void)onUnlockedButtonClick;
- (void)layoutSubviews;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)updateLockedIconAlignment:(long long)arg1;
- (void)shakeLockButtonWithCompletion:(id /* block */)arg1;
- (void)didMoveToWindow;
- (void)reportCurrentStateExposure;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isLocked;
- (void)setIsLocked:(BOOL)arg1;
- (BOOL)enableUnlockedBlur;
- (long long)lockedIconAlignment;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (BOOL)isShakeAnimating;
- (void)setIsShakeAnimating:(BOOL)arg1;
- (BOOL)forceInterruptShake;
- (void)setForceInterruptShake:(BOOL)arg1;
- (id)lockedLabel;
- (void)setLockedLabel:(id)arg1;
- (id)lockButton;
- (void)setLockButton:(id)arg1;
- (id)unlockedButton;
- (void)setUnlockedButton:(id)arg1;
- (id)shakeImageView;
- (void)setShakeImageView:(id)arg1;
- (id)shakeLabel;
- (void)setShakeLabel:(id)arg1;
- (void).cxx_destruct;
@end
