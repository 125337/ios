@interface MJVolumeAnalyzer : NSObject
- (id)init;
- (void)dealloc;
- (void)analyzeWithContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)analyzeImplWithClipSegment:(id)arg1 completionHandler:(id /* block */)arg2;
@end

