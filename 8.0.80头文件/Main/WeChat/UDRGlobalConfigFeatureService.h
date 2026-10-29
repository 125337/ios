@interface UDRGlobalConfigFeatureService : MMRootService <MMServiceProtocol>
{
    NSMutableDictionary * _allProjectClass; // +0x8
    NSMutableDictionary * _allClassName; // +0x10
    NSMutableDictionary * _universalReportMap; // +0x18
    NSMutableDictionary * _universalCleanMap; // +0x20
}
+ (id)sharedInstance;
- (void)onServiceInit;
- (void)dealloc;
- (void)registerProjectId:(id)arg1 className:(id)arg2;
- (id)getAllUDRProjectClassMap;
- (id)getUDRProjectClass:(id)arg1;
- (float)getReportSample:(id)arg1 name:(id)arg2;
- (int)getCleanInterval:(id)arg1 name:(id)arg2;
- (id)getParameter:(id)arg1;
- (void)buildAllBiz;
- (void)buildUdrSubBizConfig:(Class)arg1;
- (id)allProjectClass;
- (void)setAllProjectClass:(id)arg1;
- (id)allClassName;
- (void)setAllClassName:(id)arg1;
- (id)universalReportMap;
- (void)setUniversalReportMap:(id)arg1;
- (id)universalCleanMap;
- (void)setUniversalCleanMap:(id)arg1;
- (void).cxx_destruct;
@end
