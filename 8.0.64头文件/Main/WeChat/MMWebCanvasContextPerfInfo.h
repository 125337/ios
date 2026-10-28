@interface MMWebCanvasContextPerfInfo : NSObject
{
    BOOL _preload; // +0x8
    unsigned long long _launchTs; // +0x10
    unsigned long long _preloadTs; // +0x18
}
- (BOOL)preload;
- (void)setPreload:(BOOL)arg1;
- (unsigned long long)launchTs;
- (void)setLaunchTs:(unsigned long long)arg1;
- (unsigned long long)preloadTs;
- (void)setPreloadTs:(unsigned long long)arg1;
@end
