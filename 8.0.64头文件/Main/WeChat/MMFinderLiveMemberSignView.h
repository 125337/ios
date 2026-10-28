@interface MMFinderLiveMemberSignView : UIView
{
    UIView * _bgView; // +0x8
    UIImageView * _iconImgView; // +0x10
    UILabel * _signLabel; // +0x18
    long long _style; // +0x20
    FinderLiveBadgeInfo * _badgeInfo; // +0x28
}
+ (CGSize)signSizeWithBadgeInfo:(id)arg1;
- (id)initWithUIStyle:(long long)arg1 badgeInfo:(id)arg2;
- (void)updateWithBadgeInfo:(id)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateColor;
- (id)bgView;
- (id)iconImgView;
- (id)signLabel;
- (id)accessibilityLabel;
- (void)setBgView:(id)arg1;
- (void)setIconImgView:(id)arg1;
- (void)setSignLabel:(id)arg1;
- (long long)style;
- (void)setStyle:(long long)arg1;
- (id)badgeInfo;
- (void)setBadgeInfo:(id)arg1;
- (void).cxx_destruct;
@end
