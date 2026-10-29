@interface CBTSelectableMenuItemView : UIControl
{
    NSString * _title; // +0x8
    UIImage * _iconImage; // +0x10
    double _cornerRadius; // +0x18
    MMImageView * _iconImageView; // +0x20
    MMUILabel * _titleLabel; // +0x28
}
+ (double)estimatedHeight;
+ (double)widthForTitle:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setTitle:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (id)title;
- (id)iconImage;
- (double)cornerRadius;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
