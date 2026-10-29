@interface WCFinderPreloadInfo : NSObject
{
    unsigned long long _preloadVideoCount; // +0x8
    unsigned long long _preloadVideoThreadCount; // +0x10
    unsigned long long _preloadStrategyID; // +0x18
}
- (unsigned long long)preloadVideoCount;
- (void)setPreloadVideoCount:(unsigned long long)arg1;
- (unsigned long long)preloadVideoThreadCount;
- (void)setPreloadVideoThreadCount:(unsigned long long)arg1;
- (unsigned long long)preloadStrategyID;
- (void)setPreloadStrategyID:(unsigned long long)arg1;
@end

