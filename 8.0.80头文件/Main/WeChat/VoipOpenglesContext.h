@interface VoipOpenglesContext : MMObject
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
    unsigned int vertexArray; // +0x6c
    unsigned int indexBuffer; // +0x70
    unsigned int programHandle; // +0x74
    float _degrees; // +0x78
    BOOL _full; // +0x7c
    float _viewWidth; // +0x80
    float _viewHeight; // +0x84
    BOOL _hasInit; // +0x88
    BOOL _isNV12; // +0x89
    BOOL _isMirrored; // +0x8a
    BOOL needUpdateParam; // +0x8b
    int notInitErrorCnt; // +0x8c
    int _useSharpenFilter; // +0x90
    BOOL _enable1080pSharpen; // +0x94
    long long _sharpenMode; // +0x98
    BOOL m_deleteFlag; // +0xa0
    BOOL _isApplicationStateActive; // +0xa1
    BOOL _fitView; // +0xa2
    CAEAGLLayer * _eaglLayer; // +0xa8
    EAGLContext * _context; // +0xb0
    id <VoipOpenglesContextDelegate> _m_delegate; // +0xb8
    glVideoSharpen * _sharpenFilter; // +0xc0
}
- (float)defaultDegrees;
- (id)init;
- (void)changeFrame:(CGRect)arg1;
- (void)setSharpenFilter:(int)arg1 sharpenMode:(long long)arg2 enable1080pSharpen:(int)arg3;
- (void)setupELGS:(id)arg1;
- (void)setupELGS:(id)arg1 IsNV12:(BOOL)arg2 IsMirrored:(BOOL)arg3;
- (void)internalSetupELGS:(id)arg1 IsNV12:(BOOL)arg2 IsMirrored:(BOOL)arg3;
- (void)deleteELGS;
- (void)renderImage:(char *)arg1 Swidth:(unsigned int)arg2 Sheight:(unsigned int)arg3 Dwidth:(unsigned int)arg4 Dheight:(unsigned int)arg5;
- (void)renderImage2:(char * *)arg1 Swidth:(unsigned int)arg2 Sheight:(unsigned int)arg3 Dwidth:(unsigned int)arg4 Dheight:(unsigned int)arg5;
- (void)renderImage:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3;
- (void)renderImage:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3 FitView:(BOOL)arg4;
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
- (void)uploadData;
- (void)renderToScreen:(unsigned int)arg1;
- (void)drawFrameWithSharpenFilter:(BOOL)arg1;
- (unsigned int)compileShader:(id)arg1 withType:(unsigned int)arg2;
- (void)resetMirrored:(BOOL)arg1;
- (void)setDegrees:(float)arg1;
- (float)getDegrees;
- (void)applyRotation:(float)arg1;
- (void)compileShaders;
- (id)snapshot;
- (id)_eaglLayer;
- (void)set_eaglLayer:(id)arg1;
- (id)_context;
- (void)set_context:(id)arg1;
- (BOOL)m_deleteFlag;
- (void)setM_deleteFlag:(BOOL)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)sharpenFilter;
- (void)setSharpenFilter:(id)arg1;
- (BOOL)isApplicationStateActive;
- (void)setIsApplicationStateActive:(BOOL)arg1;
- (BOOL)fitView;
- (void)setFitView:(BOOL)arg1;
- (void).cxx_destruct;
@end
