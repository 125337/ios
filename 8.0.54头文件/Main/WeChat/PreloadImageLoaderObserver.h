@interface PreloadImageLoaderObserver : NSObject <MMImageLoaderObserver>
{
    NSMutableArray * _preloadImages; // +0x8
    LiteAppStore * _store; // +0x10
}
- (id)initWithPreloadImages:(id)arg1 store:(id)arg2;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)OnImageLoad:(id)arg1 success:(BOOL)arg2;
- (void).cxx_destruct;
@end

