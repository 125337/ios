@interface MultitalkMinimizeWindow : MMUIWindow <MultitalkMinimizeViewControllerDelegate>
{
    SequenceAnimationObject * m_animationObject; // +0x8
    MultitalkMinimizeViewController * m_viewController; // +0x10
    id <MultitalkMinimizeWindowDelegate> _m_delegate; // +0x18
    SequenceAnimationObject * _m_animationObjectForAlpha; // +0x20
}
- (id)init;
- (void)setBackgroundColor:(id)arg1;
- (void)startTimer;
- (void)updateDescMode:(unsigned long long)arg1 withDisplayTime:(double)arg2;
- (CGRect)vaildFrame;
- (void)hideMinimizeWindow;
- (void)showMinimizeWindow;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)makeKeyWindow;
- (CGRect)fullScreenRect;
- (void)onMultitalkMinimizeViewControllerTap;
- (id)m_animationObject;
- (void)setM_animationObject:(id)arg1;
- (id)m_viewController;
- (void)setM_viewController:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_animationObjectForAlpha;
- (void)setM_animationObjectForAlpha:(id)arg1;
- (void).cxx_destruct;
@end
