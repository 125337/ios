@interface WCCanvasComponentSocialInfo : MMObject <NSCoding, NSCopying>
{
    NSString * _titlePrefix; // +0x8
    NSString * _titleInfix; // +0x10
    NSString * _titleSuffix; // +0x18
    NSString * _desc; // +0x20
    NSString * _backgroundImgWithFriends; // +0x28
    NSString * _backgroundImgCommon; // +0x30
    NSString * _avatarBackgroundImg; // +0x38
    NSString * _avatarDesc; // +0x40
    NSString * _adAvatarImg; // +0x48
    NSArray * _friendAvatarImgs; // +0x50
    NSArray * _commonAvatarImgs; // +0x58
    NSString * _friendAvatarDescWithFriends; // +0x60
    NSString * _friendAvatarDescCommon; // +0x68
    NSString * _cardDynamicInfo; // +0x70
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)titlePrefix;
- (void)setTitlePrefix:(id)arg1;
- (id)titleInfix;
- (void)setTitleInfix:(id)arg1;
- (id)titleSuffix;
- (void)setTitleSuffix:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)backgroundImgWithFriends;
- (void)setBackgroundImgWithFriends:(id)arg1;
- (id)backgroundImgCommon;
- (void)setBackgroundImgCommon:(id)arg1;
- (id)avatarBackgroundImg;
- (void)setAvatarBackgroundImg:(id)arg1;
- (id)avatarDesc;
- (void)setAvatarDesc:(id)arg1;
- (id)adAvatarImg;
- (void)setAdAvatarImg:(id)arg1;
- (id)friendAvatarImgs;
- (void)setFriendAvatarImgs:(id)arg1;
- (id)commonAvatarImgs;
- (void)setCommonAvatarImgs:(id)arg1;
- (id)friendAvatarDescWithFriends;
- (void)setFriendAvatarDescWithFriends:(id)arg1;
- (id)friendAvatarDescCommon;
- (void)setFriendAvatarDescCommon:(id)arg1;
- (id)cardDynamicInfo;
- (void)setCardDynamicInfo:(id)arg1;
- (void).cxx_destruct;
@end
