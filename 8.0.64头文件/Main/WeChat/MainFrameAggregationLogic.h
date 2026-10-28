@interface MainFrameAggregationLogic : NSObject <IMainSessionMgrExt, IMMNewSessionMgrExt>
{
    id <MainFrameAggregationLogicDelegate> _delegate; // +0x8
    unsigned long long _enterPageTime; // +0x10
    NSMutableArray * _sessionList; // +0x18
    NSMutableArray * _reloadingList; // +0x20
    NSMutableSet * _sessionSet; // +0x28
    NSSet * _initalSessionSet; // +0x30
}
- (id)init;
- (id)cellDataAtIndex:(long long)arg1;
- (id)cellDataForUsername:(id)arg1;
- (id)sessionAtIndex:(long long)arg1;
- (id)currentSessionList;
- (BOOL)isSessionInInitalList:(id)arg1;
- (long long)sessionCount;
- (long long)notifySessionCount;
- (id)genReportSessionListDetail;
- (void)rebuildSessionList;
- (void)changeReadStatusAtIndex:(long long)arg1;
- (BOOL)canShowSession:(id)arg1;
- (void)onMainFrameBeginReload;
- (void)onMainFrameHandleSession:(id)arg1;
- (void)onMainFrameEndReload;
- (void)onSessionTotalUnreadCountChange:(unsigned int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)enterPageTime;
- (void)setEnterPageTime:(unsigned long long)arg1;
- (id)sessionList;
- (void)setSessionList:(id)arg1;
- (id)reloadingList;
- (void)setReloadingList:(id)arg1;
- (id)sessionSet;
- (void)setSessionSet:(id)arg1;
- (id)initalSessionSet;
- (void)setInitalSessionSet:(id)arg1;
- (void).cxx_destruct;
@end
