@interface WCFinderFeedPreloadCacheInfo : NSObject <PBCoding>
{
    NSString * _tid; // +0x8
    NSString * _fileFormat; // +0x10
    NSString * _mediaURL; // +0x18
    unsigned long long _cacheTime; // +0x20
}
+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_fileFormat;
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_mediaURL;
+ (void)initialize;
- (id)getPBPropertyTable;
- (BOOL)isEqual:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)fileFormat;
- (void)setFileFormat:(id)arg1;
- (id)mediaURL;
- (void)setMediaURL:(id)arg1;
- (unsigned long long)cacheTime;
- (void)setCacheTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

