@interface MMFinderNotifyGetMoreLiveRespCacheItem : NSObject
{
    BOOL _needDisplay; // +0x8
    FinderNotifyGetMoreLiveResponse * _resp; // +0x10
    double _cacheTimestamp; // +0x18
    NSString * _cacheKey; // +0x20
}
- (id)resp;
- (void)setResp:(id)arg1;
- (double)cacheTimestamp;
- (void)setCacheTimestamp:(double)arg1;
- (id)cacheKey;
- (void)setCacheKey:(id)arg1;
- (BOOL)needDisplay;
- (void)setNeedDisplay:(BOOL)arg1;
- (void).cxx_destruct;
@end
