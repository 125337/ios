@interface WSTemplateBaseMgr : MMUserService <MMServiceProtocol, IWSTemplateConfigDevelopServiceExt, MMResourceMgrExt>
{
    NSOperationQueue * m_updateResourceQueue; // +0x8
    NSString * _debugModuleName; // +0x10
    long long _activeTemplateCount; // +0x18
    _TtC6WeChat21WSTemplateMgrReporter * _reporter; // +0x20
    WSTemplatePackageManager * _packageMgr; // +0x28
}
+ (id)getServiceOfType:(unsigned long long)arg1;
- (void)checkResourceWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)initRegister;
- (void)dealloc;
- (void)onServiceInit;
- (id)defaultTemplateZipPath;
- (unsigned int)defaultTemplateZipVersion;
- (id)templateResouceRootPath;
- (unsigned int)packageResouceType;
- (unsigned int)packageResouceSubType;
- (unsigned long long)localJSBizType;
- (unsigned int)getTemplateVersion:(unsigned long long)arg1;
- (unsigned int)activeTemplateVersion;
- (id)getTemplateResourceFolder:(unsigned long long)arg1;
- (id)getTemplateHTMLPath:(unsigned long long)arg1;
- (id)activeTemplateHTMLPath;
- (void)removePackage:(unsigned long long)arg1;
- (void)reloadPackageConfig:(unsigned long long)arg1;
- (id)getConfigData:(unsigned long long)arg1;
- (id)getConfig:(unsigned long long)arg1;
- (id)getUpdatedTemplateResoucePath;
- (unsigned int)getVersionWithResoucePath:(id)arg1;
- (void)showVersionDescViewWithTitle:(id)arg1;
- (unsigned long long)activePackageType;
- (id)getPackage:(unsigned long long)arg1;
- (id)getTempTemplateResoucePath;
- (void)checkAndRemoveExpiredDevelopH5;
- (void)checkUpdatedPackageValid;
- (void)reportVersion;
- (id)packageMgr;
- (void)setActiveTemplateCount:(long long)arg1;
- (id)busineseName;
- (id)packageVersionCacheKey;
- (unsigned int)packageVersion;
- (void)setPackageVersion:(unsigned int)arg1;
- (void)checkPackageVersionUpdate;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (BOOL)doTemplateResUpdate;
- (BOOL)doTemplateResUpdateFromPath:(id)arg1 version:(unsigned int)arg2;
- (BOOL)doTemplateResUpdateFromPath:(id)arg1 version:(unsigned int)arg2 checkActiveInstance:(BOOL)arg3;
- (BOOL)doTemplateResUpdateWithType:(unsigned int)arg1 subType:(unsigned int)arg2 srcPath:(id)arg3 packageVersion:(unsigned int)arg4;
- (void)onResHasNewWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2 version:(unsigned int)arg3;
- (void)onResBeginDownloadWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2 version:(unsigned int)arg3;
- (void)onResFinishDownload:(BOOL)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3 version:(unsigned int)arg4;
- (BOOL)applyToDevelopH5:(id)arg1;
- (unsigned int)getVersionForDevelopH5;
- (id)debugModuleName;
- (void)setDebugModuleName:(id)arg1;
- (long long)activeTemplateCount;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (void)setPackageMgr:(id)arg1;
- (void).cxx_destruct;
@end
