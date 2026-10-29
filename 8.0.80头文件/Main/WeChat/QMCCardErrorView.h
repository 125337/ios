@interface QMCCardErrorView : UIView <QMCScalable>
{
    id /* block */ _onRetryTap; // +0x8
    UIImageView * _iconView; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _subtitleLabel; // +0x20
    UIControl * _retryButton; // +0x28
    UILabel * _retryLabel; // +0x30
    NSLayoutConstraint * _iconWidthConstraint; // +0x38
    NSLayoutConstraint * _iconHeightConstraint; // +0x40
    NSLayoutConstraint * _buttonMinWidthConstraint; // +0x48
    NSLayoutConstraint * _buttonHPadConstraintLeading; // +0x50
    NSLayoutConstraint * _buttonHPadConstraintTrailing; // +0x58
    NSLayoutConstraint * _buttonVPadConstraintTop; // +0x60
    NSLayoutConstraint * _buttonVPadConstraintBottom; // +0x68
    double _scaleFactor; // +0x70
}
- (id)initWithFrame:(CGRect)arg1;
- (void)_buildSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_refreshIconImage;
- (void)_handleHighlightChanged;
- (void)_handleRetryTap;
- (void)qmc_applyScale:(double)arg1;
- (void)layoutSubviews;
- (id /* block */)onRetryTap;
- (void)setOnRetryTap:(id /* block */)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)retryButton;
- (void)setRetryButton:(id)arg1;
- (id)retryLabel;
- (void)setRetryLabel:(id)arg1;
- (id)iconWidthConstraint;
- (void)setIconWidthConstraint:(id)arg1;
- (id)iconHeightConstraint;
- (void)setIconHeightConstraint:(id)arg1;
- (id)buttonMinWidthConstraint;
- (void)setButtonMinWidthConstraint:(id)arg1;
- (id)buttonHPadConstraintLeading;
- (void)setButtonHPadConstraintLeading:(id)arg1;
- (id)buttonHPadConstraintTrailing;
- (void)setButtonHPadConstraintTrailing:(id)arg1;
- (id)buttonVPadConstraintTop;
- (void)setButtonVPadConstraintTop:(id)arg1;
- (id)buttonVPadConstraintBottom;
- (void)setButtonVPadConstraintBottom:(id)arg1;
- (double)scaleFactor;
- (void)setScaleFactor:(double)arg1;
- (void).cxx_destruct;
@end
