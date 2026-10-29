@interface CBTAsstTitleContainerView : UIView
{
    BOOL _needsLayout; // +0x8
    id /* block */ _onTapBlock; // +0x10
    UILabel * _centerLabel; // +0x18
    UILabel * _subTitleLabel; // +0x20
    UIView * _rightReferenceView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setupSubviews;
- (void)updateTitleText:(id)arg1;
- (void)updateSubTitleText:(id)arg1;
- (void)setLinkStyle:(BOOL)arg1;
- (void)setRightReferenceView:(id)arg1;
- (void)onTapBlock:(id /* block */)arg1;
- (void)layoutSubviews;
- (void)onCenterLabelPress:(id)arg1;
- (id /* block */)onTapBlock;
- (void)setOnTapBlock:(id /* block */)arg1;
- (id)centerLabel;
- (void)setCenterLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)rightReferenceView;
- (BOOL)needsLayout;
- (void)setNeedsLayout:(BOOL)arg1;
- (void).cxx_destruct;
@end
