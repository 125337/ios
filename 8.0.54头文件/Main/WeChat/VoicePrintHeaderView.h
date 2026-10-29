@interface VoicePrintHeaderView : UIView
{
    UIImage * _iconImage; // +0x8
    NSString * _title; // +0x10
    UIImageView * _iconImageView; // +0x18
    MMUILabel * _titleLabel; // +0x20
    CGSize _iconSize; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)setFrame:(CGRect)arg1;
- (void)setIconImage:(id)arg1;
- (void)setIconSize:(CGSize)arg1;
- (void)setTitle:(id)arg1;
- (void)updateTitleSize;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)iconImage;
- (CGSize)iconSize;
- (id)title;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end

