@interface LiteAppJsApiAdBase : LiteAppJsApi <WCCanvasDynamicDataLoaderDelegate>
{
    WCCanvasDynamicDataLoader * _dataLoader; // +0x20
    MMLoadingView * _loadingView; // +0x28
}
- (id)init;
- (void)dealloc;
- (id)getViewController;
- (id)getNavigationController;
- (id)getDynamicCanvasViewController;
- (id)getDynamicCanvasLogic;
- (id)pageInfo;
- (void)showLoading:(BOOL)arg1;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (void)doAdInvokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (void)success:(id)arg1;
- (void)fail:(id)arg1;
- (id)dataLoader;
- (void)setDataLoader:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (void).cxx_destruct;
@end
