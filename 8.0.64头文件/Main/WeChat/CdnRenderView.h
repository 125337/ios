@interface CdnRenderView : CdnRenderViewBase <CdnRenderStatsDelegate>
{
    unsigned long long _renderFrameCount; // +0x80
    BOOL _isInitOpenglParam; // +0x88
    long long _format; // +0x90
    CGSize _bufSize; // +0x98
    CGRect _frameRect; // +0xa8
    float[8] _imageVertices; // +0xc8
    const float * _preferredConversion; // +0xe8
    const float * _preferredOffsetVec3; // +0xf0
    CGRect _frame; // +0xf8
    CALayer * _layer; // +0x118
    BOOL _sharedContextUsed; // +0x120
    BOOL _rendering; // +0x121
    __CVBuffer * _sampleBufferToRender; // +0x128
    unsigned long long _busyCount; // +0x130
    long long _startPlayTs; // +0x138
    unsigned int mQuadVAO; // +0x140
    unsigned int mQuadVBO; // +0x144
    float[2] _maskTexSizeVec2; // +0x148
    BOOL _ownMaskTexture; // +0x150
    BOOL _isBufferSetup; // +0x151
    BOOL _isRotating; // +0x152
    BOOL _isInitProgram; // +0x153
    BOOL _mReceivedFirstFrame; // +0x154
    BOOL _isCurrCustomRenderWithWeffect; // +0x155
    unsigned int _yuvYTextureS; // +0x158
    unsigned int _renderBuffer; // +0x15c
    unsigned int _frameBuffer; // +0x160
    unsigned int _yuvYTexture; // +0x164
    unsigned int _yuvUTexture; // +0x168
    unsigned int _yuvVTexture; // +0x16c
    unsigned int _maskTexture; // +0x170
    unsigned int _programHandle; // +0x174
    unsigned int _srcRGBATexture; // +0x178
    unsigned int _srcFboId; // +0x17c
    unsigned int _positionSlot; // +0x180
    unsigned int _matrixSlot; // +0x184
    unsigned int _texCoordSlot; // +0x188
    unsigned int _yuvTypeUniform; // +0x18c
    unsigned int _textureUniformY; // +0x190
    unsigned int _textureUniformU; // +0x194
    unsigned int _textureUniformV; // +0x198
    unsigned int _textureUniformMask; // +0x19c
    unsigned int _maskTexSizeUniform; // +0x1a0
    unsigned int _yuvConversionMatrixUniform; // +0x1a4
    unsigned int _yuvOffsetMatrixUniform; // +0x1a8
    unsigned int _mRawDataFrameType; // +0x1ac
    long long _renderMode; // +0x1b0
    id /* block */ _renderLogger; // +0x1b8
    CAEAGLLayer * _eaglLayer; // +0x1c0
    EAGLContext * _curContext; // +0x1c8
    glVideoSharpen * _sharpenFilter; // +0x1d0
    __CVOpenGLESTextureCache * _coreVideoTextureCache; // +0x1d8
    NSObject<OS_dispatch_queue> * _renderQueue; // +0x1e0
    MMWeEffectFrame * _currProcessedWeEffectFrame; // +0x1e8
    MMLiveTextureBuffer * _maskTexBuffer; // +0x1f0
    MMLiveRemoteCdnCustomRenderMetricsMonitor * _metricsMonitor; // +0x1f8
    id /* block */ _checkIsCurrTopPerfLevelCallback; // +0x200
    id /* block */ _increasePerfLevelCallback; // +0x208
    id /* block */ _decreasePerfLevelCallback; // +0x210
    id /* block */ _checkTimeRangeIsFullLoadCallback; // +0x218
    CGSize _srcRGBATexSize; // +0x220
    CGRect _normalizedDisplayRect; // +0x230
    CGRect _videoRect; // +0x250
}
+ (BOOL)checkInitParamValidWithRenderMode:(long long)arg1 renderScene:(long long)arg2;
+ (Class)layerClass;
+ (const float *)textureCoordinatesForRotation:(unsigned long long)arg1;
- (void)initMetricsReportData;
- (void)onRenderMonitorBegin;
- (void)onRenderMonitorEnd;
- (id)initRemoteViewWithFrame:(CGRect)arg1 renderMode:(long long)arg2 renderScene:(long long)arg3;
- (void)initVrParameter;
- (void)uninitVrParameter;
- (void)handleGesturesOperation:(id)arg1;
- (void)setTouchControlFlag:(BOOL)arg1;
- (void)setSensorControlFlag:(BOOL)arg1 keepLastSensor:(BOOL)arg2;
- (void)setCustomrenderMode:(long long)arg1;
- (void)layoutSubviews;
- (void)asyncLayout;
- (void)removeFromSuperview;
- (void)setup;
- (CGRect)getCurrFrameRect;
- (void)willRotate:(id)arg1;
- (void)didRotate:(id)arg1;
- (id)sharedContext;
- (void)dealloc;
- (void)sendNotifyEvent:(int)arg1;
- (void)sendNotifyEvent:(int)arg1 withParams:(id)arg2;
- (float)currentScale;
- (void)pauseMonitor;
- (void)resumeMonitor;
- (id)getCdnRenderContext;
- (void)configCdnWeEffectManager:(id)arg1;
- (void)updateNeedProcessByWeffect:(BOOL)arg1;
- (double)getWeVisMgrCreateTime;
- (void)setupSharedOpenGLAsync;
- (void)setupSharedOpenGL;
- (void)_setupSharedOpenGL;
- (void)setupLayer;
- (void)setupBufferOnComplete:(id /* block */)arg1;
- (void)setupTexture;
- (void)setupSrcRGBATexture:(CGSize)arg1;
- (void)setupSrcFboId;
- (void)setupQuadVertexStream;
- (void)deleteTexture;
- (unsigned int)compileShader:(id)arg1 withType:(unsigned int)arg2;
- (void)compileShaders;
- (id)getVertexShaderStr;
- (id)getFlagmentShaderStr;
- (void)compileShadersVr;
- (void)onRenderBegin;
- (void)onRenderEnd;
- (void)innerRenderFrame:(__CVBuffer *)arg1 yuvBytes:(char *)arg2 u:(char *)arg3 v:(char *)arg4 format:(long long)arg5 width:(int)arg6 height:(int)arg7;
- (void)renderFrame:(id)arg1;
- (void)renderFrame:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)renderCameraFrame:(__CVBuffer *)arg1 completionBlock:(id /* block */)arg2;
- (void)renderCameraFrame:(__CVBuffer *)arg1 maskTexBuff:(id)arg2 maskTexSize:(CGSize)arg3 completionBlock:(id /* block */)arg4;
- (void)_renderCameraFrame:(__CVBuffer *)arg1 maskTexBuff:(id)arg2 maskTexSize:(CGSize)arg3;
- (void)_invokeRenderFrame:(__CVBuffer *)arg1 maskTexBuff:(id)arg2 maskTexSize:(CGSize)arg3;
- (void)updateMaskTextureWithTexBuff:(id)arg1 texSize:(CGSize)arg2;
- (BOOL)checkEnableProcessByWeEffect;
- (BOOL)checkWeEffectFrameValid:(id)arg1;
- (void)_invokeRenderWeEffectFrame:(id)arg1;
- (void)innerRenderFrame:(__CVBuffer *)arg1;
- (void)pauseRenderLocalView;
- (void)renderTexBuff:(char *)arg1 texSize:(CGSize)arg2 completionBlock:(id /* block */)arg3;
- (void)_renderTexBuff:(char *)arg1 texSize:(CGSize)arg2;
- (void)innerRenderTexBuff:(char *)arg1 texSize:(CGSize)arg2;
- (void)renderTexture:(unsigned int)arg1 texSize:(CGSize)arg2 maskTexture:(unsigned int)arg3 completionBlock:(id /* block */)arg4;
- (void)_renderTexture:(unsigned int)arg1 texSize:(CGSize)arg2 maskTexture:(unsigned int)arg3;
- (void)innerRenderTexture:(unsigned int)arg1 width:(long long)arg2 height:(long long)arg3;
- (void)setEnhanceParam:(int)arg1;
- (void)convertYUVToRGBOutput:(BOOL)arg1 renderToSrcTexture:(BOOL)arg2;
- (void)onDraw;
- (void)onDrawSrcTexture;
- (void)onDrawVr;
- (void)onCdnRenderStatsMonitoredBlock:(unsigned long long)arg1;
- (void)onCdnRenderStatsFpsUpdate:(int)arg1;
- (BOOL)preProcessByWeffectBeforeRender;
- (BOOL)needRenderToSrcTexture;
- (BOOL)isCustomRenderWithWeEffect;
- (void)statisticFrame:(BOOL)arg1;
- (void)resetStats;
- (void)resetStatsInternal;
- (void)calculateVerticesWithSrcSize:(CGSize)arg1 dstSize:(CGSize)arg2 renderToSrcTexture:(BOOL)arg3;
- (unsigned long long)calculateRotation;
- (void)setRotation:(long long)arg1;
- (void)setRenderMode:(long long)arg1;
- (void)onAppDidEnterBackground:(id)arg1;
- (void)onAppWillEnterForeground:(id)arg1;
- (id)copyDataFromPixelBuffer:(__CVBuffer *)arg1;
- (void)copyPixelBuffer2dataPtr:(char * *)arg1 pixelBuffer:(__CVBuffer *)arg2 planeIndex:(int)arg3 planeWidth:(unsigned long long)arg4;
- (void)resetPitchAndYaw;
- (void)setMaxMinHalfFOVHor:(float)arg1 MaxVal:(float)arg2;
- (void)setMaxMinHalfFOVVer:(float)arg1 MaxVal:(float)arg2;
- (long long)renderMode;
- (CGRect)normalizedDisplayRect;
- (void)setNormalizedDisplayRect:(CGRect)arg1;
- (CGRect)videoRect;
- (void)setVideoRect:(CGRect)arg1;
- (id /* block */)renderLogger;
- (id)eaglLayer;
- (void)setEaglLayer:(id)arg1;
- (id)curContext;
- (void)setCurContext:(id)arg1;
- (id)sharpenFilter;
- (void)setSharpenFilter:(id)arg1;
- (unsigned int)yuvYTextureS;
- (void)setYuvYTextureS:(unsigned int)arg1;
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
- (BOOL)ownMaskTexture;
- (void)setOwnMaskTexture:(BOOL)arg1;
- (unsigned int)maskTexture;
- (void)setMaskTexture:(unsigned int)arg1;
- (unsigned int)programHandle;
- (void)setProgramHandle:(unsigned int)arg1;
- (unsigned int)srcRGBATexture;
- (void)setSrcRGBATexture:(unsigned int)arg1;
- (CGSize)srcRGBATexSize;
- (void)setSrcRGBATexSize:(CGSize)arg1;
- (unsigned int)srcFboId;
- (void)setSrcFboId:(unsigned int)arg1;
- (unsigned int)positionSlot;
- (void)setPositionSlot:(unsigned int)arg1;
- (unsigned int)matrixSlot;
- (void)setMatrixSlot:(unsigned int)arg1;
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
- (unsigned int)maskTexSizeUniform;
- (void)setMaskTexSizeUniform:(unsigned int)arg1;
- (unsigned int)yuvConversionMatrixUniform;
- (void)setYuvConversionMatrixUniform:(unsigned int)arg1;
- (unsigned int)yuvOffsetMatrixUniform;
- (void)setYuvOffsetMatrixUniform:(unsigned int)arg1;
- (unsigned int)mRawDataFrameType;
- (void)setMRawDataFrameType:(unsigned int)arg1;
- (__CVOpenGLESTextureCache *)coreVideoTextureCache;
- (void)setCoreVideoTextureCache:(__CVOpenGLESTextureCache *)arg1;
- (id)renderQueue;
- (void)setRenderQueue:(id)arg1;
- (BOOL)isBufferSetup;
- (void)setIsBufferSetup:(BOOL)arg1;
- (BOOL)isRotating;
- (void)setIsRotating:(BOOL)arg1;
- (BOOL)isInitProgram;
- (void)setIsInitProgram:(BOOL)arg1;
- (BOOL)mReceivedFirstFrame;
- (void)setMReceivedFirstFrame:(BOOL)arg1;
- (id)currProcessedWeEffectFrame;
- (void)setCurrProcessedWeEffectFrame:(id)arg1;
- (id)maskTexBuffer;
- (void)setMaskTexBuffer:(id)arg1;
- (BOOL)isCurrCustomRenderWithWeffect;
- (void)setIsCurrCustomRenderWithWeffect:(BOOL)arg1;
- (id)metricsMonitor;
- (void)setMetricsMonitor:(id)arg1;
- (id /* block */)checkIsCurrTopPerfLevelCallback;
- (void)setCheckIsCurrTopPerfLevelCallback:(id /* block */)arg1;
- (id /* block */)increasePerfLevelCallback;
- (void)setIncreasePerfLevelCallback:(id /* block */)arg1;
- (id /* block */)decreasePerfLevelCallback;
- (void)setDecreasePerfLevelCallback:(id /* block */)arg1;
- (id /* block */)checkTimeRangeIsFullLoadCallback;
- (void)setCheckTimeRangeIsFullLoadCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
