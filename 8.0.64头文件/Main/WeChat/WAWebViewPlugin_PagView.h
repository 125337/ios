@interface WAWebViewPlugin_PagView : WACanvasPlugin_embedView <PAGViewListener, MMImageLoaderObserver>
{
    id <IMBFileSystem> _fileSystem; // +0x8
    NSMutableDictionary * _pagViewDataList; // +0x10
}
- (id)pagViewDataList;
- (id)currentAppid;
- (void)insertPagView:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)updatePagView:(id)arg1 withCompletion:(id /* block */)arg2;
- (BOOL)removePagView:(id)arg1;
- (void)preProcess:(id)arg1;
- (void)adjustPagViewPara:(id)arg1 withPara:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)checkDownloadResourceLoadedAndPlay:(id)arg1;
- (void)onAnimationEnd:(id)arg1;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (id)fileSystem;
- (void)setFileSystem:(id)arg1;
- (void)setPagViewDataList:(id)arg1;
- (void).cxx_destruct;
@end
