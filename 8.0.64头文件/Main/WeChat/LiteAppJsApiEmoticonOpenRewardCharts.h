@interface LiteAppJsApiEmoticonOpenRewardCharts : LiteAppJsApi
{
    BOOL _didOpenChartsVC; // +0x20
    NSString * _pid; // +0x28
    EmoticonStoreItem * _storeItem; // +0x30
    EmotionRewardResponseInfo * _rewardInfo; // +0x38
}
- (void)dealloc;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (void)openChartsVC;
- (void)endWithOK;
- (void)onGetEmotionRewardFinishedWithPid:(id)arg1 RewardInfo:(id)arg2;
- (id)getViewController;
- (id)pid;
- (void)setPid:(id)arg1;
- (id)storeItem;
- (void)setStoreItem:(id)arg1;
- (id)rewardInfo;
- (void)setRewardInfo:(id)arg1;
- (BOOL)didOpenChartsVC;
- (void)setDidOpenChartsVC:(BOOL)arg1;
- (void).cxx_destruct;
@end
