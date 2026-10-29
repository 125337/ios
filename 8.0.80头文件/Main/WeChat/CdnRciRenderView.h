@interface CdnRciRenderView : CdnRenderViewBase <CdnRenderStatsDelegate>
{
    unsigned long long _renderFrameCount; // +0x40
    CGRect _frameRect; // +0x48
    CGRect _frame; // +0x68
    BOOL _rendering; // +0x88
    __CVBuffer * _sampleBufferToRender; // +0x90
    unsigned long long _busyCount; // +0x98
    long long _startPlayTs; // +0xa0
    float _currentScale; // +0xa8
    CGSize _bufSize; // +0xb0
    BOOL _isBufferSetup; // +0xc0
    BOOL _isRotating; // +0xc1
    BOOL _isInitProgram; // +0xc2
    BOOL _mReceivedFirstFrame; // +0xc3
    float _rotationInDegree; // +0xc4
    unsigned int _mRawDataFrameType; // +0xc8
    unsigned long long _contentMode; // +0xd0
    id /* block */ _renderLogger; // +0xd8
    XImageViewRenderer * _renderer; // +0xe0
    CGRect _videoRect; // +0xe8
}
+ (BOOL)checkInitParamValidWithRenderMode:(long long)arg1 renderScene:(long long)arg2;
- (id)initRemoteViewWithFrame:(CGRect)arg1 renderMode:(long long)arg2 renderScene:(long long)arg3;
- (void)dealloc;
- (void)initVrParameter;
- (void)uninitVrParameter;
- (void)handleGesturesOperation:(id)arg1;
- (void)setTouchControlFlag:(BOOL)arg1;
- (void)setSensorControlFlag:(BOOL)arg1 keepLastSensor:(BOOL)arg2;
- (void)setCustomrenderMode:(long long)arg1;
- (void)layoutSubviews;
- (void)setFrame:(CGRect)arg1;
- (void)asyncLayout;
- (void)removeFromSuperview;
- (void)setup;
- (void)willRotate:(id)arg1;
- (void)didRotate:(id)arg1;
- (void)sendNotifyEvent:(int)arg1;
- (void)sendNotifyEvent:(int)arg1 withParams:(id)arg2;
- (CGSize)bufSize;
- (float)currentScale;
- (void)pause;
- (void)resume;
- (void)configCdnWeEffectManager:(id)arg1;
- (void)updateNeedProcessByWeffect:(BOOL)arg1;
- (BOOL)checkEnableProcessByWeEffect;
- (void)renderFrame:(id)arg1;
- (void)renderFrame:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_renderFrame:(__CVBuffer *)arg1;
- (void)invokeRenderFrame:(__CVBuffer *)arg1;
- (BOOL)checkWeEffectFrameValid:(id)arg1;
- (void)onRenderBegin;
- (void)onRenderEnd:(id)arg1;
- (void)innerRenderRGBAImage:(id)arg1;
- (void)innerRenderFrame:(__CVBuffer *)arg1;
- (void)pauseRenderLocalView;
- (void)setEnhanceParam:(int)arg1;
- (void)onCdnRenderStatsMonitoredBlock:(unsigned long long)arg1;
- (void)onCdnRenderStatsFpsUpdate:(int)arg1;
- (void)statisticFrame:(BOOL)arg1;
- (void)resetStats;
- (void)resetStatsInternal;
- (void)setRotation:(long long)arg1;
- (void)setContentMode:(unsigned long long)arg1;
- (void)onAppDidEnterBackground:(id)arg1;
- (void)onAppWillEnterForeground:(id)arg1;
- (void)resetPitchAndYaw;
- (void)setMaxMinHalfFOVHor:(float)arg1 MaxVal:(float)arg2;
- (void)setMaxMinHalfFOVVer:(float)arg1 MaxVal:(float)arg2;
- (void)pauseMonitor;
- (void)resumeMonitor;
- (id)getCdnRenderContext;
- (unsigned long long)contentMode;
- (float)rotationInDegree;
- (void)setRotationInDegree:(float)arg1;
- (CGRect)videoRect;
- (void)setVideoRect:(CGRect)arg1;
- (id /* block */)renderLogger;
- (unsigned int)mRawDataFrameType;
- (void)setMRawDataFrameType:(unsigned int)arg1;
- (BOOL)isBufferSetup;
- (void)setIsBufferSetup:(BOOL)arg1;
- (BOOL)isRotating;
- (void)setIsRotating:(BOOL)arg1;
- (BOOL)isInitProgram;
- (void)setIsInitProgram:(BOOL)arg1;
- (BOOL)mReceivedFirstFrame;
- (void)setMReceivedFirstFrame:(BOOL)arg1;
- (id)renderer;
- (void)setRenderer:(id)arg1;
- (void).cxx_destruct;
@end
