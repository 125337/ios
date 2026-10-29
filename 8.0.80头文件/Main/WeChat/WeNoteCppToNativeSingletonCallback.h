@interface WeNoteCppToNativeSingletonCallback : NSObject
{
    WeNoteCppToNativeSingletonDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(WeNoteCppToNativeSingletonDispatcherBridgeObjcImpl *)arg1;
- (void)onAbandonWeNoteNativeHelperInstanceComplete:(unsigned long long)arg1;
@end
