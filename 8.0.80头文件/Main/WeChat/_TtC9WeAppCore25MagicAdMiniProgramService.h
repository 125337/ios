@interface _TtC9WeAppCore25MagicAdMiniProgramService : NSObject <_TtP9WeAppCore26IMagicAdMiniProgramService_, IMagicCardStarterSclDelegate>
{
     mbBizHandle; // +0x8
     mAppId; // +0x10
     magicAdMiniProgramCallback; // +0x20
     systemCoverView; // +0x28
     contentView; // +0x30
     $__lazy_storage_$_mMBAdContainer; // +0x38
     viewStayWorkItems; // +0x40
     exposedFrameSetNames; // +0x48
}
+ (id)BIZ_NAME_MAGIC_AD_MINI_PROGRAM;
- (void)prepareWithAppId:(id)arg1;
- (void)preloadRuntimeIfEnabled;
- (void)startWithAppId:(id)arg1 viewController:(id)arg2 callback:(id)arg3;
- (void)resumeWithViewController:(id)arg1;
- (void)pause;
- (void)destroy;
- (void)sendEventToMBBizWithBizName:(id)arg1 event:(id)arg2 data:(id)arg3;
- (void)onMainScriptInjected;
- (void)onRequestShowCoverView:(id)arg1;
- (void)onRequestRemoveCoverView:(id)arg1;
- (void)handleJsEvent:(id)arg1 extraInfo:(id)arg2 callback:(id /* block */)arg3;
- (void)notifyFrameSetDestroy:(id)arg1;
- (void)notifyFrameSetFirstFrameRendered:(id)arg1;
- (void)notifyFrameSetSizeChange:(id)arg1 width:(long long)arg2 height:(long long)arg3;
- (void)createFrameSetForCoverView:(id)arg1 callback:(id /* block */)arg2;
- (id)init;
- (void).cxx_destruct;
@end
