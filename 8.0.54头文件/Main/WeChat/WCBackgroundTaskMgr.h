@interface WCBackgroundTaskMgr : MMRootService <MMServiceProtocol>
{
    BOOL _isEnabled; // +0x8
    NSMutableArray * _runners; // +0x10
}
- (void)onServiceInit;
- (BOOL)registerTask:(id)arg1;
- (BOOL)unregisterTask:(id)arg1;
- (id)runners;
- (void)setRunners:(id)arg1;
- (BOOL)isEnabled;
- (void)setIsEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end

