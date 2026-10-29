@interface MMVoipCSMainWindow : MMWindow
{
    BOOL _m_hasStartQuitAnimation; // +0x10
    id <MMVoipCSMainWindowDelegate> m_mainWindowDelegate; // +0x18
    UIImageView * m_blurView; // +0x20
}
- (id)init;
- (void)dealloc;
- (void)extendWithAnimation;
- (void)collapseWithAnimation;
- (void)extendFromCollapseWithAnimation;
- (void)quitWithAnimation;
- (BOOL)hasStartQuitAnimation;
- (void)collapseWithAnimationDidStop;
- (void)quitWithAnimationDidStop;
- (id)m_mainWindowDelegate;
- (void)setM_mainWindowDelegate:(id)arg1;
- (id)m_blurView;
- (void)setM_blurView:(id)arg1;
- (BOOL)m_hasStartQuitAnimation;
- (void)setM_hasStartQuitAnimation:(BOOL)arg1;
- (void).cxx_destruct;
@end
