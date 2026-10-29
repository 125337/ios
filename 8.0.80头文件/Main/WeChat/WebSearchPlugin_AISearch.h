@interface WebSearchPlugin_AISearch : WebSearchPluginBase
{
    BOOL _pendingKeyboardFocusAssist; // +0x8
    UIImageView * _snapshotImgView; // +0x10
    MMLoadingView * _snapshotLoadingView; // +0x18
}
- (void)handleEvent:(id)arg1 userInfo:(id)arg2;
- (void)scheduleKeyboardFocusAssist;
- (void)performKeyboardFocusAssistIfNeeded;
- (id)findWKContentView;
- (void)takeSnapshotInRenderMode:(id)arg1 callback:(id /* block */)arg2 cropTopHeight:(double)arg3 padding:(double)arg4 exifUserComment:(id)arg5;
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
- (BOOL)pendingKeyboardFocusAssist;
- (void)setPendingKeyboardFocusAssist:(BOOL)arg1;
- (void).cxx_destruct;
@end
