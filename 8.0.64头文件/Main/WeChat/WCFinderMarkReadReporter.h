@interface WCFinderMarkReadReporter : MMUserService <MMServiceProtocol>
{
    NSMutableArray * _waitingReportPool; // +0x8
    MMTimer * _reportTimer; // +0x10
    NSMutableArray * _failedItems; // +0x18
    NSMutableArray * _streamWaittingPool; // +0x20
    NSMutableSet * _tidContainSet; // +0x28
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterBackground;
- (void)resetServiceData;
- (id)waitingReportPool;
- (id)failedItems;
- (id)streamWaittingPool;
- (id)tidContainSet;
- (id)mmkvMapID;
- (void)syncFailedItems;
- (void)syncWattingPoolItems;
- (void)syncStreamWaittingPoolItems;
- (BOOL)isFailedItem:(id)arg1;
- (void)reportImmediately;
- (void)markReadTid:(id)arg1 markReadScene:(unsigned long long)arg2 commentScene:(int)arg3;
- (void)markReadTid:(id)arg1 markReadScene:(unsigned long long)arg2 commentScene:(int)arg3 duration:(long long)arg4 index:(unsigned long long)arg5;
- (void)markReadTid:(id)arg1 markReadScene:(unsigned long long)arg2 subScene:(unsigned long long)arg3 commentScene:(int)arg4;
- (void)markReadTid:(id)arg1 markReadScene:(unsigned long long)arg2 subScene:(unsigned long long)arg3 commentScene:(int)arg4 duration:(unsigned long long)arg5 index:(unsigned long long)arg6;
- (void)markReadTid:(id)arg1 markReadScene:(unsigned long long)arg2 subScene:(unsigned long long)arg3 commentScene:(int)arg4 duration:(unsigned long long)arg5 index:(unsigned long long)arg6 autoPlayTimeInMs:(unsigned long long)arg7 autoPlayWithSound:(BOOL)arg8 startExposeMs:(unsigned long long)arg9 sessionExtraKey:(id)arg10 actionType:(long long)arg11 effectiveExposeTimeMs:(unsigned long long)arg12 startEffectiveExposeTimeMs:(unsigned long long)arg13 areaId:(unsigned long long)arg14;
- (void)markStreamReadTid:(id)arg1 markReadScene:(unsigned long long)arg2 commentScene:(int)arg3;
- (void)markStreamReadTid:(id)arg1 markReadScene:(unsigned long long)arg2 commentScene:(int)arg3 duration:(long long)arg4;
- (void)markStreamReadTid:(id)arg1 markReadScene:(unsigned long long)arg2 subScene:(unsigned long long)arg3 commentScene:(int)arg4;
- (void)markStreamReadTid:(id)arg1 markReadScene:(unsigned long long)arg2 subScene:(unsigned long long)arg3 commentScene:(int)arg4 duration:(long long)arg5;
- (void)markStreamReadTid:(id)arg1 markReadScene:(unsigned long long)arg2 subScene:(unsigned long long)arg3 commentScene:(int)arg4 duration:(long long)arg5 autoPlayTimeInMs:(unsigned long long)arg6 autoPlayWithSound:(BOOL)arg7 startExposeMs:(unsigned long long)arg8 sessionExtraKey:(id)arg9 effectiveExposeTimeMs:(unsigned long long)arg10 startEffectiveExposeTimeMs:(unsigned long long)arg11;
- (id)getStreamReadStats;
- (void)clearStreamStats:(id)arg1;
- (void)processStreamMarkSessionHistory;
- (void)clearSteramMarkReadSessionHistory;
- (void)startStatsReport;
- (void)reportAll;
- (void)reportGroupItem:(id)arg1;
- (void)reportStatsPoolArrayWithDelayTime:(double)arg1;
- (void)wattingPoolItemReportSuccess:(id)arg1;
- (BOOL)isFailedItem:(id)arg1 atScene:(unsigned long long)arg2;
- (void)appendItemsAtFailed:(id)arg1;
- (void)startReportFiledItem;
- (void)reportFailedGroupItem:(id)arg1;
- (void)failedItemSyncRetrySuccess:(id)arg1;
- (BOOL)isFlowCommentScene:(int)arg1;
- (void)setWaitingReportPool:(id)arg1;
- (id)reportTimer;
- (void)setReportTimer:(id)arg1;
- (void)setFailedItems:(id)arg1;
- (void)setStreamWaittingPool:(id)arg1;
- (void)setTidContainSet:(id)arg1;
- (void).cxx_destruct;
@end
