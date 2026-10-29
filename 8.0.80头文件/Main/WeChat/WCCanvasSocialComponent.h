@interface WCCanvasSocialComponent : WCCanvasComponent
{
    UILabel * _titleLabel; // +0x8
    UILabel * _descLabel; // +0x10
    UIView * _avatarView; // +0x18
    WCAdURLImageView * _backgroundImage; // +0x20
    MMHeadImageView * _selfHeadImage; // +0x28
    WCAdURLImageView * _avatarBackgroundImg; // +0x30
    UILabel * _avatarDescLabel; // +0x38
    WCCanvasSocialComponentFriendAvatarView * _friendAvatarView; // +0x40
    UILabel * _friendAvatarDescLabel; // +0x48
    WCCanvasComponentSocialInfo * _socialInfo; // +0x50
    NSMutableArray * _friendUsernames; // +0x58
}
+ (CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)layoutSubviews;
- (void)initViews;
- (id)titleLabel;
- (id)descLabel;
- (id)avatarView;
- (id)backgroundImage;
- (id)selfHeadImage;
- (id)avatarBackgroundImg;
- (id)avatarDescLabel;
- (id)friendAvatarDescLabel;
- (id)friendAvatarView;
- (void)parseDynamicInfo;
- (void)parseFriendUsernames;
- (void)updateViews;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (id)generateLabelWithFont:(id)arg1 textColor:(id)arg2;
- (void)updateTitleLabelWithPrefix:(id)arg1 infix:(id)arg2 suffix:(id)arg3;
- (void)updateFriendAvatarDesc;
- (void)updateSizeForLabel:(id)arg1;
- (void)reportForUIType;
- (BOOL)isFriendCard;
- (void)setTitleLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setAvatarView:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)setSelfHeadImage:(id)arg1;
- (void)setAvatarBackgroundImg:(id)arg1;
- (void)setAvatarDescLabel:(id)arg1;
- (void)setFriendAvatarView:(id)arg1;
- (void)setFriendAvatarDescLabel:(id)arg1;
- (id)socialInfo;
- (void)setSocialInfo:(id)arg1;
- (id)friendUsernames;
- (void)setFriendUsernames:(id)arg1;
- (void).cxx_destruct;
@end
