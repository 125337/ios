@interface OpenVoiceOpenglesContext : MMObject
{
    char *[3] m_pData; // +0x8
    int srcWidth; // +0x20
    int srcHeight; // +0x24
    int dstWidth; // +0x28
    int dstHeight; // +0x2c
    BOOL sizeChanged; // +0x30
    unsigned int _colorRenderBuffer; // +0x34
    unsigned int _YPlanarTexture; // +0x38
    unsigned int _UPlanarTexture; // +0x3c
    unsigned int _VPlanarTexture; // +0x40
    unsigned int _UVPlanarTexture; // +0x44
    unsigned int _textureUniformY; // +0x48
    unsigned int _textureUniformU; // +0x4c
    unsigned int _textureUniformV; // +0x50
    unsigned int _textureUniformUV; // +0x54
    unsigned int _positionSlot; // +0x58
    unsigned int _texCoordSlot; // +0x5c
    unsigned int rotateUniform; // +0x60
    unsigned int framebuffer; // +0x64
    unsigned int vertexBuffer; // +0x68
    unsigned int indexBuffer; // +0x6c
    float _degrees; // +0x70
    BOOL _full; // +0x74
    float _viewWidth; // +0x78
    float _viewHeight; // +0x7c
    BOOL _hasInit; // +0x80
    BOOL _isNV12; // +0x81
    BOOL _isMirrored; // +0x82
    BOOL needUpdateParam; // +0x83
    int notInitErrorCnt; // +0x84
    BOOL m_deleteFlag; // +0x88
    BOOL _fitView; // +0x89
    int _objectFit; // +0x8c
    CAEAGLLayer * _eaglLayer; // +0x90
    EAGLContext * _context; // +0x98
    id <OpenVoiceOpenglesContextDelegate> _m_delegate; // +0xa0
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupELGS:(id)arg1;
- (void)setupELGS:(id)arg1 IsNV12:(BOOL)arg2 IsMirrored:(BOOL)arg3;
- (void)internalSetupELGS:(id)arg1 IsNV12:(BOOL)arg2 IsMirrored:(BOOL)arg3;
- (void)deleteELGS;
- (void)changeFrame:(CGRect)arg1;
- (void)renderImage:(char *)arg1 Swidth:(unsigned int)arg2 Sheight:(unsigned int)arg3 Dwidth:(unsigned int)arg4 Dheight:(unsigned int)arg5;
- (void)renderImage2:(char * *)arg1 Swidth:(unsigned int)arg2 Sheight:(unsigned int)arg3 Dwidth:(unsigned int)arg4 Dheight:(unsigned int)arg5;
- (void)renderImage:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3;
- (void)renderImage:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3 FitView:(BOOL)arg4;
- (void)renderImage:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3 objectFit:(int)arg4;
- (void)setupLayer:(id)arg1;
- (void)setupContext;
- (void)setupIndices;
- (void)setupRenderBuffer;
- (void)setupFrameBuffer;
- (unsigned int)textureYUV:(char *)arg1 widthType:(int)arg2 heightType:(int)arg3;
- (unsigned int)textureYUVNV12:(char *)arg1 widthType:(int)arg2 heightType:(int)arg3;
- (void)updateTextureYUV:(char *)arg1 widthType:(int)arg2 heightType:(int)arg3 texName:(unsigned int)arg4;
- (void)updateTextureYUVNV12:(char *)arg1 widthType:(int)arg2 heightType:(int)arg3 texName:(unsigned int)arg4;
- (void)updateRenderParam:(BOOL)arg1;
- (void)drawFrame:(BOOL)arg1;
- (unsigned int)compileShader:(id)arg1 withType:(unsigned int)arg2;
- (void)resetMirrored:(BOOL)arg1;
- (void)setDegrees:(float)arg1;
- (float)getDegrees;
- (BOOL)isUnmatch;
- (void)applyRotation:(float)arg1;
- (void)compileShaders;
- (id)_eaglLayer;
- (void)set_eaglLayer:(id)arg1;
- (id)_context;
- (void)set_context:(id)arg1;
- (BOOL)m_deleteFlag;
- (void)setM_deleteFlag:(BOOL)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)fitView;
- (void)setFitView:(BOOL)arg1;
- (int)objectFit;
- (void)setObjectFit:(int)arg1;
- (void).cxx_destruct;
@end

