@interface IlinkStreamPlatformCallback : NSObject
{
    IlinkStreamPlatformDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(IlinkStreamPlatformDispatcherBridgeObjcImpl *)arg1;
- (void)onGetCurrentNetworkTypeComplete:(unsigned long long)arg1 currentNetworkType:(int)arg2;
@end
