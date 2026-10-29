@interface WCFinderMediaCacheConfig : NSObject
{
    BOOL _enable; // +0x8
    unsigned long long _configId; // +0x10
    unsigned long long _costLimit; // +0x18
    unsigned long long _countLimit; // +0x20
    double _lfuRatio; // +0x28
}
- (BOOL)enable;
- (void)setEnable:(BOOL)arg1;
- (unsigned long long)configId;
- (void)setConfigId:(unsigned long long)arg1;
- (unsigned long long)costLimit;
- (void)setCostLimit:(unsigned long long)arg1;
- (unsigned long long)countLimit;
- (void)setCountLimit:(unsigned long long)arg1;
- (double)lfuRatio;
- (void)setLfuRatio:(double)arg1;
@end
