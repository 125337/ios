@interface MMNavBarInteractiveConfig : MMObject
{
    unsigned long long _navBarInteractiveStyle; // +0x8
    double _navBarFadeInStartOffset; // +0x10
    double _navBarFadeInEndOffset; // +0x18
    UIView * _customNavBarView; // +0x20
    UIView * _gradientView; // +0x28
    double _navBarShrinkRemainHeight; // +0x30
    UIScrollView * _scrollViewForNavBarInteraction; // +0x38
    UIColor * _fadeInColor; // +0x40
    id <MMNavBarInteractiveDelegate> _m_delegate; // +0x48
    NSString * _rightBarButtonImage; // +0x50
    NSString * _rightBarButtonImage2; // +0x58
    double _lastContentOffsetY; // +0x60
    double _lastContentInsetTop; // +0x68
    long long _scrollNavBarState; // +0x70
    UIImageView * _shadowView; // +0x78
    NSNumber * _foregroundColor; // +0x80
}
- (id)initFadeStyleWithScrollView:(id)arg1;
- (id)initFadeStyleWithScrollView:(id)arg1 fadeInColor:(id)arg2 fadeInStartOffset:(double)arg3 fadeInEndOffset:(double)arg4;
- (id)initTransitionStyleWithScrollView:(id)arg1;
- (id)initBGTransparetStypeWithScrollView:(id)arg1;
- (id)customNavBarView;
- (unsigned long long)navBarInteractiveStyle;
- (void)setNavBarInteractiveStyle:(unsigned long long)arg1;
- (double)navBarFadeInStartOffset;
- (void)setNavBarFadeInStartOffset:(double)arg1;
- (double)navBarFadeInEndOffset;
- (void)setNavBarFadeInEndOffset:(double)arg1;
- (void)setCustomNavBarView:(id)arg1;
- (id)gradientView;
- (void)setGradientView:(id)arg1;
- (double)navBarShrinkRemainHeight;
- (void)setNavBarShrinkRemainHeight:(double)arg1;
- (id)scrollViewForNavBarInteraction;
- (void)setScrollViewForNavBarInteraction:(id)arg1;
- (id)fadeInColor;
- (void)setFadeInColor:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)rightBarButtonImage;
- (void)setRightBarButtonImage:(id)arg1;
- (id)rightBarButtonImage2;
- (void)setRightBarButtonImage2:(id)arg1;
- (double)lastContentOffsetY;
- (void)setLastContentOffsetY:(double)arg1;
- (double)lastContentInsetTop;
- (void)setLastContentInsetTop:(double)arg1;
- (long long)scrollNavBarState;
- (void)setScrollNavBarState:(long long)arg1;
- (id)shadowView;
- (void)setShadowView:(id)arg1;
- (id)foregroundColor;
- (void)setForegroundColor:(id)arg1;
- (void).cxx_destruct;
@end
