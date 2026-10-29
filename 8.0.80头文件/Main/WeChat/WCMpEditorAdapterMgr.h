@interface WCMpEditorAdapterMgr : MMUserService <MMServiceProtocol>
+ (void)setup;
+ (void)registerLazyExtension;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)registerExtension;
- (void)unregisterExtension;
@end
