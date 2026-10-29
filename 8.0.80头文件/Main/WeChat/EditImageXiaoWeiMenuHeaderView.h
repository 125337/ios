@interface EditImageXiaoWeiMenuHeaderView : UIView
{
    MMUILabel * _titleLabel; // +0x8
    UIView * _arrowContainerView; // +0x10
    UIImageView * _arrowView; // +0x18
    UIView * _dividerView; // +0x20
    UIView * _highlightView; // +0x28
    double _leftMargin; // +0x30
    id /* block */ _tapHandler; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)configureWithTitle:(id)arg1 leftMargin:(double)arg2 tapHandler:(id /* block */)arg3;
- (void)applyExpandedVisualState;
- (void)applyCollapsedVisualState;
- (void)onPressed:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)arrowContainerView;
- (void)setArrowContainerView:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (id)dividerView;
- (void)setDividerView:(id)arg1;
- (id)highlightView;
- (void)setHighlightView:(id)arg1;
- (double)leftMargin;
- (void)setLeftMargin:(double)arg1;
- (id /* block */)tapHandler;
- (void)setTapHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
