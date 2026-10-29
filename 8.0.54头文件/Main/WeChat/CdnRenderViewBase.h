@interface CdnRenderViewBase : UIView <CdnRenderViewInterface>
{
    long long _customrenderMode; // +0x8
    long long _renderScene; // +0x10
    BOOL _mirror; // +0x18
    BOOL _renderable; // +0x19
    int _streamType; // +0x1c
    CGSize _bufSize; // +0x20
    float _currentScale; // +0x30
    long long _rotation; // +0x38
    BOOL _maskTexCoordInYReverse; // +0x40
    BOOL _maskTextureFilter; // +0x41
    BOOL _needProcessByWeffect; // +0x42
    id <CdnNotifyDelegate> _notifyDelegate; // +0x48
    id /* block */ _layoutSubviewCallBack; // +0x50
    CdnRenderStats * _renderStats; // +0x58
    VRProjectionModel * _mVRProjectionModel; // +0x60
    RotationControl * _mRotationControl; // +0x68
    ScaleControl * _mScaleControl; // +0x70
    MMWeEffectManager * _weeffectManager; // +0x78
}
+ (BOOL)checkInitParamValidWithRenderMode:(long long)arg1 renderScene:(long long)arg2;
- (long long)fps;
- (void)setRotation:(long long)arg1;
- (float)currentScale;
- (long long)currentRotation;
- (void)renderFrame:(id)arg1;
- (void)renderFrame:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)handleGesturesOperation:(id)arg1;
- (id)initRemoteViewWithFrame:(CGRect)arg1 renderMode:(long long)arg2 renderScene:(long long)arg3;
- (void)pauseMonitor;
- (void)resetPitchAndYaw;
- (void)resetStats;
- (void)resumeMonitor;
- (void)setCustomrenderMode:(long long)arg1;
- (void)setEnhanceParam:(int)arg1;
- (void)setMaxMinHalfFOVHor:(float)arg1 MaxVal:(float)arg2;
- (void)setMaxMinHalfFOVVer:(float)arg1 MaxVal:(float)arg2;
- (void)setSensorControlFlag:(BOOL)arg1 keepLastSensor:(BOOL)arg2;
- (void)setTouchControlFlag:(BOOL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getCdnRenderContext;
- (void)configCdnWeEffectManager:(id)arg1;
- (void)updateNeedProcessByWeffect:(BOOL)arg1;
- (double)getWeVisMgrCreateTime;
- (void)switchPrintRenderFps:(BOOL)arg1;
- (id)notifyDelegate;
- (void)setNotifyDelegate:(id)arg1;
- (id /* block */)layoutSubviewCallBack;
- (void)setLayoutSubviewCallBack:(id /* block */)arg1;
- (id)renderStats;
- (void)setRenderStats:(id)arg1;
- (BOOL)maskTexCoordInYReverse;
- (void)setMaskTexCoordInYReverse:(BOOL)arg1;
- (BOOL)maskTextureFilter;
- (void)setMaskTextureFilter:(BOOL)arg1;
- (id)mVRProjectionModel;
- (void)setMVRProjectionModel:(id)arg1;
- (id)mRotationControl;
- (void)setMRotationControl:(id)arg1;
- (id)mScaleControl;
- (void)setMScaleControl:(id)arg1;
- (id)weeffectManager;
- (void)setWeeffectManager:(id)arg1;
- (BOOL)needProcessByWeffect;
- (void)setNeedProcessByWeffect:(BOOL)arg1;
- (void).cxx_destruct;
@end

