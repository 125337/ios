@interface MMFinderLiveRewardAppMsgInfo : NSObject
{
    BOOL _isTopestPriority; // +0x8
    BOOL _showAttackEffectUpgradeSubNotification; // +0x9
    unsigned int _rewardProductCount; // +0xc
    unsigned int _rewardAmountInWecoin; // +0x10
    unsigned int _comboProductCount; // +0x14
    unsigned int _extraPKValue; // +0x18
    unsigned long long _appMsgSeq; // +0x20
    unsigned long long _type; // +0x28
    NSString * _rewardUserName; // +0x30
    NSString * _rewardRecipientUserName; // +0x38
    NSString * _rewardProductId; // +0x40
    WCFinderContact * _fromContact; // +0x48
    WCFinderContact * _toContact; // +0x50
    NSString * _msgContent; // +0x58
    NSArray * _fromUserBadgeInfos; // +0x60
    MMFinderLiveRewardGiftItem * _giftItem; // +0x68
    NSString * _comboId; // +0x70
    FinderLiveRewardGiftExtInfo * _rewardGiftExtInfo; // +0x78
    FinderLiveGestureInfo * _gestureInfo; // +0x80
    NSMutableArray * _giftRandomItemList; // +0x88
    double _taskedBonusMultiplier; // +0x90
    NSArray * _attackGiftItemList; // +0x98
    NSMutableSet * _downloadedAttackGiftItemAnimationIds; // +0xa0
    NSArray * _pkValueExtraItem; // +0xa8
}
- (id)initWithRewardAppMsgInfo:(id)arg1 appMsgSeq:(unsigned long long)arg2 fromFinderLiveContact:(id)arg3 toFinderLiveContact:(id)arg4;
- (id)initWithFromContact:(id)arg1 toContact:(id)arg2 appMsgSeq:(unsigned long long)arg3 msgContent:(id)arg4 rewardProductId:(id)arg5 giftItem:(id)arg6 rewardProductCount:(unsigned int)arg7 rewardAmountInWecoin:(unsigned int)arg8 comboProductCount:(unsigned int)arg9 comboId:(id)arg10 fromUserBadgeInfos:(id)arg11 rewardGiftExtInfo:(id)arg12 gestureInfo:(id)arg13 giftRandomItemList:(id)arg14 type:(unsigned long long)arg15 taskedBonusMultiplier:(double)arg16 attackGiftItemList:(id)arg17;
- (id)initWithNotifyBannerRewardAppMsgInfo:(id)arg1 appMsgSeq:(unsigned long long)arg2 toContact:(id)arg3;
- (void)copyFromRewardAppMsgInfo:(id)arg1;
- (id)genFakeComboIdForFreeGift;
- (void)replaceGiftItem:(id)arg1;
- (void)updateGiftRandomItemList:(id)arg1;
- (void)updatePKValueExtraItem:(id)arg1;
- (void)updateGiftAttackItemList:(id)arg1;
- (BOOL)isSentByMe;
- (BOOL)isSentToMe;
- (BOOL)isBatchReward;
- (unsigned int)rewardGiftDropBatchSize;
- (BOOL)isLocalNotifyBanner;
- (BOOL)isGiftWallRewardMsg;
- (id)attackFinderUsernameList;
- (id)attackGiftItemAnimationIdSet;
- (id)downloadedAttackGiftItemAnimationIds;
- (BOOL)isAllResourceDownloaded;
- (BOOL)showAttackEffectUpgradeSubNotification;
- (void)setAttackGiftItemList:(id)arg1;
- (id)description;
- (unsigned long long)appMsgSeq;
- (void)setAppMsgSeq:(unsigned long long)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)rewardUserName;
- (void)setRewardUserName:(id)arg1;
- (id)rewardRecipientUserName;
- (void)setRewardRecipientUserName:(id)arg1;
- (id)rewardProductId;
- (void)setRewardProductId:(id)arg1;
- (id)fromContact;
- (void)setFromContact:(id)arg1;
- (id)toContact;
- (void)setToContact:(id)arg1;
- (id)msgContent;
- (void)setMsgContent:(id)arg1;
- (id)fromUserBadgeInfos;
- (void)setFromUserBadgeInfos:(id)arg1;
- (id)giftItem;
- (void)setGiftItem:(id)arg1;
- (unsigned int)rewardProductCount;
- (void)setRewardProductCount:(unsigned int)arg1;
- (unsigned int)rewardAmountInWecoin;
- (void)setRewardAmountInWecoin:(unsigned int)arg1;
- (unsigned int)comboProductCount;
- (void)setComboProductCount:(unsigned int)arg1;
- (id)comboId;
- (void)setComboId:(id)arg1;
- (id)rewardGiftExtInfo;
- (void)setRewardGiftExtInfo:(id)arg1;
- (id)gestureInfo;
- (void)setGestureInfo:(id)arg1;
- (id)giftRandomItemList;
- (void)setGiftRandomItemList:(id)arg1;
- (BOOL)isTopestPriority;
- (void)setIsTopestPriority:(BOOL)arg1;
- (double)taskedBonusMultiplier;
- (void)setTaskedBonusMultiplier:(double)arg1;
- (id)attackGiftItemList;
- (void)setDownloadedAttackGiftItemAnimationIds:(id)arg1;
- (void)setShowAttackEffectUpgradeSubNotification:(BOOL)arg1;
- (unsigned int)extraPKValue;
- (void)setExtraPKValue:(unsigned int)arg1;
- (id)pkValueExtraItem;
- (void)setPkValueExtraItem:(id)arg1;
- (void).cxx_destruct;
@end

