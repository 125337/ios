@interface MMFinderLiveMicDoubleClickLikeGuideView : UIView <PAGViewListener>
{
    id /* block */ _onAnimationFinished; // +0x8
    PAGView * _guideAnimatedView; // +0x10
    MMUILabel * _tipLabel; // +0x18
}
- (void)showAtAvatarCenter:(CGPoint)arg1 avatarSize:(double)arg2 inView:(id)arg3;
- (void)dismissAnimated:(BOOL)arg1;
- (void)setupPAGViewWithAvatarCenter:(CGPoint)arg1 avatarSize:(double)arg2;
- (void)setupTipLabel;
- (id)loadPAGFile;
- (void)onAnimationEnd:(id)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id /* block */)onAnimationFinished;
- (void)setOnAnimationFinished:(id /* block */)arg1;
- (id)guideAnimatedView;
- (void)setGuideAnimatedView:(id)arg1;
- (id)tipLabel;
- (void)setTipLabel:(id)arg1;
- (void).cxx_destruct;
@end
