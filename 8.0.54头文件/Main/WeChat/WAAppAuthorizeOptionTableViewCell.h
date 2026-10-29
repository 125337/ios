@interface WAAppAuthorizeOptionTableViewCell : UITableViewCell
{
    UILabel * _titleLabel; // +0x8
    UIImageView * _toggleImageView; // +0x10
    UIView * _bottomLineView; // +0x18
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)toggle;
- (void)unToggle;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)toggleImageView;
- (void)setToggleImageView:(id)arg1;
- (id)bottomLineView;
- (void)setBottomLineView:(id)arg1;
- (void).cxx_destruct;
@end

