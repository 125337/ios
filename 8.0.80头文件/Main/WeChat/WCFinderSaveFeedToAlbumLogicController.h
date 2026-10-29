@interface WCFinderSaveFeedToAlbumLogicController : NSObject
{
    BOOL _isCancelled; // +0x8
    BOOL _isFinished; // +0x9
    WCFinderFeedContentVM * _contentVM; // +0x10
    WCPlayerView * _playerView; // +0x18
    id /* block */ _progressBlock; // +0x20
    id /* block */ _completionBlock; // +0x28
    NSMutableDictionary * _contextMap; // +0x30
}
+ (void)saveMediaWithContentVM:(id)arg1 playerView:(id)arg2 progressBlock:(id /* block */)arg3 completionBlock:(id /* block */)arg4;
+ (void)cancelSaveForContentVM:(id)arg1;
- (id)initWithContentVM:(id)arg1 playerView:(id)arg2 progressBlock:(id /* block */)arg3 completionBlock:(id /* block */)arg4;
- (void)dealloc;
- (void)_attachToContentVM;
- (void)_detachFromContentVM;
- (void)_start;
- (void)_finishWithSuccess:(BOOL)arg1;
- (void)_onDidEnterBackground;
- (void)_teardownSilently;
- (void)_saveVideoWithContentVM:(id)arg1 playerView:(id)arg2 progressBlock:(id /* block */)arg3 completionBlock:(id /* block */)arg4;
- (void)_savePhotosWithContentVM:(id)arg1 progressBlock:(id /* block */)arg2 completionBlock:(id /* block */)arg3;
- (void)_downloadOrdinaryPhotoAtIndex:(long long)arg1 mediaInfo:(id)arg2 contentVM:(id)arg3 item:(id)arg4 onItemReady:(id /* block */)arg5;
- (void)_downloadLivePhotoAtIndex:(long long)arg1 mediaInfo:(id)arg2 contentVM:(id)arg3 item:(id)arg4 onItemReady:(id /* block */)arg5;
- (void)_saveAllItems:(id)arg1 ordinaryCount:(long long)arg2 completionBlock:(id /* block */)arg3;
- (void)_batchSaveImages:(id)arg1 ordinaryCount:(long long)arg2 completionBlock:(id /* block */)arg3;
- (void)_saveLivePhotoWithImage:(id)arg1 videoPath:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)_fallbackSaveVideoWithPath:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_cancelAllTasks;
- (void)_storeSaveTask:(id)arg1 forTid:(id)arg2;
- (void)_removeSaveTask:(id)arg1;
- (void)_storeLivePhotoTask:(id)arg1 forKey:(id)arg2;
- (void)_removeLivePhotoTaskForKey:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id /* block */)progressBlock;
- (void)setProgressBlock:(id /* block */)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id)contextMap;
- (void)setContextMap:(id)arg1;
- (BOOL)isCancelled;
- (void)setIsCancelled:(BOOL)arg1;
- (BOOL)isFinished;
- (void)setIsFinished:(BOOL)arg1;
- (void).cxx_destruct;
@end
