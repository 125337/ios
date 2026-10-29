@interface WCLiveBlurButton : MMUIView <WCLiveBlurButtonPowerModeExt>
{
    BOOL _removeBlurBacked; // +0x8
    BOOL _isExposed; // +0x9
    BOOL _isEnabledInTrialLive; // +0xa
    BOOL _hasBlurEffect; // +0xb
    BOOL _isBtnVisible; // +0xc
    BOOL _hideBySpacingControl; // +0xd
    BOOL _useForButtonFolder; // +0xe
    BOOL _disableShowAtBottomOutside; // +0xf
    BOOL _isRoundCorner; // +0x10
    BOOL _lowPowerModeSwitch; // +0x11
    BOOL _enableStartLowPowerMode; // +0x12
    BOOL _isStartLowPowerMode; // +0x13
    BOOL _hiddenValue; // +0x14
    UIView * _customBackgroundView; // +0x18
    CAGradientLayer * _customBackgroundViewLayer; // +0x20
    WCLiveBlurButtonBackView * _backView; // +0x28
    NSString * _buttonId; // +0x30
    UIColor * _blurEffectColor; // +0x38
    id /* block */ _btnFrameChangeCallback; // +0x40
    UIImage * _customBackgroundImage; // +0x48
    UIColor * _customBackgroundColor; // +0x50
    WCLiveBlurButtonAnimationHandler * _animationHandler; // +0x58
    UILabel * _badgeLabel; // +0x60
    NSString * _badgeValue; // +0x68
    UIView * _redDotView; // +0x70
    UIImageView * _customBgImageView; // +0x78
    UIImageView * _blurBackView; // +0x80
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 roundCorner:(BOOL)arg2;
- (id)initWithFrame:(CGRect)arg1 blurEffectColor:(id)arg2 roundCorner:(BOOL)arg3;
- (id)initWithFrame:(CGRect)arg1 blurEffectColor:(id)arg2;
- (void)dealloc;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)setFrame:(CGRect)arg1;
- (void)setBlurEffectColor:(id)arg1;
- (void)onBlurEffectAdd;
- (void)onBlurEffectRemove;
- (void)updateHasBlurEffect:(BOOL)arg1;
- (void)onBlurBtnHasBlurEffect:(BOOL)arg1;
- (void)startEnlargeReduceAnimation;
- (void)startEnlargeReduceAnimation:(unsigned int)arg1;
- (void)setRemoveBlurBacked:(BOOL)arg1;
- (BOOL)removeBlurBacked;
- (void)updateBgViewMasksToBounds:(BOOL)arg1;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setCustomBackgroundImage:(id)arg1;
- (void)setCustomBackgroundColor:(id)arg1;
- (void)createCustomBackgroundImageViewIfNeeded;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutCustomBackgroundImageView;
- (void)layoutCustomBackgroundView;
- (id)getCustomBackgroundView;
- (void)layoutBackView;
- (id)getBlurButtonBackView;
- (void)updateBlurEffect;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)topButton;
- (id)animationHandler;
- (void)updateBadgeValue:(id)arg1;
- (void)updateBadgeNum:(unsigned long long)arg1;
- (void)updateBadgeValue:(id)arg1 isNum:(BOOL)arg2;
- (void)updateBadgePosition;
- (void)updateRedDotAppearance:(BOOL)arg1;
- (void)updateRedDotPosition;
- (void)updateLowPowerModeAbility:(BOOL)arg1;
- (void)setAlpha:(double)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)didMoveToWindow;
- (void)addBlurEffect;
- (void)addBlurEffectSnapShot:(id)arg1;
- (void)recoverBlurEffectIfNeeded;
- (void)clearAllBlurEffect;
- (BOOL)canHaveBackgroundBlur;
- (void)checkBtnVisible;
- (void)onBlurBtnVisible:(BOOL)arg1;
- (BOOL)isCurrentSupportLowPowerMode;
- (void)checkNeedUpdateLowPowerMode;
- (void)startLowPowerModeBlurIfNeeded;
- (void)stopLowPowerModeBlurIfNeeded;
- (id)blurBackView;
- (id)rootLiveVC;
- (void)setHideBySpacingControl:(BOOL)arg1;
- (void)onWCLiveBlurButtonPowerModeSwitchChange:(BOOL)arg1;
- (id)customBackgroundView;
- (void)setCustomBackgroundView:(id)arg1;
- (id)customBackgroundViewLayer;
- (void)setCustomBackgroundViewLayer:(id)arg1;
- (id)backView;
- (void)setBackView:(id)arg1;
- (id)buttonId;
- (void)setButtonId:(id)arg1;
- (id)blurEffectColor;
- (BOOL)isExposed;
- (void)setIsExposed:(BOOL)arg1;
- (BOOL)isEnabledInTrialLive;
- (void)setIsEnabledInTrialLive:(BOOL)arg1;
- (id /* block */)btnFrameChangeCallback;
- (void)setBtnFrameChangeCallback:(id /* block */)arg1;
- (id)customBackgroundImage;
- (id)customBackgroundColor;
- (BOOL)hasBlurEffect;
- (void)setHasBlurEffect:(BOOL)arg1;
- (BOOL)isBtnVisible;
- (void)setIsBtnVisible:(BOOL)arg1;
- (BOOL)hideBySpacingControl;
- (BOOL)useForButtonFolder;
- (void)setUseForButtonFolder:(BOOL)arg1;
- (BOOL)disableShowAtBottomOutside;
- (void)setDisableShowAtBottomOutside:(BOOL)arg1;
- (BOOL)isRoundCorner;
- (void)setIsRoundCorner:(BOOL)arg1;
- (void)setAnimationHandler:(id)arg1;
- (id)badgeLabel;
- (void)setBadgeLabel:(id)arg1;
- (id)badgeValue;
- (void)setBadgeValue:(id)arg1;
- (id)redDotView;
- (void)setRedDotView:(id)arg1;
- (BOOL)lowPowerModeSwitch;
- (void)setLowPowerModeSwitch:(BOOL)arg1;
- (BOOL)enableStartLowPowerMode;
- (void)setEnableStartLowPowerMode:(BOOL)arg1;
- (BOOL)isStartLowPowerMode;
- (void)setIsStartLowPowerMode:(BOOL)arg1;
- (id)customBgImageView;
- (void)setCustomBgImageView:(id)arg1;
- (BOOL)hiddenValue;
- (void)setHiddenValue:(BOOL)arg1;
- (void)setBlurBackView:(id)arg1;
- (void).cxx_destruct;
@end
