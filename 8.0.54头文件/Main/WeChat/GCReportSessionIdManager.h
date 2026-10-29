@interface GCReportSessionIdManager : MMUserService <MMServiceProtocol>
{
    NSString * _sessionId; // +0x8
    double _sessionIdGenTime; // +0x10
    double _sessionIdRefreshTime; // +0x18
    NSMutableDictionary * _viewControllerDict; // +0x20
}
- (id)init;
- (id)pageId:(id)arg1;
- (void)onFindFriendEntryClick;
- (void)onFullScreenGameHostWebVcInit:(id)arg1;
- (void)onNativeVcInit:(id)arg1;
- (BOOL)checkGameVcExist;
- (void)checkGenSessionId:(id)arg1;
- (void)onFullScreenWebVcPoped:(id)arg1;
- (void)onNativeVcPopedOrDismissed:(id)arg1;
- (void)onViewControllerExit:(id)arg1;
- (void)refreshSessionIdTime:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (double)sessionIdGenTime;
- (void)setSessionIdGenTime:(double)arg1;
- (double)sessionIdRefreshTime;
- (void)setSessionIdRefreshTime:(double)arg1;
- (id)viewControllerDict;
- (void)setViewControllerDict:(id)arg1;
- (void).cxx_destruct;
@end

