@interface KidsWatchInfoCardView : UIView
{
    double _cornerRadius; // +0x8
    NSString * _title; // +0x10
    NSArray * _items; // +0x18
    MMUILabel * _titleLabel; // +0x20
    NSMutableArray * _cellViews; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (double)updateSizeAndCalculateHeightFromFrame:(CGRect)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setFrame:(CGRect)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setTitle:(id)arg1;
- (void)setItems:(id)arg1;
- (double)cornerRadius;
- (id)title;
- (id)items;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)cellViews;
- (void)setCellViews:(id)arg1;
- (void).cxx_destruct;
@end
