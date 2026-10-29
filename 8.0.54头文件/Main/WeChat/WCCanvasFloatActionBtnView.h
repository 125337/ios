@interface WCCanvasFloatActionBtnView : WCCanvasFloatActionBaseView <CAAnimationDelegate>
{
    BOOL _isDisappearing; // +0x8
    BOOL _didAppearFirstTime; // +0x9
}
- (id)initWithFrame:(CGRect)arg1 componentItem:(id)arg2 advertiseInfo:(id)arg3 orientation:(long long)arg4 delegate:(id)arg5;
- (id)fetchComponentId;
- (BOOL)shouldShowActionViewWithOffsetY:(double)arg1 tableHeight:(double)arg2 contentHeight:(double)arg3;
- (void)setActionViewHidden:(BOOL)arg1 animation:(BOOL)arg2;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (BOOL)isDisappearing;
- (void)setIsDisappearing:(BOOL)arg1;
- (BOOL)didAppearFirstTime;
- (void)setDidAppearFirstTime:(BOOL)arg1;
@end

