@interface WCFinderDynamicIconFetchSingleTask : WCFinderDynamicIconFetchTask <MMImageLoaderObserver>
{
    WCFinderDynamicIconFetchConfig * _config; // +0x20
    NSString * _dynamicKey; // +0x28
}
+ (id)taskWithConfig:(id)arg1;
+ (void)saveSVGData:(id)arg1 urlString:(id)arg2;
- (void)dealloc;
- (void)startProcess;
- (id)loadCacheImage;
- (id)imageFromData:(id)arg1 isSVG:(BOOL *)arg2;
- (id)renderNormalImage:(id)arg1;
- (id)imageWithSVGData:(id)arg1;
- (BOOL)isFinish;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)dynamicKey;
- (void)setDynamicKey:(id)arg1;
- (void).cxx_destruct;
@end
