@interface WeVisModelResMgr : MMUserService <MMResourceMgrExt, MMServiceProtocol>
- (BOOL)checkModelConfig;
- (void)onServiceInit;
- (void)onServiceClearData;
@end

