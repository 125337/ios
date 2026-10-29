@interface WCFinderComboLikeGuideView : UIControl <UIGestureRecognizerDelegate, MMFinderFriendLikeShootingAinmationStartProtocol>
{
    BOOL _pressing; // +0x8
    id /* block */ _hasConflictingUIBlock; // +0x10
    id /* block */ _beginPressBlock; // +0x18
    id /* block */ _cancelPressBlock; // +0x20
    UIView * _containerView; // +0x28
    WCFinderFullToolbarView * _toolbarView; // +0x30
    WCFinderFeedContentVM * _contentVM; // +0x38
    UIView * _likeButton; // +0x40
    double _likeButtonAlpha; // +0x48
    WCFinderFriendLikeShootingAnimationLogic * _animationLogic; // +0x50
    UIView * _contentView; // +0x58
    UIImageView * _heartView; // +0x60
    UIImageView * _glowView; // +0x68
    UILabel * _comboLabel; // +0x70
    MMTimer * _timer; // +0x78
    UIViewPropertyAnimator * _visibilityAnimator; // +0x80
    UIViewPropertyAnimator * _pressAnimator; // +0x88
    UILongPressGestureRecognizer * _pressGesture; // +0x90
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutGuideContent;
- (void)showAnimated;
- (void)scheduleTimerAfter:(double)arg1 selector:(SEL)arg2;
- (void)requestDismiss;
- (void)startPulsePressed:(BOOL)arg1;
- (void)onPressGesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)onPressBegan;
- (void)onPressEnded;
- (BOOL)accessibilityActivate;
- (CGRect)friendLikeShootingAinmationStartGetFrame;
- (void)reset;
- (void)dealloc;
- (id)initWithContainerView:(id)arg1 toolbarView:(id)arg2;
- (BOOL)isShowing;
- (void)updateWithContentVM:(id)arg1;
- (void)requestGuideForContentVM:(id)arg1;
- (BOOL)canUseGuide;
- (void)normalLikeAnimationDidFinishForContentVM:(id)arg1;
- (void)showGuideIfNeeded;
- (void)keepLikeButtonHiddenIfNeeded;
- (void)layoutGuide;
- (BOOL)beginPress;
- (void)endPress;
- (void)dismissGuideAnimated:(BOOL)arg1;
- (void)cancel;
- (id /* block */)hasConflictingUIBlock;
- (void)setHasConflictingUIBlock:(id /* block */)arg1;
- (id /* block */)beginPressBlock;
- (void)setBeginPressBlock:(id /* block */)arg1;
- (id /* block */)cancelPressBlock;
- (void)setCancelPressBlock:(id /* block */)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)toolbarView;
- (void)setToolbarView:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)likeButton;
- (void)setLikeButton:(id)arg1;
- (double)likeButtonAlpha;
- (void)setLikeButtonAlpha:(double)arg1;
- (id)animationLogic;
- (void)setAnimationLogic:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)heartView;
- (void)setHeartView:(id)arg1;
- (id)glowView;
- (void)setGlowView:(id)arg1;
- (id)comboLabel;
- (void)setComboLabel:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (id)visibilityAnimator;
- (void)setVisibilityAnimator:(id)arg1;
- (id)pressAnimator;
- (void)setPressAnimator:(id)arg1;
- (id)pressGesture;
- (void)setPressGesture:(id)arg1;
- (BOOL)pressing;
- (void)setPressing:(BOOL)arg1;
- (void).cxx_destruct;
@end
