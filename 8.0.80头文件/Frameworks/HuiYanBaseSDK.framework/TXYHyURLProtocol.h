@interface TXYHyURLProtocol : NSURLProtocol <NSStreamDelegate>
{
    NSMutableURLRequest * _curRequest; // +0x10
    NSRunLoop * _curRunLoop; // +0x18
}
+ (BOOL)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
- (void)startLoading;
- (void)stopLoading;
- (void)closeStream:(id)arg1;
- (void)startRequest;
- (void)handleResponse:(id)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (id)curRequest;
- (void)setCurRequest:(id)arg1;
- (id)curRunLoop;
- (void)setCurRunLoop:(id)arg1;
- (void).cxx_destruct;
@end
