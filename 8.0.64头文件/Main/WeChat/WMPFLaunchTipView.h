@interface WMPFLaunchTipView : UIView
{
    BOOL _hasBeginShow; // +0x8
    BOOL _animateShowFinished; // +0x9
    BOOL _isGame; // +0xa
}
- (id)initWithFrame:(CGRect)arg1 isGame:(BOOL)arg2;
- (void)buildView;
- (void)animateShowWithCompleteHandler:(id /* block */)arg1;
- (void)animateHideWithDelay:(double)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (BOOL)hasBeginShow;
- (void)setHasBeginShow:(BOOL)arg1;
- (BOOL)animateShowFinished;
- (void)setAnimateShowFinished:(BOOL)arg1;
- (BOOL)isGame;
- (void)setIsGame:(BOOL)arg1;
@end
