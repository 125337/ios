@interface VoIPMainWindow : MMWindow <VoIPUIManagerWindowInfo>
{
    BOOL _shouldIgnoreExtendFromCollapseFirstStepAnimation; // +0x10
    BOOL _m_hasStartQuitAnimation; // +0x11
    id <VoIPMainWindowDelegate> m_mainWindowDelegate; // +0x18
    UIImageView * m_blurView; // +0x20
    unsigned long long _scene; // +0x28
    unsigned long long _lastScene; // +0x30
    unsigned long long _animateStatus; // +0x38
}
- (id)initWithFrame:(CGRect)arg1 rootViewController:(id)arg2;
- (void)setFrame:(CGRect)arg1;
- (void)setScene:(unsigned long long)arg1;
- (BOOL)isExtending;
- (void)dealloc;
- (void)hideWithAnimation;
- (void)showWithAnimation;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)extendWithCompletion:(id /* block */)arg1 isAnimated:(BOOL)arg2;
- (void)extendWithAnimation;
- (void)collapseWithNotAnimation;
- (void)_slipCollapseWhenConnectingInVideoModeWithAnimation;
- (void)_slipCollapseWithAnimation:(id)arg1;
- (void)slipCollapseWithAnimation:(id)arg1 isIgnoringSnapshot:(BOOL)arg2;
- (void)_collapseWhenConnectingInVideoModeWithAnimation;
- (void)_collapseWithAnimation;
- (void)collapseWithAnimationIsIgnoringSnapshot:(BOOL)arg1;
- (void)extendFromCollapseWithAnimationIsIgnoringSnapshot:(BOOL)arg1;
- (void)_extendFromCollapseWhenConnectingInVideoModeWithAnimated:(BOOL)arg1;
- (void)_extendFromCollapseWithAnimated:(BOOL)arg1;
- (void)extendFromCollapseWithAnimated:(BOOL)arg1 isIgnoringSnapshot:(BOOL)arg2;
- (void)quitAnimtedWithCompletion:(id /* block */)arg1 delay:(float)arg2;
- (void)quitWithoutAnimation;
- (void)quitWithoutAnimationWithCompletion:(id /* block */)arg1 delay:(float)arg2;
- (void)quitAnimated:(BOOL)arg1 withCompletion:(id /* block */)arg2 delay:(float)arg3;
- (void)quitAnimated:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (long long)getPreviousOrientation;
- (BOOL)hasStartQuitAnimation;
- (void)collapseWithAnimationDidStopIsIgnoringSnapshot:(BOOL)arg1;
- (void)restoreStatusBarColor;
- (void)changeStatusBarColor;
- (id)m_mainWindowDelegate;
- (void)setM_mainWindowDelegate:(id)arg1;
- (id)m_blurView;
- (void)setM_blurView:(id)arg1;
- (unsigned long long)scene;
- (unsigned long long)lastScene;
- (void)setLastScene:(unsigned long long)arg1;
- (unsigned long long)animateStatus;
- (void)setAnimateStatus:(unsigned long long)arg1;
- (BOOL)shouldIgnoreExtendFromCollapseFirstStepAnimation;
- (void)setShouldIgnoreExtendFromCollapseFirstStepAnimation:(BOOL)arg1;
- (BOOL)m_hasStartQuitAnimation;
- (void)setM_hasStartQuitAnimation:(BOOL)arg1;
- (void).cxx_destruct;
@end
