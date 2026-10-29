@interface TPMTLGeneralFrameRenderer : NSObject
{
    id <TPMTLFrameRenderer> _renderer; // +0x8
    id <MTLDevice> _mtlDevice; // +0x10
}
- (id)initWithMetalDevice:(id)arg1;
- (id)getRendererByFrame:(TPFrame *)arg1;
- (BOOL)render:(TPFrame *)arg1 destination:(id)arg2;
- (id)renderer;
- (void)setRenderer:(id)arg1;
- (id)mtlDevice;
- (void)setMtlDevice:(id)arg1;
- (void).cxx_destruct;
@end
