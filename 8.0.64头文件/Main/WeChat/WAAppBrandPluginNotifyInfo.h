@interface WAAppBrandPluginNotifyInfo : NSObject <PBCoding>
{
    BOOL _isAlreadyDownload; // +0x8
    unsigned int _debugDevKey; // +0xc
    NSString * _appid; // +0x10
    NSString * _versionDesc; // +0x18
}
+ (void)PBArrayAdd_appid;
+ (void)PBArrayAdd_isAlreadyDownload;
+ (void)PBArrayAdd_debugDevKey;
+ (void)PBArrayAdd_versionDesc;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (id)appid;
- (void)setAppid:(id)arg1;
- (BOOL)isAlreadyDownload;
- (void)setIsAlreadyDownload:(BOOL)arg1;
- (unsigned int)debugDevKey;
- (void)setDebugDevKey:(unsigned int)arg1;
- (id)versionDesc;
- (void)setVersionDesc:(id)arg1;
- (void).cxx_destruct;
@end
