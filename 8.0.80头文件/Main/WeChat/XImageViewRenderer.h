@interface XImageViewRenderer : NSObject
{
    unique_ptr<rfx::RfxImageView, std::default_delete<rfx::RfxImageView>> _imageView; // +0x8
    unique_ptr<rfx::SharpenFilter, std::default_delete<rfx::SharpenFilter>> _sharpenFilter; // +0x10
    unique_ptr<rfx::RaisrFilter, std::default_delete<rfx::RaisrFilter>> _raisrFilter; // +0x18
    Matrix4x4<float> _transform; // +0x20
    BOOL _useExternalTransform; // +0x60
    ObjectRef<xnet::rci::RciSwapChain> _swapChain; // +0x68
    CGColorSpace * _colorSpace; // +0x70
    ObjectRef<xnet::rci::RciVertexInput> _vrVertexInput; // +0x78
    ObjectRef<xnet::rci::RciBufferBlock> _vrPositionBlock; // +0x80
    ObjectRef<xnet::rci::RciBufferBlock> _vrUVBlock; // +0x88
    ObjectRef<rfx::RfxMaterial> _vrMaterial; // +0x90
    BOOL _flipX; // +0x98
    BOOL _flipY; // +0x99
    BOOL _enableSharpenForYUV; // +0x9a
    BOOL _enableSharpenFor1080P; // +0x9b
    BOOL _disableOpaqueRender; // +0x9c
    BOOL _enableAsyncResize; // +0x9d
    BOOL _isSupportHDR; // +0x9e
    BOOL _preferHdr; // +0x9f
    float _contentsScale; // +0xa0
    int _sharpenIntensity; // +0xa4
    unsigned int _raisrCapFlag; // +0xa8
    int _raisrCapIPhoneVersion; // +0xac
    int _raisrCapIPadVersion; // +0xb0
    unsigned int _raisrStrengthFlag; // +0xb4
    float _rotationInDegree; // +0xb8
    unsigned long long _contentMode; // +0xc0
    unsigned long long _sharpenMode; // +0xc8
    XImageView * _internalPreview; // +0xd0
    UIView * _lastView; // +0xd8
    CAMetalLayer * _previewLayer; // +0xe0
    NSString * _name; // +0xe8
    XImage * _lastImage; // +0xf0
    NSLock * _lock; // +0xf8
    XImageContext * _context; // +0x100
    CAEDRMetadata * _EDRMetadata; // +0x108
    CGRect _frame; // +0x110
}
+ (BOOL)isSupportHDR;
- (id)initWithName:(id)arg1;
- (id)initWithView:(id)arg1 name:(id)arg2;
- (void)dealloc;
- (void *)imageView;
- (void *)sharpenFilter;
- (void *)raisrFilter;
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
- (unsigned int)raisrCapFlag;
- (void)setRaisrCapFlag:(unsigned int)arg1;
- (int)raisrCapIPhoneVersion;
- (void)setRaisrCapIPhoneVersion:(int)arg1;
- (int)raisrCapIPadVersion;
- (void)setRaisrCapIPadVersion:(int)arg1;
- (unsigned int)raisrStrengthFlag;
- (void)setRaisrStrengthFlag:(unsigned int)arg1;
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
