@interface EcsFittingRoomVisionNativeManagerCallback : NSObject
{
    EcsFittingRoomVisionNativeManagerDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(EcsFittingRoomVisionNativeManagerDispatcherBridgeObjcImpl *)arg1;
- (void)onPrepareFullBodyImageComplete:(unsigned long long)arg1 errorCode:(int)arg2 modelPath:(id)arg3 width:(int)arg4 height:(int)arg5 rowBytes:(int)arg6 rgbaBytes:(id)arg7;
@end
