@interface QMCMultiPOIJumpButton : UIControl <QMCScalable>
{
    id /* block */ _tapHandler; // +0x8
    UIImageView * _iconView; // +0x10
    UILabel * _titleLabel; // +0x18
    NSLayoutConstraint * _iconWidthConstraint; // +0x20
    NSLayoutConstraint * _iconHeightConstraint; // +0x28
    NSLayoutConstraint * _topPaddingConstraint; // +0x30
    NSLayoutConstraint * _bottomPaddingConstraint; // +0x38
    NSLayoutConstraint * _leadingPaddingConstraint; // +0x40
    NSLayoutConstraint * _trailingPaddingConstraint; // +0x48
    double _scaleFactor; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (void)_setupUI;
- (void)configureWithTitle:(id)arg1 icon:(id)arg2;
- (void)_didTap;
- (void)setHighlighted:(BOOL)arg1;
- (void)layoutSubviews;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (id)_bgColor;
- (id)_titleColor;
- (void)qmc_applyScale:(double)arg1;
- (id /* block */)tapHandler;
- (void)setTapHandler:(id /* block */)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)iconWidthConstraint;
- (void)setIconWidthConstraint:(id)arg1;
- (id)iconHeightConstraint;
- (void)setIconHeightConstraint:(id)arg1;
- (id)topPaddingConstraint;
- (void)setTopPaddingConstraint:(id)arg1;
- (id)bottomPaddingConstraint;
- (void)setBottomPaddingConstraint:(id)arg1;
- (id)leadingPaddingConstraint;
- (void)setLeadingPaddingConstraint:(id)arg1;
- (id)trailingPaddingConstraint;
- (void)setTrailingPaddingConstraint:(id)arg1;
- (double)scaleFactor;
- (void)setScaleFactor:(double)arg1;
- (void).cxx_destruct;
@end
