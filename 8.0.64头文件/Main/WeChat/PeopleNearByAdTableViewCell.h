@interface PeopleNearByAdTableViewCell : MMTableViewCell
{
    id <PeopleNearByAdTableViewCellDelegate> _delegate; // +0x8
    UIImageView * _headerImageView; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _descLabel; // +0x20
    MMUIButton * _closeButton; // +0x28
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateWithLbsAdInfo:(id)arg1 withHeaderView:(id)arg2;
- (void)closeButtonPressed;
- (void)layoutSubviews;
- (void)relayout;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)headerImageView;
- (void)setHeaderImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (void).cxx_destruct;
@end
