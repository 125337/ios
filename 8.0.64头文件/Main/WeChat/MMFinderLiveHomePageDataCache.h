@interface MMFinderLiveHomePageDataCache : NSObject
{
    MMFinderLiveNavLiveStreamBaseModel * _model; // +0x8
    unsigned long long _cacheTimeSec; // +0x10
    unsigned long long _cacheMaxTtlSec; // +0x18
}
+ (id)cacheWithModel:(id)arg1;
- (BOOL)valid;
- (id)model;
- (void)setModel:(id)arg1;
- (unsigned long long)cacheTimeSec;
- (void)setCacheTimeSec:(unsigned long long)arg1;
- (unsigned long long)cacheMaxTtlSec;
- (void)setCacheMaxTtlSec:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
