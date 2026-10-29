@interface _TtC6WeChat17MagicWeAppCardBiz : _TtC6WeChat15MagicSclBaseBiz <NSObject>
{
     mbCommonAdapter; // +0xa8
     mbVConsoleHelper; // +0xb0
     pkgMgr; // +0xb8
     pubResLogic; // +0xc0
     runtimeBinding; // +0xc8
     pixelBufferPlugin; // +0xd0
    void * frameSetRootId; // +0xd8
    void * fileSystemRelativePath; // +0xe8
     jsapiContextImpl; // +0xf8
     frameSetId2View; // +0x100
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
- (id)getParentViewController;
- (id)getAppId;
- (void)bindWAMagicBrushFrameRuntime:(id)arg1;
- (void).cxx_destruct;
@end
