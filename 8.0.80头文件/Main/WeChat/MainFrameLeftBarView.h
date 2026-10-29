@interface MainFrameLeftBarView : MMBarItemCustomView <CAAnimationDelegate, CBTAsstReddotObserverBase, ICBTEntryStateExt>
{
    BOOL _useTaskBarTransparentStyle; // +0x8
    BOOL _pressedHighlightEnabled; // +0x9
    BOOL _enableNewbieAnimation; // +0xa
    BOOL _resumeAnimateAtMoveToWindow; // +0xb
    BOOL _isEducateAnimating; // +0xc
    BOOL _cbtAsstHomeReddotHiddenForCurrentVisit; // +0xd
    BOOL _cbtAsstHomeReddotEnabled; // +0xe
    BOOL _hasVisibleHomeReddot; // +0xf
    UIColor * _iconTintedColor; // +0x10
    UIView * _navTitleView; // +0x18
    UIView * _contentView; // +0x20
    UIImageView * _iconView; // +0x28
    UILabel * _educationLabel; // +0x30
    MMBadgeView * _cbtAsstHomeReddotView; // +0x38
    CBTAsstReddotObserver * _reddotObserver; // +0x40
    CBTNewbieAnimationView * _newbieAnimationView; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)setupCbtAsstHomeReddotEnabled:(BOOL)arg1;
- (void)layoutSubviews;
- (void)setIconTintedColor:(id)arg1;
- (void)setUseTaskBarTransparentStyle:(BOOL)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)refreshIconImage;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)setPressedHighlight:(BOOL)arg1;
- (void)playShakeAnimation;
- (void)prepareForEducationAnimation;
- (void)playEducationAnimation:(id)arg1;
- (void)_playScaleColorAnimation;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)didMoveToWindow;
- (void)onUpdate;
- (void)onNewbieAnimationAvailable;
- (void)refreshHomeReddot;
- (void)applyHomeReddotCount:(unsigned long long)arg1 shouldShowSmallDot:(BOOL)arg2;
- (void)adjustHomeReddotToFitBounds;
- (void)playNewbieAnimationIfNeeded;
- (void)installAndPlayNewbieAnimationView;
- (void)cancelNewbieAnimation;
- (void)teardownNewbieAnimationView;
- (void)onCBTEntryStateChanged:(BOOL)arg1;
- (id)iconTintedColor;
- (BOOL)useTaskBarTransparentStyle;
- (BOOL)pressedHighlightEnabled;
- (void)setPressedHighlightEnabled:(BOOL)arg1;
- (BOOL)enableNewbieAnimation;
- (void)setEnableNewbieAnimation:(BOOL)arg1;
- (BOOL)resumeAnimateAtMoveToWindow;
- (void)setResumeAnimateAtMoveToWindow:(BOOL)arg1;
- (BOOL)isEducateAnimating;
- (void)setIsEducateAnimating:(BOOL)arg1;
- (id)navTitleView;
- (void)setNavTitleView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)educationLabel;
- (void)setEducationLabel:(id)arg1;
- (id)cbtAsstHomeReddotView;
- (void)setCbtAsstHomeReddotView:(id)arg1;
- (BOOL)cbtAsstHomeReddotHiddenForCurrentVisit;
- (void)setCbtAsstHomeReddotHiddenForCurrentVisit:(BOOL)arg1;
- (id)reddotObserver;
- (void)setReddotObserver:(id)arg1;
- (BOOL)cbtAsstHomeReddotEnabled;
- (void)setCbtAsstHomeReddotEnabled:(BOOL)arg1;
- (BOOL)hasVisibleHomeReddot;
- (void)setHasVisibleHomeReddot:(BOOL)arg1;
- (id)newbieAnimationView;
- (void)setNewbieAnimationView:(id)arg1;
- (void).cxx_destruct;
@end
