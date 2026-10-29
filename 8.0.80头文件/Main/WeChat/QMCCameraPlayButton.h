@interface QMCCameraPlayButton : UIControl <QMCScalable>
{
    id /* block */ _tapHandler; // +0x8
    UIImageView * _iconView; // +0x10
    double _scaleFactor; // +0x18
    NSLayoutConstraint * _widthConstraint; // +0x20
    NSLayoutConstraint * _heightConstraint; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setupUI;
- (void)_didTap;
- (void)traitCollectionDidChange:(id)arg1;
- (id)_bgColor;
- (id)_iconColor;
- (void)qmc_applyScale:(double)arg1;
- (id /* block */)tapHandler;
- (void)setTapHandler:(id /* block */)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (double)scaleFactor;
- (void)setScaleFactor:(double)arg1;
- (id)widthConstraint;
- (void)setWidthConstraint:(id)arg1;
- (id)heightConstraint;
- (void)setHeightConstraint:(id)arg1;
- (void).cxx_destruct;
@end
