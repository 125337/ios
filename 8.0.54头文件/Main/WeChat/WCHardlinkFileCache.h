@interface WCHardlinkFileCache : NSObject <PBCoding>
{
    NSMutableDictionary * _dicFileInfo; // +0x8
    long long _cacheVersion; // +0x10
}
+ (void)PBArrayAdd_dicFileInfo;
+ (void)PBArrayAdd_cacheVersion;
+ (void)initialize;
+ (id)getFileInfoStatFile;
+ (unsigned int)currentCacheVersion;
+ (id)loadStatFromFile;
+ (void)saveStat:(id)arg1;
- (id)getPBPropertyTable;
- (id)init;
- (void)setFileCache:(id)arg1 withKey:(id)arg2;
- (id)getFileCacheWithKey:(id)arg1;
- (id)dicFileInfo;
- (void)setDicFileInfo:(id)arg1;
- (long long)cacheVersion;
- (void)setCacheVersion:(long long)arg1;
- (void).cxx_destruct;
@end

