@interface WCSelectableMenuItemView : UIControl
{
    NSString * _title; // +0x8
    double _cornerRadius; // +0x10
    MMUILabel * _titleLabel; // +0x18
}
+ (double)estimatedHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setTitle:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setSelected:(BOOL)arg1;
- (id)title;
- (double)cornerRadius;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
