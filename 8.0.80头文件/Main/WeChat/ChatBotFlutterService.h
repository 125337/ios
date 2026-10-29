@interface ChatBotFlutterService : MMUserService <MMServiceProtocol>
{
    MMFlutterInstance * _chattingFlutterInstance; // +0x8
    NSDictionary * _pendingEvaluationMode; // +0x10
    double _pendingEvaluationModeAtSec; // +0x18
}
- (id)chattingRouteArguments;
- (id)chattingFlutterInstance;
- (void)onServiceInit;
- (id)getUdrConfigPath;
- (void)onUdrConfigChanged:(id)arg1;
- (void)notifyUdrConfig;
- (void)onResUdrChanged:(id)arg1;
- (void)notifyResUdr;
- (void)checkLiteApp;
- (void)warmUpFlutter;
- (void)resetFlutterInstanceForTesting;
- (void)destroyChattingInstanceImmediatelyWithCompletion:(id /* block */)arg1;
- (id)createChattingPipelineInstanceWithRoute:(id)arg1 arguments:(id)arg2;
- (id)createChattingHistoryInstanceWithArguments:(id)arg1;
- (id)createChattingDialogueInstanceWithArguments:(id)arg1;
- (void)addHalfScreenPluginsToInstance:(id)arg1;
- (id)createHalfScreenInstanceWithArguments:(id)arg1;
- (id)createHeadlessPlaceholderInstanceWithArguments:(id)arg1;
- (id)createChattingAskInstanceWithLocateLocalId:(int)arg1 svrId:(long long)arg2;
- (void)launchNegScreenWithEvaluationMode:(unsigned long long)arg1;
- (void)launchNegScreenWithEvaluationMode:(unsigned long long)arg1 current:(int)arg2 total:(int)arg3 isResume:(BOOL)arg4;
- (void)launchNegScreenWithEvaluationMode:(unsigned long long)arg1 sessionId:(id)arg2 caseId:(id)arg3;
- (void)launchNegScreenWithEvaluationMode:(unsigned long long)arg1 sessionId:(id)arg2 caseId:(id)arg3 isResume:(BOOL)arg4;
- (BOOL)syncAuditEvaluationMode:(unsigned long long)arg1 sessionId:(id)arg2 caseId:(id)arg3;
- (BOOL)syncAuditEvaluationMode:(unsigned long long)arg1 sessionId:(id)arg2 voipSessionID:(id)arg3 caseId:(id)arg4;
- (void)notifyFlutterManualSaveWaiting:(BOOL)arg1;
- (void)notifyFlutterEvaluationMode:(unsigned long long)arg1 isResume:(BOOL)arg2;
- (void)setPendingEvaluationMode:(unsigned long long)arg1 isResume:(BOOL)arg2;
- (void)clearPendingEvaluationMode:(id)arg1;
- (id)consumePendingEvaluationMode;
- (id)createCoopFileDownloadInstanceWithArguments:(id)arg1;
- (void)setChattingFlutterInstance:(id)arg1;
- (id)pendingEvaluationMode;
- (void)setPendingEvaluationMode:(id)arg1;
- (double)pendingEvaluationModeAtSec;
- (void)setPendingEvaluationModeAtSec:(double)arg1;
- (void).cxx_destruct;
@end
