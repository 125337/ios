@interface XImageViewRenderer : NSObject
{
    unique_ptr<rfx::RfxImageView, std::default_delete<rfx::RfxImageView>> _imageView; // +0x8
    unique_ptr<rfx::SharpenFilter, std::default_delete<rfx::SharpenFilter>> _sharpenFilter; // +0x10
    Matrix4x4<float> _transform; // +0x18
    BOOL _useExternalTransform; // +0x58
    ObjectRef<xnet::rci::RciSwapChain> _swapChain; // +0x60
    CGColorSpace * _colorSpace; // +0x68
    ObjectRef<xnet::rci::RciVertexInput> _vrVertexInput; // +0x70
    ObjectRef<xnet::rci::RciBufferBlock> _vrPositionBlock; // +0x78
    ObjectRef<xnet::rci::RciBufferBlock> _vrUVBlock; // +0x80
    ObjectRef<rfx::RfxMaterial> _vrMaterial; // +0x88
    RfxPushConstantID _vrTransformID; // +0x90
    RfxPushConstantID _vrYuvToRGBID; // +0xa0
    RfxPushConstantID _vrColorOffsetID; // +0xb0
    BOOL _flipX; // +0xc0
    BOOL _flipY; // +0xc1
    BOOL _enableSharpenForYUV; // +0xc2
    BOOL _enableSharpenFor1080P; // +0xc3
    BOOL _disableOpaqueRender; // +0xc4
    BOOL _enableAsyncResize; // +0xc5
    BOOL _isSupportHDR; // +0xc6
    BOOL _preferHdr; // +0xc7
    float _contentsScale; // +0xc8
    int _sharpenIntensity; // +0xcc
    float _rotationInDegree; // +0xd0
    unsigned long long _contentMode; // +0xd8
    unsigned long long _sharpenMode; // +0xe0
    XImageView * _internalPreview; // +0xe8
    UIView * _lastView; // +0xf0
    CAMetalLayer * _previewLayer; // +0xf8
    NSString * _name; // +0x100
    XImage * _lastImage; // +0x108
    NSLock * _lock; // +0x110
    XImageContext * _context; // +0x118
    CAEDRMetadata * _EDRMetadata; // +0x120
    CGRect _frame; // +0x128
}
+ (BOOL)isSupportHDR;
- (id)initWithName:(id)arg1;
- (id)initWithView:(id)arg1 name:(id)arg2;
- (void)dealloc;
- (void *)imageView;
- (void *)sharpenFilter;
- (void *)vrMaterial;
- (BOOL)createVrVertexInput:(int)arg1;
- (ObjectRef<xnet::rci::RciSwapChain>)createSwapChain:(CGSize)arg1;
- (BOOL)createSwapChainIfNeed:(id)arg1;
- (void)waitUntilFinish;
- (void)resize:(CGSize)arg1;
- (BOOL)displayImage:(id)arg1 uImage:(id)arg2 vImage:(id)arg3;
- (BOOL)displayImage:(id)arg1 uvImage:(id)arg2;
- (BOOL)displayImage:(id)arg1;
- (BOOL)displayVrImage:(id)arg1 uvImage:(id)arg2 position:(float *)arg3 uv:(float *)arg4 vertexCount:(int)arg5;
- (BOOL)displayVrImage:(id)arg1 uImage:(id)arg2 vImage:(id)arg3;
- (void)setTransform:(float *)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setEDRMetadata:(id)arg1;
- (void)setColorSpace:(CGColorSpace *)arg1;
- (id)overlayView;
- (id)preview;
- (id)currentImage;
- (void)rotateInDegree:(float)arg1;
- (void)renderView:(id)arg1;
- (void)addToView:(id)arg1;
- (void)insertToView:(id)arg1 index:(unsigned long long)arg2;
- (void)setPreferHdr:(BOOL)arg1;
- (void)setContentMode:(unsigned long long)arg1;
- (void)setDisableOpaqueRender:(BOOL)arg1;
- (BOOL)flipX;
- (void)setFlipX:(BOOL)arg1;
- (BOOL)flipY;
- (void)setFlipY:(BOOL)arg1;
- (unsigned long long)contentMode;
- (CGRect)frame;
- (float)contentsScale;
- (void)setContentsScale:(float)arg1;
- (BOOL)enableSharpenForYUV;
- (void)setEnableSharpenForYUV:(BOOL)arg1;
- (unsigned long long)sharpenMode;
- (void)setSharpenMode:(unsigned long long)arg1;
- (int)sharpenIntensity;
- (void)setSharpenIntensity:(int)arg1;
- (BOOL)enableSharpenFor1080P;
- (void)setEnableSharpenFor1080P:(BOOL)arg1;
- (BOOL)disableOpaqueRender;
- (BOOL)enableAsyncResize;
- (void)setEnableAsyncResize:(BOOL)arg1;
- (id)internalPreview;
- (void)setInternalPreview:(id)arg1;
- (float)rotationInDegree;
- (void)setRotationInDegree:(float)arg1;
- (id)lastView;
- (void)setLastView:(id)arg1;
- (id)previewLayer;
- (void)setPreviewLayer:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)lastImage;
- (void)setLastImage:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (BOOL)isSupportHDR;
- (void)setIsSupportHDR:(BOOL)arg1;
- (BOOL)preferHdr;
- (id)EDRMetadata;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
