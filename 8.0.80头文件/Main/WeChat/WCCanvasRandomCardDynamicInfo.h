@interface WCCanvasRandomCardDynamicInfo : MMObject <NSCoding>
{
    int _cardType; // +0x8
    int _subCardType; // +0xc
    NSString * _titlePrefix; // +0x10
    NSString * _titleInfix; // +0x18
    NSString * _titleSuffix; // +0x20
    NSString * _avatarDesc; // +0x28
    NSArray * _friendAvatarImgs; // +0x30
    NSArray * _commonAvatarImgs; // +0x38
    NSString * _friendAvatarDescWithFriends; // +0x40
    NSString * _friendAvatarDescCommon; // +0x48
    NSString * _giveCardId; // +0x50
    NSString * _receiveUrl; // +0x58
}
+ (id)mergeSocialInfo:(id)arg1 withCardDynamicInfo:(id)arg2;
+ (id)mergeRedEnvelopInfo:(id)arg1 withCardDynamicInfo:(id)arg2;
+ (id)generateCardDynamicInfoFromGiveHBCardInfo:(id)arg1;
+ (BOOL)isARedEnvelopCardWithCardDynamicInfo:(id)arg1 asSubCardType:(int)arg2;
+ (BOOL)isARedEnvelopGiveCardWithCardDynamicInfo:(id)arg1;
+ (BOOL)isARedEnvelopReceiveCardWithCardDynamicInfo:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)cardType;
- (void)setCardType:(int)arg1;
- (id)titlePrefix;
- (void)setTitlePrefix:(id)arg1;
- (id)titleInfix;
- (void)setTitleInfix:(id)arg1;
- (id)titleSuffix;
- (void)setTitleSuffix:(id)arg1;
- (id)avatarDesc;
- (void)setAvatarDesc:(id)arg1;
- (id)friendAvatarImgs;
- (void)setFriendAvatarImgs:(id)arg1;
- (id)commonAvatarImgs;
- (void)setCommonAvatarImgs:(id)arg1;
- (id)friendAvatarDescWithFriends;
- (void)setFriendAvatarDescWithFriends:(id)arg1;
- (id)friendAvatarDescCommon;
- (void)setFriendAvatarDescCommon:(id)arg1;
- (id)giveCardId;
- (void)setGiveCardId:(id)arg1;
- (int)subCardType;
- (void)setSubCardType:(int)arg1;
- (id)receiveUrl;
- (void)setReceiveUrl:(id)arg1;
- (void).cxx_destruct;
@end
