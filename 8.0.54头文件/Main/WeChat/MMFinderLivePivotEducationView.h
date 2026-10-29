@interface MMFinderLivePivotEducationView : UIView <MMFinderLivePivotEducationViewModelDelegate>
{
    BOOL _touchToDismiss; // +0x8
    id /* block */ _dismissAction; // +0x10
    id /* block */ _hitTestBlock; // +0x18
    id /* block */ _clickTipsViewBlock; // +0x20
    MMFinderLivePivotEducationViewModel * _viewModel; // +0x28
    UIView * _backgroundView; // +0x30
    UIImageView * _upIconView; // +0x38
    MMUILabel * _tipsLabel; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)refreshLayout;
- (void)refreshBackgroundViewHeight:(double)arg1;
- (void)scrollToOtherLiveTask;
- (void)disMissSelf;
- (void)onScrollViewDidScroll:(id)arg1;
- (void)updateViewModel:(id)arg1;
- (double)viewHeight;
- (id)educationView;
- (void)onTipsAlphaChange:(id)arg1 tipsAlpha:(double)arg2;
- (void)onTipsHeightChange:(id)arg1 tipsHeight:(double)arg2;
- (double)tipsContainerViewHeight;
- (id)backgroundView;
- (id)upIconView;
- (id)tipsLabel;
- (BOOL)touchToDismiss;
- (void)setTouchToDismiss:(BOOL)arg1;
- (id /* block */)dismissAction;
- (void)setDismissAction:(id /* block */)arg1;
- (id /* block */)hitTestBlock;
- (void)setHitTestBlock:(id /* block */)arg1;
- (id /* block */)clickTipsViewBlock;
- (void)setClickTipsViewBlock:(id /* block */)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setUpIconView:(id)arg1;
- (void)setTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end

