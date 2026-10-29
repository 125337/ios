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
    unsigned long long _bgmListType; // +0x38
    id /* block */ _musicDownloadCompletion; // +0x40
    id <MMBGMSelectedMusicDataProtocol> _currentPlayingMusicData; // +0x48
    unsigned long long _currentDownloadSessionID; // +0x50
}
- (id)initWithFollowMusicInfo:(id)arg1 assetClassfyResult:(id)arg2 publisherContext:(id)arg3 videoDuration:(unsigned long long)arg4;
- (id)initWithFollowMusicInfo:(id)arg1 assetClassfyResult:(id)arg2 publisherContext:(id)arg3 videoDuration:(unsigned long long)arg4 bgmListType:(unsigned long long)arg5;
- (id)initWithFollowMusicInfo:(id)arg1 assetClassfyResult:(id)arg2 publisherContext:(id)arg3 videoDuration:(unsigned long long)arg4 bgmListType:(unsigned long long)arg5 finderBgmListAssetType:(int)arg6 finderBgmListPicNum:(unsigned int)arg7;
- (void)loadAndPlayMusic:(id)arg1;
- (void)pauseMusic;
- (void)replayMusic;
- (void)handleApplicationDidEnterBackground:(id)arg1;
- (void)handleApplicationWillEnterForeground:(id)arg1;
- (id)convertMusicLyricInfos:(id)arg1;
- (void)downloadMusic:(id)arg1 timeout:(double)arg2 completion:(id /* block */)arg3;
- (void)invalidateCurrentMusicDownload;
- (void)cancelMusicDownload:(id)arg1 sessionID:(unsigned long long)arg2;
- (void)callCompletionWithDownloadSucceed:(BOOL)arg1 musicID:(id)arg2 sessionID:(unsigned long long)arg3;
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
- (unsigned long long)bgmListType;
- (void)setBgmListType:(unsigned long long)arg1;
- (BOOL)isMusicDownloadCancelled;
- (void)setIsMusicDownloadCancelled:(BOOL)arg1;
- (id /* block */)musicDownloadCompletion;
- (void)setMusicDownloadCompletion:(id /* block */)arg1;
- (id)currentPlayingMusicData;
- (void)setCurrentPlayingMusicData:(id)arg1;
- (unsigned long long)currentDownloadSessionID;
- (void)setCurrentDownloadSessionID:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
