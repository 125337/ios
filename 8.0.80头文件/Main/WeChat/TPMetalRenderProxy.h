@interface TPMetalRenderProxy : NSObject <TPMetalRender>
{
    BOOL _colorMangementFlag; // +0x8
    BOOL _waitingForMainThread; // +0x9
    BOOL _renderOptYuv420; // +0xa
    int _rendererSharpenFlag; // +0xc
    int _rendererLucidFlag; // +0x10
    int _rendererClarityFlag; // +0x14
    int _rendererColorLUTFlag; // +0x18
    ITPRendererInterruptCallback * _interruptCallback; // +0x20
    id <MTLDevice> _metalDevice; // +0x28
    id <TPMetalRender> _nv12Render; // +0x30
    id <TPMetalRender> _i420Render; // +0x38
    id <TPMetalRender> _rgbaRender; // +0x40
    TPMetalColorHelper * _colorHelper; // +0x48
    NSString * _rendererColorLUTFilePath; // +0x50
}
- (id)initWithMetalDevice:(id)arg1 withColorManagement:(BOOL)arg2;
- (void)setSharpenFlag:(int)arg1;
- (void)setLucidFlag:(int)arg1;
- (void)setClarityFlag:(int)arg1;
- (void)setColorLUT:(int)arg1 filePath:(id)arg2;
- (BOOL)drawFrame:(TPFrame *)arg1 withDestination:(id)arg2;
- (id)chooseRender:(TPFrame *)arg1;
- (void)createNV12Render;
- (void)createI420Render;
- (void)createRGBARender;
- (BOOL)prepareRender;
- (void)setColorHelper:(id)arg1;
- (void)waitForMainThread;
- (ITPRendererInterruptCallback *)interruptCallback;
- (void)setInterruptCallback:(ITPRendererInterruptCallback *)arg1;
- (id)metalDevice;
- (void)setMetalDevice:(id)arg1;
- (id)nv12Render;
- (void)setNv12Render:(id)arg1;
- (id)i420Render;
- (void)setI420Render:(id)arg1;
- (id)rgbaRender;
- (void)setRgbaRender:(id)arg1;
- (BOOL)colorMangementFlag;
- (void)setColorMangementFlag:(BOOL)arg1;
- (id)colorHelper;
- (BOOL)waitingForMainThread;
- (void)setWaitingForMainThread:(BOOL)arg1;
- (int)rendererSharpenFlag;
- (void)setRendererSharpenFlag:(int)arg1;
- (int)rendererLucidFlag;
- (void)setRendererLucidFlag:(int)arg1;
- (int)rendererClarityFlag;
- (void)setRendererClarityFlag:(int)arg1;
- (BOOL)renderOptYuv420;
- (void)setRenderOptYuv420:(BOOL)arg1;
- (int)rendererColorLUTFlag;
- (void)setRendererColorLUTFlag:(int)arg1;
- (id)rendererColorLUTFilePath;
- (void)setRendererColorLUTFilePath:(id)arg1;
- (void).cxx_destruct;
@end
