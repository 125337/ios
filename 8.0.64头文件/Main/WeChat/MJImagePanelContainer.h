@interface MJImagePanelContainer : MJPassthroughView
{
    MJImagePanel * _panelView; // +0x8
    NSLayoutConstraint * _bottomConstraint; // +0x10
}
- (id)initWithPanelView:(id)arg1 avoidSafeArea:(BOOL)arg2;
- (BOOL)isEditingPanel;
- (double)panelHeight;
- (void)presentFromView:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)dismissAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (BOOL)processRenderTapWithLayer:(id)arg1 events:(unsigned long long)arg2;
- (id)panelView;
- (id)bottomConstraint;
- (void)setBottomConstraint:(id)arg1;
- (void).cxx_destruct;
@end
