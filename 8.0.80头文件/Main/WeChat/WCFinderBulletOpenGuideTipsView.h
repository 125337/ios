@interface WCFinderBulletOpenGuideTipsView : WCFinderCommonTipsView
{
    MMTimer * _openGuideTimeoutTimer; // +0x8
}
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)animateAppearanceFromArrowBottomPoint:(CGPoint)arg1;
- (void)dismissAfterOpenGuideDuration:(double)arg1;
- (void)onOpenGuideTimeout:(id)arg1;
- (void)dismiss;
- (id)openGuideTimeoutTimer;
- (void)setOpenGuideTimeoutTimer:(id)arg1;
- (void).cxx_destruct;
@end
