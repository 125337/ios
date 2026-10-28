@interface WCFinderProfileRedPacketBanner : UIView
{
    NSString * _linkUrl; // +0x8
    UILabel * _titleLabel; // +0x10
    UIImageView * _iconView; // +0x18
    UIImageView * _tailCoverView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)linkUrl;
- (void)setLinkUrl:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)tailCoverView;
- (void)setTailCoverView:(id)arg1;
- (void).cxx_destruct;
@end
