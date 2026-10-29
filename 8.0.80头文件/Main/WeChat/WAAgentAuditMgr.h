@interface WAAgentAuditMgr : MMUserService <IChatBotVoIPExt, MMServiceProtocol>
{
    BOOL _keepsScreenAwakeForEvaluation; // +0x8
    BOOL _changedIdleTimerForEvaluation; // +0x9
    WAAgentAuditSessionContext * _sessionContext; // +0x10
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)updateEvaluationScreenAwake:(BOOL)arg1 reason:(id)arg2;
- (void)scheduleEvaluationScreenAwakeRecheckForContext:(id)arg1;
- (void)cancelSnapshotWaitInContext:(id)arg1;
- (void)onVoIPSessionIDDidUpdate:(id)arg1;
- (BOOL)syncAuditEvaluationModeForSessionContext:(id)arg1;
- (id)buildExecutorEventWithProtocolVersion:(unsigned int)arg1 appid:(id)arg2 sessionId:(id)arg3;
- (void)reportExecutorEvent:(id)arg1 scene:(id)arg2;
- (void)reportSessionReadyWithContext:(id)arg1;
- (void)reportSessionRejectedWithSessionToken:(id)arg1 appid:(id)arg2 errorCode:(int)arg3 message:(id)arg4;
- (id)auditContentFromScanString:(id)arg1;
- (id)handleScanContent:(id)arg1;
- (BOOL)handleAuditScanContent:(id)arg1 presentFromViewController:(id)arg2 presentHandler:(id /* block */)arg3;
- (BOOL)launchNegScreenForAuditResult:(id)arg1;
- (void)onAuditEvaluationModeChanged:(int)arg1 sessionId:(id)arg2 caseId:(id)arg3;
- (void)onAuditAutomaticEvaluationResultWithProtocolVersion:(int)arg1 resultType:(int)arg2 sessionFinishReason:(int)arg3 jobId:(id)arg4 sessionId:(id)arg5 attempt:(int)arg6 caseId:(id)arg7 query:(id)arg8 answerText:(id)arg9 success:(BOOL)arg10 errorCode:(int)arg11 message:(id)arg12;
- (void)onAuditAutomaticEvaluationResultV2WithProtocolVersion:(int)arg1 resultType:(int)arg2 sessionFinishReason:(int)arg3 jobId:(id)arg4 sessionId:(id)arg5 attempt:(int)arg6 caseId:(id)arg7 modalAccept:(int)arg8 query:(id)arg9 answerText:(id)arg10 success:(BOOL)arg11 errorCode:(int)arg12 message:(id)arg13;
- (void)onAuditClearMockLocationWithVoipSessionID:(id)arg1;
- (void)onAuditSetLocationWithProtocolVersion:(int)arg1 jobId:(id)arg2 sessionId:(id)arg3 attempt:(int)arg4 voipSessionID:(id)arg5 latitude:(double)arg6 longitude:(double)arg7 hasSpeed:(BOOL)arg8 speed:(double)arg9 hasAccuracy:(BOOL)arg10 accuracy:(double)arg11 hasAltitude:(BOOL)arg12 altitude:(double)arg13 hasVerticalAccuracy:(BOOL)arg14 verticalAccuracy:(double)arg15 hasHorizontalAccuracy:(BOOL)arg16 horizontalAccuracy:(double)arg17;
- (void)closeResidualHeadlessTaskForAppId:(id)arg1;
- (void)onAuditHumanEvaluationResultWithProtocolVersion:(int)arg1 jobId:(id)arg2 sessionId:(id)arg3 caseId:(id)arg4 turnSequence:(int)arg5 query:(id)arg6 answerText:(id)arg7 success:(BOOL)arg8 errorCode:(int)arg9 message:(id)arg10;
- (void)reportHumanCaseCompletedWithContext:(id)arg1 caseId:(id)arg2;
- (id)buildOperationErrorWithCode:(int)arg1 message:(id)arg2;
- (BOOL)isValidOperationErrorCode:(int)arg1;
- (BOOL)isValidSessionFinishReason:(int)arg1;
- (id)archiveAutomaticTurnWithQuery:(id)arg1 modalAccept:(int)arg2 answerText:(id)arg3 context:(id)arg4;
- (void)holdEventForSnapshot:(id)arg1 turn:(id)arg2 context:(id)arg3 scene:(id)arg4;
- (void)flushPendingSnapshotEventWithContext:(id)arg1 reason:(id)arg2;
- (void)flushPendingHumanSaveWithContext:(id)arg1 reason:(id)arg2;
- (void)closeHumanCaseStateInContext:(id)arg1 reason:(id)arg2;
- (void)setSaveWaitingSnapshot:(BOOL)arg1 inContext:(id)arg2;
- (void)flushCaseTrajectoryWithContext:(id)arg1 caseId:(id)arg2 jobId:(id)arg3 reason:(id)arg4;
- (id)buildTrajectoryTurnsWithoutSnapshots:(id)arg1;
- (id)buildAgentTurnResponseWithAnswerText:(id)arg1 context:(id)arg2;
- (id)serializeToolCalls:(id)arg1;
- (void)closeTraceId:(id)arg1 inContext:(id)arg2;
- (void)closeAllTraceBucketsInContext:(id)arg1 reason:(id)arg2;
- (id)acquireBucketKeyForTraceId:(id)arg1 context:(id)arg2 scene:(id)arg3;
- (void)appendTurnToolCallWithMethod:(id)arg1 params:(id)arg2 traceId:(id)arg3;
- (BOOL)isInAuditSession;
- (BOOL)isInAuditSessionForVoipSessionID:(id)arg1;
- (id)mockLocationForVoipSessionID:(id)arg1;
- (id)mockLocationForAppId:(id)arg1;
- (void)clearMockLocation;
- (void)updateLatestAuditSnapshot:(id)arg1;
- (id)sessionContext;
- (void)setSessionContext:(id)arg1;
- (BOOL)keepsScreenAwakeForEvaluation;
- (void)setKeepsScreenAwakeForEvaluation:(BOOL)arg1;
- (BOOL)changedIdleTimerForEvaluation;
- (void)setChangedIdleTimerForEvaluation:(BOOL)arg1;
- (void).cxx_destruct;
@end
