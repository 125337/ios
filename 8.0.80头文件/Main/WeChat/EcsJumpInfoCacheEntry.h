@interface EcsJumpInfoCacheEntry : NSObject
{
    EcsJumpInfo * _jumpInfo; // +0x8
    double _cacheTimeSecond; // +0x10
}
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (double)cacheTimeSecond;
- (void)setCacheTimeSecond:(double)arg1;
- (void).cxx_destruct;
@end
