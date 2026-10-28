@interface LiteAppJsApiOpenAdCanvas : LiteAppJsApi <WCAdOpenAdCanvasJsLogicDelegate>
{
    WCAdOpenAdCanvasJsLogic * _openAdCanvasJsLogic; // +0x20
    MMLoadingView * _loadingView; // +0x28
}
- (void)dealloc;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (id)openAdCanvasJsLogic;
- (id)getViewController;
- (void)onOpenAdCanvasFinish:(BOOL)arg1 msg:(id)arg2;
- (void)showLoading:(BOOL)arg1;
- (void)setOpenAdCanvasJsLogic:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (void).cxx_destruct;
@end
