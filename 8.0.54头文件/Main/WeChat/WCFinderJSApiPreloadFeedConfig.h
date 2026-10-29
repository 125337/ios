@interface WCFinderJSApiPreloadFeedConfig : NSObject
{
    BOOL _forbidenPreload; // +0x8
    unsigned int _cacheMaxCount; // +0xc
    double _fetchInterval; // +0x10
    long long _batchCount; // +0x18
    long long _penddingMaxCount; // +0x20
}
- (id)init;
- (id)description;
- (BOOL)allowPreload;
- (BOOL)forbidenPreload;
- (void)setForbidenPreload:(BOOL)arg1;
- (double)fetchInterval;
- (void)setFetchInterval:(double)arg1;
- (long long)batchCount;
- (void)setBatchCount:(long long)arg1;
- (long long)penddingMaxCount;
- (void)setPenddingMaxCount:(long long)arg1;
- (unsigned int)cacheMaxCount;
- (void)setCacheMaxCount:(unsigned int)arg1;
@end

