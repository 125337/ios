@interface MMFinderLiveGiftNotificationItem : NSObject
{
    BOOL _sentByMe; // +0x8
    BOOL _isBatchReward; // +0x9
    unsigned int _giftCount; // +0xc
    MMFinderLiveRewardGiftItem * _giftItem; // +0x10
    NSString * _nickname; // +0x18
    NSString * _avatarUri; // +0x20
    NSArray * _badgeInfos; // +0x28
    NSString * _comboId; // +0x30
    MMFinderLiveRewardAppMsgInfo * _rewardAppMsgInfo; // +0x38
    MMFinderLiveGiftNotificationLayout * _notificationLayout; // +0x40
}
- (id)initWithGiftItem:(id)arg1 rewardAppMsgInfo:(id)arg2;
- (unsigned int)globalBadgeRank;
- (unsigned int)fansGroupRank;
- (id)fansGroupName;
- (BOOL)hasFullPagAnimation;
- (id)giftItem;
- (void)setGiftItem:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)avatarUri;
- (void)setAvatarUri:(id)arg1;
- (id)badgeInfos;
- (void)setBadgeInfos:(id)arg1;
- (unsigned int)giftCount;
- (void)setGiftCount:(unsigned int)arg1;
- (BOOL)sentByMe;
- (void)setSentByMe:(BOOL)arg1;
- (BOOL)isBatchReward;
- (void)setIsBatchReward:(BOOL)arg1;
- (id)comboId;
- (void)setComboId:(id)arg1;
- (id)rewardAppMsgInfo;
- (void)setRewardAppMsgInfo:(id)arg1;
- (id)notificationLayout;
- (void)setNotificationLayout:(id)arg1;
- (void).cxx_destruct;
@end
