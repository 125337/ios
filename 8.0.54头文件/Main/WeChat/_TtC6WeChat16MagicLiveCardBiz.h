@interface _TtC6WeChat16MagicLiveCardBiz : _TtC6WeChat15MagicSclBaseBiz <MBCommonAdapterDelegate>
{
     mbCommonAdapter; // +0x78
     mbVConsoleHelper; // +0x80
     pkgMgr; // +0x88
     jsapiContextImpl; // +0x90
}
- (id)init;
- (void)start;
- (void)destroy;
- (void)destroyAllFrameSet;
- (id)bizVersionInfo;
- (id)bizPkgInfo;
- (long long)addCustomViewWithView:(id)arg1;
- (unsigned int)getDebugModeType;
- (id)getParentViewController;
- (id)getAppId;
- (void)onCanvasViewCreated:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)arg1;
- (void).cxx_destruct;
@end

