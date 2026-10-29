@interface MainFrameActionFloatView : UIButton <CAAnimationDelegate>
{
    UIImageView * m_viewBg; // +0x8
    UIView * m_viewContent; // +0x10
}
- (void)onHideAction;
- (void)animateHideAction;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)updateSubviewWidth;
- (void)addLineWithButton:(id)arg1;
- (void)addItemWithBtnData:(id)arg1 showNew:(BOOL)arg2 sel:(SEL)arg3 target:(id)arg4;
- (void)addDismissSel:(SEL)arg1 target:(id)arg2;
- (id)init;
- (void)animateShowInView:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void).cxx_destruct;
@end
