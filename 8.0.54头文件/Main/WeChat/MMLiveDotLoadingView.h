@interface MMLiveDotLoadingView : UIView
{
    BOOL _animate; // +0x8
    int _animationCount; // +0xc
    MMTimer * _animationTimer; // +0x10
    NSMutableArray * _animationDots; // +0x18
    UIView * _dotContainerView; // +0x20
}
- (void)setAnimate:(BOOL)arg1;
- (void)layoutSubviews;
- (void)layoutDotViews;
- (void)animationTimerCheck;
- (BOOL)animate;
- (int)animationCount;
- (void)setAnimationCount:(int)arg1;
- (id)animationTimer;
- (void)setAnimationTimer:(id)arg1;
- (id)animationDots;
- (void)setAnimationDots:(id)arg1;
- (id)dotContainerView;
- (void)setDotContainerView:(id)arg1;
- (void).cxx_destruct;
@end

