@interface WCUpdateBootsMgr : MMUserService <MMKernelExt, PBMessageObserverDelegate, INewSyncExt, IMsgExt, MMServiceProtocol>
{
    NSMutableDictionary * _dicDownloadingItem; // +0x8
    NSString * _baseID; // +0x10
    WCBootsUpdateInfo * _curBootsUpdateInfo; // +0x18
}
+ (BOOL)isPRConfigContent:(id)arg1;
+ (BOOL)canUseInSafemode;
- (id)getBootsUpdateData:(unsigned long long *)arg1;
- (void)forceUpdate:(BOOL)arg1;
- (BOOL)toggleBootsAutoCheck;
- (BOOL)bootsAutoCheck;
- (void)checkBootsUpdate;
- (void)repeatCheckBootsUpdate;
- (void)p_checkBootsUpdate;
- (void)checkBootsUpdateWithXmlKey:(id)arg1;
- (void)processPRConfig:(id)arg1;
- (void)onServiceInit;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onNewSyncIPXX:(id)arg1;
- (void)onProcessPRConfigContent:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onAuthOKWithPlistVesionChangeFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (id)getBaseID;
- (id)getCurrentPid;
- (id)getDefaultConditions;
- (void)checkBootsUpdateWithCondition:(id)arg1 forceWithoutLogin:(BOOL)arg2;
- (BOOL)startDownloadUpdate:(id)arg1 downloadType:(unsigned long long)arg2;
- (BOOL)verifyUpdateData:(id)arg1 withBootsInfo:(id)arg2;
- (void)handleXmlMsg:(id)arg1;
- (void)cleanOldOne;
- (void)cleanUpdate;
- (void).cxx_destruct;
@end

