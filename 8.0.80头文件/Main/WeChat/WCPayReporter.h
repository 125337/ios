@interface WCPayReporter : MMUserService <MMServiceProtocol, ClickStatSwizzleExt>
{
    BOOL _switchEnabled; // +0x8
    BOOL _sessionStartedFromVC; // +0x9
    unsigned int _sequenceId; // +0xc
    unsigned int _scene; // +0x10
    unsigned int _channel; // +0x14
    unsigned long long _pendingLogicCount; // +0x18
    unsigned long long _pendingVCCount; // +0x20
    NSString * _sessionId; // +0x28
    NSString * _lastReportUrl; // +0x30
}
+ (id)flattenDictForNPS:(id)arg1;
+ (id)flattenKvDataForNPS:(id)arg1;
- (id)beginNativePreSession:(id)arg1 scene:(unsigned int)arg2;
- (void)reportNativePreSessionEvent:(id)arg1 logType:(unsigned long long)arg2 actionType:(unsigned long long)arg3 extInfo:(id)arg4;
- (void)endNativePreSession:(id)arg1;
- (void)disposeNativePreSession:(id)arg1;
- (id)currentNativePreSessionId;
- (id)funnelNativeSessionId;
- (void)_ensureSessionForReport:(id)arg1;
- (void)_doNPSReport:(id)arg1 logType:(unsigned long long)arg2 actionType:(unsigned long long)arg3 extInfo:(id)arg4;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)reportStartLogic:(id)arg1;
- (void)reportEndLogic:(id)arg1;
- (void)reportDefaultBeginLogic;
- (void)reportDefaultEndLogic;
- (void)reportShowVC:(id)arg1;
- (void)reportDismissVC:(id)arg1;
- (void)reportShowWebOrWeAppVCWithUrl:(id)arg1;
- (void)reportDismissWebOrWeAppVCWithUrl:(id)arg1;
- (void)reportStartCgi:(id)arg1;
- (void)reportEndCgi:(id)arg1;
- (void)reportStartCgiWrap:(id)arg1;
- (void)reportEndCgiWrap:(id)arg1;
- (void)reportShowDialog:(id)arg1;
- (void)reportClickDialogButton:(id)arg1;
- (void)reportSystemEvent:(unsigned long long)arg1 extInfo:(id)arg2;
- (void)reportClickView:(id)arg1 reportInfo:(id)arg2;
- (void)doReport:(WCPayReportLog)arg1 extInfo:(id)arg2;
- (id)currentSessionId;
- (BOOL)isInReportContext;
- (id)getSessionId;
- (id)commitLogUrl:(id)arg1;
- (id)formatExtInfo:(id)arg1;
- (void)resetReportDataIfNeeded;
- (BOOL)isViewFromKinda:(id)arg1;
- (BOOL)shouldIgnoreButtonEvent:(id)arg1;
- (void)onSendEvent:(id)arg1;
- (void)onSendAction:(SEL)arg1 to:(id)arg2 from:(id)arg3 forEvent:(id)arg4;
- (void)MMUIViewControllerDidBePushOrPresent:(id)arg1;
- (void)MMUIViewControllerDidBePopOrDismiss:(id)arg1;
- (BOOL)switchEnabled;
- (void)setSwitchEnabled:(BOOL)arg1;
- (unsigned long long)pendingLogicCount;
- (void)setPendingLogicCount:(unsigned long long)arg1;
- (unsigned long long)pendingVCCount;
- (void)setPendingVCCount:(unsigned long long)arg1;
- (BOOL)sessionStartedFromVC;
- (void)setSessionStartedFromVC:(BOOL)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned int)sequenceId;
- (void)setSequenceId:(unsigned int)arg1;
- (id)lastReportUrl;
- (void)setLastReportUrl:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned int)channel;
- (void)setChannel:(unsigned int)arg1;
- (void).cxx_destruct;
@end
