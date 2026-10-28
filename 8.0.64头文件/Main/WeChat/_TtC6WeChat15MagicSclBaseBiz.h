@interface _TtC6WeChat15MagicSclBaseBiz : NSObject <IMBLifecycle, IMBViewDelegate, _TtP6WeChat28MagicSclJsApiContextDelegate_, MagicSclServiceDelegate, MBCommonAdapterDelegate>
{
     sessionIdToTime; // +0x8
     appContextId; // +0x10
     created; // +0x20
     pendingStart; // +0x21
     mainScriptInjected; // +0x22
     sclEventEmitter; // +0x28
     pendingEvents; // +0x30
     canvasMgr; // +0x38
     frameSets; // +0x40
     lock; // +0x48
     frameSetRoots; // +0x50
     defaultJsApiContext; // +0x58
     paused; // +0x60
     starterDelegate; // +0x68
     isBizActive; // +0x70
     autoPauseExt; // +0x78
     magicbrush; // +0xa0
}
- (void)resetReport;
- (void)reportFrameSetAvaliableWithFrameSet:(id)arg1;
- (void)reportFrameSetReadyWithFrameSet:(id)arg1;
- (void)reportFirstFrameWithFrameSet:(id)arg1;
- (id)externalViewDelegate;
- (id)init;
- (void)dealloc;
- (void)appDidBecomeActive;
- (void)appDidEnterBackground;
- (void)setup:(id)arg1;
- (void)start;
- (void)pause;
- (void)resume;
- (void)destroy;
- (void)sendEventWithName:(id)arg1 params:(id)arg2;
- (id)createFrameSetRootWithPath:(id)arg1 query:(id)arg2 useClientClick:(BOOL)arg3;
- (void)destroyFrameSetRootWithId:(id)arg1;
- (long long)frameSetRootCount;
- (id)getFrameSetRootWithId:(id)arg1;
- (void)addFrameSetJsapiWithConfig:(id)arg1 type:(long long)arg2;
- (unsigned int)getDebugModeType;
- (id)getParentViewController;
- (id)getAppId;
- (void)onCreated;
- (void)onMainScriptInjected:(id)arg1;
- (void)onDestroy:(int)arg1;
- (void)onJSException:(id)arg1 msg:(id)arg2 extra:(id)arg3;
- (id)bizVersionInfo;
- (id)getJsApiContextDelegate;
- (void)registerExternalTextureWithType:(id)arg1 textureId:(long long)arg2 extraData:(id)arg3 retBlock:(id /* block */)arg4;
- (void)unRegisterExternalTextureWithType:(id)arg1 textureId:(long long)arg2 retBlock:(id /* block */)arg3;
- (void)operateExternalTextureWithType:(id)arg1 textureId:(long long)arg2 action:(id)arg3 retBlock:(id /* block */)arg4;
- (void)setCanvasStatusWithBizName:(id)arg1 frameSetId:(id)arg2 params:(id)arg3;
- (BOOL)setFlutterCanvasMaxFpsWithBizName:(id)arg1 params:(id)arg2;
- (void)setGestureRectsWithBizName:(id)arg1 frameSetId:(id)arg2 canvasId:(unsigned int)arg3 rects:(id)arg4;
- (void)startUpCoverViewReadyWithBizName:(id)arg1 frameSetId:(id)arg2;
- (void)takeCanvasSnapshotWithCanvasId:(unsigned int)arg1 imageBlock:(id /* block */)arg2;
- (void)removeStartupCoverViewWithInstanceName:(id)arg1 frameSetId:(id)arg2;
- (void)setFrameSetStatusWithFrameSetId:(id)arg1 params:(id)arg2;
- (id)getFrameSetWithFrameSetId:(id)arg1;
- (void)reportFrameSetReadyWithFrameSetId:(id)arg1;
- (void)onCanvasViewCreated:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasViewLayout:(unsigned int)arg1 view:(id)arg2 left:(float)arg3 top:(float)arg4 width:(float)arg5 height:(float)arg6;
- (void)onCanvasViewDestroy:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)arg1;
- (void).cxx_destruct;
@end
