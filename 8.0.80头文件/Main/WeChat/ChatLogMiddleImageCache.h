@interface ChatLogMiddleImageCache : NSObject <PBCoding>
{
    BOOL _bBuildCacheOK; // +0x8
    NSMutableArray * _needConvertImageInfo; // +0x10
    long long _cacheVersion; // +0x18
}
+ (void)PBArrayAdd_needConvertImageInfo;
+ (void)PBArrayAdd_cacheVersion;
+ (void)PBArrayAdd_bBuildCacheOK;
+ (void)initialize;
+ (id)getStatFilePath;
+ (unsigned int)currentCacheVersion;
+ (id)loadStat;
+ (void)saveStat:(id)arg1;
+ (id)getRelatedMemoryKV;
+ (void)resetTheAnalyse;
+ (id)getReportLog;
+ (void)analyseOneCompress:(BOOL)arg1 costTime:(double)arg2 beforeSize:(unsigned long long)arg3 afterSize:(unsigned long long)arg4;
+ (void)reportConvertResult;
- (id)getPBPropertyTable;
- (void)removeStat;
- (id)init;
- (void)setNeedConvertTask:(id)arg1;
- (id)needConvertImageInfo;
- (void)setNeedConvertImageInfo:(id)arg1;
- (long long)cacheVersion;
- (void)setCacheVersion:(long long)arg1;
- (BOOL)bBuildCacheOK;
- (void)setBBuildCacheOK:(BOOL)arg1;
- (void).cxx_destruct;
@end
