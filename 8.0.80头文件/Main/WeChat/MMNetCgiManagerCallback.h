@interface MMNetCgiManagerCallback : NSObject
{
    MMNetCgiManagerDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(MMNetCgiManagerDispatcherBridgeObjcImpl *)arg1;
- (void)onRequestComplete:(unsigned long long)arg1 errorCode:(int)arg2 respData:(id)arg3;
@end
