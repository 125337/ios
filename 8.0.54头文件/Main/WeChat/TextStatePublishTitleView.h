@interface TextStatePublishTitleView : UIView
{
    NSString * _title; // +0x8
    NSString * _subtitle; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _subtitleLabel; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)initLayout;
- (void)setTitle:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (id)title;
- (id)subtitle;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (void).cxx_destruct;
@end

