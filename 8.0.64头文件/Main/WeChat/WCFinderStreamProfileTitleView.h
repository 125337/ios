@interface WCFinderStreamProfileTitleView : MMTitleView
{
    UILabel * _nickNameLabel; // +0x8
    UIImageView * _arrowIconView; // +0x10
    WCFinderHeadImageView * _avatarImageView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateTextColor:(BOOL)arg1;
- (void)updateWithContact:(id)arg1;
- (void)layoutSubviews;
- (void)updateLayout;
- (void)showArrowIcon;
- (void)adjustNickNameLabelWidthDelta:(double)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)arrowIconView;
- (void)setArrowIconView:(id)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (void).cxx_destruct;
@end
