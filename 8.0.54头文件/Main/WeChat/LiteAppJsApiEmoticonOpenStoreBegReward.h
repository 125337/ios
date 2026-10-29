@interface LiteAppJsApiEmoticonOpenStoreBegReward : LiteAppJsApi <IStoreEmotionRewardExt>
{
    BOOL _didOpenBegVC; // +0x20
    NSString * _pid; // +0x28
    EmoticonStoreItem * _storeItem; // +0x30
    long long _extranceScene; // +0x38
    EmotionRewardResponseInfo * _rewardInfo; // +0x40
}
- (void)dealloc;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (void)openBegVC;
- (void)endWithOK;
- (void)onGetEmotionRewardFinishedWithPid:(id)arg1 RewardInfo:(id)arg2;
- (id)getViewController;
- (id)pid;
- (void)setPid:(id)arg1;
- (id)storeItem;
- (void)setStoreItem:(id)arg1;
- (long long)extranceScene;
- (void)setExtranceScene:(long long)arg1;
- (id)rewardInfo;
- (void)setRewardInfo:(id)arg1;
- (BOOL)didOpenBegVC;
- (void)setDidOpenBegVC:(BOOL)arg1;
- (void).cxx_destruct;
@end

