@interface WebSearchPlugin_AISearch : WebSearchPluginBase
{
    UIImageView * _snapshotImgView; // +0x8
    MMLoadingView * _snapshotLoadingView; // +0x10
}
- (void)handleEvent:(id)arg1 userInfo:(id)arg2;
- (void)takeSnapshotInRenderMode:(id)arg1 callback:(id /* block */)arg2 cropTopHeight:(double)arg3 padding:(double)arg4;
- (void)addSnapshotAndLoadingOnWindowByTimeout:(double)arg1;
- (void)addSnapshotAndLoadingOnWindowWithImage:(id)arg1 timeout:(double)arg2;
- (void)addSnapshotImageOnWindow:(id)arg1 timeout:(double)arg2;
- (void)removeSnapshotImageOnWindow;
- (void)removeSnapshotOnWindowAndStopLoading;
- (id)addImageWithTopWhitePadding:(id)arg1 padding:(double)arg2;
- (id)snapshotImgView;
- (void)setSnapshotImgView:(id)arg1;
- (id)snapshotLoadingView;
- (void)setSnapshotLoadingView:(id)arg1;
- (void).cxx_destruct;
@end
