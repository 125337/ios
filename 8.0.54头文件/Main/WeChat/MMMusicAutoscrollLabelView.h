@interface MMMusicAutoscrollLabelView : UIView
{
    BOOL _isOpenShadow; // +0x8
    BOOL _isOpenMarquee; // +0x9
    BOOL _infiniteScrolling; // +0xa
    UILabel * _label; // +0x10
    double _maxWidth; // +0x18
    double _scrollBackDelay; // +0x20
    double _animationInterval; // +0x28
    MMMusicFadeOutLayer * _fadeOutLayer; // +0x30
    CAAnimation * _currentScrollAnim; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setIsOpenShadow:(BOOL)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)sizeToFit;
- (void)resetAnimationWithFitSize:(CGSize)arg1;
- (double)getScrollBackDelay;
- (double)getAnimationInterval;
- (void)setCorrectSize:(CGSize)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (BOOL)isOpenShadow;
- (BOOL)isOpenMarquee;
- (void)setIsOpenMarquee:(BOOL)arg1;
- (BOOL)infiniteScrolling;
- (void)setInfiniteScrolling:(BOOL)arg1;
- (double)scrollBackDelay;
- (void)setScrollBackDelay:(double)arg1;
- (double)animationInterval;
- (void)setAnimationInterval:(double)arg1;
- (id)fadeOutLayer;
- (void)setFadeOutLayer:(id)arg1;
- (id)currentScrollAnim;
- (void)setCurrentScrollAnim:(id)arg1;
- (void).cxx_destruct;
@end

