@interface MJImageMusicViewModel : NSObject
{
    MMBGMSelectedConfig * _bgmPanelConfig; // +0x8
    NSMutableArray * _bgmPanelTabModels; // +0x10
    id <MJImageMusicViewModelDelegate> _delegate; // +0x18
    MJPublisherContext * _publisherContext; // +0x20
    EditVideoMusicController * _musicController; // +0x28
    id /* block */ _musicDownloadCompletion; // +0x30
    unsigned long long _currentDownloadSessionID; // +0x38
    id <MMBGMSelectedMusicDataProtocol> _currentPlayingMusicData; // +0x40
    long long _playbackRetryCount; // +0x48
}
- (id)initWithAssetClassfyResult:(id)arg1 fetchMusicDefaultly:(BOOL)arg2 pictureCount:(unsigned long long)arg3 publisherContext:(id)arg4;
- (void)fetchRecMusicWithViewModel:(id)arg1;
- (void)loadAndPlayMusic:(id)arg1;
- (void)pauseMusic;
- (void)replayMusic;
- (void)clearMusic;
- (void)seekMusicToTime:(double)arg1;
- (struct)currentMusicPlaybackTime;
- (long long)currentMusicTimeControlStatus;
- (void)updateMusicVolume:(float)arg1;
- (void)handlePlaybackFailedWithLocalFilePath:(id)arg1;
- (void)downloadMusic:(id)arg1 timeout:(double)arg2 completion:(id /* block */)arg3;
- (void)invalidateCurrentMusicDownload;
- (void)cancelMusicDownload:(id)arg1 sessionID:(unsigned long long)arg2;
- (void)callCompletionWithDownloadSucceed:(BOOL)arg1 musicID:(id)arg2 sessionID:(unsigned long long)arg3;
- (id)convertMusicLyricInfos:(id)arg1;
- (id)bgmPanelConfig;
- (id)bgmPanelTabModels;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)publisherContext;
- (id)musicController;
- (void)setMusicController:(id)arg1;
- (id /* block */)musicDownloadCompletion;
- (void)setMusicDownloadCompletion:(id /* block */)arg1;
- (unsigned long long)currentDownloadSessionID;
- (void)setCurrentDownloadSessionID:(unsigned long long)arg1;
- (id)currentPlayingMusicData;
- (void)setCurrentPlayingMusicData:(id)arg1;
- (long long)playbackRetryCount;
- (void)setPlaybackRetryCount:(long long)arg1;
- (void).cxx_destruct;
@end
