@interface MMFinderLiveShopShelfSubPageHeaderView : UIView
{
    id <MMFinderLiveShopShelfSubPageHeaderViewDelegate> _delegate; // +0x8
    NSString * _title; // +0x10
    NSString * _subtitle; // +0x18
    MMUIButton * _closeButton; // +0x20
    MMUILabel * _titleLabel; // +0x28
    MMUILabel * _subtitleLabel; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)initView;
- (void)setTitle:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)onClickLeftButton:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)title;
- (id)subtitle;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
