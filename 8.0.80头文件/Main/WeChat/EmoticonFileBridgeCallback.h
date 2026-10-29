@interface EmoticonFileBridgeCallback : NSObject
{
    EmoticonFileBridgeDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(EmoticonFileBridgeDispatcherBridgeObjcImpl *)arg1;
- (void)onGetThumbImgComplete:(unsigned long long)arg1 success:(BOOL)arg2 path:(id)arg3;
- (void)onGetImgPathComplete:(unsigned long long)arg1 success:(BOOL)arg2 path:(id)arg3;
@end
