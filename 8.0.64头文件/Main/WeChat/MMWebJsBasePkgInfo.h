@interface MMWebJsBasePkgInfo : MMObject
{
    BOOL _isDebug; // +0x8
    NSDictionary * _dicMetaInfo; // +0x10
    void * _unpackLib; // +0x18
    WAInfoData * _waInfoData; // +0x20
    NSString * _md5; // +0x28
    NSDictionary * _dicVersionJsonInfo; // +0x30
    NSDictionary * _dicCacheFileInfo; // +0x38
    NSDictionary * _dicAppConfigInfo; // +0x40
    NSMutableDictionary * _dicTaskConfig2Path; // +0x48
}
+ (id)pkgMetaInfoKey;
+ (id)pkgWithFilePath:(id)arg1;
+ (id)dataWithFileName:(id)arg1 unpackPkg:(void *)arg2;
+ (id)getDicCacheFileInfoFromUnpackLib:(void *)arg1;
+ (BOOL)isVersion:(id)arg1 largerThanVersion:(id)arg2;
- (BOOL)isAppSupportFrameSet:(id)arg1 path:(id)arg2;
- (BOOL)isAppSupportFrameSetWithRegexp:(id)arg1 path:(id)arg2;
- (void)setupConfigForPath:(id)arg1;
- (id)appConfigArrTaskConfig;
- (void)dealloc;
- (BOOL)initFromFilePath:(id)arg1;
- (id)JSONDictionaryWithFileInfo:(id)arg1;
- (BOOL)isFileExistWithPath:(id)arg1;
- (id)getFileDataWithPath:(id)arg1;
- (id)getFileStrWithPath:(id)arg1;
- (long long)version;
- (long long)minClientVersionRequired;
- (id)appConfigVersionStr;
- (id)minPubLibVersionRequired;
- (id)pubLibVersionStr;
- (long long)pubLibMinClientVersion;
- (long long)pubLibMaxClientVersion;
- (id)dicMetaInfo;
- (void)setDicMetaInfo:(id)arg1;
- (void *)unpackLib;
- (void)setUnpackLib:(void *)arg1;
- (id)waInfoData;
- (void)setWaInfoData:(id)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (BOOL)isDebug;
- (void)setIsDebug:(BOOL)arg1;
- (id)dicVersionJsonInfo;
- (void)setDicVersionJsonInfo:(id)arg1;
- (id)dicCacheFileInfo;
- (void)setDicCacheFileInfo:(id)arg1;
- (id)dicAppConfigInfo;
- (void)setDicAppConfigInfo:(id)arg1;
- (id)dicTaskConfig2Path;
- (void)setDicTaskConfig2Path:(id)arg1;
- (void).cxx_destruct;
@end
