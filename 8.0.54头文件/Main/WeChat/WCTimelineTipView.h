@interface WCTimelineTipView : MMUIView <CAAnimationDelegate>
{
    id <WCTimelineTipViewDelegate> _delegate; // +0x8
    BOOL _showTipNow; // +0x10
    BOOL _closeTipNow; // +0x11
    BOOL _hidingTip; // +0x12
}
+ (id)showTipWithDelegate:(id)arg1 parentView:(id)arg2 content:(id)arg3;
- (id)init;
- (void)initView;
- (void)performBgAction;
- (id)getAnimationLayer;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)hideTipView:(BOOL)arg1;
- (void)showTipView:(BOOL)arg1;
- (void)closeTipView:(BOOL)arg1;
- (void)showTipView:(double)arg1 withAnimationTimes:(id)arg2 AnimationValues:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)showTipNow;
- (void)setShowTipNow:(BOOL)arg1;
- (void).cxx_destruct;
@end

