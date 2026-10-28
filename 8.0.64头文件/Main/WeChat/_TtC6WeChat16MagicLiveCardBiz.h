@interface _TtC6WeChat16MagicLiveCardBiz : _TtC6WeChat15MagicSclBaseBiz
{
     mbCommonAdapter; // +0xa8
     mbVConsoleHelper; // +0xb0
     pkgMgr; // +0xb8
     jsapiContextImpl; // +0xc0
}
- (id)init;
- (void)start;
- (void)destroy;
- (void)destroyAllFrameSet;
- (id)bizVersionInfo;
- (id)bizPkgInfo;
- (long long)addCustomViewWithView:(id)arg1;
- (id)getParentViewController;
- (id)getAppId;
- (void)onCanvasViewCreated:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)arg1;
- (void).cxx_destruct;
@end
