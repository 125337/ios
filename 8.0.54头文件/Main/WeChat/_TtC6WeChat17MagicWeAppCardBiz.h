@interface _TtC6WeChat17MagicWeAppCardBiz : _TtC6WeChat15MagicSclBaseBiz <MBCommonAdapterDelegate, NSObject>
{
     mbCommonAdapter; // +0x78
     mbVConsoleHelper; // +0x80
     pkgMgr; // +0x88
     pubResLogic; // +0x90
     runtimeBinding; // +0x98
     pixelBufferPlugin; // +0xa0
     frameSetRootId; // +0xa8
     fileSystemRelativePath; // +0xb8
     jsapiContextImpl; // +0xc8
     frameSetId2View; // +0xd0
}
- (id)frameSetRootId;
- (void)setFrameSetRootId:(id)arg1;
- (id)fileSystemRelativePath;
- (void)setFileSystemRelativePath:(id)arg1;
- (id)getMagicBrushBiz;
- (id)init;
- (id)externalViewDelegate;
- (void)start;
- (void)destroy;
- (id)bizVersionInfo;
- (id)bizPkgInfo;
- (long long)addCustomViewWithView:(id)arg1;
- (void)mappingFrameSetId:(id)arg1 view:(id)arg2;
- (unsigned int)getDebugModeType;
- (id)getParentViewController;
- (id)getAppId;
- (void)bindWAMagicBrushFrameRuntime:(id)arg1;
- (void).cxx_destruct;
@end

