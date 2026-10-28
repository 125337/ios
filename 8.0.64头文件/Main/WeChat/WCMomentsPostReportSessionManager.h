@interface WCMomentsPostReportSessionManager : MMUserService <MMServiceProtocol>
{
    WCMomentsPostReportSession * _currentActiveSession; // +0x8
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)activateNewSession;
- (id)activateNewSessionIfNeeded;
- (id)activateNewSessionIfNeededWithPostCycleId:(id)arg1;
- (id)recoverSessionForScene:(long long)arg1 fromEntrance:(long long)arg2 withPostCycleId:(id)arg3 andActive:(BOOL)arg4;
- (id)deactivateCurrentSession;
- (void)deactivateSessionIfNeeded:(id)arg1;
- (id)currentActiveSession;
- (void)setCurrentActiveSession:(id)arg1;
- (void).cxx_destruct;
@end
