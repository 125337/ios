@interface MultiTalkMainWindow : MMWindow
{
    BOOL _shouldIgnoreExtendFromCollapseFirstStepAnimation; // +0x10
    BOOL _m_hasStartQuitAnimation; // +0x11
    BOOL _noNeedAnimationFromStart; // +0x12
    id <MultiTalkMainWindowDelegate> m_mainWindowDelegate; // +0x18
    UIImageView * m_blurView; // +0x20
    unsigned long long _scene; // +0x28
    unsigned long long _animateStatus; // +0x30
}
- (BOOL)isExtending;
- (id)initWithAnimation:(BOOL)arg1;
- (id)init;
- (void)commonSetup;
- (void)dealloc;
- (BOOL)animateAtInit;
- (void)hideWithAnimation;
- (void)showWithAnimation;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)extendWithCompletion:(id /* block */)arg1 isAnimated:(BOOL)arg2;
- (void)extendWithAnimation;
- (void)collapseWithNotAnimation;
- (void)slipCollapseWithAnimation:(id)arg1;
- (void)collapseWithAnimation;
- (void)extendFromCollapseWithAnimation;
- (CGRect)normalScreenBounds;
- (void)extendFromCollapseWithAnimated:(BOOL)arg1;
- (void)quitAnimtedWithCompletion:(id /* block */)arg1 delay:(float)arg2;
- (void)quitWithAnimation;
- (void)quitWithoutAnimation;
- (void)quitAnimated:(BOOL)arg1 withCompletion:(id /* block */)arg2 delay:(float)arg3;
- (void)quitAnimated:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (long long)getPreviousOrientation;
- (BOOL)hasStartQuitAnimation;
- (void)collapseWithAnimationDidStop;
- (void)restoreStatusBarColor;
- (void)changeStatusBarColor;
- (id)m_mainWindowDelegate;
- (void)setM_mainWindowDelegate:(id)arg1;
- (id)m_blurView;
- (void)setM_blurView:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (unsigned long long)animateStatus;
- (void)setAnimateStatus:(unsigned long long)arg1;
- (BOOL)shouldIgnoreExtendFromCollapseFirstStepAnimation;
- (void)setShouldIgnoreExtendFromCollapseFirstStepAnimation:(BOOL)arg1;
- (BOOL)m_hasStartQuitAnimation;
- (void)setM_hasStartQuitAnimation:(BOOL)arg1;
- (BOOL)noNeedAnimationFromStart;
- (void)setNoNeedAnimationFromStart:(BOOL)arg1;
- (void).cxx_destruct;
@end
