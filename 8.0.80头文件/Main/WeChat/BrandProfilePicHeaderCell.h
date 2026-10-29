@interface BrandProfilePicHeaderCell : BrandProfileMsgBaseCell
{
    MMUILabel * _titleLabel; // +0x8
    UIButton * _jumpToAllButton; // +0x10
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initSubviews;
- (void)onShowAllTapped;
- (void)layoutSubviews;
- (void)onUpdateViewModel;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)jumpToAllButton;
- (void)setJumpToAllButton:(id)arg1;
- (void).cxx_destruct;
@end
