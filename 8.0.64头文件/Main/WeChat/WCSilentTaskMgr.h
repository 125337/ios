@interface WCSilentTaskMgr : MMRootService <MMServiceProtocol>
{
    NSMutableArray * _runners; // +0x8
}
- (void)onServiceInit;
- (BOOL)registerTask:(id)arg1;
- (BOOL)unregisterTask:(id)arg1;
- (id)runners;
- (void)setRunners:(id)arg1;
- (void).cxx_destruct;
@end
