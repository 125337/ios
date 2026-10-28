@interface MMMVPlayer : NSObject <MMMusicMVPlayerBgViewDelegate, MMMusicMVPLayerBgviewDataSource, MMMusicDotMVDataSourceDelegate, IMMMusicLyricServiceExt, MusicLinkServiceExtension>
{
    BOOL _muted; // +0x8
    BOOL _showMinimizeWindowWhileStarPlay; // +0x9
    BOOL _isVideoPaused; // +0xa
    BOOL _isMusicSeeking; // +0xb
    BOOL _hasFetchMoreInfoAfterDurationAvailable; // +0xc
    BOOL _shouldAlignVideoAfterDurationAvailable; // +0xd
    BOOL _markedVideoOffsetDirty; // +0xe
    BOOL _isApplicationActive; // +0xf
    MMMusicMVPlayerBgView * _mvPlayerView; // +0x10
    MMMusicLiveLyricDisplayView * _lyricView; // +0x18
    MMMusicPlayerMgr * _musicPlayer; // +0x20
    MMMusicMVModel * _mvModel; // +0x28
    id /* block */ _mvPlayerViewGenerator; // +0x30
    id /* block */ _lyricViewGenerator; // +0x38
    MVPlayerConfiguration * _configuration; // +0x40
    id <MMMVPlayerDelegate> _delegate; // +0x48
    MMTimer * _musicMonitorTimer; // +0x50
    MMMusicDotMVDataSource * _mvDataSource; // +0x58
    MVPreloadManager * _preloadManager; // +0x60
    MVImageLoader * _imageLoader; // +0x68
    MMMusicLiveCGIMgr * _musicLiveCgiManager; // +0x70
    NSMutableArray * _pluginArr; // +0x78
}
- (id)init;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (void)initData;
- (void)registerExtensions;
- (void)unregisterExtensions;
- (void)dealloc;
- (void)start;
- (void)setupMusicMonitorTimer;
- (void)stopMusicMonitorTimer;
- (void)onMusicMonitorTimerFired;
- (BOOL)isCurrentInRangeWithCurrentTime:(double)arg1 range:(id)arg2;
- (BOOL)isCurrentInRangeWithCurrentTime:(double)arg1 range:(id)arg2 toleranceSecondBefore:(double)arg3 toleranSecondAfter:(double)arg4;
- (void)onAudioDurationAvailable:(double)arg1;
- (void)checkAudioDurationAvailable;
- (void)fetchInformationAfterDurationAvailableWithDuration:(double)arg1;
- (void)checkAndFetchBeatTracksWithSongId:(id)arg1 duration:(double)arg2;
- (void)reloadWithBeatTracks:(id)arg1 arrFlexBasicClipTrack:(id)arg2;
- (void)reloadTransitionEffect:(id)arg1 arrFlexBasicClipTrack:(id)arg2;
- (void)fetchLyricWithSongId:(id)arg1;
- (BOOL)canLoadRecommendMv;
- (void)fetchMoreMvInfoWithDuration:(double)arg1;
- (void)checkPermissionWithCompletion:(id /* block */)arg1;
- (void)playMusicWith:(id)arg1;
- (void)playMusicWithMusicInfo:(id)arg1;
- (void)stop;
- (void)uninstallLyricService;
- (void)clearInnerData;
- (void)resume;
- (void)resumeVideo;
- (void)startVideoPlay;
- (void)startVideoPlayWithReload:(BOOL)arg1;
- (void)pause;
- (void)pauseVideo;
- (void)startSeeking;
- (void)fastSeek:(double)arg1 autoPlay:(BOOL)arg2;
- (void)onSeeking:(double)arg1 autoPlay:(BOOL)arg2;
- (void)didEndSeeking:(double)arg1 autoPlay:(BOOL)arg2;
- (void)alignVideoProgressWithMusicWithAutoPlay:(BOOL)arg1;
- (void)alignVideoProgressWithMusicWithMusicTimeInSecond:(double)arg1 autoPlay:(BOOL)arg2 withTransitionEffect:(BOOL)arg3;
- (unsigned int)currentVideoIndexWithMusicTimeInSecond:(double)arg1;
- (unsigned long long)currentVideoOffsetWithMusicTimeInSecond:(double)arg1;
- (void)trySeekMusic:(double)arg1 playAuto:(BOOL)arg2;
- (BOOL)canSeek:(unsigned long long)arg1;
- (void)generateMvDataSource;
- (void)reloadWithModel:(id)arg1;
- (void)reloadDefaultImage;
- (void)updateDefaultImageWithModel:(id)arg1;
- (void)updateDefaultImageWithUrl:(id)arg1;
- (void)preloadFromModel:(id)arg1;
- (void)updateOnlyVideoWithModel:(id)arg1 showDefaultImage:(BOOL)arg2 autoPlay:(BOOL)arg3;
- (void)updateOnlyVideoWithModel:(id)arg1;
- (BOOL)isPlaying;
- (void)updateMusicPlayProress;
- (BOOL)shouldPlayVideo;
- (void)updateStatusWhenIndexChanged:(unsigned int)arg1 videoTimeOffset:(double)arg2 autoPlay:(BOOL)arg3 withTransitionEffect:(BOOL)arg4;
- (void)checkVideoStatus;
- (void)updateShouldShowMinimizeWindow:(BOOL)arg1;
- (void)updateMutedStatus:(BOOL)arg1;
- (void)executePluginForEvent:(unsigned long long)arg1;
- (void)registerPlugin:(id)arg1;
- (void)setMuted:(BOOL)arg1;
- (void)setShowMinimizeWindowWhileStarPlay:(BOOL)arg1;
- (id)currentMusicInfo;
- (id)currentSongInfo;
- (BOOL)isPlayerPlayingCurrentMusicInfo;
- (BOOL)isMusicInfoTheSameAsCurrentOne:(id)arg1;
- (id)musicPlayer;
- (id)mvPlayerView;
- (id)lyricView;
- (long long)currentEpisodeIndex;
- (id)lyricService;
- (id)configuration;
- (BOOL)shouldGetSongStatus;
- (BOOL)shouldGetBeatTracks;
- (BOOL)shouldCheckPermission;
- (id)imageLoader;
- (id)preloadManager;
- (id)pluginArr;
- (void)prepareForMusicPlay:(id)arg1;
- (void)onPlayMusic:(id)arg1 fromScene:(long long)arg2;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)arg1 musicInfo:(id)arg2 errInfo:(id)arg3;
- (void)onMusicPlayStatusChanged;
- (void)onDotMvDataSourcePlayedTimeChanged:(unsigned int)arg1;
- (void)onDotMvDataSourceCurrDotIndexChangedFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2 playedTimeInMs:(unsigned int)arg3 videoTimeOffset:(double)arg4;
- (void)onLyricService:(id)arg1 curentLyricChangeTo:(id)arg2 timeToNext:(double)arg3 currIndex:(unsigned int)arg4;
- (long long)numberOfMusicMVTracks;
- (double)currentMusicTimeOffsetInMs;
- (id)musicMVPlayerTrackItemAtIndex:(unsigned long long)arg1;
- (double)musicMVPlayerTrackPlayOffsetAtIndex:(unsigned long long)arg1;
- (BOOL)musicMVPlayerIsGetMvInfoFinish;
- (void)musicMVPlayerOnShowBufferingView;
- (void)musicMVPlayerOnHideBufferingView;
- (void)reusePlayerSubViews;
- (BOOL)mvPlayerBgView:(id)arg1 shouldTransitToEpisodeIndex:(long long)arg2 fromIndex:(long long)arg3;
- (id)musicPlayerBgView:(id)arg1 finderDataItemForTrack:(id)arg2;
- (void)musicLinkService:(id)arg1 onAudioTypeChangedWithpreviousInfo:(id)arg2 updatedInfo:(id)arg3;
- (void)checkAndSetupLyricService;
- (void)checkAndSetupLyricServiceWithSongInfo:(id)arg1;
- (void)setupMusicLyricServiceWithLyric:(id)arg1;
- (void)setupLyricWithSongInfo:(id)arg1 lyric:(id)arg2;
- (void)setupLocalLyricWithSongInfo:(id)arg1;
- (void)setMvPlayerView:(id)arg1;
- (void)setLyricView:(id)arg1;
- (void)setMusicPlayer:(id)arg1;
- (id)mvModel;
- (void)setMvModel:(id)arg1;
- (id /* block */)mvPlayerViewGenerator;
- (void)setMvPlayerViewGenerator:(id /* block */)arg1;
- (id /* block */)lyricViewGenerator;
- (void)setLyricViewGenerator:(id /* block */)arg1;
- (void)setConfiguration:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)muted;
- (BOOL)showMinimizeWindowWhileStarPlay;
- (id)musicMonitorTimer;
- (void)setMusicMonitorTimer:(id)arg1;
- (id)mvDataSource;
- (void)setMvDataSource:(id)arg1;
- (BOOL)isVideoPaused;
- (void)setIsVideoPaused:(BOOL)arg1;
- (BOOL)isMusicSeeking;
- (void)setIsMusicSeeking:(BOOL)arg1;
- (BOOL)hasFetchMoreInfoAfterDurationAvailable;
- (void)setHasFetchMoreInfoAfterDurationAvailable:(BOOL)arg1;
- (BOOL)shouldAlignVideoAfterDurationAvailable;
- (void)setShouldAlignVideoAfterDurationAvailable:(BOOL)arg1;
- (BOOL)markedVideoOffsetDirty;
- (void)setMarkedVideoOffsetDirty:(BOOL)arg1;
- (void)setPreloadManager:(id)arg1;
- (void)setImageLoader:(id)arg1;
- (id)musicLiveCgiManager;
- (void)setMusicLiveCgiManager:(id)arg1;
- (void)setPluginArr:(id)arg1;
- (BOOL)isApplicationActive;
- (void)setIsApplicationActive:(BOOL)arg1;
- (void).cxx_destruct;
@end
