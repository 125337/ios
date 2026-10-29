@interface MMFinderLiveReplayLogic : NSObject <WCFinderLiveExt>
{
    BOOL _isFetchingPreviewThumb; // +0x8
    BOOL _hasFetchedPreviewThumb; // +0x9
    unsigned int _continueFailCnt; // +0xc
    id <MMFinderLiveReplayLogicDelegate> _logicDelegate; // +0x10
    MMFinderLiveReplayTaskId * _replayTaskId; // +0x18
    NSData * _lastPreviewThumbReqBuffer; // +0x20
}
- (id)initWithTaskId:(id)arg1;
- (void)registerExtension;
- (void)unRegisterExtension;
- (id)replayLiveTask;
- (void)clearLive;
- (BOOL)getLiveInfoWithSuccessBlock:(id /* block */)arg1 failBlock:(id /* block */)arg2;
- (void)saveLastLiveInfo;
- (void)enableCurrentLiveReplay:(BOOL)arg1 isDelete:(BOOL)arg2 scene:(long long)arg3 completeBlock:(id /* block */)arg4;
- (void)enableCurrentLiveReplay:(BOOL)arg1 scene:(long long)arg2 completeBlock:(id /* block */)arg3;
- (void)enableCurrentLiveReplay:(BOOL)arg1 completeBlock:(id /* block */)arg2;
- (void)fetchDetailNewDataItem;
- (void)getReplayPreviewThumbList;
- (void)inner_getReplayPreviewThumbList;
- (void)clearFetchingPreviewThumbParams;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (id)replayTaskId;
- (void)setReplayTaskId:(id)arg1;
- (id)lastPreviewThumbReqBuffer;
- (void)setLastPreviewThumbReqBuffer:(id)arg1;
- (BOOL)isFetchingPreviewThumb;
- (void)setIsFetchingPreviewThumb:(BOOL)arg1;
- (BOOL)hasFetchedPreviewThumb;
- (void)setHasFetchedPreviewThumb:(BOOL)arg1;
- (unsigned int)continueFailCnt;
- (void)setContinueFailCnt:(unsigned int)arg1;
- (void).cxx_destruct;
@end

