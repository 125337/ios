@interface FlutterCgiServiceCallback : NSObject
{
    weak_ptr<zidl::ZServerInvoker> server_invoker_; // +0x8
}
- (id)initWithCpp:(const void *)arg1;
- (void)onSendComplete:(unsigned long long)arg1 errorType:(long long)arg2 errorCode:(long long)arg3 data:(id)arg4;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

