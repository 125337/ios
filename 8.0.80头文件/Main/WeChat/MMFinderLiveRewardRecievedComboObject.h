@interface MMFinderLiveRewardRecievedComboObject : NSObject
{
    BOOL _isTopestPriority; // +0x8
    unsigned int _closeWaitBeginTime; // +0xc
    unsigned int _lastDisplayGiftCount; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    NSString * _rewardUserName; // +0x20
    NSString * _rewardComboId; // +0x28
    NSString * _rewardProductId; // +0x30
    MMFinderLiveRewardGiftItem * _giftItem; // +0x38
    NSMutableArray * _rewardRecievedAppMsgInfoQueue; // +0x40
}
- (id)initWithLiveTaskId:(id)arg1 firstRewardAppMsgInfo:(id)arg2;
- (void)addRewardAppMsgInfo:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)rewardUserName;
- (void)setRewardUserName:(id)arg1;
- (id)rewardComboId;
- (void)setRewardComboId:(id)arg1;
- (id)rewardProductId;
- (void)setRewardProductId:(id)arg1;
- (id)giftItem;
- (void)setGiftItem:(id)arg1;
- (id)rewardRecievedAppMsgInfoQueue;
- (void)setRewardRecievedAppMsgInfoQueue:(id)arg1;
- (unsigned int)closeWaitBeginTime;
- (void)setCloseWaitBeginTime:(unsigned int)arg1;
- (unsigned int)lastDisplayGiftCount;
- (void)setLastDisplayGiftCount:(unsigned int)arg1;
- (BOOL)isTopestPriority;
- (void)setIsTopestPriority:(BOOL)arg1;
- (void).cxx_destruct;
@end
