@interface WCFinderJumpInfoPollingMgr : NSObject
{
    id <WCFinderJumpInfoPollingMgrDelegate> _delegate; // +0x8
    NSMutableDictionary * _pollingStateDict; // +0x10
}
- (id)init;
- (void)dealloc;
- (void)handleAsyncInfo:(id)arg1 dataItem:(id)arg2 commentScene:(int)arg3;
- (void)attachPollingInfoToObjectUidUnit:(id)arg1;
- (void)refreshGlobalConfig;
- (void)cancelPollingWithTid:(id)arg1;
- (void)cancelAllPolling;
- (void)_handleAsyncInfoOnMain:(id)arg1 dataItem:(id)arg2 commentScene:(int)arg3;
- (void)_pollingAsyncLoadInfoWithTid:(id)arg1;
- (void)_finishPollingState:(id)arg1 success:(BOOL)arg2 objectAsyncInfoMap:(id)arg3;
- (void)_finishPollingStateOnMain:(id)arg1 success:(BOOL)arg2 objectAsyncInfoMap:(id)arg3;
- (void)_schedulePollingWithState:(id)arg1;
- (void)_cancelScheduledPollingForState:(id)arg1;
- (void)_cancelAllScheduledPolling;
- (void)_requestPollingAsyncInfoWithState:(id)arg1;
- (BOOL)_applyPollingConfig:(id)arg1 asyncInfo:(id)arg2 dataItem:(id)arg3 commentScene:(int)arg4;
- (BOOL)_isPollingConfigValid:(id)arg1;
- (BOOL)_isPollingOpenState:(unsigned int)arg1;
- (BOOL)_isPollingResetState:(unsigned int)arg1;
- (void)_logSvrPollingConfig:(id)arg1 tid:(id)arg2;
- (id)_pollingTargetSummaryWithConfig:(id)arg1;
- (void)_cancelPollingWithTidOnMain:(id)arg1;
- (void)_cancelAllPollingOnMain;
- (id)_objectAsyncInfoFromMap:(id)arg1 tid:(id)arg2;
- (BOOL)_objectAsyncInfo:(id)arg1 matchesPollingConfig:(id)arg2 tid:(id)arg3;
- (id)_pollingTargetKeyWithBusinessType:(unsigned int)arg1 showPosition:(unsigned int)arg2;
- (id)_stateForTid:(id)arg1;
- (void)_removeState:(id)arg1;
- (BOOL)_isStateValid:(id)arg1;
- (BOOL)_isPollingDisabled;
- (BOOL)_isPollingGloballyClosed;
- (BOOL)_isInFinderAntiScene;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)pollingStateDict;
- (void)setPollingStateDict:(id)arg1;
- (void).cxx_destruct;
@end
