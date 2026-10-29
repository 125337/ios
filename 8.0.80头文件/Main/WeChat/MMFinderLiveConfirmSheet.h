@interface MMFinderLiveConfirmSheet : MMPageSheetBaseView
{
    NSString * _pageTitle; // +0x8
    MMFinderLiveConfirmSheetItem * _primaryButton; // +0x10
    MMFinderLiveConfirmSheetItem * _secondaryButton; // +0x18
    MMFinderLiveConfirmSheetItem * _link; // +0x20
    UIView * _contentView; // +0x28
    MMUILabel * _titleLabel; // +0x30
    UIButton * _primaryButtonView; // +0x38
    UIButton * _secondaryButtonView; // +0x40
    UIButton * _linkButtonView; // +0x48
    double _lastAppliedDetailHeight; // +0x50
    double _lastLayoutWidth; // +0x58
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setPageTitle:(id)arg1;
- (void)setPrimaryButton:(id)arg1;
- (void)setSecondaryButton:(id)arg1;
- (void)setLink:(id)arg1;
- (void)applyItem:(id)arg1 toButton:(id)arg2;
- (void)layoutSubviews;
- (void)setupPageSheetConfig;
- (void)createUI;
- (void)layoutUI;
- (double)contentViewHeight;
- (void)onPrimaryButtonClicked;
- (void)onSecondaryButtonClicked;
- (void)onLinkButtonClicked;
- (id)contentView;
- (id)titleLabel;
- (id)primaryButtonView;
- (id)secondaryButtonView;
- (id)linkButtonView;
- (id)pageTitle;
- (id)primaryButton;
- (id)secondaryButton;
- (id)link;
- (void)setContentView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setPrimaryButtonView:(id)arg1;
- (void)setSecondaryButtonView:(id)arg1;
- (void)setLinkButtonView:(id)arg1;
- (double)lastAppliedDetailHeight;
- (void)setLastAppliedDetailHeight:(double)arg1;
- (double)lastLayoutWidth;
- (void)setLastLayoutWidth:(double)arg1;
- (void).cxx_destruct;
@end
