@interface MagicPkgCheckListener : MMUserService <IExptServiceExt, MMServiceProtocol>
{
    NSMutableSet * _preloadPkgId; // +0x8
    NSMutableSet * _netscene; // +0x10
    NSObject<OS_dispatch_queue> * _queue; // +0x18
    unsigned char _configChanged; // +0x20
    MagicPkgInfoDBMgr * _magicDBMgr; // +0x28
}
- (void)processMagicBootsCmd:(id)arg1;
- (void)processMagicBootsCmdXML:(XmlReaderAttr_t *)arg1;
- (void)checkBootsUpdate;
- (void)checkBootsUpdate:(id)arg1;
- (void)repeatCheckBootsUpdate;
- (id)getDBMgr;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (void)applicationWillEnterForeground;
- (void)doUpdateMagicPkg;
- (void)doUpdateHighLevelMagicPkg;
- (void)doCleanMagicPkg;
- (void)checkMagicPkg:(id)arg1 baseId:(id)arg2 isImmediately:(BOOL)arg3 isAutoCheck:(BOOL)arg4;
- (void)checkHighLevelMagicPkg:(id)arg1 baseId:(id)arg2 isImmediately:(BOOL)arg3 isAutoCheck:(BOOL)arg4;
- (void)checkMagicPkgWithBoots:(id)arg1 baseId:(id)arg2 isImmediately:(BOOL)arg3 isAutoCheck:(BOOL)arg4 isHighLevel:(BOOL)arg5;
- (void)report27831:(id)arg1 pkgInfo:(id)arg2 fileExist:(long long)arg3 scene:(long long)arg4 state:(long long)arg5 errCode:(long long)arg6 isHighLevel:(BOOL)arg7;
- (BOOL)checkIsIntervalTime:(id)arg1;
- (void)setIntervalTime:(id)arg1;
- (BOOL)checkHighLevelPkgIntervalTime:(id)arg1;
- (void)updateMagicPkgVersionStorage:(id)arg1;
- (id)getMagicPkgVersion;
- (void)onExptItemListChange;
- (id)magicDBMgr;
- (void)setMagicDBMgr:(id)arg1;
- (void).cxx_destruct;
@end

