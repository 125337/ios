@interface WCUpdateMgr : MMRootService <MMServiceProtocol, MMKernelExt, IMMLanguageMgrExt, IExptServiceExt>
- (void)onServiceInit;
- (void)registerExtension;
- (void)registerUpdate:(unsigned long long)arg1;
- (void)exitForUpdateRevokeBackground;
- (void)exitForNewUpdateBackground;
- (void)exitForNewUpdateSuspend;
- (BOOL)toggleSWUsage;
- (void)onAuthOKWithPlistVesionChangeFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)onLanguageChange;
- (void)onExptItemListChange;
- (void)dummy;
@end
