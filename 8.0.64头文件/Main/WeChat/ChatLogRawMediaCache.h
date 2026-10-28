@interface ChatLogRawMediaCache : NSObject <PBCoding>
{
    NSMutableArray * _taskArray; // +0x8
    long long _cacheVersion; // +0x10
}
+ (void)PBArrayAdd_taskArray;
+ (void)PBArrayAdd_cacheVersion;
+ (void)initialize;
+ (id)getStatFilePath;
+ (unsigned int)currentCacheVersion;
+ (id)loadStat;
+ (void)saveStat:(id)arg1;
- (id)getPBPropertyTable;
- (void)removeStat;
- (id)init;
- (void)addRawTaskArray:(id)arg1;
- (void)addRawTask:(id)arg1;
- (id)taskArray;
- (void)setTaskArray:(id)arg1;
- (long long)cacheVersion;
- (void)setCacheVersion:(long long)arg1;
- (void).cxx_destruct;
@end
