@interface WCFinderLocalBackupConfig : NSObject
{
    BOOL _disableUnread; // +0x8
    double _fakeTopLoadingTime; // +0x10
    unsigned long long _topThreshold; // +0x18
    unsigned long long _bottomThreshold; // +0x20
    unsigned long long _minCacheCount; // +0x28
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (double)fakeTopLoadingTime;
- (void)setFakeTopLoadingTime:(double)arg1;
- (unsigned long long)topThreshold;
- (void)setTopThreshold:(unsigned long long)arg1;
- (unsigned long long)bottomThreshold;
- (void)setBottomThreshold:(unsigned long long)arg1;
- (unsigned long long)minCacheCount;
- (void)setMinCacheCount:(unsigned long long)arg1;
- (BOOL)disableUnread;
- (void)setDisableUnread:(BOOL)arg1;
@end
