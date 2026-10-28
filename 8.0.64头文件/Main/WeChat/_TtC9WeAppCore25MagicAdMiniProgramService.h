@interface _TtC9WeAppCore25MagicAdMiniProgramService : NSObject <_TtP9WeAppCore26IMagicAdMiniProgramService_, IMagicCardStarterDelegate>
{
     mbBizHandle; // +0x8
     mAppId; // +0x10
     magicAdMiniProgramCallback; // +0x20
     systemCoverView; // +0x28
     contentView; // +0x30
     $__lazy_storage_$_mMBAdContainer; // +0x38
}
- (void)prepareWithAppId:(id)arg1;
- (void)resumeWithViewController:(id)arg1;
- (void)pause;
- (void)destroy;
- (void)setupMagicAdMiniProgramCallbackWithCallback:(id)arg1;
- (void)sendEventToMBBizWithBizName:(id)arg1 event:(id)arg2 data:(id)arg3;
- (void)jsApiEventHandler:(id)arg1 extraInfo:(id)arg2 callback:(id /* block */)arg3;
- (void)notifyBizDestroy;
- (void)notifyFrameSetDestroy:(id)arg1;
- (void)notifyFrameSetFirstFrameRendered:(id)arg1;
- (void)notifyFrameSetSizeChange:(id)arg1 height:(long long)arg2;
- (void)createFrameSetForCoverView:(id)arg1 callback:(id /* block */)arg2;
- (id)init;
- (void).cxx_destruct;
@end
