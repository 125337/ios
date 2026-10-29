@interface _TtC6WeChat19MagicGameLoadingBiz : _TtC6WeChat15MagicSclBaseBiz
{
     mbCommonAdapter; // +0xa8
     mbVConsoleHelper; // +0xb0
     pkgMgr; // +0xb8
     jsapiContextImpl; // +0xc0
     magicGameLoadingVC; // +0xc8
     framesetRootId; // +0xd0
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
- (id)getAppId;
- (void)setMagicGameLoadingVCWithVc:(id)arg1;
- (id)getMagicGameLoadingVC;
- (void)onCanvasViewCreated:(unsigned int)arg1 view:(id)arg2;
- (id)getParentViewController;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)arg1;
- (void).cxx_destruct;
@end
