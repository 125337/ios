@interface DeviceModelConfigMgr : MMUserService <MMKernelExt, MMServiceProtocol, MMPackageDownloadMgrExt>
{
    int _m_oldVersion; // +0x8
    NSDictionary * m_dicFromModelJson; // +0x10
}
+ (id)matchWxVersion:(unsigned int)arg1 platform:(id)arg2 iosVersion:(id)arg3 fromArray:(id)arg4;
+ (id)matchCurrentWechatVersion:(id)arg1 WxVersion:(unsigned int)arg2;
+ (unsigned int)parseVersionFromString:(id)arg1;
+ (id)getValueFromInfo:(id)arg1 Key:(id)arg2 attrKey:(id)arg3;
+ (id)getDeviceModelConfigRootDir;
+ (id)getDeveceModelConfinPath;
- (id)init;
- (void)onAuthOK;
- (void)updateConfig;
- (void)onServiceInit;
- (void)loadLocalInfo;
- (void)onPackageDownloadFinish:(id)arg1 package:(id)arg2;
- (void)onPackageNeedUpdate:(id)arg1 withPackIDs:(id)arg2;
- (void)onPackageListUpdated:(id)arg1;
- (id)getAllVersionArray;
- (long long)valueForDeviceModelForKey:(id)arg1 attrKey:(id)arg2 valueDefalut:(long long)arg3;
- (BOOL)save:(id)arg1;
- (id)m_dicFromModelJson;
- (void)setM_dicFromModelJson:(id)arg1;
- (int)m_oldVersion;
- (void)setM_oldVersion:(int)arg1;
- (void).cxx_destruct;
@end
