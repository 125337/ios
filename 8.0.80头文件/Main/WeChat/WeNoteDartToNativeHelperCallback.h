@interface WeNoteDartToNativeHelperCallback : NSObject
{
    WeNoteDartToNativeHelperDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(WeNoteDartToNativeHelperDispatcherBridgeObjcImpl *)arg1;
- (void)onFirstPaintFinishComplete:(unsigned long long)arg1;
@end
