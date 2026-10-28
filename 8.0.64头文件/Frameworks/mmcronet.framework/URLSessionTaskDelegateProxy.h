@interface URLSessionTaskDelegateProxy : NSProxy <NSURLSessionTaskDelegate>
{
    id <NSURLSessionDelegate> _delegate; // +0x8
    BOOL _respondsToDidFinishCollectingMetrics; // +0x10
}
- (id)initWithDelegate:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void).cxx_destruct;
@end
