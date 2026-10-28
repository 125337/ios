@interface KidsWatchSwitchCardView : UIView <KidsWatchSwitchCellViewDelegate>
{
    double _cornerRadius; // +0x8
    NSString * _title; // +0x10
    NSString * _userName; // +0x18
    NSArray * _items; // +0x20
    unsigned long long _selectedIndex; // +0x28
    id /* block */ _selectCallback; // +0x30
    MMHeadImageView * _headImageView; // +0x38
    MMUILabel * _titleLabel; // +0x40
    NSMutableArray * _cellViews; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (double)updateSizeAndCalculateHeightFromFrame:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserName:(id)arg1;
- (void)setItems:(id)arg1;
- (void)onTapCellView:(id)arg1;
- (double)cornerRadius;
- (id)title;
- (id)userName;
- (id)items;
- (unsigned long long)selectedIndex;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (id /* block */)selectCallback;
- (void)setSelectCallback:(id /* block */)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)cellViews;
- (void)setCellViews:(id)arg1;
- (void).cxx_destruct;
@end
