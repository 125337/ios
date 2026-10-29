@interface MMLiveRemoteTrtcCustomRenderWrapper : NSObject <WeEffectEnergyController, WeEffectManagerResultDelegate>
{
    BOOL _isCustomRenderStart; // +0x8
    BOOL _isFirstFrameRendered; // +0x9
    BOOL _isAllowFp16; // +0xa
    BOOL _isWeVisMgrCreated; // +0xb
    BOOL _isStopCustomRender; // +0xc
    id /* block */ _customRenderStartCallback; // +0x10
    id /* block */ _customRenderFirstFrameRenderedCallback; // +0x18
    id /* block */ _customRenderWillStopCallback; // +0x20
    id /* block */ _customRenderStopCallback; // +0x28
    id /* block */ _luaScriptJsonMessageReceiveCallback; // +0x30
    MMWeEffectManager * _weeffectManager; // +0x38
    NSString * _userId; // +0x40
    MMLiveRemoteTrtcCustomRenderWrapperInitParam * _customParam; // +0x48
    MMLiveTaskId * _taskId; // +0x50
    MMVideoRenderView * _videoRenderView; // +0x58
    CGRect _renderRect; // +0x60
}
- (id)initWithTaskId:(id)arg1 userId:(id)arg2 renderRect:(CGRect)arg3 param:(id)arg4;
- (void)initDefaultData;
- (void)startCustomRender;
- (void)stopCustomRenderWithDelay:(BOOL)arg1;
- (void)onCustomRenderStopFinished;
- (void)clearData;
- (void)onRenderVideoFrame:(id)arg1 userId:(id)arg2;
- (void)tagFrameRendered;
- (void)checkFirstFrameRendered;
- (void)createWeEffectMananger;
- (void)createVideoRenderView;
- (void)checkIsPrepareToCustomRender;
- (void)effectMgr:(id)arg1 configSettings:(void *)arg2;
- (void)effectMgr:(id)arg1 adjustSettings:(void *)arg2;
- (void)onWeEffectLuaScriptJsonMessageReceived:(id)arg1 fromSourceId:(int)arg2;
- (void)onResult:(int)arg1;
- (void)onResourceID:(long long)arg1;
- (void)onResourceIDVector:(id)arg1 scene:(unsigned long long)arg2;
- (void)onWeVisEffectMgrCreateCompleted;
- (id)renderView;
- (BOOL)hasCustomRenderStarted;
- (long long)weffectScene;
- (id)description;
- (id /* block */)customRenderStartCallback;
- (void)setCustomRenderStartCallback:(id /* block */)arg1;
- (id /* block */)customRenderFirstFrameRenderedCallback;
- (void)setCustomRenderFirstFrameRenderedCallback:(id /* block */)arg1;
- (id /* block */)customRenderWillStopCallback;
- (void)setCustomRenderWillStopCallback:(id /* block */)arg1;
- (id /* block */)customRenderStopCallback;
- (void)setCustomRenderStopCallback:(id /* block */)arg1;
- (id /* block */)luaScriptJsonMessageReceiveCallback;
- (void)setLuaScriptJsonMessageReceiveCallback:(id /* block */)arg1;
- (id)weeffectManager;
- (void)setWeeffectManager:(id)arg1;
- (id)userId;
- (void)setUserId:(id)arg1;
- (BOOL)isCustomRenderStart;
- (void)setIsCustomRenderStart:(BOOL)arg1;
- (BOOL)isFirstFrameRendered;
- (void)setIsFirstFrameRendered:(BOOL)arg1;
- (id)customParam;
- (void)setCustomParam:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (CGRect)renderRect;
- (void)setRenderRect:(CGRect)arg1;
- (id)videoRenderView;
- (void)setVideoRenderView:(id)arg1;
- (BOOL)isAllowFp16;
- (void)setIsAllowFp16:(BOOL)arg1;
- (BOOL)isWeVisMgrCreated;
- (void)setIsWeVisMgrCreated:(BOOL)arg1;
- (BOOL)isStopCustomRender;
- (void)setIsStopCustomRender:(BOOL)arg1;
- (void).cxx_destruct;
@end

