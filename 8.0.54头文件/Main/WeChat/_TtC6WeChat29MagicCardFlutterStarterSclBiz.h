@interface _TtC6WeChat29MagicCardFlutterStarterSclBiz : _TtC6WeChat15MagicSclBaseBiz <MBCommonAdapterDelegate>
{
     _bizName; // +0x78
     jsapiList; // +0x88
     plugin; // +0x90
     mbCommonAdapter; // +0x98
     pkgMgr; // +0xa0
     bizVc; // +0xa8
}
- (id)externalViewDelegate;
- (void)start;
- (void)pause;
- (void)resume;
- (void)destroy;
- (void)onMainScriptInjected:(id)arg1;
- (unsigned int)getDebugModeType;
- (id)getParentViewController;
- (id)getAppId;
- (id)init;
- (void).cxx_destruct;
@end

