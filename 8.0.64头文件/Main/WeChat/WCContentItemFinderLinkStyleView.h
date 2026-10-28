@interface WCContentItemFinderLinkStyleView : WCContentItemBaseView
{
    id <WCContentItemFinderLinkStyleViewModelProtocol> _viewModel; // +0x38
    MMWebImageView * _iconImageView; // +0x40
    UILabel * _titleLabel; // +0x48
    UILabel * _descLabel; // +0x50
}
+ (double)heightForMedia:(id)arg1 showDetail:(BOOL)arg2;
+ (double)_edgeMargin;
+ (double)_iconLength;
- (id)initWithViewModel:(id)arg1;
- (void)_setupUI;
- (void)_setupLayout;
- (void)throwUrlMessage;
- (void)onLongTouch;
- (void)_onTapFavoritesButton;
- (id)iconImageView;
- (id)titleLabel;
- (id)descLabel;
- (double)_elementMargin;
- (double)_elementVerticalMargin;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void).cxx_destruct;
@end
