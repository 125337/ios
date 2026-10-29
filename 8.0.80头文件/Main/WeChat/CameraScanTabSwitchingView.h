@interface CameraScanTabSwitchingView : MMUIView
{
    double _tabViewHeight; // +0x8
    CameraScanBlurEffectView * _blurView; // +0x10
    UILabel * _centerLabel; // +0x18
}
- (id)init;
- (void)setupSubViews;
- (void)layoutSubviews;
- (void)showSnapshotImageWithAnimation:(id)arg1 blurImage:(id)arg2 completeHandler:(id /* block */)arg3;
- (void)hideSnapshotImageWithCompleteHandler:(id /* block */)arg1;
- (void)setCenterLabelText:(id)arg1;
- (void)setCenterLabelHidden:(BOOL)arg1 hasAnimation:(BOOL)arg2;
- (CGSize)areaSizeAboveTabView;
- (double)tabViewHeight;
- (void)setTabViewHeight:(double)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (id)centerLabel;
- (void)setCenterLabel:(id)arg1;
- (void).cxx_destruct;
@end
