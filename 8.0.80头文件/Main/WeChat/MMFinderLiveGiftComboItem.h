@interface MMFinderLiveGiftComboItem : NSObject
{
    BOOL _isBatchFinished; // +0x8
    BOOL _manualDelete; // +0x9
    NSString * _comboId; // +0x10
    MMFinderLiveRewardAppMsgInfo * _rewardAppMsgInfo; // +0x18
    MMFinderLiveGiftNotificationItem * _notificationItem; // +0x20
    MMFinderLiveGiftPlayItem * _playItem; // +0x28
    long long _displayingSeconds; // +0x30
    long long _totalPlayCount; // +0x38
    long long _remainsPlayCount; // +0x40
}
- (id)comboId;
- (void)setComboId:(id)arg1;
- (id)rewardAppMsgInfo;
- (void)setRewardAppMsgInfo:(id)arg1;
- (id)notificationItem;
- (void)setNotificationItem:(id)arg1;
- (id)playItem;
- (void)setPlayItem:(id)arg1;
- (BOOL)isBatchFinished;
- (void)setIsBatchFinished:(BOOL)arg1;
- (long long)displayingSeconds;
- (void)setDisplayingSeconds:(long long)arg1;
- (long long)totalPlayCount;
- (void)setTotalPlayCount:(long long)arg1;
- (long long)remainsPlayCount;
- (void)setRemainsPlayCount:(long long)arg1;
- (BOOL)manualDelete;
- (void)setManualDelete:(BOOL)arg1;
- (void).cxx_destruct;
@end
