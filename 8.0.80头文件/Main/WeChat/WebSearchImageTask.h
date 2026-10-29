@interface WebSearchImageTask : MMObject <MMImageLoaderObserver>
{
    NSURL * _url; // +0x8
    id <WebSearchImageTaskDelegate> _delegate; // +0x10
}
- (id)initWithUrl:(id)arg1 andDelegate:(id)arg2;
- (void)dealloc;
- (void)asynDownloadImage;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void).cxx_destruct;
@end
