@interface WCUpdateMgr : MMRootService <MMServiceProtocol, WCUpdateResourceExt, MMKernelExt, IMMLanguageMgrExt, IExptServiceExt>
{
    NSBundle * _resourceBundle; // +0x8
    NSBundle * _languageBundle; // +0x10
    NSBundle * _defaultLanguageBundle; // +0x18
    WCUpdateInfo * _pInfo; // +0x20
    NSObject<OS_dispatch_queue> * _queue; // +0x28
    VMConfigure _vmConfig; // +0x30
}
+ (void)immediateRenameUpdate;
+ (BOOL)shouldTrace;
+ (BOOL)verifyDiretory:(id)arg1;
- (BOOL)loadResource;
- (id)imageNamed:(id)arg1;
- (id)svgFileFullPathWithNamed:(id)arg1;
- (id)getBundleResource:(id)arg1 ext:(id)arg2;
- (id)getStringForCurLanguage:(id)arg1 defaultTo:(id)arg2;
- (id)getStringForDefault:(id)arg1 defaultTo:(id)arg2;
- (id)getPluginPathInUpdate:(id)arg1;
- (id)getPluginPathInBundle:(id)arg1;
- (BOOL)verifyFlutter;
- (id)getFlutterUpdateInfo;
- (void)onServiceInit;
- (void)registerExtension;
- (void)loadAndExecute;
- (BOOL)loadPluginInBundle:(id)arg1;
- (BOOL)loadPluginInBundle:(id)arg1 withIDKey:(const BundleLoadIDKey *)arg2;
- (BOOL)loadBundleWithoutIDKeyReport:(id)arg1;
- (BOOL)loadBundle:(id)arg1 withIDKey:(const BundleLoadIDKey *)arg2;
- (void)forceCleanUpdate;
- (void)forceUpdate:(unsigned int)arg1;
- (void)cleanUpdateHelper;
- (void)onPResUpdateFinish:(unsigned long long)arg1 updateType:(unsigned long long)arg2;
- (void)onPResDeleteFinish;
- (void)tryRegisterUpdate;
- (void)registerUpdate:(unsigned long long)arg1;
- (void)tryRenameTmpUpdateDataDir;
- (void)exitForNewUpdateBackground;
- (void)exitForNewUpdateSuspend;
- (void)onAuthOKWithPlistVesionChangeFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)onLanguageChange;
- (void)onExptItemListChange;
- (BOOL)loadMainUpdateBundle;
- (unsigned int)newClientVersion;
- (void)clearNewClientVersionInUserDefault;
- (void)setNewClientVersionInUserDefault:(unsigned int)arg1;
- (BOOL)_loadBundleWithoutCheck:(id)arg1;
- (BOOL)unzipDownloadUpdates:(id)arg1;
- (BOOL)unzipDownloadUpdates:(id)arg1 to:(id)arg2;
- (BOOL)unzipBundleUpdates;
- (void)cleanOldOne;
- (id)getUpdatePID;
- (void)dummy;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

