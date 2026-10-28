@interface GCImageLoader : NSObject <MMImageLoaderObserver>
{
    id /* block */ _completionBlock; // +0x8
    GCImageLoader * _selfRef; // +0x10
}
- (void)loadImageUrl:(id)arg1 withComplectionBlock:(id /* block */)arg2;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)completeWithImage:(id)arg1;
- (void)dealloc;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id)selfRef;
- (void)setSelfRef:(id)arg1;
- (void).cxx_destruct;
@end
