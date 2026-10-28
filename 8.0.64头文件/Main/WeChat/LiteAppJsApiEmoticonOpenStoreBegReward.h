@interface LiteAppJsApiEmoticonOpenStoreBegReward : LiteAppJsApi <IStoreEmotionRewardExt>
{
    BOOL _didOpenBegVC; // +0x20
    int _extranceScene; // +0x24
    NSString * _pid; // +0x28
    EmoticonStoreItem * _storeItem; // +0x30
    EmotionRewardResponseInfo * _rewardInfo; // +0x38
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
- (int)extranceScene;
- (void)setExtranceScene:(int)arg1;
- (id)rewardInfo;
- (void)setRewardInfo:(id)arg1;
- (BOOL)didOpenBegVC;
- (void)setDidOpenBegVC:(BOOL)arg1;
- (void).cxx_destruct;
@end
