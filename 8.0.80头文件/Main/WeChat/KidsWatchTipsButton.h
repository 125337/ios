@interface KidsWatchTipsButton : UIControl
{
    double _cornerRadius; // +0x8
    NSString * _svgIconName; // +0x10
    UIColor * _iconColor; // +0x18
    NSString * _title; // +0x20
    NSString * _content; // +0x28
    UIImageView * _iconView; // +0x30
    MMUILabel * _titleLabel; // +0x38
    MMUILabel * _contentLabel; // +0x40
    UIImageView * _accessoryView; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (double)updateSizeAndCalculateHeightFromFrame:(CGRect)arg1;
- (void)updateIcon;
- (void)updateAccessibility;
- (void)setCornerRadius:(double)arg1;
- (void)setSvgIconName:(id)arg1;
- (void)setIconColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (double)cornerRadius;
- (id)svgIconName;
- (id)iconColor;
- (id)title;
- (id)content;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)accessoryView;
- (void)setAccessoryView:(id)arg1;
- (void).cxx_destruct;
@end
