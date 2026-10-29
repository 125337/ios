@interface FlutterCgiServiceCallback : NSObject
{
    FlutterCgiServiceDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(FlutterCgiServiceDispatcherBridgeObjcImpl *)arg1;
- (void)onSendComplete:(unsigned long long)arg1 errorType:(long long)arg2 errorCode:(long long)arg3 data:(id)arg4;
@end
