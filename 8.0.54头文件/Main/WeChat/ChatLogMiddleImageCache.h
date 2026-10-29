@interface ChatLogMiddleImageCache : NSObject <PBCoding>
{
    NSMutableSet * _needConvertImageInfo; // +0x8
    long long _cacheVersion; // +0x10
}
+ (void)PBArrayAdd_needConvertImageInfo;
+ (void)PBArrayAdd_cacheVersion;
+ (void)initialize;
+ (id)getStatFilePath;
+ (unsigned int)currentCacheVersion;
+ (id)loadStat;
+ (void)saveStat:(id)arg1;
- (id)getPBPropertyTable;
- (id)init;
- (void)setNeedConvertPath:(id)arg1;
- (id)needConvertImageInfo;
- (void)setNeedConvertImageInfo:(id)arg1;
- (long long)cacheVersion;
- (void)setCacheVersion:(long long)arg1;
- (void).cxx_destruct;
@end

