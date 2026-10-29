@interface MJImagePanelContainer : MJPassthroughView
{
    BOOL _adaptsDuoMaterialPanelLayout; // +0x8
    MJImagePanel * _panelView; // +0x10
    id <MJImagePanelContainerDelegate> _delegate; // +0x18
    NSLayoutConstraint * _bottomConstraint; // +0x20
    UIView * _grabBar; // +0x28
    UIView * _grabIndicator; // +0x30
    double _originalMaterialPanelHeight; // +0x38
    CGSize _appliedMaterialPanelSize; // +0x40
}
- (id)initWithPanelView:(id)arg1 avoidSafeArea:(BOOL)arg2;
- (BOOL)isEditingPanel;
- (double)panelHeight;
- (void)configureDuoMaterialPanelLayout;
- (void)updateDuoMaterialPanelLayout;
- (void)presentFromView:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)dismissAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (BOOL)processRenderTapWithLayer:(id)arg1 events:(unsigned long long)arg2;
- (void)_setupGrabBar;
- (void)layoutSubviews;
- (void)handleDragClosePanelAction;
- (BOOL)adaptsDuoMaterialPanelLayout;
- (void)setAdaptsDuoMaterialPanelLayout:(BOOL)arg1;
- (id)panelView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)bottomConstraint;
- (void)setBottomConstraint:(id)arg1;
- (id)grabBar;
- (void)setGrabBar:(id)arg1;
- (id)grabIndicator;
- (void)setGrabIndicator:(id)arg1;
- (double)originalMaterialPanelHeight;
- (void)setOriginalMaterialPanelHeight:(double)arg1;
- (CGSize)appliedMaterialPanelSize;
- (void)setAppliedMaterialPanelSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
