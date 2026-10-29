@interface MMDictationIconView : UIView <MMTransparentButtonDelegate>
{
    BOOL _isAnimating; // +0x8
    int _outerCircleDelayAnimatingCount; // +0xc
    id <MMDictationIconDelegate> _delegate; // +0x10
    MMTransparentButton * _iconButton; // +0x18
    UIImage * _customStaticIconImage; // +0x20
    UIImage * _staticIconImage; // +0x28
    UIImageView * _staticIcon; // +0x30
    UIImageView * _preparingIcon; // +0x38
    UIImageView * _activeIcon; // +0x40
    UIView * _iconBackroundView; // +0x48
    UIView * _animationInnerCircle; // +0x50
    UIView * _animationOuterCircle; // +0x58
    MMLoadingIndicatorView * _loadingIndicator; // +0x60
    MMLoadingIndicatorView * _waitEndFlagLoadingIndicator; // +0x68
    unsigned long long _iconState; // +0x70
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 customIconImage:(id)arg2;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)arg1;
- (void)setState:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)delayToLoading;
- (void)changeFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (void)displayRecordingAnimation:(float)arg1;
- (void)displayPeakPower:(float)arg1 MaxRadius:(double)arg2 MinRadius:(double)arg3 BaseRadius:(double)arg4 UIView:(id)arg5;
- (void)MMTransparentButton_touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)MMTransparentButton_touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)MMTransparentButton_touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)MMTransparentButton_touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)iconButton;
- (void)setIconButton:(id)arg1;
- (id)customStaticIconImage;
- (void)setCustomStaticIconImage:(id)arg1;
- (id)staticIconImage;
- (void)setStaticIconImage:(id)arg1;
- (id)staticIcon;
- (void)setStaticIcon:(id)arg1;
- (id)preparingIcon;
- (void)setPreparingIcon:(id)arg1;
- (id)activeIcon;
- (void)setActiveIcon:(id)arg1;
- (id)iconBackroundView;
- (void)setIconBackroundView:(id)arg1;
- (id)animationInnerCircle;
- (void)setAnimationInnerCircle:(id)arg1;
- (id)animationOuterCircle;
- (void)setAnimationOuterCircle:(id)arg1;
- (int)outerCircleDelayAnimatingCount;
- (void)setOuterCircleDelayAnimatingCount:(int)arg1;
- (id)loadingIndicator;
- (void)setLoadingIndicator:(id)arg1;
- (id)waitEndFlagLoadingIndicator;
- (void)setWaitEndFlagLoadingIndicator:(id)arg1;
- (unsigned long long)iconState;
- (void)setIconState:(unsigned long long)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (void).cxx_destruct;
@end
