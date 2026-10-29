@interface WCFinderPersonalCenterAvatarCellView : UICollectionViewCell <WCFinderPersonalContactModelExt, WCFinderPersonalCenterCellProtocol>
{
    WCFinderPersonalContactModel * _model; // +0x8
    WCFinderHeadImageView * _avatarImageView; // +0x10
    UILabel * _nicknameLabel; // +0x18
    WCFinderAuthInfoIconView * _authInfoIconView; // +0x20
    UILabel * _fansCountLabel; // +0x28
}
+ (double)cellHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)update:(id)arg1;
- (void)updateContact;
- (void)updateFansCount;
- (void)setModel:(id)arg1;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (void)onContactDidUpdate;
- (void)onUserMessageDidUpdate;
- (id)model;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg1;
- (id)authInfoIconView;
- (void)setAuthInfoIconView:(id)arg1;
- (id)fansCountLabel;
- (void)setFansCountLabel:(id)arg1;
- (void).cxx_destruct;
@end
