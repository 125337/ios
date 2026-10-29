@interface CBTCoopV2TingAIAutoPlayMonitor : NSObject
{
    NSMutableSet * _shownItemIds; // +0x8
    NSMutableSet * _terminalReportedKeys; // +0x10
    NSMutableSet * _decidedKeys; // +0x18
}
+ (id)sharedMonitor;
+ (void)reportShownWithListenItem:(id)arg1 context:(id)arg2;
+ (void)reportShownWithCategoryItem:(id)arg1 context:(id)arg2;
+ (BOOL)hasReportedShownWithListenItem:(id)arg1;
+ (BOOL)hasReportedShownWithCategoryItem:(id)arg1;
+ (void)markDecidedWithListenItem:(id)arg1;
+ (void)markDecidedWithCategoryItem:(id)arg1;
+ (BOOL)hasDecidedWithListenItem:(id)arg1;
+ (BOOL)hasDecidedWithCategoryItem:(id)arg1;
+ (void)reportPlayedWithListenItem:(id)arg1 context:(id)arg2;
+ (void)reportPlayedWithCategoryItem:(id)arg1 context:(id)arg2;
+ (void)reportDeniedExpiredWithListenItem:(id)arg1 context:(id)arg2;
+ (void)reportDeniedExpiredWithCategoryItem:(id)arg1 context:(id)arg2;
+ (void)reportDeniedAlreadyPlayedWithListenItem:(id)arg1 context:(id)arg2;
+ (void)reportDeniedAlreadyPlayedWithCategoryItem:(id)arg1 context:(id)arg2;
+ (void)reportAbortedWaitingTTSWithListenItem:(id)arg1 context:(id)arg2;
+ (void)reportAbortedWaitingTTSWithCategoryItem:(id)arg1 context:(id)arg2;
+ (void)reportNoDecisionWithListenItem:(id)arg1 context:(id)arg2;
+ (void)reportNoDecisionWithCategoryItem:(id)arg1 context:(id)arg2;
+ (void)_reportShownKind:(unsigned long long)arg1 itemId:(id)arg2 recommendId:(id)arg3 title:(id)arg4 context:(id)arg5;
+ (BOOL)_hasReportedShownKind:(unsigned long long)arg1 itemId:(id)arg2 recommendId:(id)arg3;
+ (void)_markDecidedKind:(unsigned long long)arg1 itemId:(id)arg2 recommendId:(id)arg3;
+ (BOOL)_hasDecidedKind:(unsigned long long)arg1 itemId:(id)arg2 recommendId:(id)arg3;
+ (id)_dedupKeyWithKind:(unsigned long long)arg1 itemId:(id)arg2 recommendId:(id)arg3;
+ (void)_reportTerminalEvent:(int)arg1 kind:(unsigned long long)arg2 itemId:(id)arg3 recommendId:(id)arg4 title:(id)arg5 context:(id)arg6;
+ (void)_reportEvent:(int)arg1 kind:(unsigned long long)arg2 itemId:(id)arg3 title:(id)arg4 context:(id)arg5;
- (id)init;
- (id)shownItemIds;
- (void)setShownItemIds:(id)arg1;
- (id)terminalReportedKeys;
- (void)setTerminalReportedKeys:(id)arg1;
- (id)decidedKeys;
- (void)setDecidedKeys:(id)arg1;
- (void).cxx_destruct;
@end
