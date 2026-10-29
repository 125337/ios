@interface MMFinderLiveNewMusicLogic : NSObject <WCFinderLiveExt, MMLiveTaskMgrExt, MMFinderLiveNewMusicBgmExt, MMLiveButtonContainerViewDelegate, MMFinderLiveNewMusicRequestedSongPanelDelegate, MMFinderLiveNewMusicRequestSongPanelDelegate, MMFinderLiveNewMusicLyricPanelDelegate, MMFinderLiveNewMusicLyricStylePanelDelegate, MMFinderLiveNewMusicSEISynchronizeDelegate>
{
    BOOL _hasInitialized; // +0x8
    BOOL _isMusicUpdateTaskRunning; // +0x9
    BOOL _autoProceed; // +0xa
    NSMutableArray * _songListInfo; // +0x10
    MMFinderLiveNewMusicSEISynchronizeLogic * _musicSeiSyncLogic; // +0x18
    id <MMFinderLiveNewMusicLogicDelegate> _delegate; // +0x20
    id <MMFinderLiveMusicSettingReportDelegate> _reportDelegate; // +0x28
    MMFinderLiveTaskId * _taskId; // +0x30
    NSMutableArray * _songItems; // +0x38
    unsigned long long _songListVersion; // +0x40
    MMFinderLiveNewMusicRequestedSongPanel * _requestedSongPanel; // +0x48
    MMFinderLiveNewMusicRequestSongPanel * _requestSongPanel; // +0x50
    NSMutableArray * _musicUpdateTaskQueue; // +0x58
    MMFinderLiveNewMusicBgmEngine * _bgmEngine; // +0x60
    MMFinderLiveKTVTrialListenManageLogic * _trialListenManageLogic; // +0x68
    MMFinderLiveKTVSongItem * _currSongItem; // +0x70
    MMFinderLiveKSKitMusicSong * _currSongResourceData; // +0x78
    unsigned long long _listOrder; // +0x80
    NSMutableArray * _recentSongList; // +0x88
    NSMutableArray * _candidateSongList; // +0x90
    MMFinderLiveKSKitLyricStyle * _lyricStyle; // +0x98
    LiveNewMusicLyricPosition * _lyricPosition; // +0xa0
    NSString * _playId; // +0xa8
    unsigned long long _lyricExposeTimeMs; // +0xb0
    unsigned long long _playSegmentStartTimeMs; // +0xb8
    unsigned long long _accumulatedPlayDurationMs; // +0xc0
    WCFinderLiveStarterReporter * _startReporter; // +0xc8
    WCFinderLiveAnchorLogReporter * _anchorReporter; // +0xd0
}
- (id)initWithTaskId:(id)arg1 delegate:(id)arg2;
- (void)dealloc;
- (void)registerExtensions;
- (void)unregisterExtensions;
- (void)initNewMusicDataIfNeeded;
- (void)initDefaultStyle;
- (void)initNewMusicDataForAnchor;
- (void)initNewMusicDataForAudience;
- (void)initLiveTaskBlock;
- (void)onJoinLive;
- (void)openSongOperationPanelWithDelegate:(id)arg1 uniqueAddId:(id)arg2;
- (void)openMusicOperationPanelWithDelegate:(id)arg1;
- (void)onLiveTrtcCapturedAudioFrame:(id)arg1;
- (void)clearNewMusicDataOnExit;
- (void)stopPlayCurrentSong:(id /* block */)arg1;
- (void)stopPlaySong:(id)arg1 disableLyric:(BOOL)arg2 completion:(id /* block */)arg3;
- (unsigned int)getNewMusicPlayStatus;
- (id)currentPlayingSongItem;
- (void)onReceiveNewMusicPlayStatus:(unsigned int)arg1;
- (void)onChargeableLivePaymentStateChanged;
- (void)notifyCurrentSongItemChanged;
- (BOOL)shouldDisableLyricForChargeableLive;
- (BOOL)updateNewSongItems:(id)arg1 songListVersion:(unsigned long long)arg2;
- (void)openSongOperationPanelWithTargetSong:(id)arg1;
- (void)openRewardGiftSelectionViewWithSongItem:(id)arg1;
- (void)clearPlayingSong:(id)arg1 complete:(id /* block */)arg2;
- (void)onStopPlaySong:(id)arg1 isFinish:(BOOL)arg2 disableLyric:(BOOL)arg3;
- (void)stopBGMusicOnSongPlay;
- (void)startPlayDurationTracking;
- (void)pausePlayDurationTracking;
- (void)resumePlayDurationTracking;
- (unsigned int)settlePlayDurationMs;
- (void)updateLyricsContainerOnSongPlay;
- (void)updateRequestedPanelOnSongPlay;
- (void)proceedToNextSongWithLastSongItem:(id)arg1 forceNext:(BOOL)arg2;
- (void)proceedToNextSongWithLastSongItemIndex:(unsigned long long)arg1 forceNext:(BOOL)arg2;
- (void)updateCandidateListOnSongListChange;
- (void)updateRecentListOnSongPlay;
- (BOOL)checkNewSongResourceInfo:(id)arg1;
- (void)checkAndStartPlayForAudienceWithSingInfo:(id)arg1;
- (void)onAudiencePlayRequestConfirmedWithSongItem:(id)arg1;
- (void)stopPreparingProcessWithSongItem:(id)arg1 completion:(id /* block */)arg2;
- (void)startPlayRequestWithSongItem:(id)arg1 autoProceed:(BOOL)arg2;
- (void)startParsingJobWithSongItem:(id)arg1;
- (void)startConfirmPlayCgiWithSongItem:(id)arg1;
- (BOOL)startNewSongSingEngineWithSongItem:(id)arg1;
- (void)onTrialListenPlayingBegin;
- (void)onTrialListenPlayingEnd;
- (void)updateTrialVolumeOnSongPlay;
- (void)onLiveNewMusicBgmFinished;
- (void)onLiveNewMusicBgmPaused;
- (void)onLiveNewMusicBgmStoped;
- (void)onNewMusicLyricPanelTapPause;
- (void)onNewMusicLyricPanelTapCut;
- (void)onNewMusicLyricPanelTapOriginalSong;
- (void)onNewMusicLyricPanelTapMore;
- (void)onNewMusicLyricPanelTapFold;
- (void)onNewMusicLyricPanelChangeAlignment:(unsigned long long)arg1;
- (void)onLiveButtonContainerClickButton:(id)arg1;
- (void)onNewMusicTapRequestBtn;
- (void)onNewMusicTapListOrderBtn;
- (void)onNewMusicTapEditBtn;
- (void)onNewMusicTapDeleteBtn:(id)arg1;
- (void)onNewMusicModifySongList:(id)arg1 updateType:(int)arg2 isSwipe:(BOOL)arg3;
- (void)onNewMusicRequestChangePlayState:(id)arg1;
- (void)onNewMusicAudienceOrderSong:(id)arg1;
- (void)onNewMusicRequestSong:(id)arg1;
- (void)onNewMusicLyricChooseStyle:(id)arg1 commit:(BOOL)arg2;
- (void)onNewMusicLyricPanelDidAppearWithHeight:(double)arg1;
- (void)onNewMusicLyricPanelDidDisappear;
- (id)onLiveNewMusicSEISyncLogicRequestLyricStyle;
- (id)onLiveNewMusicSEISyncLogicRequestLyricPosition;
- (id)onLiveNewMusicSEISyncLogicRequestCurrSongItem;
- (BOOL)onLiveNewMusicSEISyncLogicRequestLyricCollapseState;
- (void)onLiveNewMusicSEISyncLogicReceiveData:(id)arg1;
- (void)onLiveNewMusicSEISyncLogicReceiveInvalidData:(id)arg1;
- (void)onLiveNewMusicLyricPositionChanged:(id)arg1;
- (void)onLiveTask:(id)arg1 enterLiveRoom:(id)arg2;
- (void)onLiveTask:(id)arg1 playingViaCdnChanged:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 remoteUserEnterRoom:(id)arg2;
- (void)onLiveTaskResumeLiveForAudience:(id)arg1;
- (void)onLiveTaskPauseLiveForAudience:(id)arg1;
- (void)onLiveUpdateSongListNewWithTaskId:(id)arg1 syncNewSongInfo:(id)arg2;
- (id)liveTask;
- (id)liveVC;
- (id)startVC;
- (id)liveOperationView;
- (id)trialListenManageLogic;
- (BOOL)songList:(id)arg1 containsSongItem:(id)arg2;
- (void)getSongPlayInfoWithSongItem:(id)arg1 complete:(id /* block */)arg2;
- (void)updateNewSongStatus:(int)arg1 songItem:(id)arg2 complete:(id /* block */)arg3;
- (void)updateNewSongStatus:(int)arg1 songItems:(id)arg2 complete:(id /* block */)arg3;
- (void)startUpdateTask;
- (void)realUpdateNewSongStatus:(int)arg1 songItems:(id)arg2 complete:(id /* block */)arg3;
- (id)bgmEngine;
- (id)recentSongList;
- (id)candidateSongList;
- (id)musicSeiSyncLogic;
- (id)musicLyricPanel;
- (id)musicUpdateTaskQueue;
- (void)reportLyricPanelExposeIfNeeded;
- (id)startReporter;
- (id)anchorReporter;
- (id)audienceReporter;
- (unsigned long long)getLyricDuration;
- (id)songListInfo;
- (void)setMusicSeiSyncLogic:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)reportDelegate;
- (void)setReportDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (BOOL)hasInitialized;
- (void)setHasInitialized:(BOOL)arg1;
- (id)songItems;
- (void)setSongItems:(id)arg1;
- (unsigned long long)songListVersion;
- (void)setSongListVersion:(unsigned long long)arg1;
- (id)requestedSongPanel;
- (void)setRequestedSongPanel:(id)arg1;
- (id)requestSongPanel;
- (void)setRequestSongPanel:(id)arg1;
- (BOOL)isMusicUpdateTaskRunning;
- (void)setIsMusicUpdateTaskRunning:(BOOL)arg1;
- (void)setMusicUpdateTaskQueue:(id)arg1;
- (void)setBgmEngine:(id)arg1;
- (void)setTrialListenManageLogic:(id)arg1;
- (id)currSongItem;
- (void)setCurrSongItem:(id)arg1;
- (id)currSongResourceData;
- (void)setCurrSongResourceData:(id)arg1;
- (BOOL)autoProceed;
- (void)setAutoProceed:(BOOL)arg1;
- (unsigned long long)listOrder;
- (void)setListOrder:(unsigned long long)arg1;
- (void)setRecentSongList:(id)arg1;
- (void)setCandidateSongList:(id)arg1;
- (id)lyricStyle;
- (void)setLyricStyle:(id)arg1;
- (id)lyricPosition;
- (void)setLyricPosition:(id)arg1;
- (id)playId;
- (void)setPlayId:(id)arg1;
- (unsigned long long)lyricExposeTimeMs;
- (void)setLyricExposeTimeMs:(unsigned long long)arg1;
- (unsigned long long)playSegmentStartTimeMs;
- (void)setPlaySegmentStartTimeMs:(unsigned long long)arg1;
- (unsigned long long)accumulatedPlayDurationMs;
- (void)setAccumulatedPlayDurationMs:(unsigned long long)arg1;
- (void)setStartReporter:(id)arg1;
- (void)setAnchorReporter:(id)arg1;
- (void).cxx_destruct;
@end
