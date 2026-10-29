@interface QMCPOIItemCardView : UIView <QMCScalable>
{
    BOOL _selected; // +0x8
    id /* block */ _onSelectTap; // +0x10
    id /* block */ _onButtonTap; // +0x18
    UIStackView * _leftStack; // +0x20
    UIStackView * _titleRow; // +0x28
    UILabel * _titleLabel; // +0x30
    UIImageView * _titleChevronView; // +0x38
    UIStackView * _subtitleRow; // +0x40
    UILabel * _subtitleLeadingLabel; // +0x48
    UIView * _subtitleDivider; // +0x50
    UILabel * _subtitleTrailingLabel; // +0x58
    QMCPOITagRowView * _tagRow; // +0x60
    UIStackView * _actionsRow; // +0x68
    NSMutableArray * _dynamicButtons; // +0x70
    NSMutableArray * _dynamicButtonWidthConstraints; // +0x78
    NSMutableArray * _dynamicButtonHeightConstraints; // +0x80
    NSArray * _currentButtonItems; // +0x88
    NSLayoutConstraint * _widthConstraint; // +0x90
    UIControl * _infoTapControl; // +0x98
    double _scaleFactor; // +0xa0
    NSLayoutConstraint * _chevronWidthConstraint; // +0xa8
    NSLayoutConstraint * _chevronHeightConstraint; // +0xb0
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setupSubviews;
- (void)_clearDynamicActionButtonsFromRow;
- (void)configureWithTitle:(id)arg1 subtitleLeading:(id)arg2 subtitleTrailing:(id)arg3 tags:(id)arg4 fullWidth:(BOOL)arg5 buttons:(id)arg6;
- (void)_dynamicButtonTapped:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)_selectTapped;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setTitleChevronImage:(id)arg1;
- (void)disableInternalWidthConstraint;
- (void)setTagIconImage:(id)arg1 atIndex:(long long)arg2;
- (void)_applyShadow;
- (void)layoutSubviews;
- (id)_makeSubtitleLabel;
- (id)_cardBgColor;
- (void)traitCollectionDidChange:(id)arg1;
- (id)_dividerColor;
- (void)qmc_applyScale:(double)arg1;
- (BOOL)selected;
- (id /* block */)onSelectTap;
- (void)setOnSelectTap:(id /* block */)arg1;
- (id /* block */)onButtonTap;
- (void)setOnButtonTap:(id /* block */)arg1;
- (id)leftStack;
- (void)setLeftStack:(id)arg1;
- (id)titleRow;
- (void)setTitleRow:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)titleChevronView;
- (void)setTitleChevronView:(id)arg1;
- (id)subtitleRow;
- (void)setSubtitleRow:(id)arg1;
- (id)subtitleLeadingLabel;
- (void)setSubtitleLeadingLabel:(id)arg1;
- (id)subtitleDivider;
- (void)setSubtitleDivider:(id)arg1;
- (id)subtitleTrailingLabel;
- (void)setSubtitleTrailingLabel:(id)arg1;
- (id)tagRow;
- (void)setTagRow:(id)arg1;
- (id)actionsRow;
- (void)setActionsRow:(id)arg1;
- (id)dynamicButtons;
- (void)setDynamicButtons:(id)arg1;
- (id)dynamicButtonWidthConstraints;
- (void)setDynamicButtonWidthConstraints:(id)arg1;
- (id)dynamicButtonHeightConstraints;
- (void)setDynamicButtonHeightConstraints:(id)arg1;
- (id)currentButtonItems;
- (void)setCurrentButtonItems:(id)arg1;
- (id)widthConstraint;
- (void)setWidthConstraint:(id)arg1;
- (id)infoTapControl;
- (void)setInfoTapControl:(id)arg1;
- (double)scaleFactor;
- (void)setScaleFactor:(double)arg1;
- (id)chevronWidthConstraint;
- (void)setChevronWidthConstraint:(id)arg1;
- (id)chevronHeightConstraint;
- (void)setChevronHeightConstraint:(id)arg1;
- (void).cxx_destruct;
@end
