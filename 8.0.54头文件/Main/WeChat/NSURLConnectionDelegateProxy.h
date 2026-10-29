@interface NSURLConnectionDelegateProxy : NSObject <NSURLConnectionDelegate, NSURLConnectionDataDelegate>
{
    id _target; // +0x8
}
+ (id)proxyWithTarget:(id)arg1;
- (id)initWithTarget:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (id)target;
- (void)setTarget:(id)arg1;
- (void).cxx_destruct;
@end

