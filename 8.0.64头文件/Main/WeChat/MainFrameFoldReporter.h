@interface MainFrameFoldReporter : NSObject <INewSyncExt, MMUIViewControllerExt>
{
    BOOL _shouldReportExposeDetail; // +0x8
    unsigned long long _currMainTabTime; // +0x10
    unsigned long long _jumpUnreadSessionTime; // +0x18
    unsigned long long _enterUnreadAggregationTime; // +0x20
    OrderedDictionary * _exposeInfos; // +0x28
    unsigned long long _enterForegroundTime; // +0x30
    unsigned long long _prevEnterChatTime; // +0x38
}
+ (void)checkReportSessionInfoWithOneScreenCount:(long long)arg1 foldRate:(double)arg2;
- (id)init;
- (void)dealloc;
- (void)reportClickSession:(id)arg1 status:(long long)arg2 index:(long long)arg3;
- (void)reportClickSession:(id)arg1 status:(long long)arg2 index:(long long)arg3 inUnreadGroup:(BOOL)arg4;
- (void)reportFoldStatusChange:(BOOL)arg1 topSessionCount:(long long)arg2;
- (void)reportNewSyncClearUnread:(id)arg1 unreadCount:(long long)arg2;
- (void)handleExposeSession:(id)arg1;
- (void)onNewSyncEnterSession:(id)arg1 createTime:(unsigned int)arg2;
- (void)onNewSyncClearUnread:(id)arg1;
- (void)MMUIViewControllerDidAppear:(id)arg1;
- (void)onAppEnterForeground:(id)arg1;
- (unsigned long long)currMainTabTime;
- (void)setCurrMainTabTime:(unsigned long long)arg1;
- (unsigned long long)jumpUnreadSessionTime;
- (void)setJumpUnreadSessionTime:(unsigned long long)arg1;
- (unsigned long long)enterUnreadAggregationTime;
- (void)setEnterUnreadAggregationTime:(unsigned long long)arg1;
- (id)exposeInfos;
- (void)setExposeInfos:(id)arg1;
- (unsigned long long)enterForegroundTime;
- (void)setEnterForegroundTime:(unsigned long long)arg1;
- (unsigned long long)prevEnterChatTime;
- (void)setPrevEnterChatTime:(unsigned long long)arg1;
- (BOOL)shouldReportExposeDetail;
- (void)setShouldReportExposeDetail:(BOOL)arg1;
- (void).cxx_destruct;
@end
