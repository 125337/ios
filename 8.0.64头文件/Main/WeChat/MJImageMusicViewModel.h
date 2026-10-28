@interface MJImageMusicViewModel : NSObject
{
    BOOL _isMusicDownloadCancelled; // +0x8
    MMBGMSelectedConfig * _bgmPanelConfig; // +0x10
    NSMutableArray * _bgmPanelTabModels; // +0x18
    id <MJImageMusicViewModelDelegate> _delegate; // +0x20
    MJPublisherContext * _publisherContext; // +0x28
    EditVideoMusicController * _musicController; // +0x30
    id /* block */ _musicDownloadCompletion; // +0x38
    id <MMBGMSelectedMusicDataProtocol> _currentPlayingMusicData; // +0x40
}
- (id)initWithAssetClassfyResult:(id)arg1 fetchMusicDefaultly:(BOOL)arg2;
- (void)fetchRecMusicWithViewModel:(id)arg1;
- (void)loadAndPlayMusic:(id)arg1;
- (void)pauseMusic;
- (void)replayMusic;
- (void)clearMusic;
- (void)downloadMusic:(id)arg1 timeout:(double)arg2 completion:(id /* block */)arg3;
- (void)cancelMusicDownload:(id)arg1;
- (void)callCompletionWithDownloadSucceed:(BOOL)arg1 musicID:(id)arg2;
- (id)convertMusicLyricInfos:(id)arg1;
- (void)setPublisherContext:(id)arg1;
- (id)bgmPanelConfig;
- (id)bgmPanelTabModels;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)publisherContext;
- (id)musicController;
- (void)setMusicController:(id)arg1;
- (BOOL)isMusicDownloadCancelled;
- (void)setIsMusicDownloadCancelled:(BOOL)arg1;
- (id /* block */)musicDownloadCompletion;
- (void)setMusicDownloadCompletion:(id /* block */)arg1;
- (id)currentPlayingMusicData;
- (void)setCurrentPlayingMusicData:(id)arg1;
- (void).cxx_destruct;
@end
