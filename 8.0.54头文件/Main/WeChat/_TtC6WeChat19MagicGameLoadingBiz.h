@interface _TtC6WeChat19MagicGameLoadingBiz : _TtC6WeChat15MagicSclBaseBiz <MBCommonAdapterDelegate>
{
     mbCommonAdapter; // +0x78
     mbVConsoleHelper; // +0x80
     pkgMgr; // +0x88
     jsapiContextImpl; // +0x90
     magicGameLoadingVC; // +0x98
     framesetRootId; // +0xa0
}
- (id)init;
- (void)start;
- (id)getFrameSetRoot;
- (void)preLayoutFrameSet;
- (void)bindFrameSetView:(id)arg1;
- (void)unbindFrameSetView:(id)arg1;
- (void)destroyFrameSetRootWithId:(id)arg1;
- (void)onMainScriptInjected:(id)arg1;
- (void)destroy;
- (id)bizVersionInfo;
- (id)bizPkgInfo;
- (long long)addCustomViewWithView:(id)arg1;
- (unsigned int)getDebugModeType;
- (id)getAppId;
- (void)setMagicGameLoadingVCWithVc:(id)arg1;
- (id)getMagicGameLoadingVC;
- (void)onCanvasViewCreated:(unsigned int)arg1 view:(id)arg2;
- (id)getParentViewController;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)arg1;
- (void).cxx_destruct;
@end

