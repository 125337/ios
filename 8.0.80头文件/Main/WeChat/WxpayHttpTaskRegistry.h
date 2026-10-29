@interface WxpayHttpTaskRegistry : NSObject
{
    WxpayHttpCapabilityClient * _client; // +0x8
    NSLock * _lock; // +0x10
    NSMutableDictionary * _tasks; // +0x18
}
- (id)initWithClient:(id)arg1;
- (BOOL)startRequest:(id)arg1 callback:(id /* block */)arg2;
- (void)cancelRequestId:(id)arg1;
- (void).cxx_destruct;
@end
