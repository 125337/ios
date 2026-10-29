@interface QMCActionButton : UIControl <QMCScalable>
{
    UIImageView * _iconView; // +0x8
    UILabel * _actionLabel; // +0x10
    double _scaleFactor; // +0x18
    NSLayoutConstraint * _iconWidthConstraint; // +0x20
    NSLayoutConstraint * _iconHeightConstraint; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (CGSize)intrinsicContentSize;
- (void)setHighlighted:(BOOL)arg1;
- (void)configureWithImage:(id)arg1 label:(id)arg2;
- (void)qmc_applyScale:(double)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)actionLabel;
- (void)setActionLabel:(id)arg1;
- (double)scaleFactor;
- (void)setScaleFactor:(double)arg1;
- (id)iconWidthConstraint;
- (void)setIconWidthConstraint:(id)arg1;
- (id)iconHeightConstraint;
- (void)setIconHeightConstraint:(id)arg1;
- (void).cxx_destruct;
@end
