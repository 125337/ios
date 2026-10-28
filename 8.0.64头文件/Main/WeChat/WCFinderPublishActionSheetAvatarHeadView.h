@interface WCFinderPublishActionSheetAvatarHeadView : MMUIView
{
    UILabel * _headTips; // +0x8
    WCFinderHeadImageView * _avatarImageView; // +0x10
    UILabel * _nicknameLabel; // +0x18
    UIView * _contactContainerView; // +0x20
    WCFinderContact * _contact; // +0x28
    MMUIButton * _brandLabel; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setContact:(id)arg1;
- (id)headTips;
- (void)setHeadTips:(id)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg1;
- (id)contactContainerView;
- (void)setContactContainerView:(id)arg1;
- (id)contact;
- (id)brandLabel;
- (void)setBrandLabel:(id)arg1;
- (void).cxx_destruct;
@end
