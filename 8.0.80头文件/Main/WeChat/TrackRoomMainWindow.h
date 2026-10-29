@interface TrackRoomMainWindow : MMWindow
{
    BOOL _shouldIgnoreExtendFromCollapseFirstStepAnimation; // +0x10
    id <TrackRoomMainWindowDelegate> m_mainWindowDelegate; // +0x18
    UIImageView * m_blurView; // +0x20
    unsigned long long _scene; // +0x28
    unsigned long long _animateStatus; // +0x30
}
- (id)init;
- (void)commonSetup;
- (void)dealloc;
- (BOOL)isWindowInCollapse;
- (BOOL)isExtending;
- (CGRect)normalScreenBounds;
- (void)layoutSubviews;
- (void)extendWithAnimation;
- (void)extendWithCompletion:(id /* block */)arg1 isAnimated:(BOOL)arg2;
- (void)collapseWithNotAnimation;
- (void)collapseWithAnimation;
- (void)slipCollapseWithAnimation:(id)arg1;
- (void)notifyCollapseAnimationDidEndAndAttach;
- (void)collapseWithAnimationDidStop;
- (void)extendFromCollapseWithAnimated:(BOOL)arg1;
- (void)quitWithoutAnimation;
- (void)quitAnimtedWithCompletion:(id /* block */)arg1 delay:(float)arg2;
- (void)quitAnimated:(BOOL)arg1 withCompletion:(id /* block */)arg2;
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
- (void).cxx_destruct;
@end
