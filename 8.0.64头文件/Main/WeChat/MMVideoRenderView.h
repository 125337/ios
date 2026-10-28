@interface MMVideoRenderView : UIView
{
    BOOL _isInBackground; // +0x8
    BOOL _isInitOpenglParam; // +0x9
    CGSize _bufSize; // +0x10
    CGRect _frameRect; // +0x20
    float[8] _imageVertices; // +0x40
    const float * _preferredConversion; // +0x60
    const float * _preferredOffsetVec3; // +0x68
    CGRect _frame; // +0x70
    CALayer * _layer; // +0x90
    unsigned long long _busyCount; // +0x98
    UIPinchGestureRecognizer * _pinchGestureRecognizer; // +0xa0
    UITapGestureRecognizer * _tapGestureRecognizer; // +0xa8
    MMCameraFocusSquare * _focusSquare; // +0xb0
    unsigned int _originYuvYTexture; // +0xb8
    BOOL _mirror; // +0xbc
    BOOL _renderable; // +0xbd
    BOOL _focusable; // +0xbe
    BOOL _enableGestures; // +0xbf
    BOOL _isInRotationAnimation; // +0xc0
    BOOL _isMainThreadLag2024T31Enabled; // +0xc1
    BOOL _disableOpaqueRender; // +0xc2
    int _videoBlockThreshold; // +0xc4
    int _streamType; // +0xc8
    int _blockIntervalMs; // +0xcc
    unsigned int _renderBuffer; // +0xd0
    unsigned int _frameBuffer; // +0xd4
    unsigned int _yuvYTexture; // +0xd8
    unsigned int _yuvUTexture; // +0xdc
    unsigned int _yuvVTexture; // +0xe0
    unsigned int _maskTexture; // +0xe4
    unsigned int _vertexShader; // +0xe8
    unsigned int _fragmentShader; // +0xec
    unsigned int _programHandle; // +0xf0
    unsigned int _positionSlot; // +0xf4
    unsigned int _texCoordSlot; // +0xf8
    unsigned int _yuvTypeUniform; // +0xfc
    unsigned int _textureUniformY; // +0x100
    unsigned int _textureUniformU; // +0x104
    unsigned int _textureUniformV; // +0x108
    unsigned int _textureUniformMask; // +0x10c
    unsigned int _yuvConversionMatrixUniform; // +0x110
    unsigned int _yuvOffsetMatrixUniform; // +0x114
    unsigned int _mRawDataFrameType; // +0x118
    long long _scene; // +0x120
    long long _renderMode; // +0x128
    long long _rotation; // +0x130
    id <MMVideoRenderViewDelegate> _delegate; // +0x138
    unsigned long long _lastBlockDuration; // +0x140
    id /* block */ _onRenderEvent; // +0x148
    MMOpenGLContext * _context; // +0x150
    CAEAGLLayer * _eaglLayer; // +0x158
    EAGLContext * _curContext; // +0x160
    CGRect _normalizedDisplayRect; // +0x168
    CGRect _videoRect; // +0x188
}
+ (Class)layerClass;
+ (const float *)textureCoordinatesForRotation:(unsigned long long)arg1;
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (void)removeFromSuperview;
- (void)setup;
- (void)dealloc;
- (void)cleanup;
- (void)setEnableGestures:(BOOL)arg1;
- (void)setDisableOpaqueRender:(BOOL)arg1;
- (void)setupLayer;
- (void)setupRenderBuffer;
- (void)setupFrameBuffer;
- (void)setupTexture;
- (unsigned int)compileShader:(id)arg1 withType:(unsigned int)arg2;
- (void)compileShaders;
- (id)getVertexShaderStr;
- (id)getFlagmentShaderStr;
- (void)renderWeEffectFrame:(id)arg1;
- (void)renderTexture:(unsigned int)arg1 width:(long long)arg2 height:(long long)arg3 maskTexture:(unsigned int)arg4;
- (void)innerRenderTexture:(unsigned int)arg1 width:(long long)arg2 height:(long long)arg3 maskTexture:(unsigned int)arg4;
- (void)convertYUVToRGBOutput;
- (void)calculateVertices;
- (unsigned long long)calculateRotation;
- (void)setRenderable:(BOOL)arg1;
- (void)setRenderMode:(long long)arg1;
- (void)setRotation:(long long)arg1;
- (CGRect)getCurrFrameRect;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)handlePinch:(id)arg1;
- (void)setFocusable:(BOOL)arg1;
- (void)initFocusView;
- (void)deallocFocusView;
- (void)focusTap:(id)arg1;
- (void)focusAtPoint:(CGPoint)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (long long)renderMode;
- (long long)rotation;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)mirror;
- (void)setMirror:(BOOL)arg1;
- (BOOL)renderable;
- (BOOL)focusable;
- (int)videoBlockThreshold;
- (void)setVideoBlockThreshold:(int)arg1;
- (int)streamType;
- (void)setStreamType:(int)arg1;
- (int)blockIntervalMs;
- (void)setBlockIntervalMs:(int)arg1;
- (CGSize)bufSize;
- (unsigned long long)lastBlockDuration;
- (BOOL)enableGestures;
- (BOOL)isInRotationAnimation;
- (void)setIsInRotationAnimation:(BOOL)arg1;
- (BOOL)isMainThreadLag2024T31Enabled;
- (void)setIsMainThreadLag2024T31Enabled:(BOOL)arg1;
- (id /* block */)onRenderEvent;
- (void)setOnRenderEvent:(id /* block */)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (CGRect)normalizedDisplayRect;
- (void)setNormalizedDisplayRect:(CGRect)arg1;
- (BOOL)disableOpaqueRender;
- (CGRect)videoRect;
- (void)setVideoRect:(CGRect)arg1;
- (id)eaglLayer;
- (void)setEaglLayer:(id)arg1;
- (id)curContext;
- (void)setCurContext:(id)arg1;
- (unsigned int)renderBuffer;
- (void)setRenderBuffer:(unsigned int)arg1;
- (unsigned int)frameBuffer;
- (void)setFrameBuffer:(unsigned int)arg1;
- (unsigned int)yuvYTexture;
- (void)setYuvYTexture:(unsigned int)arg1;
- (unsigned int)yuvUTexture;
- (void)setYuvUTexture:(unsigned int)arg1;
- (unsigned int)yuvVTexture;
- (void)setYuvVTexture:(unsigned int)arg1;
- (unsigned int)maskTexture;
- (void)setMaskTexture:(unsigned int)arg1;
- (unsigned int)vertexShader;
- (void)setVertexShader:(unsigned int)arg1;
- (unsigned int)fragmentShader;
- (void)setFragmentShader:(unsigned int)arg1;
- (unsigned int)programHandle;
- (void)setProgramHandle:(unsigned int)arg1;
- (unsigned int)positionSlot;
- (void)setPositionSlot:(unsigned int)arg1;
- (unsigned int)texCoordSlot;
- (void)setTexCoordSlot:(unsigned int)arg1;
- (unsigned int)yuvTypeUniform;
- (void)setYuvTypeUniform:(unsigned int)arg1;
- (unsigned int)textureUniformY;
- (void)setTextureUniformY:(unsigned int)arg1;
- (unsigned int)textureUniformU;
- (void)setTextureUniformU:(unsigned int)arg1;
- (unsigned int)textureUniformV;
- (void)setTextureUniformV:(unsigned int)arg1;
- (unsigned int)textureUniformMask;
- (void)setTextureUniformMask:(unsigned int)arg1;
- (unsigned int)yuvConversionMatrixUniform;
- (void)setYuvConversionMatrixUniform:(unsigned int)arg1;
- (unsigned int)yuvOffsetMatrixUniform;
- (void)setYuvOffsetMatrixUniform:(unsigned int)arg1;
- (unsigned int)mRawDataFrameType;
- (void)setMRawDataFrameType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
