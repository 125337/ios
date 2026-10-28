@interface WCLivePhotoView : WCPlayableImageView
{
    BOOL _isPendingToPlay; // +0x8
    MMAsset * _asset; // +0x10
}
+ (id)generatePlayerArgsWithLocalLivePhotoPath:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 asset:(id)arg2 playerArgs:(id)arg3;
- (id)initWithImage:(id)arg1 asset:(id)arg2 playerArgs:(id)arg3;
- (void)_initWithAsset:(id)arg1 playerArgs:(id)arg2;
- (void)_init;
- (void)_loadAssetData;
- (void)_loadDisplayImageWithCompletionHandler:(id /* block */)arg1;
- (void)_loadLivePhotoWithCompletionHandler:(id /* block */)arg1;
- (void)_updatePlayerArgsWithLocalLivePhotoPath:(id)arg1;
- (void)startPlaying;
- (void)pausePlaying;
- (void)clearPlayer;
- (void)_markPendingToPlay;
- (void)_resetPendingToPlay;
- (void)_startPlayingIfPending;
- (id)asset;
- (void).cxx_destruct;
@end
