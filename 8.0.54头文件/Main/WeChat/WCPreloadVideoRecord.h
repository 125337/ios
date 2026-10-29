@interface WCPreloadVideoRecord : NSObject <PBCoding>
{
    BOOL _bNonAutoClean; // +0x8
    BOOL _bPreloadCompleted; // +0x9
    unsigned int _accessTime; // +0xc
    unsigned int _hasPreloadSize; // +0x10
    unsigned int _configPreloadPercent; // +0x14
    unsigned int _totalSize; // +0x18
    NSString * _tid; // +0x20
    NSString * _mid; // +0x28
    NSString * _url; // +0x30
}
+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_mid;
+ (void)PBArrayAdd_accessTime;
+ (void)PBArrayAdd_hasPreloadSize;
+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_configPreloadPercent;
+ (void)PBArrayAdd_bNonAutoClean;
+ (void)PBArrayAdd_totalSize;
+ (void)PBArrayAdd_bPreloadCompleted;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)pathForPreloadVideo;
- (id)genTempPath;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)mid;
- (void)setMid:(id)arg1;
- (unsigned int)accessTime;
- (void)setAccessTime:(unsigned int)arg1;
- (unsigned int)hasPreloadSize;
- (void)setHasPreloadSize:(unsigned int)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (unsigned int)configPreloadPercent;
- (void)setConfigPreloadPercent:(unsigned int)arg1;
- (BOOL)bNonAutoClean;
- (void)setBNonAutoClean:(BOOL)arg1;
- (unsigned int)totalSize;
- (void)setTotalSize:(unsigned int)arg1;
- (BOOL)bPreloadCompleted;
- (void)setBPreloadCompleted:(BOOL)arg1;
- (void).cxx_destruct;
@end

