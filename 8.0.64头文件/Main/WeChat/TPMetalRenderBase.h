@interface TPMetalRenderBase : NSObject <TPMetalRender>
{
    id <MTLDevice> _metalDevice; // +0x8
    id <MTLCommandQueue> _commandQueue; // +0x10
    id <MTLLibrary> _defaultLibrary; // +0x18
    id <MTLRenderPipelineState> _pipelineState; // +0x20
    id <MTLBuffer> _vertexBuffer; // +0x28
    id <MTLBuffer> _parametersBuffer; // +0x30
    int _offset; // +0x38
    VideoSharpenMetal * _MetalSharpenFilter; // +0x40
    id <MTLTexture> _sTexture; // +0x48
    int _yWidth; // +0x50
    int _yHeight; // +0x54
    VideoLucidMetal * _metalLucidFilter; // +0x58
    VideoClarityMetal * _metalClarityFilter; // +0x60
    VideoColorLUTMetal * _metalColorLUTFilter; // +0x68
    BOOL _colorManagementFlag; // +0x70
    BOOL _renderOptYuv420; // +0x71
    int _rendererClarityFlag; // +0x74
    int _rendererSharpenFlag; // +0x78
    int _rendererLucidFlag; // +0x7c
    int _rendererColorLUTFlag; // +0x80
    TPMetalColorHelper * _colorHelper; // +0x88
    NSString * _rendererColorLUTFilePath; // +0x90
}
- (id)initWithMetalDevice:(id)arg1 withColorManagement:(BOOL)arg2;
- (void)setSharpenFlag:(int)arg1;
- (void)setLucidFlag:(int)arg1;
- (void)setClarityFlag:(int)arg1;
- (void)setColorLUT:(int)arg1 filePath:(id)arg2;
- (BOOL)setupMetal;
- (BOOL)loadAssets;
- (BOOL)onMetalContextReady;
- (id)currentMetalDevice;
- (BOOL)prepareRender;
- (void)setRenderInfo:(TPFrame *)arg1;
- (void)render:(id)arg1;
- (void)setupMetalFilters:(TPFrame *)arg1;
- (BOOL)drawFrame:(TPFrame *)arg1 withDestination:(id)arg2;
- (void)setColorHelper:(id)arg1;
- (id)shaderSource;
- (id)vertexFunctionSourceName;
- (id)fragmentFunctionSourceName;
- (BOOL)setupTexturesForFrame:(TPFrame *)arg1;
- (void)uploadTexturesToCommandEncoder:(id)arg1;
- (id)getYTexture;
- (BOOL)colorManagementFlag;
- (void)setColorManagementFlag:(BOOL)arg1;
- (int)rendererClarityFlag;
- (void)setRendererClarityFlag:(int)arg1;
- (id)colorHelper;
- (int)rendererSharpenFlag;
- (void)setRendererSharpenFlag:(int)arg1;
- (int)rendererLucidFlag;
- (void)setRendererLucidFlag:(int)arg1;
- (BOOL)renderOptYuv420;
- (void)setRenderOptYuv420:(BOOL)arg1;
- (int)rendererColorLUTFlag;
- (void)setRendererColorLUTFlag:(int)arg1;
- (id)rendererColorLUTFilePath;
- (void)setRendererColorLUTFilePath:(id)arg1;
- (void).cxx_destruct;
@end
