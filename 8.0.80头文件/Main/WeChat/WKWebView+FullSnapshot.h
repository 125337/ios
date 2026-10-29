@interface WKWebView (FullSnapshot)
- (void)captureFullScreenshotWithCompletion:(id /* block */)arg1;
- (void)captureFullScreenshotWithFrame:(CGRect)arg1 completion:(id /* block */)arg2;
- (void)takeSnapshotInCurrentFrame:(CGRect)arg1 completion:(id /* block */)arg2;
- (void)takeSnapshotInRenderModeWithFrame:(CGRect)arg1 completion:(id /* block */)arg2;
- (void)__takeSnapshotInRenderModeWithFrame:(CGRect)arg1 completion:(id /* block */)arg2;
- (void)drawViewHierarchyPageByPageWithFirstPageOffset:(double)arg1 totalHeight:(double)arg2 completion:(id /* block */)arg3;
- (BOOL)recursiveDrawViewAtPage:(unsigned int)arg1 firstPageOffset:(double)arg2 totalHeight:(double)arg3 completion:(id /* block */)arg4;
- (void)addSnapshotByTimeout:(double)arg1;
- (void)addSnapshotImage:(id)arg1 timeout:(double)arg2;
- (void)removeSnapshotImageOnWindow;
- (BOOL)extendSnapshotOnWindowByTimeout:(double)arg1;
- (BOOL)checkMemoryAvailableForContentSize:(CGSize)arg1 scale:(double *)arg2 freeMem:(unsigned long long *)arg3 isCompress:(BOOL *)arg4 predictImgMemSize:(unsigned long long *)arg5;
- (unsigned long long)getAvailableMemorySize;
- (id)snapshotImgView;
- (void)setSnapshotImgView:(id)arg1;
@end
