@interface KindaDeviceFrameDrawLoopCallback : NSObject <MMIDeviceFrameDrawLoopCallback>
{
    CADisplayLink * displayLink; // +0x8
    MMVoidI64Callback * frameDrawCallback; // +0x10
}
- (id)init;
- (void)startListenerImpl:(id)arg1;
- (void)stopListener;
- (void)onFrameDraw;
- (void)dealloc;
- (void).cxx_destruct;
@end

