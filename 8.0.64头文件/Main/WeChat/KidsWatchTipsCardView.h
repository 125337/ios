@interface KidsWatchTipsCardView : UIView
{
    double _cornerRadius; // +0x8
    NSString * _svgIconName; // +0x10
    UIColor * _iconColor; // +0x18
    NSString * _title; // +0x20
    NSString * _content; // +0x28
    NSString * _headImageURL; // +0x30
    NSString * _nickName; // +0x38
    UIImageView * _iconView; // +0x40
    MMUILabel * _titleLabel; // +0x48
    MMUILabel * _contentLabel; // +0x50
    MMHeadImageView * _headImageView; // +0x58
    MMUILabel * _nickNameLabel; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (double)updateSizeAndCalculateHeightFromFrame:(CGRect)arg1;
- (void)updateIcon;
- (void)setCornerRadius:(double)arg1;
- (void)setSvgIconName:(id)arg1;
- (void)setIconColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setHeadImageURL:(id)arg1;
- (void)setNickName:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)headImageView;
- (id)nickNameLabel;
- (double)cornerRadius;
- (id)svgIconName;
- (id)iconColor;
- (id)title;
- (id)content;
- (id)headImageURL;
- (id)nickName;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (void)setHeadImageView:(id)arg1;
- (void)setNickNameLabel:(id)arg1;
- (void).cxx_destruct;
@end
