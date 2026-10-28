@interface MJMusicPickingViewModel : NSObject
{
    BOOL _shouldChangeComposingState; // +0x8
    BOOL _isActive; // +0x9
    BOOL _isMusicDownloadCancelled; // +0xa
    NSMutableArray * _bgmPanelTabModels; // +0x10
    MMBGMSelectedConfig * _bgmPanelConfig; // +0x18
    EditVideoMusicController * _musicController; // +0x20
    id <MMBGMSelectedMusicDataProtocol> _followMusicData; // +0x28
    MJPublisherContext * _publisherContext; // +0x30
    id /* block */ _musicDownloadCompletion; // +0x38
    id <MMBGMSelectedMusicDataProtocol> _currentPlayingMusicData; // +0x40
}
- (id)initWithFollowMusicInfo:(id)arg1 assetClassfyResult:(id)arg2;
- (void)loadAndPlayMusic:(id)arg1;
- (void)pauseMusic;
- (void)replayMusic;
- (void)handleApplicationDidEnterBackground:(id)arg1;
- (void)handleApplicationWillEnterForeground:(id)arg1;
- (id)convertMusicLyricInfos:(id)arg1;
- (void)downloadMusic:(id)arg1 timeout:(double)arg2 completion:(id /* block */)arg3;
- (void)cancelMusicDownload:(id)arg1;
- (void)callCompletionWithDownloadSucceed:(BOOL)arg1 musicID:(id)arg2;
- (void)setPublisherContext:(id)arg1;
- (id)bgmPanelTabModels;
- (id)bgmPanelConfig;
- (id)musicController;
- (BOOL)shouldChangeComposingState;
- (void)setShouldChangeComposingState:(BOOL)arg1;
- (BOOL)isActive;
- (void)setIsActive:(BOOL)arg1;
- (id)followMusicData;
- (void)setFollowMusicData:(id)arg1;
- (id)publisherContext;
- (BOOL)isMusicDownloadCancelled;
- (void)setIsMusicDownloadCancelled:(BOOL)arg1;
- (id /* block */)musicDownloadCompletion;
- (void)setMusicDownloadCompletion:(id /* block */)arg1;
- (id)currentPlayingMusicData;
- (void)setCurrentPlayingMusicData:(id)arg1;
- (void).cxx_destruct;
@end
