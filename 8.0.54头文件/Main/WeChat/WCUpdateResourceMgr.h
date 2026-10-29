@interface WCUpdateResourceMgr : MMRootService <MMResourceMgrExt, WCUpdateBootsExt, MMKernelExt, MMServiceProtocol>
- (id)getUpdateZipFile;
- (void)forceUpdate:(BOOL)arg1;
- (void)onServiceInit;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)onResDeleteFinishWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2;
- (void)onBootsUpdateFinish:(unsigned long long)arg1 downloadType:(unsigned long long)arg2;
- (void)onBootsDeleteFinish;
- (void)onAuthOKWithPlistVesionChangeFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)cleanLocalUpdateZip;
- (void)cleanOldOne;
@end

