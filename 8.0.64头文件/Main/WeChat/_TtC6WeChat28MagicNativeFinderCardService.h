@interface _TtC6WeChat28MagicNativeFinderCardService : MMUserService <MMServiceProtocol, _TtP6WeChat29IMagicNativeFinderCardService_, IMagicCardStarterDelegate>
{
     $__lazy_storage_$__frameSetRootConfig; // +0x8
     $__lazy_storage_$__bizConfig; // +0x10
     finderBiz; // +0x18
}
- (void)createBiz;
- (void)preRenderWithFrameSetName:(id)arg1 frameSetData:(id)arg2 containerRect:(CGRect)arg3;
- (void)controlPreloadAdMediaWithPreloadType:(int)arg1 frameSetName:(id)arg2 frameSetData:(id)arg3;
- (void)bindFrameSetViewWithContainerView:(id)arg1 frameSetName:(id)arg2 frameSetData:(id)arg3;
- (void)controlAdVideoWithControlType:(int)arg1 frameSetName:(id)arg2;
- (void)notifyFrameSetExposeWithFrameSetName:(id)arg1 isExpose:(BOOL)arg2;
- (void)notifyEventWithJsEventName:(id)arg1 frameSetName:(id)arg2;
- (void)removeFrameSetViewWithFrameSetName:(id)arg1;
- (void)destroyBiz;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)jsApiEventHandler:(id)arg1 extraInfo:(id)arg2 callback:(id /* block */)arg3;
- (id)init;
- (void).cxx_destruct;
@end
