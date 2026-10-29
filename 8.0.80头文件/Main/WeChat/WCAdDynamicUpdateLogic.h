@interface WCAdDynamicUpdateLogic : MMObject <PBMessageObserverDelegate>
{
    id <WCAdDynamicUpdateLogicDelegate> _delegate; // +0x8
    id <WCLogicMgrDelegate> _wcLogicMgrDelegate; // +0x10
    NSMutableDictionary * _updateTimeDic; // +0x18
}
- (id)updateTimeDic;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)adDynamicUpdate:(id)arg1;
- (void)adDynamicUpdateWithDataList:(id)arg1 dataItem:(id)arg2 uxInfo:(id)arg3 needSpeedy:(BOOL)arg4;
- (void)resetDynamicUpdateIntervalForItem:(id)arg1;
- (void)resetDynamicUpdateIntervalForItem:(id)arg1 actionType:(unsigned int)arg2;
- (void)handleAdDynamicUpdateResponse:(id)arg1;
- (id)collectReqDataList:(id)arg1;
- (id)getWeAppLiveReqData:(id)arg1 ignoreInterval:(BOOL)arg2;
- (id)getFinderTopicReqData:(id)arg1 ignoreInterval:(BOOL)arg2;
- (id)getLikeNumberReqData:(id)arg1 ignoreInterval:(BOOL)arg2;
- (id)getFireworkCheerNumberReqData:(id)arg1 ignoreInterval:(BOOL)arg2;
- (id)getHighlightTagNumberReqData:(id)arg1 ignoreInterval:(BOOL)arg2;
- (id)getStateSettingBarNumberReqData:(id)arg1 ignoreInterval:(BOOL)arg2;
- (id)getHotDiscussedBarNumberReqData:(id)arg1 ignoreInterval:(BOOL)arg2;
- (id)getRandomPickCardInvolveInfoReqData:(id)arg1 ignoreInterval:(BOOL)arg2;
- (id)getFinderLiveProductInfoReqData:(id)arg1 ignoreInterval:(BOOL)arg2;
- (id)getRockPaperScissorsInfoReqData:(id)arg1 ignoreInterval:(BOOL)arg2;
- (id)getRandomSelectCardInfoReqData:(id)arg1 ignoreInterval:(BOOL)arg2;
- (id)getDynamicFeedUpdateInfoReqData:(id)arg1 ignoreInterval:(BOOL)arg2;
- (BOOL)handleWeAppLiveResponse:(id)arg1 dataItem:(id)arg2;
- (BOOL)handleFinderTopicResponse:(id)arg1 dataItem:(id)arg2;
- (BOOL)handleLikeNumberResponse:(id)arg1 dataItem:(id)arg2;
- (BOOL)handleFireworkCheerNumberResponse:(id)arg1 dataItem:(id)arg2;
- (BOOL)handleHighlightTagNumberResponse:(id)arg1 dataItem:(id)arg2;
- (BOOL)handleStateSettingBarNumberResponse:(id)arg1 dataItem:(id)arg2;
- (BOOL)handleHotDiscussedBarNumberResponse:(id)arg1 dataItem:(id)arg2;
- (BOOL)handleRandomPickCardInvolveInfoWithResponse:(id)arg1 dataItem:(id)arg2;
- (BOOL)handleFinderLiveProductInfoWithResponse:(id)arg1 dataItem:(id)arg2;
- (BOOL)handleRockPaperScissorsInfoWithResponse:(id)arg1 dataItem:(id)arg2;
- (BOOL)handleRandomSelectCardInfoWithResponse:(id)arg1 dataItem:(id)arg2;
- (BOOL)handleDynamicFeedUpdateInfoWithResponse:(id)arg1 dataItem:(id)arg2;
- (BOOL)checkUpdateInterval:(id)arg1 actionType:(unsigned int)arg2 dataItem:(id)arg3;
- (long long)getUpdateTime:(id)arg1 actionType:(unsigned int)arg2;
- (void)setUpdateTime:(id)arg1 actionType:(unsigned int)arg2 updateTime:(long long)arg3;
- (id)genKeyWithSnsId:(id)arg1 actionType:(unsigned int)arg2;
- (id)genKeyPrefixWithSnsId:(id)arg1;
- (int)getUpdateInterval:(unsigned int)arg1 dataItem:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)wcLogicMgrDelegate;
- (void)setWcLogicMgrDelegate:(id)arg1;
- (void)setUpdateTimeDic:(id)arg1;
- (void).cxx_destruct;
@end
