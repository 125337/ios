@interface NSURLSessionDelegateProxy : NSObject <NSURLSessionDataDelegate>
{
    id _target; // +0x8
}
+ (id)proxyWithTarget:(id)arg1;
- (id)initWithTarget:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (id)target;
- (void)setTarget:(id)arg1;
- (void).cxx_destruct;
@end
